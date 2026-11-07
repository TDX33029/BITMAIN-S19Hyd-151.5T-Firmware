// FUN_0061879c @ 0061879c size=156 calls_out=4 calls_in=0
// strings: JoinHandle polled after completion

void FUN_0061879c(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 auStack_f8 [112];
  int local_88 [30];
  
  iVar1 = FUN_019d72c4(param_1,param_1 + 0xa0,*param_3,param_3[1]);
  if (iVar1 != 0) {
    FUN_01bed4e2(local_88,param_1 + 0x28,0x78);
    *(undefined4 *)(param_1 + 0x28) = 2;
    if (local_88[0] != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("JoinHandle polled after completion",0x45,&DAT_01d2e12c);
    }
    FUN_01bed4e2(auStack_f8,param_1 + 0x30,0x70);
    if (*param_2 != 3) {
      FUN_00d37d54(param_2);
    }
    FUN_01bed4e2(param_2,auStack_f8,0x70);
  }
  return;
}

