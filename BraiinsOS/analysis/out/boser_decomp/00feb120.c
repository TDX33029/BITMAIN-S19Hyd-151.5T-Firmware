// FUN_00feb120 @ 00feb120 size=96 calls_out=3 calls_in=0
// strings: 

void FUN_00feb120(int param_1)

{
  undefined4 *puVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  FUN_006666fc(&local_28,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  local_1c = CONCAT31(local_1c._1_3_,*(undefined1 *)(param_1 + 0xc));
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x10);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x10);
  }
  *puVar1 = local_28;
  puVar1[1] = uStack_24;
  puVar1[2] = uStack_20;
  puVar1[3] = local_1c;
  return;
}

