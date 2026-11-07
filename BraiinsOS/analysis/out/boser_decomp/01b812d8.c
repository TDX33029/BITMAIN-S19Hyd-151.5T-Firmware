// FUN_01b812d8 @ 01b812d8 size=236 calls_out=1 calls_in=1
// strings: 

uint FUN_01b812d8(uint *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  if (param_3 == 0) {
    FUN_01bed93e(param_1,0,0x14);
    return 0xffffffb8;
  }
  param_1[3] = (uint)param_2;
  param_1[4] = (uint)(param_2 + 4);
  if (3 < param_3) {
    param_1[2] = (uint)(param_2 + (param_3 - 4));
    *param_1 = *(uint *)(param_2 + (param_3 - 4));
    if (param_2[param_3 - 1] == 0) {
      param_1[1] = 0;
      return 0xffffffff;
    }
    iVar2 = LZCOUNT((uint)param_2[param_3 - 1]);
    goto LAB_01b81360;
  }
  param_1[2] = (uint)param_2;
  uVar1 = (uint)*param_2;
  *param_1 = uVar1;
  if (param_3 == 2) {
LAB_01b81394:
    *param_1 = uVar1 + (uint)param_2[1] * 0x100;
  }
  else if (param_3 == 3) {
    uVar1 = uVar1 + (uint)param_2[2] * 0x10000;
    *param_1 = uVar1;
    goto LAB_01b81394;
  }
  if (param_2[param_3 - 1] == 0) {
    param_1[1] = 0;
    return 0xffffffec;
  }
  iVar2 = LZCOUNT((uint)param_2[param_3 - 1]) + (4 - param_3) * 8;
LAB_01b81360:
  param_1[1] = iVar2 - 0x17;
  return param_3;
}

