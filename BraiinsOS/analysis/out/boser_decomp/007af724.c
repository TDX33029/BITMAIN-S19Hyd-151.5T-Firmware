// FUN_007af724 @ 007af724 size=172 calls_out=2 calls_in=2
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_007af724(undefined4 *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined1 local_28 [4];
  uint local_24;
  
  uVar1 = 0xc;
  do {
    FUN_007af820(local_28,param_2,param_3,uVar1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(local_28[0]) {
    case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (local_24 == 0) {
      *param_1 = 2;
      param_1[1] = &DAT_01d2e7b8;
      return;
    }
    if (uVar1 < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(local_24,uVar1,uVar1,&DAT_01d2e7d0);
    }
    param_3 = param_3 + local_24;
    uVar1 = uVar1 - local_24;
  } while (uVar1 != 0);
  *(undefined1 *)param_1 = 4;
  return;
}

