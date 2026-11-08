// FUN_0165d0b8 @ 0165d0b8 size=72 calls_out=1 calls_in=4
// strings: 

void FUN_0165d0b8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != 0) {
    puVar1 = *(undefined4 **)(param_1 + 4);
    do {
      iVar2 = iVar2 + -1;
      if ((undefined1 *)*puVar1 != &DAT_80000005) {
        FUN_0165d13c(puVar1);
      }
      puVar1 = puVar1 + 4;
    } while (iVar2 != 0);
  }
  return;
}

