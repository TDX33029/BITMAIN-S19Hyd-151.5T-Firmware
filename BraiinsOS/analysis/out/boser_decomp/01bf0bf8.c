// FUN_01bf0bf8 @ 01bf0bf8 size=180 calls_out=0 calls_in=11
// strings: 

undefined8 FUN_01bf0bf8(uint param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = param_2 & 0x7fffffff;
  uVar2 = 0;
  uVar4 = 0;
  if (0x3fefffff < uVar3) {
    if (uVar3 < 0x43e00000) {
      uVar2 = 0x3e - (uVar3 >> 0x14) & 0x3f;
      uVar4 = param_2 << 0xb | param_1 >> 0x15 | 0x80000000;
      uVar3 = uVar4 >> uVar2;
      uVar5 = (param_1 << 0xb) >> uVar2 | uVar4 << (0x20 - uVar2 & 0xff);
      if (-1 < (int)(uVar2 - 0x20)) {
        uVar3 = 0;
        uVar5 = uVar4 >> (uVar2 - 0x20 & 0xff);
      }
      uVar2 = -uVar5;
      uVar4 = -(uVar3 + (uVar5 != 0));
      if (-1 < (int)param_2) {
        uVar2 = uVar5;
        uVar4 = uVar3;
      }
    }
    else {
      uVar2 = 0;
      bVar1 = (uint)(param_1 != 0) <= uVar3 + 0x80100000;
      if (uVar3 < 0x7ff00001 && bVar1) {
        uVar2 = 0x7fffffff;
      }
      uVar4 = 0;
      if (uVar3 < 0x7ff00001 && bVar1) {
        uVar2 = ~((int)param_2 >> 0x1f);
        uVar4 = uVar2 ^ (int)param_2 >> 0x1f;
      }
    }
  }
  return CONCAT44(uVar4,uVar2);
}

