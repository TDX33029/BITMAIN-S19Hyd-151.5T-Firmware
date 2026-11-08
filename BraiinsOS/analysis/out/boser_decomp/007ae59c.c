// FUN_007ae59c @ 007ae59c size=188 calls_out=1 calls_in=0
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_007ae59c(undefined4 *param_1,undefined4 *param_2,int param_3,uint param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined1 local_28 [4];
  uint local_24;
  
  if (param_4 != 0) {
    uVar2 = *param_2;
    pcVar1 = *(code **)(param_2[1] + 0xc);
    do {
      (*pcVar1)(local_28,uVar2,param_3,param_4);
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
      if (param_4 < local_24) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(local_24,param_4,param_4,&DAT_01d2e7d0);
      }
      param_3 = param_3 + local_24;
      param_4 = param_4 - local_24;
    } while (param_4 != 0);
  }
  *(undefined1 *)param_1 = 4;
  return;
}

