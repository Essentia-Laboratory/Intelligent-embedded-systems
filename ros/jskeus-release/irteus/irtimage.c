/* ./irtimage.c :  entry=irtimage */
/* compiled by EusLisp 9.26(bc6809800) for Linux64 created on essentia-TRX40-AORUS-PRO-WIFI(Fri Nov 13 16:12:56 KST 2020) */
#include "eus.h"
#include "irtimage.h"
#pragma init (register_irtimage)
extern double fabs();
extern pointer fcallx();
static void init_ftab();
extern pointer loadglobal(),storeglobal();
static pointer module,*qv,codevec,quotevec;
extern pointer ___irtimage();
extern pointer build_quote_vector();
static int register_irtimage()
  { add_module_initializer("___irtimage", ___irtimage);}

static pointer F118read_image_file();
static pointer F119write_image_file();

/*read-image-file*/
static pointer F118read_image_file(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=1) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(*ftab[0])(ctx,1,local+0,&ftab[0],fqv[0]); /*probe-file*/
	if (w==NIL) goto CON122;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(*ftab[1])(ctx,1,local+0,&ftab[1],fqv[1]); /*pathname-type*/
	local[0]= w;
	local[1]= fqv[2];
	ctx->vsp=local+2;
	w=(*ftab[2])(ctx,2,local+0,&ftab[2],fqv[3]); /*string=*/
	if (w!=NIL) goto OR125;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(*ftab[1])(ctx,1,local+0,&ftab[1],fqv[1]); /*pathname-type*/
	local[0]= w;
	local[1]= fqv[4];
	ctx->vsp=local+2;
	w=(*ftab[2])(ctx,2,local+0,&ftab[2],fqv[3]); /*string=*/
	if (w!=NIL) goto OR125;
	goto CON124;
OR125:
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(*ftab[3])(ctx,1,local+0,&ftab[3],fqv[5]); /*read-jpeg-file*/
	local[0]= w;
	goto CON123;
CON124:
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(*ftab[1])(ctx,1,local+0,&ftab[1],fqv[1]); /*pathname-type*/
	local[0]= w;
	local[1]= fqv[6];
	ctx->vsp=local+2;
	w=(*ftab[2])(ctx,2,local+0,&ftab[2],fqv[3]); /*string=*/
	if (w==NIL) goto CON126;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(*ftab[4])(ctx,1,local+0,&ftab[4],fqv[7]); /*read-png-file*/
	local[0]= w;
	goto CON123;
CON126:
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(*ftab[1])(ctx,1,local+0,&ftab[1],fqv[1]); /*pathname-type*/
	local[0]= w;
	local[1]= fqv[8];
	local[2]= fqv[9];
	local[3]= fqv[10];
	ctx->vsp=local+4;
	w=(pointer)LIST(ctx,3,local+1); /*list*/
	local[1]= w;
	local[2]= fqv[11];
	local[3]= (pointer)get_sym_func(fqv[3]);
	ctx->vsp=local+4;
	w=(*ftab[5])(ctx,4,local+0,&ftab[5],fqv[12]); /*member*/
	if (w==NIL) goto CON127;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(*ftab[6])(ctx,1,local+0,&ftab[6],fqv[13]); /*read-pnm-file*/
	local[0]= w;
	goto CON123;
CON127:
	local[0]= fqv[14];
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(*ftab[7])(ctx,2,local+0,&ftab[7],fqv[15]); /*warn*/
	local[0]= w;
	goto CON123;
CON128:
	local[0]= NIL;
CON123:
	goto CON121;
CON122:
	local[0]= fqv[16];
	local[1]= argv[0];
	ctx->vsp=local+2;
	w=(*ftab[7])(ctx,2,local+0,&ftab[7],fqv[15]); /*warn*/
	w = NIL;
	ctx->vsp=local+0;
	local[0]=w;
	goto BLK120;
	goto CON121;
CON129:
	local[0]= NIL;
CON121:
	w = local[0];
	local[0]= w;
BLK120:
	ctx->vsp=local; return(local[0]);}

/*write-image-file*/
static pointer F119write_image_file(ctx,n,argv,env)
register context *ctx;
register int n; register pointer argv[]; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv=qv;
  numunion nu;
	if (n!=2) maerror();
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(*ftab[1])(ctx,1,local+0,&ftab[1],fqv[1]); /*pathname-type*/
	local[0]= w;
	local[1]= fqv[17];
	ctx->vsp=local+2;
	w=(*ftab[2])(ctx,2,local+0,&ftab[2],fqv[3]); /*string=*/
	if (w!=NIL) goto OR133;
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(*ftab[1])(ctx,1,local+0,&ftab[1],fqv[1]); /*pathname-type*/
	local[0]= w;
	local[1]= fqv[18];
	ctx->vsp=local+2;
	w=(*ftab[2])(ctx,2,local+0,&ftab[2],fqv[3]); /*string=*/
	if (w!=NIL) goto OR133;
	goto CON132;
OR133:
	local[0]= argv[0];
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(*ftab[8])(ctx,2,local+0,&ftab[8],fqv[19]); /*write-jpeg-file*/
	local[0]= w;
	goto CON131;
CON132:
	local[0]= argv[0];
	ctx->vsp=local+1;
	w=(*ftab[1])(ctx,1,local+0,&ftab[1],fqv[1]); /*pathname-type*/
	local[0]= w;
	local[1]= fqv[20];
	ctx->vsp=local+2;
	w=(*ftab[2])(ctx,2,local+0,&ftab[2],fqv[3]); /*string=*/
	if (w==NIL) goto CON134;
	local[0]= argv[0];
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(*ftab[9])(ctx,2,local+0,&ftab[9],fqv[21]); /*write-png-file*/
	local[0]= w;
	goto CON131;
CON134:
	local[0]= argv[0];
	local[1]= argv[1];
	ctx->vsp=local+2;
	w=(*ftab[10])(ctx,2,local+0,&ftab[10],fqv[22]); /*write-pnm-file*/
	local[0]= w;
	goto CON131;
CON135:
	local[0]= NIL;
CON131:
	w = local[0];
	local[0]= w;
BLK130:
	ctx->vsp=local; return(local[0]);}

/* initializer*/
pointer ___irtimage(ctx,n,argv,env)
register context *ctx; int n; pointer *argv; pointer env;
{ register pointer *local=ctx->vsp, w, *fqv;
  register int i;
  numunion nu;
  module=argv[0];
  quotevec=build_quote_vector(ctx,QUOTE_STRINGS_SIZE, quote_strings);
  module->c.code.quotevec=quotevec;
  codevec=module->c.code.codevec;
  fqv=qv=quotevec->c.vec.v;
  init_ftab();
	local[0]= fqv[23];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	if (w==NIL) goto IF136;
	local[0]= fqv[24];
	ctx->vsp=local+1;
	w=(pointer)FINDPACKAGE(ctx,1,local+0); /*find-package*/
	local[0]= w;
	storeglobal(fqv[25],w);
	goto IF137;
IF136:
	local[0]= fqv[26];
	ctx->vsp=local+1;
	w=(pointer)SIGERROR(ctx,1,local+0); /*error*/
	local[0]= w;
IF137:
	local[0]= fqv[27];
	ctx->vsp=local+1;
	w=(pointer)EXPORT(ctx,1,local+0); /*export*/
	ctx->vsp=local+0;
	compfun(ctx,fqv[28],module,F118read_image_file,fqv[29]);
	ctx->vsp=local+0;
	compfun(ctx,fqv[30],module,F119write_image_file,fqv[31]);
	local[0]= fqv[32];
	local[1]= fqv[33];
	ctx->vsp=local+2;
	w=(*ftab[11])(ctx,2,local+0,&ftab[11],fqv[34]); /*provide*/
	local[0]= NIL;
	ctx->vsp=local; return(local[0]);}
static void init_ftab()
{  register int i;
  for (i=0; i<12; i++) ftab[i]=fcallx;
}
