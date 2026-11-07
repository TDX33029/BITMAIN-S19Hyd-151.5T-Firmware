// FUN_01736960 @ 01736960 size=344 calls_out=3 calls_in=13
// strings: 

bool FUN_01736960(int *param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 == param_2) {
    return false;
  }
  if (param_1[0x70] != param_2[0x70]) {
    return true;
  }
  if (param_1[0x70] != 0) {
    return false;
  }
  if (*param_1 != *param_2) {
    return true;
  }
  if (param_1[0x75] != param_2[0x75]) {
    return true;
  }
  iVar1 = FUN_01715760(param_1 + 0x46,param_2 + 0x46);
  if (((iVar1 == 0) && (iVar1 = FUN_017303ac(param_1,param_1 + 0x4d,param_2 + 0x4d), iVar1 != 0)) &&
     (iVar1 = FUN_017303ac(param_1,param_1 + 0x5e,param_2 + 0x5e), iVar1 != 0)) {
    if ((param_1[0x75] == 0) || (param_2[0x75] == 0)) {
      return false;
    }
    iVar1 = FUN_01715760(param_1 + 0x3a,param_2 + 0x3a);
    if (iVar1 == 0) {
      iVar1 = FUN_01736790(param_1,param_1 + 2,param_2 + 2);
      return iVar1 == 0;
    }
  }
  return true;
}

