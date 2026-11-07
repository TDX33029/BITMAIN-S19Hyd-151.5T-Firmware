// FUN_0169c6f4 @ 0169c6f4 size=156 calls_out=4 calls_in=0
// strings: 

void FUN_0169c6f4(undefined1 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 *local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 *local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_016cb224(&local_38,param_2,0,0);
  if (local_38 != &DAT_80000004) {
    local_28 = local_38;
    uStack_24 = local_34;
    uStack_20 = uStack_30;
    uStack_1c = uStack_2c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_28,&DAT_01d08194,&DAT_01d07d5c);
  }
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x10);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x10);
  }
  *(undefined1 *)(puVar1 + 3) = param_1;
  *puVar1 = 1;
  puVar1[1] = 1;
  puVar1[2] = local_34;
  return;
}

