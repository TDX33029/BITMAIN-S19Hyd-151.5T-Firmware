// FUN_01631a84 @ 01631a84 size=56 calls_out=1 calls_in=2
// strings: 

void FUN_01631a84(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    return;
  }
  puVar1 = (undefined4 *)(param_1 + 4);
  do {
    if (*(char *)(puVar1 + -1) == '\x1f') {
      FUN_0134bd64(*puVar1,puVar1[1]);
    }
    puVar1 = puVar1 + 5;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

