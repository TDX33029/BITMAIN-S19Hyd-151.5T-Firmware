// FUN_00dad74c @ 00dad74c size=356 calls_out=6 calls_in=0
// strings: Stream error

void FUN_00dad74c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 local_110 [8];
  undefined1 auStack_108 [88];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  int local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  int local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 auStack_7c [84];
  undefined1 local_28 [8];
  
  (**(code **)(param_2[1] + 0xc))(&local_90,*param_2);
  if (local_90 == 5 && local_8c == 0) {
    uVar1 = 6;
  }
  else {
    local_b0 = local_88;
    uStack_ac = uStack_84;
    uStack_a8 = uStack_80;
    FUN_01bed4e2(auStack_108,auStack_7c,0x54);
    if (local_90 != 4 || local_8c != 0) {
      local_88 = local_b0;
      uStack_84 = uStack_ac;
      uStack_80 = uStack_a8;
      FUN_01bed4e2(auStack_7c,auStack_108,0x54);
      if (local_90 == 3 && local_8c == 0) {
        FUN_01283524(&local_a0,&local_b0);
        if (local_a0 != 0) {
          param_1[1] = 0;
          *param_1 = 3;
          param_1[2] = local_a0;
          param_1[3] = uStack_9c;
          param_1[4] = uStack_98;
          param_1[5] = local_94;
          return;
        }
      }
      else {
        FUN_01af9864(local_28,"Stream error",0xc);
        FUN_00ef3544(&local_90);
      }
      uVar1 = FUN_014333d0(local_110);
      uVar1 = FUN_00715ebc(uVar1,&DAT_01cf5e1c);
      param_1[1] = 0;
      *param_1 = 4;
      param_1[2] = uVar1;
      param_1[3] = &DAT_01c07620;
      return;
    }
    uVar1 = 5;
  }
  *param_1 = uVar1;
  param_1[1] = 0;
  return;
}

