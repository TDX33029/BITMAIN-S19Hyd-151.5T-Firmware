// FUN_00ab1d44 @ 00ab1d44 size=84 calls_out=3 calls_in=0
// strings: 

void FUN_00ab1d44(int param_1)

{
  undefined4 *puVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  FUN_006666fc(&local_20,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  *puVar1 = local_20;
  puVar1[1] = uStack_1c;
  puVar1[2] = uStack_18;
  return;
}

