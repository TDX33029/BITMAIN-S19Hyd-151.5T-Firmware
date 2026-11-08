// FUN_01ac2198 @ 01ac2198 size=76 calls_out=2 calls_in=3
// strings: 

void FUN_01ac2198(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    return;
  }
  puVar1 = (undefined4 *)(param_1 + 8);
  do {
    if (*(char *)(puVar1 + 2) == '\x01') {
      FUN_0134aee0(puVar1[-1],*puVar1,8,0x10);
    }
    puVar1 = puVar1 + 5;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  thunk_FUN_01be4678(param_1);
  return;
}

