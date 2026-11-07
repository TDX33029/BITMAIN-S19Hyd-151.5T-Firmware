// FUN_0188ea64 @ 0188ea64 size=56 calls_out=1 calls_in=1
// strings: 

void FUN_0188ea64(int param_1,int param_2)

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
    puVar1 = puVar1 + 3;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

