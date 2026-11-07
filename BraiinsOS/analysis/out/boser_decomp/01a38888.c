// FUN_01a38888 @ 01a38888 size=68 calls_out=1 calls_in=1
// strings: 

void FUN_01a38888(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    return;
  }
  puVar1 = (undefined4 *)(param_1 + 0x28);
  do {
    if (-0x7fffffff < (int)puVar1[-1]) {
      FUN_0134c054(puVar1[-1],*puVar1,4,4);
    }
    puVar1 = puVar1 + 0xc;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

