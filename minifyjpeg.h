/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _MINIFYJPEG_H_RPCGEN
#define _MINIFYJPEG_H_RPCGEN

#include <rpc/rpc.h>

#include <pthread.h>

#ifdef __cplusplus
extern "C" {
#endif


struct minify_in {
	char *src;
	long src_len;
};
typedef struct minify_in minify_in;

#define MINIFY_PROG 0x31230000
#define MINIFY_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define MINIFY_PROC 1
extern  enum clnt_stat minify_proc_1(minify_in , minify_in *, CLIENT *);
extern  bool_t minify_proc_1_svc(minify_in , minify_in *, struct svc_req *);
extern int minify_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define MINIFY_PROC 1
extern  enum clnt_stat minify_proc_1();
extern  bool_t minify_proc_1_svc();
extern int minify_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_minify_in (XDR *, minify_in*);

#else /* K&R C */
extern bool_t xdr_minify_in ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_MINIFYJPEG_H_RPCGEN */
