// FUN_013e0ab0 @ 013e0ab0 size=128 calls_out=1 calls_in=2
// strings: 

void FUN_013e0ab0(int *param_1,undefined1 *param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (int)param_3 - (int)param_2;
  iVar2 = param_1[2];
  if ((uint)(*param_1 - iVar2) < uVar3) {
    FUN_01af7b44(param_1,iVar2,uVar3,1,1);
    iVar2 = param_1[2];
  }
  if (param_2 != param_3) {
    iVar1 = param_1[1];
    do {
      uVar3 = uVar3 - 1;
      *(undefined1 *)(iVar1 + iVar2) = *param_2;
      iVar2 = iVar2 + 1;
      *param_2 = 0;
      param_2 = param_2 + 1;
    } while (uVar3 != 0);
  }
  param_1[2] = iVar2;
  return;
}

