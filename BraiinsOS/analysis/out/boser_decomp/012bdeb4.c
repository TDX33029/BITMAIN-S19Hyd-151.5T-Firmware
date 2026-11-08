// FUN_012bdeb4 @ 012bdeb4 size=96 calls_out=1 calls_in=1
// strings: 

int FUN_012bdeb4(int param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    if (*(uint *)(param_1 + 0x18) == uVar2) {
      return 0;
    }
    uVar1 = uVar2 + 1;
  } while (*(char *)(*(int *)(param_1 + 0x14) + uVar2) != param_2);
  if (*(uint *)(param_1 + 0x24) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar2,*(uint *)(param_1 + 0x24),&DAT_01ce2514);
  }
  return *(int *)(param_1 + 0x20) + uVar2 * 0x10;
}

