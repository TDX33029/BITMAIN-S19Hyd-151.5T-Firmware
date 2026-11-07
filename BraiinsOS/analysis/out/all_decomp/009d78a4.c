// FUN_009d78a4 @ 009d78a4 size=144 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_009d78a4(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int local_44;
  undefined4 local_40;
  int local_28;
  undefined4 *local_24;
  int *local_20;
  code *local_1c;
  
  (**(code **)(*(int *)(param_1 + 0xc4) + 0x18))(&local_44,*(undefined4 *)(param_1 + 0xc0));
  local_24 = &DAT_006043a8;
  local_28 = param_1 + 200;
  local_1c = FUN_010f4f54;
  local_20 = &local_44;
  uVar1 = FUN_00fa948c(*param_2,param_2[1],&DAT_00596361,&local_28);
  if (local_44 != 0) {
    thunk_FUN_016d3fb4(local_40);
  }
  return uVar1;
}

