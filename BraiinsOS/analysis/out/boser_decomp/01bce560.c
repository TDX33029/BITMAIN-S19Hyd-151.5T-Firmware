// FUN_01bce560 @ 01bce560 size=68 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_01bce560(int param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(param_1 + -4);
  puVar1 = (uint *)(param_2 + -4);
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar2 = *puVar2 ^ *puVar1;
  } while (puVar2 != (uint *)(param_1 + 0x1c));
  return 0;
}

