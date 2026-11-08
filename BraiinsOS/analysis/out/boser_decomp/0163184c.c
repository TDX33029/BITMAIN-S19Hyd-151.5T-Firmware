// FUN_0163184c @ 0163184c size=56 calls_out=1 calls_in=1
// strings: 

void FUN_0163184c(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    return;
  }
  puVar1 = (undefined4 *)(param_1 + 4);
  do {
    if (*(char *)(puVar1 + -1) == '\x0f') {
      FUN_0134bd64(*puVar1,puVar1[1]);
    }
    puVar1 = puVar1 + 5;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

