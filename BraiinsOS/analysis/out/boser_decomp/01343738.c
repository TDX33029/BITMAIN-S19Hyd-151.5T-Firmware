// FUN_01343738 @ 01343738 size=100 calls_out=1 calls_in=5
// strings: 

void FUN_01343738(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 0x18) != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  if (*(uint *)(param_1 + 8) < uVar1) {
    return;
  }
  if (((uVar1 != 0) && (uVar1 < *(uint *)(param_1 + 8))) &&
     (*(char *)(*(int *)(param_1 + 4) + uVar1) < -0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00532886,0x30,&DAT_01ce69dc);
  }
  *(uint *)(param_1 + 8) = uVar1;
  return;
}

