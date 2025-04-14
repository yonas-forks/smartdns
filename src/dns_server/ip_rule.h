/*************************************************************************
 *
 * Copyright (C) 2018-2025 Ruilin Peng (Nick) <pymumu@gmail.com>.
 *
 * smartdns is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * smartdns is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _DNS_SERVER_IP_RULE_
#define _DNS_SERVER_IP_RULE_

#include "dns_server.h"

#ifdef __cplusplus
extern "C" {
#endif /*__cplusplus */

int _dns_server_process_ip_rule(struct dns_request *request, unsigned char *addr, int addr_len, dns_type_t addr_type,
								int result_flag, struct dns_iplist_ip_addresses **alias);

int _dns_server_process_ip_alias(struct dns_request *request, struct dns_iplist_ip_addresses *alias,
								 unsigned char **paddrs, int *paddr_num, int max_paddr_num, int addr_len);

struct dns_client_rules *_dns_server_get_client_rules(struct sockaddr_storage *addr, socklen_t addr_len);
#ifdef __cplusplus
}
#endif /*__cplusplus */
#endif
