static pointer CLO77522();
static pointer (*ftab[4])();

#define QUOTE_STRINGS_SIZE 91
static char *quote_strings[QUOTE_STRINGS_SIZE]={
    ":interval",
    "timer-func",
    "*itimers*",
    "delete",
    ":priority",
    "zerop",
    ":run",
    "send-message",
    "super",
    ":init",
    ":delete",
    ":starting",
    ":thread-waiting",
    "\";timer-func finished ~s~%\"",
    "*itimer-sem*",
    "*itimer-count*",
    "*itimer-running*",
    ":tick",
    "find-if",
    ":name",
    "let",
    "it",
    "find-itimer",
    "quote",
    "func",
    "if",
    "null",
    "setq",
    "and",
    "boundp",
    "subclassp",
    "itimer",
    "instantiate",
    "progn",
    "pushnew",
    "send*",
    "send",
    "itimer-handler",
    "\"@(#)$Id$\"",
    "(itimer start-timer stop-timer deftimer behavior real-time *itimers* *itimer-tick* *itimer-count*)",
    "*itimer-tick*",
    ":constant",
    "\"minimum timer interval\"",
    ":global",
    ":super",
    "propertied-object",
    ":slots",
    "(interval current timer-sem func args real-time running run-count missed thr deleted)",
    ":metaclass",
    ":element-type",
    ":size",
    ":documentation",
    "make-class",
    "\"(self class int &optional f)\"",
    "\"(self class)\"",
    "\"(self class &optional n)\"",
    ":running",
    "\"(self class)\"",
    "\"(self class)\"",
    ":func",
    "\"(self class &optional f)\"",
    ":args",
    "\"(self class &rest a)\"",
    ":count",
    "\"(self class)\"",
    ":stop",
    "\"(self class)\"",
    ":start",
    "\"(self class)\"",
    "\"(self class &optional i)\"",
    "\"(self class)\"",
    "\"(self class)\"",
    "behavior",
    "(event-sem state)",
    "\"(self class &rest args)\"",
    "\"(self class)\"",
    ":initiate",
    "\"(self class)\"",
    "\"(self class)\"",
    "\"(self class)\"",
    "\"(timer)\"",
    "\"nil\"",
    "\"(name)\"",
    "deftimer",
    "\"(name klass interval &rest init-args)\"",
    "init-cyclic",
    "\"nil\"",
    "start-timer",
    "\"nil\"",
    "stop-timer",
    "\"nil\"",
  };
