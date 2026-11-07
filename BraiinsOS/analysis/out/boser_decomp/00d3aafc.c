// FUN_00d3aafc @ 00d3aafc size=120 calls_out=3 calls_in=2
// strings: 

void FUN_00d3aafc(int *param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*param_1 == 1) {
    iVar1 = param_1[2];
    bVar2 = iVar1 == 0 && param_1[3] == 0;
    if (iVar1 != 0 || param_1[3] != 0) {
      iVar1 = param_1[4];
      bVar2 = iVar1 == 0;
    }
    if (!bVar2) {
      FUN_01443048(iVar1,param_1[5]);
      return;
    }
  }
  else if (*param_1 == 0) {
    if (*(char *)((int)param_1 + 0x39) == '\0') {
      FUN_005f3030(param_1 + 4);
    }
    else {
      if (*(char *)((int)param_1 + 0x39) != '\x03') {
        return;
      }
      FUN_005f3030(param_1 + 9);
    }
    FUN_019d8724(param_1 + 2);
    return;
  }
  return;
}

