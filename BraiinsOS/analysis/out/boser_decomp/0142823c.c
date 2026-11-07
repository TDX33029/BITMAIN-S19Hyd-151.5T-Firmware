// FUN_0142823c @ 0142823c size=56 calls_out=0 calls_in=5
// strings: 

void FUN_0142823c(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  param_2 = param_2 + 1;
  puVar1 = (undefined4 *)(param_1 + 8);
  while (param_2 = param_2 + -1, param_2 != 0) {
    (**(code **)(puVar1[-2] + 0x10))(puVar1 + 1,puVar1[-1],*puVar1);
    puVar1 = puVar1 + 5;
  }
  return;
}

