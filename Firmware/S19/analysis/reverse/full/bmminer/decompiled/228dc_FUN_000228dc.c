// FUN_000228dc @ 000228dc  size=96  callers=0
// program: bmminer


void FUN_000228dc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  
  local_c = 0;
  iVar1 = FUN_0001ba18(param_2,2);
  if (iVar1 != 0) {
    local_c = DAT_0048d398;
  }
  uVar2 = FUN_00056130(local_c,0);
  FUN_00056774(param_1,"eeprom_freq",uVar2);
  return;
}

