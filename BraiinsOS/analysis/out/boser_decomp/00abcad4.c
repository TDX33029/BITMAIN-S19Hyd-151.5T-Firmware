// FUN_00abcad4 @ 00abcad4 size=60 calls_out=1 calls_in=1
// strings: 

void FUN_00abcad4(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != param_2) {
    iVar2 = (param_3 - param_2) + 1;
    iVar1 = param_1 + param_2 * 0x48 + 8;
    while (iVar2 = iVar2 + -1, iVar2 != 0) {
      FUN_009723ac(iVar1);
      iVar1 = iVar1 + 0x48;
    }
  }
  return;
}

