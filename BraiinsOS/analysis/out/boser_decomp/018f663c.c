// FUN_018f663c @ 018f663c size=124 calls_out=2 calls_in=2
// strings: operation not supported

void FUN_018f663c(undefined4 *param_1)

{
  int iVar1;
  undefined4 local_20;
  int local_1c;
  int local_18;
  
  local_18 = 0;
  local_1c = 1;
  local_20 = 0;
  FUN_006520b4(&local_20,0,0x17,1,1);
  iVar1 = local_18;
  FUN_01bed4e2(local_1c + local_18,"operation not supported",0x17);
  param_1[1] = local_20;
  param_1[2] = local_1c;
  param_1[3] = iVar1 + 0x17;
  *param_1 = &DAT_80000020;
  return;
}

