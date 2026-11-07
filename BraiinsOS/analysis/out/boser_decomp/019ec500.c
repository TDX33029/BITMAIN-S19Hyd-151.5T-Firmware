// FUN_019ec500 @ 019ec500 size=84 calls_out=3 calls_in=4
// strings: 

void FUN_019ec500(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_019ec3b8(param_1 + 0x78,param_1);
  uVar1 = (uint)(uVar2 >> 0x20);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(uint *)(param_1 + 0x44) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar1,*(uint *)(param_1 + 0x44),&DAT_01d29524);
  }
  FUN_019f9800(*(undefined4 *)(*(int *)(param_1 + 0x40) + uVar1 * 8 + 4),param_1 + 0xb0);
  return;
}

