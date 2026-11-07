// FUN_015802c8 @ 015802c8 size=216 calls_out=2 calls_in=0
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_015802c8(undefined4 *param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint uVar1;
  undefined1 local_2c [4];
  uint local_28;
  
  if (param_4 != 0) {
    uVar1 = param_4;
    do {
      FUN_01585110(local_2c,param_2,param_3,uVar1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(local_2c[0]) {
      case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (local_28 == 0) {
        *param_1 = 2;
        param_1[1] = &DAT_018aeae8;
        return;
      }
      if (uVar1 < local_28) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(local_28,uVar1,uVar1,&DAT_018aeb00);
      }
      param_3 = param_3 + local_28;
      uVar1 = uVar1 - local_28;
    } while (uVar1 != 0);
  }
  *(undefined1 *)param_1 = 4;
  param_1[1] = param_4;
  return;
}

