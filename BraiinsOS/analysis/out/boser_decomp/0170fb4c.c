// FUN_0170fb4c @ 0170fb4c size=60 calls_out=0 calls_in=2
// strings: 

void FUN_0170fb4c(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 8);
  for (; param_2 != 0; param_2 = param_2 + -1) {
    (**(code **)(puVar1[-2] + 0x10))(puVar1 + 1,puVar1[-1],*puVar1);
    puVar1 = puVar1 + 4;
  }
  return;
}

