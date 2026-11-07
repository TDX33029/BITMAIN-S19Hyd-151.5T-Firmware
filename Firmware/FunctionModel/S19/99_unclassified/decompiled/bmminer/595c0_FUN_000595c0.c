// FUN_000595c0 @ 000595c0  size=152  callers=1
// program: bmminer


undefined4 FUN_000595c0(int param_1,byte param_2,byte param_3,undefined4 param_4,byte *param_5)

{
  byte bVar1;
  undefined4 uVar2;
  
  if (param_5 == (byte *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    param_5[0] = 0;
    param_5[1] = 0;
    param_5[2] = 0;
    param_5[3] = 0;
    param_5[3] = param_3;
    param_5[7] = (byte)param_4;
    param_5[2] = param_2;
    param_5[4] = (byte)((uint)param_4 >> 0x18);
    param_5[5] = (byte)((uint)param_4 >> 0x10);
    param_5[6] = (byte)((uint)param_4 >> 8);
    param_5[8] = 0;
    *param_5 = (param_1 != 0) << 4 | 0x41;
    param_5[1] = 9;
    bVar1 = FUN_0005983c(param_5,0x40);
    param_5[8] = param_5[8] & 0xe0 | bVar1 & 0x1f;
  }
  return uVar2;
}

