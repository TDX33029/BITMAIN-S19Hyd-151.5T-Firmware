// FUN_00a887d0 @ 00a887d0 size=248 calls_out=5 calls_in=0
// strings: 

void FUN_00a887d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 *local_78;
  undefined4 *local_74;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_14;
  
  local_14 = 0;
  local_1c = 0;
  local_24[0] = 0;
  local_80 = param_2;
  uStack_7c = param_3;
  FUN_016b18bc(&local_78,local_24,param_2);
  if (local_78 != (undefined1 *)0x2) {
    FUN_016dd1aa(param_1,&local_78,0x48);
    return;
  }
  local_74 = &DAT_0157d360;
  local_78 = (undefined1 *)&local_80;
  FUN_00600d2c(&local_30,&DAT_0058fa4d,&local_78);
  FUN_016b18bc(&local_78,local_24,local_2c,local_28);
  if (local_78 == &SUB_00000002) {
    uVar1 = FUN_00ac0e44((uint)local_74 & 0xff);
    *param_1 = 2;
    param_1[1] = uVar1;
  }
  else {
    FUN_016dd1aa(param_1,&local_78,0x48);
  }
  if (local_30 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(local_2c);
  return;
}

