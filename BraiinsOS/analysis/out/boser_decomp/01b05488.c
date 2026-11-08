// FUN_01b05488 @ 01b05488 size=180 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_01b05488(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_24;
  undefined4 *local_20;
  int local_1c;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_20 = &uStack_c;
  local_1c = DAT_01d53560;
  local_24 = 0;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  iVar1 = FUN_01b6ba94(&local_24,param_1,local_20,1);
  if (iVar1 != -1) {
    FUN_01b05098(local_24);
  }
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

