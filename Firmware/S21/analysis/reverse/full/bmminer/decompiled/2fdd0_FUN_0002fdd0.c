// FUN_0002fdd0 @ 0002fdd0  size=96  callers=0
// program: bmminer


void FUN_0002fdd0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  
  local_c = 0;
  iVar1 = FUN_0001c934(param_2,2);
  if (iVar1 != 0) {
    local_c = DAT_008c7040;
  }
  uVar2 = FUN_00080784(local_c,0);
  FUN_0007ec50(param_1,"eeprom_freq",uVar2);
  return;
}

