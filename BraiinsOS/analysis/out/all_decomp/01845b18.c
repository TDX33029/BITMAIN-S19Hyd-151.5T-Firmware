// FUN_01845b18 @ 01845b18 size=148 calls_out=0 calls_in=19
// strings: 

undefined8 FUN_01845b18(uint param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = 0;
  uVar4 = 0;
  if (0x3fefffff < param_2) {
    if (0x43efffff < param_2) {
      uVar2 = 0;
      if (param_2 < 0x7ff00001 && (uint)(param_1 != 0) <= param_2 + 0x80100000) {
        uVar2 = 0xffffffff;
      }
      return CONCAT44(uVar2,uVar2);
    }
    uVar5 = 0x3e - (param_2 >> 0x14) & 0x3f;
    uVar3 = param_2 << 0xb | param_1 >> 0x15 | 0x80000000;
    uVar1 = (param_1 << 0xb) >> uVar5 | uVar3 << (0x20 - uVar5 & 0xff);
    uVar4 = uVar3 >> uVar5;
    if (-1 < (int)(uVar5 - 0x20)) {
      uVar1 = uVar3 >> (uVar5 - 0x20 & 0xff);
      uVar4 = 0;
    }
  }
  return CONCAT44(uVar4,uVar1);
}

