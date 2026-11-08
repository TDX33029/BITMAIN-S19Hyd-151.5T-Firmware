// FUN_018a30f0 @ 018a30f0 size=92 calls_out=2 calls_in=1
// strings: `fmt::Error`s should be impossible without a `fmt::Formatter`

void FUN_018a30f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uStack_11;
  
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0;
  iVar1 = FUN_018a21dc(param_1,0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("`fmt::Error`s should be impossible without a `fmt::Formatter`",0x3d,&uStack_11,
                 &DAT_01d22384);
  }
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  return;
}

