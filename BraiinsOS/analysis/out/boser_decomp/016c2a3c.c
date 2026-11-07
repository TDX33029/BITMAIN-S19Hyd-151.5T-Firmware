// FUN_016c2a3c @ 016c2a3c size=140 calls_out=1 calls_in=0
// strings: 

void FUN_016c2a3c(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = param_1[2];
  if ((uint)(*param_1 - iVar2) < (uint)((int)param_3 - (int)param_2) >> 2) {
    FUN_006520b4(param_1,iVar2,(uint)((int)param_3 - (int)param_2) >> 2,4,0xc);
    iVar2 = param_1[2];
  }
  if (param_2 != param_3) {
    puVar1 = (undefined4 *)(param_1[1] + iVar2 * 0xc + 4);
    do {
      param_3 = param_3 + -1;
      uVar3 = *param_3;
      iVar2 = iVar2 + 1;
      puVar1[-1] = 0;
      *puVar1 = uVar3;
      puVar1 = puVar1 + 3;
    } while (param_3 != param_2);
  }
  param_1[2] = iVar2;
  return;
}

