// FUN_01452be0 @ 01452be0 size=36 calls_out=1 calls_in=1
// strings: 

void FUN_01452be0(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  param_2 = param_2 + 1;
  puVar1 = (undefined4 *)(param_1 + 0x10);
  while (param_2 = param_2 + -1, param_2 != 0) {
    FUN_01452c30(*puVar1);
    puVar1 = puVar1 + 5;
  }
  return;
}

