// FUN_01318a38 @ 01318a38 size=84 calls_out=0 calls_in=2
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x01318a7c */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_01318a38(undefined4 *param_1,int *param_2)

{
  if (*param_2 >> 0xd < 5000) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = 3;
  return;
}

