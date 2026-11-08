// FUN_0143b8e8 @ 0143b8e8 size=88 calls_out=2 calls_in=22
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0143b8e8(undefined1 param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  
  uStack_14._0_2_ = CONCAT11(2,(undefined1)uStack_14);
  local_10._0_2_ = CONCAT11(param_2,param_1);
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x1c);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x1c);
  }
  *puVar1 = 0;
  puVar1[1] = uStack_24;
  puVar1[2] = uStack_20;
  puVar1[3] = local_1c;
  puVar1[4] = uStack_18;
  puVar1[5] = uStack_14;
  puVar1[6] = local_10;
  return;
}

