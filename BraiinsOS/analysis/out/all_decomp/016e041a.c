// FUN_016e041a @ 016e041a size=80 calls_out=2 calls_in=7
// strings: 

int FUN_016e041a(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_20 = *param_1;
  local_18 = param_1[1];
  local_1c = local_20 >> 0x1f;
  iVar1 = FUN_016dff86(&local_20,local_30);
  if ((iVar1 < 0) && (piVar2 = (int *)FUN_016d2bc8(), param_2 != (undefined4 *)0x0 && *piVar2 == 4))
  {
    *param_2 = local_30[0];
    param_2[1] = local_28;
  }
  return iVar1;
}

