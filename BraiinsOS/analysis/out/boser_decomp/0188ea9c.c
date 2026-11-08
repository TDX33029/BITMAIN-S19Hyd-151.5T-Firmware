// FUN_0188ea9c @ 0188ea9c size=56 calls_out=1 calls_in=2
// strings: 

void FUN_0188ea9c(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    return;
  }
  puVar1 = (undefined4 *)(param_1 + 4);
  do {
    if (-0x7fffffff < (int)puVar1[-1]) {
      FUN_0134bd64(puVar1[-1],*puVar1);
    }
    puVar1 = puVar1 + 7;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

