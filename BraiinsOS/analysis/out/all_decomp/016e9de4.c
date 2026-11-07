// FUN_016e9de4 @ 016e9de4 size=180 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_016e9de4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_24;
  undefined4 *local_20;
  int local_1c;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_24 = 0;
  local_20 = &uStack_c;
  local_1c = DAT_018ddaf8;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  iVar1 = FUN_0177b47c(&local_24,param_1,local_20,1);
  if (iVar1 != -1) {
    FUN_016e99c4(local_24);
  }
  if (local_1c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

