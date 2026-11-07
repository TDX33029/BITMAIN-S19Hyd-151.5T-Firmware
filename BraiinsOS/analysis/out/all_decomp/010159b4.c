// FUN_010159b4 @ 010159b4 size=104 calls_out=0 calls_in=1
// strings: 

void FUN_010159b4(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x24);
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) - param_2;
  if (!SCARRY4(iVar2,param_2)) {
    *(int *)(param_1 + 0x24) = iVar2 + param_2;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (!SCARRY4(iVar2,param_2)) {
    iVar2 = iVar2 + param_2;
  }
  if (iVar1 < iVar2) {
    if (iVar2 - iVar1 < iVar1 / 2) {
      return;
    }
    iVar2 = *param_3;
    *param_3 = 0;
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01015a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar2 + 4))(param_3[1]);
      return;
    }
  }
  return;
}

