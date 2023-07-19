#include <stdio.h>
#include <arpa/inet.h>
#include "ipheader.h"

/* Parses the given buffer into an IP header structure.
 * 
 * Parameters:
 * ip: pointer to the IP header structure that will be filled based
 *      on the data in the buffer
 * buffer: buffer of 20 bytes that contain the IP header. */
void parseIp(struct ipHeader *ip, const void *buffer)
{
}

/* Builds a 20-byte byte stream based on the given IP header structure
 * 
 * Parameters:
 * buffer: pointer to the 20-byte buffer to which the header is constructed
 * ip: IP header structure that will be packed to the buffer */
void sendIp(void *buffer, const struct ipHeader *ip)
{
}

/* Prints the given IP header structure */
void printIp(const struct ipHeader *ip)
{
	/* Note: ntohs below is for converting numbers from network byte order
     to host byte order. You can ignore them for now
     To be discussed further in Network Programming course... */
	printf("version: %d   ihl: %d   dscp: %d   ecn: %d\n", ip->version,
	       ip->ihl, ip->dscp, ip->ecn);
	printf("length: %d   id: %d   flags: %d   offset: %d\n",
	       ntohs(ip->length), ntohs(ip->identification), ip->flags,
	       ip->fragment_offset);
	printf("time to live: %d   protocol: %d   checksum: 0x%04x\n",
	       ip->time_to_live, ip->protocol, ntohs(ip->header_checksum));
	printf("source ip: %d.%d.%d.%d\n", ip->source_ip[0], ip->source_ip[1],
	       ip->source_ip[2], ip->source_ip[3]);
	printf("destination ip: %d.%d.%d.%d\n", ip->destination_ip[0],
	       ip->destination_ip[1], ip->destination_ip[2],
	       ip->destination_ip[3]);
}

/* Shows hexdump of given data buffer */
void hexdump(const void *buffer, unsigned int length)
{
	const unsigned char *cbuf = buffer;
	unsigned int i;
	for (i = 0; i < length;) {
		printf("%02x ", cbuf[i]);
		i++;
		if (!(i % 8))
			printf("\n");
	}
}
