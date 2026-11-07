// FUN_0130ec28 @ 0130ec28 size=88 calls_out=3 calls_in=1
// strings: 

void FUN_0130ec28(undefined4 param_1,undefined4 param_2)

{
  undefined4 *local_20;
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  undefined4 *local_14;
  
  local_20 = (undefined4 *)thunk_FUN_01be5118(4);
  if (local_20 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(4,4);
  }
  local_14 = local_20 + 1;
  uStack_18 = 1;
  *local_20 = param_2;
  puStack_1c = local_20;
  FUN_0130fa24(param_1,&local_20);
  return;
}

