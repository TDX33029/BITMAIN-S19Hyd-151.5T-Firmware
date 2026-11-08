// FUN_017c61cc @ 017c61cc size=196 calls_out=4 calls_in=0
// strings: JoinHandle polled after completion

void FUN_017c61cc(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int local_88 [28];
  
  iVar1 = FUN_019d72c4(param_1,param_1 + 0x98,*param_3,param_3[1]);
  if (iVar1 != 0) {
    FUN_01bed4e2(local_88,param_1 + 0x28,0x70);
    *(undefined4 *)(param_1 + 0x28) = 2;
    if (local_88[0] != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("JoinHandle polled after completion",0x45,&DAT_01d2e12c);
    }
    iVar1 = *(int *)(param_1 + 0x30);
    iVar3 = *(int *)(param_1 + 0x34);
    iVar4 = *(int *)(param_1 + 0x38);
    iVar5 = *(int *)(param_1 + 0x3c);
    if (*param_2 == 0 && param_2[1] == 0) {
      bVar6 = param_2[2] != 0 || param_2[3] != 0;
      iVar2 = 0;
      if (bVar6) {
        iVar2 = param_2[4];
      }
      if (bVar6 && iVar2 != 0) {
        FUN_01443048(iVar2,param_2[5]);
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = iVar1;
    param_2[3] = iVar3;
    param_2[4] = iVar4;
    param_2[5] = iVar5;
  }
  return;
}

