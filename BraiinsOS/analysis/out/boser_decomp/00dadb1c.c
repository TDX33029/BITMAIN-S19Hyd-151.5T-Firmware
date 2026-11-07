// FUN_00dadb1c @ 00dadb1c size=404 calls_out=7 calls_in=0
// strings: 

void FUN_00dadb1c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 local_128 [8];
  undefined1 auStack_120 [88];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  int local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined1 auStack_94 [84];
  int *local_40;
  code *local_3c;
  undefined4 uStack_38;
  int *local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  (**(code **)(param_2[1] + 0xc))(&local_a8,*param_2);
  if (local_a8 == 5 && local_a4 == 0) {
    uVar1 = 6;
LAB_00dadbac:
    *param_1 = uVar1;
    param_1[1] = 0;
  }
  else {
    local_c8 = local_a0;
    uStack_c4 = uStack_9c;
    uStack_c0 = uStack_98;
    FUN_01bed4e2(auStack_120,auStack_94,0x54);
    if (local_a8 == 3 && local_a4 == 0) {
      FUN_01283524(&local_b8,&local_c8);
      if (local_b8 != 0) {
        param_1[1] = 0;
        *param_1 = 3;
        param_1[2] = local_b8;
        param_1[3] = uStack_b4;
        param_1[4] = uStack_b0;
        param_1[5] = local_ac;
        return;
      }
    }
    else {
      if (local_a8 == 4 && local_a4 == 0) {
        uVar1 = 5;
        goto LAB_00dadbac;
      }
      local_a0 = local_c8;
      uStack_9c = uStack_c4;
      uStack_98 = uStack_c0;
      FUN_01bed4e2(auStack_94,auStack_120,0x54);
      local_3c = FUN_01a755dc;
      local_40 = &local_a8;
      FUN_00664898(&local_30,&DAT_005a12e9,&local_40);
      local_40 = local_30;
      local_3c = (code *)local_2c;
      uStack_38 = uStack_28;
      FUN_00768b9c(&local_30,&local_40);
      FUN_005f6588(&local_a8);
    }
    uVar1 = FUN_014333d0(local_128);
    uVar1 = FUN_00715ebc(uVar1,&DAT_01cf5e1c);
    param_1[1] = 0;
    *param_1 = 4;
    param_1[2] = uVar1;
    param_1[3] = &DAT_01c07620;
  }
  return;
}

