// FUN_01631a4c @ 01631a4c size=56 calls_out=1 calls_in=4
// strings: 

void FUN_01631a4c(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    return;
  }
  puVar1 = (undefined4 *)(param_1 + 4);
  do {
    if (-0x7ffffffc < (int)puVar1[-1]) {
      FUN_0134bd64(puVar1[-1],*puVar1);
    }
    puVar1 = puVar1 + 4;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

