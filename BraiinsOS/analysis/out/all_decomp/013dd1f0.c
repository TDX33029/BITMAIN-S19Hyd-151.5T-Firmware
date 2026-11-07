// FUN_013dd1f0 @ 013dd1f0 size=96 calls_out=0 calls_in=1
// strings: 

bool FUN_013dd1f0(uint param_1)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  
  bVar1 = true;
  switch(param_1) {
  case 0x23:
  case 0x24:
  case 0x26:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2d:
  case 0x2e:
  case 0x3f:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
    break;
  default:
    bVar1 = false;
    if (0x7f < param_1) {
      return false;
    }
    if (9 < param_1 - 0x30) {
      uVar2 = param_1 - 0x41;
      bVar3 = 0x19 < uVar2;
      if (bVar3) {
        uVar2 = param_1 - 0x61;
      }
      if (bVar3 && 0x19 < uVar2) {
        return (param_1 & 0x7d) != 0x3c;
      }
    }
  }
  return bVar1;
}

