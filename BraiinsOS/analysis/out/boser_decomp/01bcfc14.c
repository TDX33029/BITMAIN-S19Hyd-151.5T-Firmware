// FUN_01bcfc14 @ 01bcfc14 size=76 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_01bcfc14(int param_1,int param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(param_2 + -4);
  puVar1 = (uint *)(param_1 + -4);
  do {
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    *puVar1 = (*puVar2 ^ *puVar1) & param_3 ^ *puVar1;
  } while (puVar2 != (uint *)(param_2 + 0x2c));
  return 0;
}

