// FUN_016da28a @ 016da28a size=20 calls_out=1 calls_in=1
// strings: 

void FUN_016da28a(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 8);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_016d3fb4(puVar2);
    puVar2 = puVar1;
  }
  return;
}

