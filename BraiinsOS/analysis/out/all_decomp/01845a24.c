// FUN_01845a24 @ 01845a24 size=112 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_01845a24(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 < 0x3f800000) {
    return 0;
  }
  if (0xbe < param_1 >> 0x17) {
    uVar2 = 0;
    if (param_1 < 0x7f800001) {
      uVar2 = 0xffffffff;
    }
    return CONCAT44(uVar2,uVar2);
  }
  uVar3 = param_1 << 8 | 0x80000000;
  uVar4 = 0x3e - (param_1 >> 0x17) & 0x3f;
  uVar5 = uVar4 - 0x20;
  uVar1 = uVar3 << (0x20 - uVar4 & 0xff);
  if (-1 < (int)uVar5) {
    uVar1 = uVar3 >> (uVar5 & 0xff);
  }
  uVar3 = uVar3 >> uVar4;
  if (-1 < (int)uVar5) {
    uVar3 = 0;
  }
  return CONCAT44(uVar3,uVar1);
}

