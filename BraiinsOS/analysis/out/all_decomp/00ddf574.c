// FUN_00ddf574 @ 00ddf574 size=32 calls_out=1 calls_in=0
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_00ddf574(undefined1 *param_1)

{
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(*param_1) {
  case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    FUN_00ddf46c(param_1 + 4);
    return;
  }
}

