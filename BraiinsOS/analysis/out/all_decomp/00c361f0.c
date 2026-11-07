// FUN_00c361f0 @ 00c361f0 size=200 calls_out=0 calls_in=1
// strings: 

uint FUN_00c361f0(byte *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    return 0x1f;
  }
  uVar2 = 0x1f;
  do {
    bVar1 = *param_1;
    uVar3 = (uint)bVar1;
    uVar4 = (uVar2 & 0xf) << 1;
    if (((uVar2 ^ bVar1 >> 3) & 0x10) != 0) {
      uVar4 = uVar4 ^ 5;
    }
    uVar2 = (uVar4 & 0xf) << 1;
    if (0xf < (uVar4 ^ bVar1 >> 2 & 0x10)) {
      uVar2 = uVar2 ^ 5;
    }
    uVar4 = (uVar2 & 0xf) << 1;
    if (0xf < (uVar2 ^ bVar1 >> 1 & 0x10)) {
      uVar4 = uVar4 ^ 5;
    }
    uVar2 = (uVar4 & 0xf) << 1;
    if (((uVar4 ^ uVar3) & 0x10) != 0) {
      uVar2 = uVar2 ^ 5;
    }
    uVar4 = (uVar2 & 0xf) << 1;
    if (0xf < (uVar2 ^ (uVar3 & 8) << 1)) {
      uVar4 = uVar4 ^ 5;
    }
    uVar2 = (uVar4 & 0xf) << 1;
    if (0xf < (uVar4 ^ (uVar3 & 4) << 2)) {
      uVar2 = uVar2 ^ 5;
    }
    uVar4 = (uVar2 & 0xf) << 1;
    if (0xf < (uVar2 ^ (uVar3 & 2) << 3)) {
      uVar4 = uVar4 ^ 5;
    }
    uVar2 = (uVar4 & 0xf) << 1;
    if (((uVar4 ^ uVar3 << 4) & 0x10) != 0) {
      uVar2 = uVar2 ^ 5;
    }
    param_2 = param_2 + -1;
    param_1 = param_1 + 1;
  } while (param_2 != 0);
  return uVar2;
}

