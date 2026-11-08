// FUN_014a91ec @ 014a91ec size=52 calls_out=1 calls_in=0
// strings: 

void FUN_014a91ec(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0x5c);
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_019bb7e0(puVar1[-4],puVar1[-3]);
    FUN_019bb7e0(puVar1[-1],*puVar1);
    puVar1 = puVar1 + 0x1a;
  }
  return;
}

