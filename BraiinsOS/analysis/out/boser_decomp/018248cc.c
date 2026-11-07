// FUN_018248cc @ 018248cc size=40 calls_out=2 calls_in=23
// strings: 

void FUN_018248cc(char *param_1)

{
  undefined4 *puVar1;
  
  if (*param_1 == '\x03') {
    puVar1 = *(undefined4 **)(param_1 + 4);
    FUN_01443048(*puVar1,puVar1[1]);
    thunk_FUN_01be4678(puVar1);
    return;
  }
  return;
}

