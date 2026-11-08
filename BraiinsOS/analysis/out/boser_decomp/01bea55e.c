// FUN_01bea55e @ 01bea55e size=20 calls_out=1 calls_in=1
// strings: 

void FUN_01bea55e(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 8);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_01be4678(puVar2);
    puVar2 = puVar1;
  }
  return;
}

