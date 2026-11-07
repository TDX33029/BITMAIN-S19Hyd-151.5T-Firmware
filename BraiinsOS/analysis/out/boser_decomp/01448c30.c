// FUN_01448c30 @ 01448c30 size=364 calls_out=3 calls_in=1
// strings: 

void FUN_01448c30(int param_1,uint3 *param_2,uint3 *param_3)

{
  uint3 uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  bool bVar10;
  
  FUN_014489c8(param_1,((int)param_3 - (int)param_2) * -0x55555555);
  FUN_01ab1588();
  puVar9 = (uint *)(param_1 + 0x48);
  uVar2 = *puVar9;
  if (uVar2 < 0x12) {
    iVar5 = param_1 + 4;
    uVar7 = 0x11;
    uVar3 = uVar2;
    puVar4 = puVar9;
  }
  else {
    iVar5 = *(int *)(param_1 + 8);
    uVar3 = *(uint *)(param_1 + 4);
    uVar7 = uVar2;
    puVar4 = (uint *)(param_1 + 4);
  }
  if (uVar3 < uVar7) {
    do {
      bVar10 = param_2 == param_3;
      if (bVar10) {
        uVar1 = 0;
      }
      else {
        uVar1 = *param_2;
        param_2 = (uint3 *)((int)param_2 + 3);
      }
      if (uVar1 == 0x110000 || bVar10) {
        *puVar4 = uVar3;
        return;
      }
      *(uint *)(iVar5 + uVar3 * 4) = uVar1 | 0xff000000;
      uVar3 = uVar3 + 1;
    } while (uVar7 != uVar3);
    uVar3 = uVar7;
  }
  puVar8 = (uint *)(param_1 + 4);
  *puVar4 = uVar3;
  while( true ) {
    bVar10 = param_2 == param_3;
    if (bVar10) {
      uVar1 = 0;
    }
    else {
      uVar1 = *param_2;
      param_2 = (uint3 *)((int)param_2 + 3);
    }
    if (uVar1 == 0x110000 || bVar10) break;
    uVar2 = *puVar9;
    if (uVar2 < 0x12) {
      uVar7 = 0x11;
      uVar3 = uVar2;
      puVar4 = puVar8;
      puVar6 = puVar9;
    }
    else {
      uVar3 = *(uint *)(param_1 + 4);
      puVar4 = *(uint **)(param_1 + 8);
      puVar6 = puVar8;
      uVar7 = uVar2;
    }
    if (uVar3 == uVar7) {
      FUN_01448a38(param_1);
      uVar3 = *(uint *)(param_1 + 4);
      puVar4 = *(uint **)(param_1 + 8);
      puVar6 = puVar8;
    }
    puVar4[uVar3] = uVar1 | 0xff000000;
    *puVar6 = *puVar6 + 1;
  }
  return;
}

