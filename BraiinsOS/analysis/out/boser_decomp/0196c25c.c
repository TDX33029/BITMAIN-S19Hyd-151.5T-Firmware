// FUN_0196c25c @ 0196c25c size=60 calls_out=1 calls_in=3
// strings: 

void FUN_0196c25c(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    return;
  }
  puVar1 = (undefined4 *)(param_1 + 4);
  do {
    if (puVar1[-1] - 1 < 2) {
      FUN_0134bd64(*puVar1,puVar1[1]);
    }
    puVar1 = puVar1 + 4;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

