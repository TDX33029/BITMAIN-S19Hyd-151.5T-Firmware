// FUN_0176e7f8 @ 0176e7f8 size=152 calls_out=2 calls_in=3
// strings: assertion failed: cnt <= self.limit

void FUN_0176e7f8(int param_1,uint param_2)

{
  uint local_20;
  uint uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  uint *puStack_10;
  undefined1 *puStack_c;
  
  puStack_18 = (undefined1 *)&local_20;
  if (*(uint *)(param_1 + 0x10) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: cnt <= self.limit",0x23,&DAT_01d2e1dc);
  }
  uStack_1c = *(uint *)(param_1 + 8);
  if (uStack_1c < param_2) {
    puStack_c = &LAB_01a6a304;
    puStack_14 = &LAB_01a6a304;
    puStack_10 = &uStack_1c;
    local_20 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_005ac267,&puStack_18,&DAT_01d2e534);
  }
  *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) + param_2;
  *(uint *)(param_1 + 8) = uStack_1c - param_2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) - param_2;
  return;
}

