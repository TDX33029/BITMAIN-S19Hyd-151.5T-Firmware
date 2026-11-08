// FUN_016f3704 @ 016f3704 size=128 calls_out=0 calls_in=2
// strings: 

void FUN_016f3704(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;
  
  uVar2 = *param_2;
  puVar3 = param_2 + -2;
  if (uVar2 == *puVar3) {
    uVar4 = param_2[1];
    if (param_2[-1] <= uVar4) {
      return;
    }
  }
  else {
    if (*puVar3 <= uVar2) {
      return;
    }
    uVar4 = param_2[1];
  }
  *param_2 = *puVar3;
  param_2[1] = param_2[-1];
  if (puVar3 == param_1) {
LAB_016f3778:
    puVar1 = puVar3;
  }
  else {
    do {
      puVar1 = puVar3 + -2;
      bVar5 = *puVar1 <= uVar2;
      if (uVar2 == *puVar1) {
        bVar5 = puVar3[-1] <= uVar4;
      }
      if (bVar5) goto LAB_016f3778;
      *puVar3 = *puVar1;
      puVar3[1] = puVar3[-1];
      puVar3 = puVar1;
    } while (puVar1 != param_1);
  }
  *puVar1 = uVar2;
  puVar1[1] = uVar4;
  return;
}

