// FUN_006180a0 @ 006180a0 size=160 calls_out=4 calls_in=0
// strings: JoinHandle polled after completion

void FUN_006180a0(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 auStack_318 [384];
  int local_198 [98];
  
  iVar1 = FUN_019d72c4(param_1,param_1 + 0x1b0,*param_3,param_3[1]);
  if (iVar1 != 0) {
    FUN_01bed4e2(local_198,param_1 + 0x28,0x188);
    *(undefined4 *)(param_1 + 0x28) = 2;
    if (local_198[0] != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("JoinHandle polled after completion",0x45,&DAT_01d2e12c);
    }
    FUN_01bed4e2(auStack_318,param_1 + 0x30,0x180);
    if (*param_2 != 4 || param_2[1] != 0) {
      FUN_00d3a6d0(param_2);
    }
    FUN_01bed4e2(param_2,auStack_318,0x180);
  }
  return;
}

