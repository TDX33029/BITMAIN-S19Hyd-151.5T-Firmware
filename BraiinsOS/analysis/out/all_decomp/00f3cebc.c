// FUN_00f3cebc @ 00f3cebc size=124 calls_out=1 calls_in=1
// strings: 

void FUN_00f3cebc(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_20;
  undefined *puStack_1c;
  undefined4 local_18;
  undefined1 *local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  
  local_10 = (undefined1 *)&uStack_20;
  local_c = &LAB_0115452c;
  puStack_1c = &DAT_0187f1b8;
  local_14 = &LAB_01579e10;
  uStack_20 = param_3;
  local_18 = param_2;
  FUN_00600d2c(param_1 + 3,&DAT_0058e458,&local_18);
  param_1[6] = 0;
  param_1[7] = 4;
  param_1[8] = 0;
  param_1[9] = 0x80000000;
  *param_1 = 0;
  return;
}

