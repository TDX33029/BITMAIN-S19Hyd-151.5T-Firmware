// FUN_006cefc4 @ 006cefc4 size=56 calls_out=1 calls_in=2
// strings: 

void FUN_006cefc4(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    return;
  }
  puVar1 = (undefined4 *)(param_1 + 4);
  do {
    if (puVar1[-1] != -0x80000000) {
      FUN_019bb7e0(puVar1[-1],*puVar1);
    }
    puVar1 = puVar1 + 3;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

