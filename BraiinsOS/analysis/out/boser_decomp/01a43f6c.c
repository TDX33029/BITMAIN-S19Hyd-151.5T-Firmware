// FUN_01a43f6c @ 01a43f6c size=52 calls_out=2 calls_in=0
// strings: 

void FUN_01a43f6c(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  iVar1 = param_2[3];
  if ((iVar1 != -0x7ffffffd) && (-1 < iVar1)) {
    FUN_0134bd64(iVar1,param_2[4]);
  }
  FUN_01a49da0(param_2 + 6);
  return;
}

