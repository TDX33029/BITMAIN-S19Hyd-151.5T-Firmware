// FUN_017c2360 @ 017c2360 size=76 calls_out=2 calls_in=2
// strings: 

void FUN_017c2360(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  iVar2 = 1;
  if (5 < uVar1) {
    iVar2 = uVar1 - 6;
  }
  if (iVar2 == 0) {
    FUN_017c23ac(param_1 + 2);
    return;
  }
  if (iVar2 != 1) {
    return;
  }
  if (uVar1 != 5) {
    FUN_017c2534();
    return;
  }
  if ((char)param_1[0xf] == '\x03') {
    return;
  }
  if ((char)param_1[0xf] == '\x02') {
    FUN_0178e78c(param_1[1]);
    return;
  }
  FUN_017724dc();
  return;
}

