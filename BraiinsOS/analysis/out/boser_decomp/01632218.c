// FUN_01632218 @ 01632218 size=76 calls_out=1 calls_in=2
// strings: 

void FUN_01632218(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    return;
  }
  puVar1 = (undefined4 *)(param_1 + 4);
  do {
    if (7 < *(byte *)(puVar1 + -1) - 3 && 1 < *(byte *)(puVar1 + -1)) {
      FUN_0134bd64(*puVar1,puVar1[1]);
    }
    puVar1 = puVar1 + 5;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

