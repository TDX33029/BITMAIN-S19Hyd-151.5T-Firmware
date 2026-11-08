// FUN_018e1c64 @ 018e1c64 size=160 calls_out=2 calls_in=2
// strings: 

void FUN_018e1c64(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < 0x80) {
    FUN_018a79f4(param_1,0,uVar1,&DAT_01d23280);
    return;
  }
  FUN_018a79f4(param_1,0,0x80,&DAT_01d23250);
  do {
    FUN_018a79f4(param_1,1,uVar1,&DAT_01d23260);
    if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(0,0,&DAT_01d23270);
    }
    uVar1 = uVar1 >> 8;
    **(char **)(param_1 + 4) = **(char **)(param_1 + 4) + '\x01';
  } while (uVar1 != 0);
  return;
}

