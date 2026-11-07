// FUN_009dded4 @ 009dded4 size=160 calls_out=3 calls_in=0
// strings: JoinHandle polled after completion

void FUN_009dded4(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = FUN_019d72c4(param_1,param_1 + 0x48,*param_3,param_3[1]);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x28) = 2;
    if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("JoinHandle polled after completion",0x45,&DAT_01d2e12c);
    }
    iVar1 = *(int *)(param_1 + 0x30);
    iVar2 = *(int *)(param_1 + 0x34);
    iVar3 = *(int *)(param_1 + 0x38);
    iVar4 = *(int *)(param_1 + 0x3c);
    iVar5 = *(int *)(param_1 + 0x40);
    iVar6 = *(int *)(param_1 + 0x44);
    if (*param_2 != 2) {
      FUN_009dd830(param_2);
    }
    *param_2 = iVar1;
    param_2[1] = iVar2;
    param_2[2] = iVar3;
    param_2[3] = iVar4;
    param_2[4] = iVar5;
    param_2[5] = iVar6;
  }
  return;
}

