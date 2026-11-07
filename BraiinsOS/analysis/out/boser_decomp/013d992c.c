// FUN_013d992c @ 013d992c size=108 calls_out=0 calls_in=2
// strings: 

uint FUN_013d992c(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  
  uVar1 = 0;
  if (0x7f < param_1) {
    return 0;
  }
  uVar2 = param_1 - 0x30;
  bVar4 = 9 < uVar2;
  bVar3 = uVar2 == 10;
  if (bVar4) {
    uVar2 = (param_1 & 0x5f) - 0x41;
    bVar3 = uVar2 == 0x19;
  }
  if ((bVar4 && 0x18 < uVar2) && !bVar3) {
    if (0x2d < (int)param_1) {
      if (param_1 == 0x2e) {
        return param_3 ^ 1;
      }
      return (uint)(param_1 == 0x5f);
    }
    if (param_1 == 0x2a) {
      return param_2;
    }
    if (param_1 == 0x2d) {
      return param_2 ^ 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

