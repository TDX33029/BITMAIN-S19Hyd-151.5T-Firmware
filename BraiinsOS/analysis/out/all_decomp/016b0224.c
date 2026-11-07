// FUN_016b0224 @ 016b0224 size=136 calls_out=1 calls_in=0
// strings: 

void FUN_016b0224(byte *param_1,undefined4 *param_2)

{
  int iVar1;
  byte *local_14;
  byte **local_10;
  undefined1 *local_c;
  
  iVar1 = *param_1 - 3;
  if (*param_1 < 3 || iVar1 == 0) {
    iVar1 = 0;
  }
  if (iVar1 == 0) {
    local_c = &LAB_0074e490;
  }
  else {
    if (iVar1 != 1) {
                    /* WARNING: Could not recover jumptable at 0x016b02a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_2[1] + 0xc))(*param_2,"integer conversion error",0x18);
      return;
    }
    param_1 = param_1 + 4;
    local_c = &DAT_016b1618;
  }
  local_10 = &local_14;
  local_14 = param_1;
  FUN_00fa948c(*param_2,param_2[1],&DAT_00590e71,&local_10);
  return;
}

