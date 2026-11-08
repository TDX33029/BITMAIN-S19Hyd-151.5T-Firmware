// FUN_01049bb4 @ 01049bb4 size=320 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_01049bb4(byte param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  uint *local_18;
  code *local_14;
  
  uVar3 = (uint)param_1;
  if ((char)param_1 < '\0') {
LAB_01049c88:
    local_1c = CONCAT31(local_1c._1_3_,param_1);
    local_14 = FUN_00faca68;
    local_18 = &local_1c;
    FUN_00600d2c(&local_28,&DAT_00383af1,&local_18);
    uVar2 = (**(code **)(param_3 + 0xc))(param_2,local_24,local_20);
  }
  else {
    uVar1 = uVar3 - 0x30;
    bVar4 = 9 < uVar1;
    if (bVar4) {
      uVar1 = (uVar3 & 0x5f) - 0x41;
    }
    if (!bVar4 || uVar1 < 0x1a) {
LAB_01049bec:
                    /* WARNING: Could not recover jumptable at 0x01049bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(param_3 + 0x10))(param_2);
      return uVar2;
    }
    if (uVar3 == 0x2a) {
      if (param_4 != 0) goto LAB_01049bec;
    }
    else {
      if (uVar3 == 0x5f) goto LAB_01049bec;
      if (uVar3 == 0x2d) {
        if (param_4 == 0) goto LAB_01049bec;
      }
      else if (0x5d < uVar3 - 0x21) goto LAB_01049c88;
    }
    local_14 = FUN_00faaf34;
    local_18 = &local_1c;
    local_1c = uVar3;
    FUN_00600d2c(&local_28,&DAT_0057c678,&local_18);
    uVar2 = (**(code **)(param_3 + 0xc))(param_2,local_24,local_20);
  }
  if (local_28 != 0) {
    thunk_FUN_016d3fb4(local_24);
  }
  return uVar2;
}

