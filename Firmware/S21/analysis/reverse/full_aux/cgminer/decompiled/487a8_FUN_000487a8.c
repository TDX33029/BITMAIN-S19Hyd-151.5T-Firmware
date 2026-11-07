// FUN_000487a8 @ 000487a8  size=236  callers=1
// program: cgminer


undefined4 FUN_000487a8(uint param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  
  if ((int)param_1 < 0) {
    return 0xffffffff;
  }
  bVar1 = (byte)param_1;
  if ((int)param_1 < 0x80) {
    *param_2 = bVar1;
    *param_3 = 1;
    return 0;
  }
  if ((int)param_1 < 0x800) {
    *param_2 = (char)((int)param_1 >> 6) - 0x40;
    param_2[1] = (bVar1 & 0x3f) + 0x80;
    *param_3 = 2;
    return 0;
  }
  if ((int)param_1 < 0x10000) {
    *param_2 = (char)((int)param_1 >> 0xc) - 0x20;
    param_2[1] = (char)((param_1 & 0xfff) >> 6) + 0x80;
    param_2[2] = (bVar1 & 0x3f) + 0x80;
    *param_3 = 3;
    return 0;
  }
  if ((int)param_1 < 0x110000) {
    *param_2 = (char)((int)param_1 >> 0x12) - 0x10;
    param_2[1] = (char)((param_1 & 0x3ffff) >> 0xc) + 0x80;
    param_2[2] = (char)((param_1 & 0xfff) >> 6) + 0x80;
    param_2[3] = (bVar1 & 0x3f) + 0x80;
    *param_3 = 4;
    return 0;
  }
  return 0xffffffff;
}

