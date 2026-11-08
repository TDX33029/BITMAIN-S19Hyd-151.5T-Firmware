// FUN_014a8da8 @ 014a8da8 size=72 calls_out=1 calls_in=1
// strings: 

void FUN_014a8da8(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  if (param_3 == param_2) {
    return;
  }
  puVar1 = (undefined4 *)(param_1 + param_2 * 0x18 + 0xc);
  for (param_3 = param_3 - param_2; param_3 != 0; param_3 = param_3 + -1) {
    FUN_019bb7e0(puVar1[-3],puVar1[-2]);
    FUN_019bb7e0(*puVar1,puVar1[1]);
    puVar1 = puVar1 + 6;
  }
  return;
}

