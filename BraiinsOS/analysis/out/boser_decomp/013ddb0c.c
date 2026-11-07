// FUN_013ddb0c @ 013ddb0c size=56 calls_out=1 calls_in=6
// strings: 

void FUN_013ddb0c(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    return;
  }
  puVar1 = (undefined4 *)(param_1 + 8);
  do {
    if (*(char *)(puVar1 + -1) != '\0') {
      FUN_019bb7e0(*puVar1,puVar1[1]);
    }
    puVar1 = puVar1 + 6;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

