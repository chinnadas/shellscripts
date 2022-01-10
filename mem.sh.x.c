#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	shc -vf mem.sh 
#endif

static  char data [] = 
#define      tst1_z	22
#define      tst1	((&data[5]))
	"\155\054\301\331\076\341\152\232\043\153\062\174\120\272\201\361"
	"\041\041\055\265\347\224\226\322\117\053\325\346"
#define      rlax_z	1
#define      rlax	((&data[28]))
	"\046"
#define      text_z	304
#define      text	((&data[74]))
	"\114\226\030\162\335\326\156\324\156\330\234\053\067\074\002\067"
	"\266\375\201\044\052\103\375\150\052\261\267\330\202\120\236\317"
	"\346\267\102\303\215\260\230\373\210\064\047\300\160\061\224\127"
	"\234\255\252\120\164\357\062\347\054\327\064\366\026\224\231\121"
	"\012\221\055\253\125\001\233\044\054\343\160\363\307\113\210\265"
	"\321\264\276\241\315\310\315\136\355\360\135\364\125\306\202\223"
	"\254\221\171\222\137\356\240\100\217\066\264\115\105\233\365\303"
	"\371\161\227\057\345\357\160\032\274\327\163\064\301\232\103\006"
	"\133\307\025\235\052\331\314\133\261\214\006\105\215\256\152\123"
	"\015\275\246\017\254\011\165\232\371\145\171\315\271\350\331\222"
	"\053\060\206\235\373\336\273\350\131\165\264\315\242\100\142\374"
	"\133\212\174\274\237\111\244\330\210\014\073\335\247\206\206\350"
	"\015\235\062\034\062\162\365\301\365\075\072\267\164\114\210\037"
	"\071\354\172\137\076\172\176\310\223\265\346\003\030\027\136\035"
	"\075\157\003\037\175\130\352\255\141\200\176\330\030\015\045\012"
	"\174\212\301\161\066\302\217\222\036\151\360\302\063\317\077\011"
	"\026\310\273\212\336\127\311\171\116\276\340\113\142\053\074\134"
	"\037\166\307\216\023\236\121\172\211\117\330\314\017\215\325\250"
	"\064\326\342\052\343\316\377\102\276\376\141\327\342\374\064\341"
	"\063\367\101\324\167\303\251\177\177\035\357\261\173\053\246\021"
	"\330\071\072\351\340\030\342\273\260\177\255\177\271\252\140\112"
	"\037\010\166\130\040\155\200\022\250\204\371\300\343\051\370\047"
	"\047\172\113\121\275\111\271\347\373\161\300\175\301\136\114\247"
	"\025\216\153\243\077\003\236\310\067\306\210\250\357\201\317\026"
	"\373\033\147\271\144\041\240\137\222\141\335\123\300\052\373\326"
	"\271\147\171\370\152\030\300\242"
#define      tst2_z	19
#define      tst2	((&data[438]))
	"\315\331\144\136\177\246\166\267\166\310\242\242\255\053\040\232"
	"\015\375\130\166\312"
#define      msg1_z	42
#define      msg1	((&data[467]))
	"\065\114\177\231\156\040\371\000\201\141\112\242\250\214\226\045"
	"\237\265\070\206\205\373\153\242\200\307\241\320\100\067\137\140"
	"\206\000\027\307\374\235\206\370\234\305\346\355\116\171\046\235"
	"\240\176\055\327\124\101\001\120\027\273\267"
#define      chk1_z	22
#define      chk1	((&data[521]))
	"\251\164\304\207\327\313\245\025\364\040\016\145\221\145\162\327"
	"\031\145\153\202\225\140\332\010\120\125"
#define      opts_z	1
#define      opts	((&data[543]))
	"\140"
#define      msg2_z	19
#define      msg2	((&data[544]))
	"\346\157\376\306\310\223\157\234\325\351\143\006\323\304\107\266"
	"\221\075\002\117"
#define      xecc_z	15
#define      xecc	((&data[566]))
	"\370\364\311\172\172\126\327\354\356\002\021\015\324\071\257\146"
	"\060\356\362\365"
#define      lsto_z	1
#define      lsto	((&data[584]))
	"\304"
#define      chk2_z	19
#define      chk2	((&data[588]))
	"\311\206\122\262\121\051\120\162\235\206\230\224\361\341\211\046"
	"\316\043\340\067\351\102\132\072\164"
#define      pswd_z	256
#define      pswd	((&data[654]))
	"\214\154\107\341\365\160\034\104\316\242\023\307\227\001\271\215"
	"\161\202\330\043\116\162\354\324\305\107\016\071\113\275\162\327"
	"\052\272\271\040\052\325\144\371\170\170\301\020\220\151\031\336"
	"\213\327\326\177\226\307\213\046\303\355\121\373\247\042\242\167"
	"\273\251\210\164\060\275\377\121\266\053\354\106\225\006\045\040"
	"\335\373\240\163\303\054\232\206\032\353\201\302\015\044\071\311"
	"\316\302\076\376\177\075\120\066\151\075\174\376\103\241\037\040"
	"\235\300\224\140\355\056\347\010\032\150\312\050\214\004\361\132"
	"\306\057\131\106\155\251\174\326\347\371\325\052\233\365\113\070"
	"\265\337\231\243\016\200\253\050\350\166\120\165\172\102\320\101"
	"\161\051\207\337\323\004\265\273\375\213\345\230\200\060\321\066"
	"\020\152\332\036\353\205\107\323\373\230\111\166\332\032\267\114"
	"\104\077\053\027\103\341\322\100\155\270\331\355\350\253\044\370"
	"\025\376\027\000\203\137\324\177\367\036\365\321\070\254\036\174"
	"\353\112\224\057\053\147\160\230\037\111\206\010\365\253\001\013"
	"\251\031\014\055\170\340\255\157\377\242\101\067\117\137\264\073"
	"\251\111\152\325\260\332\156\320\044\365\330\031\240\332\044\112"
	"\363\060\167\153\021\044\333\021\307\034\111\027\174\375\122\045"
	"\106\275\373\367\230\152\307\274\137\240\326\377\171\172\235\352"
	"\375\165\015\113\350\372\037\255\101\056"
#define      date_z	1
#define      date	((&data[924]))
	"\344"
#define      shll_z	10
#define      shll	((&data[926]))
	"\024\225\203\346\335\054\302\036\244\031\272"
#define      inlo_z	3
#define      inlo	((&data[936]))
	"\054\035\377"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	0	/* Define as 1 to enable ptrace the executable */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask  = (unsigned long)&chkenv;
	mask ^= (unsigned long)getpid() * ~mask;
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
#	define PTRACE_ATTACH	PT_ATTACH
#endif
void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PTRACE_ATTACH, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = argv[0];

	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	ret = chkenv(argc);
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
	varg[j++] = argv[0];		/* My own name at execution */
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
