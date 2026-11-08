// FUN_01693d68 @ 01693d68 size=112 calls_out=2 calls_in=2
// strings: 

void FUN_01693d68(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[5];
  iVar1 = param_1[6];
  *param_1 = 0;
  param_1[6] = 0;
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    FUN_01691e04(iVar2);
    iVar2 = iVar2 + 0x10;
  }
  iVar2 = param_1[0xc] + 1;
  param_1[9] = 0;
  param_1[0xc] = 0;
  iVar1 = param_1[0xb];
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_01691e34(iVar1);
    iVar1 = iVar1 + 0xc;
  }
  param_1[0xd] = 0;
  return;
}

