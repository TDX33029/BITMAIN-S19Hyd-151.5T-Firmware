// FUN_0134c298 @ 0134c298 size=68 calls_out=1 calls_in=2
// strings: 

void FUN_0134c298(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    return;
  }
  puVar1 = (undefined4 *)(param_1 + 4);
  do {
    if (puVar1[-1] != 0) {
      FUN_0134c054(*puVar1,puVar1[1],8,0x10);
    }
    puVar1 = puVar1 + 0x1a;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

