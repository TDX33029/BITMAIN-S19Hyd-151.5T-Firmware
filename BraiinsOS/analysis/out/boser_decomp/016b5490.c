// FUN_016b5490 @ 016b5490 size=68 calls_out=1 calls_in=2
// strings: 

undefined4 FUN_016b5490(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + (param_3 & 0xff) + 0x2c) +
          (param_2 << (*(uint *)(param_1 + 0x130) & 0x1f));
  if (*(uint *)(param_1 + 0x14) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar1,*(uint *)(param_1 + 0x14),&DAT_01d089b8);
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x10) + uVar1 * 8);
}

