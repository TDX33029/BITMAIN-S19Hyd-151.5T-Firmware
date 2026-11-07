// FUN_012a47e0 @ 012a47e0 size=52 calls_out=1 calls_in=0
// strings: 

void FUN_012a47e0(uint *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((*param_1 & 1) != 0) {
    iVar2 = 9;
  }
  if ((param_1[4] & 1) != 0) {
    iVar2 = iVar2 + 9;
  }
  iVar1 = FUN_01337c54(param_1[8]);
  param_1[9] = iVar2 + iVar1;
  return;
}

