// FUN_015a1104 @ 015a1104 size=64 calls_out=1 calls_in=1
// strings: 

void FUN_015a1104(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_20;
  undefined4 *puStack_1c;
  undefined4 local_18;
  
  local_18 = 0;
  local_20 = 0;
  puStack_1c = (undefined4 *)&DAT_00000004;
  FUN_0127ac28(&local_20);
  *puStack_1c = param_3;
  *param_1 = local_20;
  param_1[1] = puStack_1c;
  param_1[2] = 1;
  return;
}

