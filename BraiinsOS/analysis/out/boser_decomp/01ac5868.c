// FUN_01ac5868 @ 01ac5868 size=52 calls_out=1 calls_in=1
// strings: 

void FUN_01ac5868(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0x10);
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_0134bd64(puVar1[-4],puVar1[-3]);
    FUN_0134bd64(puVar1[-1],*puVar1);
    puVar1 = puVar1 + 6;
  }
  return;
}

