// FUN_00c82aa4 @ 00c82aa4 size=132 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_00c82aa4(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *local_18;
  char local_14;
  undefined1 local_13;
  
  uVar1 = 1;
  local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418df9,1);
  local_13 = 0;
  local_18 = param_2;
  FUN_008cf9ec(&local_18,param_1,param_1 + 9);
  if (local_14 == '\0') {
    uVar1 = (**(code **)(local_18[1] + 0xc))(*local_18,&DAT_00418ec5,1);
  }
  return uVar1;
}

