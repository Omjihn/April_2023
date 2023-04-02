#execute only with python3 cause python2 dont have the email.message lib

import ssl
import smtplib
from email.message import EmailMessage

email_sender = 'april.2023.mail@gmail.com'
email_password = 'oqajrsfdlidiwgfa'
email_receiver = 'le.greg09100@gmail.com'

subject = 'Update attachment'
body = 'Lezgongue ca marche :    )'

em = EmailMessage()
em['From'] = email_sender
em['To'] = email_receiver
em['Subject'] = subject
em.set_content(body)

with open('cat.png', 'rb') as fp:
    img_data = fp.read()
    em.add_attachment(img_data, maintype='image', subtype='png')

context = ssl.create_default_context()

#465 gmail port not in spam folder
with smtplib.SMTP_SSL('smtp.gmail.com', 465, context=context) as smtp:
    smtp.login(email_sender, email_password)
    smtp.sendmail(email_sender, email_receiver, em.as_string())
