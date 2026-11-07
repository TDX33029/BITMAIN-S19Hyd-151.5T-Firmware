// FUN_013e5e14 @ 013e5e14 size=220 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_013e5e14(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *local_48;
  char local_44;
  undefined1 local_43;
  uint local_40 [3];
  int local_34;
  uint local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_44 = (**(code **)(param_2[1] + 0xc))(*param_2,"{",1);
  local_40[2] = *param_1;
  local_34 = param_1[1];
  local_20 = param_1[2];
  if (local_40[2] == 0) {
    local_20 = 0;
  }
  local_40[0] = (uint)(local_40[2] != 0);
  local_43 = 0;
  local_2c = 0;
  local_40[1] = 0;
  local_48 = param_2;
  local_30 = local_40[0];
  local_28 = local_40[2];
  local_24 = local_34;
  while (iVar1 = FUN_013ce0b4(local_40), iVar1 != 0) {
    local_1c = iVar1;
    FUN_01303170(&local_48,&local_1c,&LAB_013dae3c);
  }
  uVar2 = 1;
  if (local_44 == '\0') {
    uVar2 = (**(code **)(local_48[1] + 0xc))(*local_48,"}",1);
  }
  return uVar2;
}

