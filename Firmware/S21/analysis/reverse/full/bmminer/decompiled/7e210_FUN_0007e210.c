// FUN_0007e210 @ 0007e210  size=536  callers=1
// program: bmminer


undefined4 FUN_0007e210(int param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  
  if (param_1 < 0) {
    uVar4 = 0xffffffff;
  }
  else {
    bVar1 = (byte)param_1;
    if (param_1 < 0x80) {
      *param_2 = bVar1;
      *param_3 = 1;
    }
    else {
      bVar2 = (byte)(param_1 >> 6);
      if (param_1 < 0x800) {
        *param_2 = (bVar2 & 0x1f) - 0x40;
        param_2[1] = (bVar1 & 0x3f) + 0x80;
        *param_3 = 2;
      }
      else {
        bVar3 = (byte)(param_1 >> 0xc);
        if (param_1 < 0x10000) {
          *param_2 = (bVar3 & 0xf) - 0x20;
          param_2[1] = (bVar2 & 0x3f) + 0x80;
          param_2[2] = (bVar1 & 0x3f) + 0x80;
          *param_3 = 3;
        }
        else {
          if (0x10ffff < param_1) {
            return 0xffffffff;
          }
          *param_2 = ((byte)(param_1 >> 0x12) & 7) - 0x10;
          param_2[1] = (bVar3 & 0x3f) + 0x80;
          param_2[2] = (bVar2 & 0x3f) + 0x80;
          param_2[3] = (bVar1 & 0x3f) + 0x80;
          *param_3 = 4;
        }
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}

