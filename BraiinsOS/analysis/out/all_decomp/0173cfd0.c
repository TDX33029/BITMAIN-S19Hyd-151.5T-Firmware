// FUN_0173cfd0 @ 0173cfd0 size=192 calls_out=2 calls_in=2
// strings: 

bool FUN_0173cfd0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return false;
  }
  if (param_3 == 0 || param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return true;
  }
  iVar1 = FUN_0177b624(param_2,param_3);
  if (iVar1 != 0) {
    FUN_0177aafc(*param_1);
    *param_1 = iVar1;
    param_1[1] = param_3;
  }
  return iVar1 != 0;
}

