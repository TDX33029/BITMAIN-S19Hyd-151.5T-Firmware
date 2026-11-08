// FUN_01714e04 @ 01714e04 size=96 calls_out=0 calls_in=14
// strings: 

undefined8 FUN_01714e04(int param_1,uint param_2,uint *param_3,int param_4,int param_5)

{
  uint *puVar1;
  uint *puVar3;
  uint *puVar2;
  uint *puVar4;
  
  if (param_5 == 0) {
    return CONCAT44(param_2,param_1);
  }
  puVar4 = (uint *)(param_4 + -4);
  puVar1 = (uint *)(param_1 + -4);
  puVar2 = param_3;
  do {
    puVar3 = puVar2 + 1;
    puVar4 = puVar4 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar4 & ~param_2 | *puVar2 & param_2;
    puVar2 = puVar3;
  } while (puVar3 != param_3 + param_5);
  return 0;
}

