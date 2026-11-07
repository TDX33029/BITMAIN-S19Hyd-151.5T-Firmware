// FUN_00083990 @ 00083990  size=112  callers=1
// program: bmminer


undefined4 FUN_00083990(int param_1,byte param_2,byte param_3,byte *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  
  if (param_4 == (byte *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    param_4[0] = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    param_4[3] = 0;
    param_4[3] = param_3;
    param_4[2] = param_2;
    param_4[4] = 0;
    param_4[1] = 5;
    *param_4 = (param_1 != 0) << 4 | 0x42;
    bVar1 = FUN_00083b20(param_4,0x20);
    param_4[4] = param_4[4] & 0xe0 | bVar1 & 0x1f;
  }
  return uVar2;
}

