/* $Id$
 */

#include "dns.h"

unsigned dns_dnlen(const unsigned char *dn) {
  unsigned c;
  const unsigned char *d = dn;
  while((c = *d++) != 0)
    d += c;
  return d - dn;
}
