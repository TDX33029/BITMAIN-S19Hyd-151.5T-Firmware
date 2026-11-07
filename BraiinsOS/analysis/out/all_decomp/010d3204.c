// FUN_010d3204 @ 010d3204 size=256 calls_out=1 calls_in=1
// strings: 

void FUN_010d3204(uint *param_1,uint param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  
  if ((param_3 - 0xff9e < 2) && ((param_2 & 1) != 0)) {
    uVar1 = 0x309a;
    *(undefined1 *)(param_1 + 2) = 0;
    if (param_3 == 0xff9e) {
      uVar1 = 0x3099;
    }
    *param_1 = uVar1;
    param_1[1] = 0xd808;
    return;
  }
  uVar1 = 0xffff;
  if ((char)param_4[0xb] != '\0') {
    uVar1 = 0xfff;
  }
  if (uVar1 < param_3) {
    if (param_3 < param_4[7]) {
      uVar1 = FUN_010d3304(param_4,param_3);
    }
    else {
      uVar1 = param_4[5] - 2;
    }
  }
  else if (param_3 >> 6 < param_4[2]) {
    uVar1 = (param_3 & 0x3f) + (uint)*(ushort *)(param_4[1] + (param_3 >> 6) * 2);
  }
  else {
    uVar1 = param_4[5] - 1;
  }
  if (uVar1 < param_4[5]) {
    param_4 = (uint *)(param_4[4] + uVar1 * 4);
  }
  uVar1 = *param_4;
  if (uVar1 == 0) {
    *param_1 = (uint)&DAT_00110000;
    return;
  }
  *param_1 = param_3;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}

