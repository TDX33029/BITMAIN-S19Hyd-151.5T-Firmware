// FUN_01ac8e24 @ 01ac8e24 size=108 calls_out=2 calls_in=3
// strings: 

void FUN_01ac8e24(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 8) == 1) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if (uVar1 <= *(uint *)(param_1 + 0x18)) {
      if (((uVar1 != 0) && (uVar1 < *(uint *)(param_1 + 0x18))) &&
         (*(char *)(*(int *)(param_1 + 0x14) + uVar1) < -0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec(&DAT_00532886,0x30,0x1d2f998);
      }
      *(uint *)(param_1 + 0x18) = uVar1;
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_01ac8e98();
  return;
}

