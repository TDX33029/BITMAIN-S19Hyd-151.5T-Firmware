// FUN_006e57c8 @ 006e57c8 size=232 calls_out=2 calls_in=2
// strings: 

void FUN_006e57c8(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 unaff_r10;
  undefined4 *puStack_34;
  int iStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if (param_2 == 0) {
    local_28 = 0;
    local_2c = 0;
    iStack_30 = 0;
    puStack_34 = &DAT_0056d238;
  }
  else {
    if (param_2 < 0xf) {
      iVar1 = (param_2 & 8) + 8;
      if (param_2 < 4) {
        iVar1 = 4;
      }
    }
    else {
      iVar1 = (0xffffffffU >> LZCOUNT((uint)((ulonglong)(param_2 << 3) * 0x92492493 >> 0x22) - 1)) +
              1;
    }
    FUN_01412c2c(&puStack_34,0x40,8,iVar1);
    if (puStack_34 == (undefined4 *)0x0) {
      puStack_34 = (undefined4 *)0x0;
      local_28 = unaff_r10;
    }
    else {
      FUN_01bed93e(puStack_34,0xff,iStack_30 + 5);
    }
  }
  *param_1 = puStack_34;
  param_1[1] = iStack_30;
  param_1[2] = local_2c;
  param_1[3] = local_28;
  param_1[4] = param_3;
  param_1[5] = param_4;
  param_1[6] = param_5;
  param_1[7] = param_6;
  return;
}

