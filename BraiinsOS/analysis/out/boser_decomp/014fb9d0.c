// FUN_014fb9d0 @ 014fb9d0 size=156 calls_out=2 calls_in=35
// strings: 

void FUN_014fb9d0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  code *pcVar5;
  int local_30 [3];
  
  pcVar4 = *(code **)(param_3 + 0xc);
  pcVar5 = *(code **)(param_3 + 0x10);
  while (iVar1 = (*pcVar4)(param_2), iVar1 != 0) {
    iVar3 = param_1[2];
    if (iVar3 == *param_1) {
      (*pcVar5)(local_30,param_2);
      iVar2 = local_30[0] + 1;
      if (local_30[0] == -1) {
        iVar2 = -1;
      }
      FUN_01af7b44(param_1,iVar3,iVar2,4,4);
    }
    *(int *)(param_1[1] + iVar3 * 4) = iVar1;
    param_1[2] = iVar3 + 1;
  }
  FUN_01139b38(param_2,param_3);
  return;
}

