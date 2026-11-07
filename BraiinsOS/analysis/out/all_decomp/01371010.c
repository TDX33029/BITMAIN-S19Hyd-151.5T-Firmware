// FUN_01371010 @ 01371010 size=64 calls_out=2 calls_in=3
// strings: 

void FUN_01371010(undefined4 param_1,int param_2)

{
  if (*(int *)(param_2 + 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_01892940);
  }
  *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
  FUN_013b6288(param_1,param_2 + 0x24);
  *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
  return;
}

