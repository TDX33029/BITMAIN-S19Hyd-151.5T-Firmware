// FUN_016b54d8 @ 016b54d8 size=64 calls_out=1 calls_in=2
// strings: 

void FUN_016b54d8(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x134) + (param_2 << (*(uint *)(param_1 + 0x130) & 0x1f));
  if (*(uint *)(param_1 + 0x14) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar1,*(uint *)(param_1 + 0x14),&DAT_01d089f8);
  }
  return;
}

