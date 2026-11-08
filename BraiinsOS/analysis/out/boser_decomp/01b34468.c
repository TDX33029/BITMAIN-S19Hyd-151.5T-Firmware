// FUN_01b34468 @ 01b34468 size=120 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01b34468(int param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  
  if (param_3 == 0) {
    return CONCAT44(param_2,param_1);
  }
  puVar2 = (uint *)(param_1 + -4);
  puVar1 = param_2;
  while (puVar3 = puVar1 + 1, puVar3 != param_2 + param_3) {
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar3 << 0x1f | *puVar1 >> 1;
    puVar1 = puVar3;
  }
  *(uint *)(param_1 + param_3 * 4 + -4) = param_2[param_3 + -1] >> 1;
  return 0;
}

