// FUN_019ebea4 @ 019ebea4 size=88 calls_out=2 calls_in=6
// strings: 

void FUN_019ebea4(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_019f8914(8);
  if (7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar1,8,&DAT_01d29484);
  }
  uVar2 = *(uint *)(param_2 + uVar1 * 0x10);
  DataMemoryBarrier(0xb);
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = param_2 + uVar1 * 0x10;
  param_1[1] = uVar2 >> 2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

