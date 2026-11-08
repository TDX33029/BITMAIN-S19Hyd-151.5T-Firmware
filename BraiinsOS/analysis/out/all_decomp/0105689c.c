// FUN_0105689c @ 0105689c size=80 calls_out=1 calls_in=1
// strings: 

void FUN_0105689c(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0x10);
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (puVar1[-4] != 0) {
      thunk_FUN_016d3fb4(puVar1[-3]);
    }
    if (puVar1[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar1);
    }
    puVar1 = puVar1 + 6;
  }
  return;
}

