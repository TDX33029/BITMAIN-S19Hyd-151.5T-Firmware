// FUN_0183a528 @ 0183a528 size=40 calls_out=2 calls_in=47
// strings: 

void FUN_0183a528(char *param_1)

{
  undefined4 *puVar1;
  
  if (*param_1 == '\x03') {
    puVar1 = *(undefined4 **)(param_1 + 4);
    FUN_00f80320(*puVar1,puVar1[1]);
    thunk_FUN_01be4678(puVar1);
    return;
  }
  return;
}

