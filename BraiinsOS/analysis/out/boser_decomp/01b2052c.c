// FUN_01b2052c @ 01b2052c size=100 calls_out=1 calls_in=4
// strings: 

int * FUN_01b2052c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_01b0a1d8();
  puVar2 = (undefined4 *)(iVar1 + -4);
  do {
    puVar2 = puVar2 + 1;
    if (*(int *)*puVar2 == param_1) {
      return (int *)*puVar2;
    }
  } while (puVar2 != (undefined4 *)(iVar1 + 0x28));
  return (int *)0x0;
}

