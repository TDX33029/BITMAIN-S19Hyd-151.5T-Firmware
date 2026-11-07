// FUN_016f3660 @ 016f3660 size=164 calls_out=0 calls_in=2
// strings: 

void FUN_016f3660(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar9 = *param_2;
  uVar6 = param_2[-6];
  if (uVar9 == uVar6) {
    uVar6 = param_2[3];
    if (param_2[-3] <= uVar6) {
      return;
    }
  }
  else {
    if (uVar6 <= uVar9) {
      return;
    }
    uVar6 = param_2[3];
  }
  uVar7 = param_2[4];
  uVar8 = param_2[5];
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  puVar1 = param_2 + -6;
  do {
    puVar5 = puVar1;
    puVar5[6] = *puVar5;
    puVar5[7] = puVar5[1];
    puVar5[8] = puVar5[2];
    puVar5[9] = puVar5[3];
    puVar5[10] = puVar5[4];
    puVar5[0xb] = puVar5[5];
    if (puVar5 == param_1) break;
    uVar3 = puVar5[-6];
    bVar10 = uVar3 <= uVar9;
    if (uVar9 == uVar3) {
      bVar10 = puVar5[-3] <= uVar6;
    }
    puVar1 = puVar5 + -6;
  } while (!bVar10);
  *puVar5 = uVar9;
  puVar5[3] = uVar6;
  puVar5[1] = uVar2;
  puVar5[2] = uVar4;
  puVar5[4] = uVar7;
  puVar5[5] = uVar8;
  return;
}

