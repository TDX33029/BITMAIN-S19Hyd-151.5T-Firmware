// FUN_00ce16e4 @ 00ce16e4 size=112 calls_out=1 calls_in=1
// strings: 

void FUN_00ce16e4(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    return;
  }
  puVar1 = (undefined4 *)(param_1 + 0x10);
  do {
    if (puVar1[-4] != 0) {
      thunk_FUN_016d3fb4(puVar1[-3]);
    }
    if (puVar1[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar1);
    }
    if ((puVar1[2] & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(puVar1[3]);
    }
    puVar1 = puVar1 + 10;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

