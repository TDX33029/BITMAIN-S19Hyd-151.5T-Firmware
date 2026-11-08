// FUN_0169cb5c @ 0169cb5c size=204 calls_out=5 calls_in=0
// strings: 

undefined8 FUN_0169cb5c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *local_1d0;
  undefined4 local_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined1 *local_1c0;
  undefined4 local_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_28;
  
  FUN_016cb224(&local_1d0,param_2,0,0);
  if (local_1d0 != &DAT_80000004) {
    local_1c0 = local_1d0;
    local_1bc = local_1cc;
    uStack_1b8 = uStack_1c8;
    uStack_1b4 = uStack_1c4;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_1c0,&DAT_01d08194,&DAT_01d07d5c);
  }
  FUN_01bed4e2(&uStack_1b8,param_1,400);
  local_28 = local_1cc;
  local_1bc = 1;
  local_1c0 = (undefined1 *)0x1;
  iVar1 = thunk_FUN_01be5118(0x19c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x19c);
  }
  FUN_01bed4e2(iVar1,&local_1c0,0x19c);
  return CONCAT44(&DAT_01d07e4c,iVar1);
}

