// FUN_01b095c4 @ 01b095c4 size=56 calls_out=1 calls_in=0
// strings: 

void FUN_01b095c4(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_01b6b1c4(*puVar1);
  }
  FUN_01b6b1c4(puVar1);
  return;
}

