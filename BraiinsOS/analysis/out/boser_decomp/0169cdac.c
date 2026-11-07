// FUN_0169cdac @ 0169cdac size=188 calls_out=4 calls_in=1
// strings: 

void FUN_0169cdac(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 *local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  FUN_016cb224(&local_48,param_2,0,0);
  if (local_48 != &DAT_80000004) {
    local_38 = local_48;
    local_34 = local_44;
    local_30 = uStack_40;
    local_2c = uStack_3c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_38,&DAT_01d08194,&DAT_01d07d5c);
  }
  local_2c = *param_1;
  uStack_28 = param_1[1];
  uStack_24 = param_1[2];
  local_30 = local_44;
  local_34 = 1;
  local_38 = (undefined1 *)0x1;
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x18);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x18);
  }
  *puVar1 = local_38;
  puVar1[1] = local_34;
  puVar1[2] = local_30;
  puVar1[3] = local_2c;
  puVar1[4] = uStack_28;
  puVar1[5] = uStack_24;
  return;
}

