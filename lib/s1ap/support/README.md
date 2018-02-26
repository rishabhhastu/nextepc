* Modify 36413-a90.txt to 36413-a90.asn
user@host ~/Documents/git/nextepc/lib/s1ap/support$ \
    diff 36413-a90.txt 36413-a90.asn

* Add prefix S1AP to S1AP-PDU specification
user@host ~/Documents/git/nextepc/lib/s1ap/support$ \
    python asn1prefix.py -i 36413-a90.asn -o S1AP-PDU.asn

* EUROCOM S1AP-IEs support files
user@host ~/Documents/git/nextepc/lib/s1ap/support$ \
    python asn1tostruct.py -f S1AP-PDU.asn -o ..

* Use AuthenticEshkinKot's fork for asn1c
user@host ~/Documents/git$ \
    git clone https://github.com/acetcom/asn1c.git
user@host Documents/git/asn1c$ \
    autoreconf -iv;./configure;make

* ASN.1 encoder/decoder
user@host ~/Documents/git/nextepc/lib/s1ap/asn1c$ \
    ../../../../asn1c/asn1c/asn1c \
    -fcompound-names -fincludes-quoted -gen-PER ../support/S1AP-PDU.asn

* Remove unnecessary files
user@host ~/Documents/git/nextepc/lib/s1ap/s1ap/asn1c$ \
    rm E-RAB-IE-ContainerPairList.c ProtocolError-IE-ContainerList.c \
       ProtocolIE-ContainerPair.c ProtocolIE-FieldPair.c \
       ProtocolIE-ContainerPairList.c

user@host ~/Documents/git/nextepc/lib/s1ap/s1ap/asn1c$ \
    vi Makefile.am


* Delete Makefile.am.sample and converter-sample.c
user@host ~/Documents/git/nextepc/lib/s1ap/asn1c$ \
    rm -f Makefile.am.sample and converter-sample.c

* Update asn_internal.h
user@host ~/Documents/git/nextepc/lib/s1ap/asn1c$ \
    git diff asn_internal.h
