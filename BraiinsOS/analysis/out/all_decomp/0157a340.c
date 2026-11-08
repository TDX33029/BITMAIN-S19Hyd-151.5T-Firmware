// FUN_0157a340 @ 0157a340 size=224 calls_out=2 calls_in=8
// strings: fmt error

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_0157a340(undefined4 *param_1,undefined4 *param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined1 local_2c [4];
  uint local_28;
  
  if (param_4 != 0) {
    do {
      iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,param_3,param_4);
      uVar1 = param_4;
      if (iVar2 != 0) {
        FUN_015e79d4(local_2c,0x28,"fmt error",9);
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
        uVar1 = local_28;
        if (param_4 < local_28) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(local_28,param_4,param_4,&DAT_018aeb00);
        }
      }
      param_3 = param_3 + uVar1;
      param_4 = param_4 - uVar1;
    } while (param_4 != 0);
  }
  *(undefined1 *)param_1 = 4;
  return;
}

