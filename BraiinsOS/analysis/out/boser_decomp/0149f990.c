// FUN_0149f990 @ 0149f990 size=272 calls_out=1 calls_in=0
// strings: 

void FUN_0149f990(uint *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  uVar1 = param_1[2];
  if (uVar1 == *param_1) {
    if (param_1[3] < param_1[1]) {
LAB_0149f9f4:
      iVar4 = 0;
      do {
        uVar7 = param_1[iVar4 * 2 + 4];
        bVar8 = uVar1 <= uVar7;
        if (uVar7 == uVar1) {
          bVar8 = param_1[iVar4 * 2 + 3] <= param_1[iVar4 * 2 + 5];
        }
        if (bVar8) {
          bVar8 = true;
          goto LAB_0149fa44;
        }
        iVar4 = iVar4 + 1;
        uVar1 = uVar7;
      } while (param_2 - 2 != iVar4);
      goto LAB_0149fa54;
    }
  }
  else if (uVar1 < *param_1) goto LAB_0149f9f4;
  iVar4 = 0;
  while( true ) {
    uVar7 = param_1[iVar4 * 2 + 4];
    bVar8 = uVar1 <= uVar7;
    if (uVar7 == uVar1) {
      bVar8 = param_1[iVar4 * 2 + 3] <= param_1[iVar4 * 2 + 5];
    }
    if (!bVar8) break;
    iVar4 = iVar4 + 1;
    uVar1 = uVar7;
    if (param_2 - 2 == iVar4) {
      return;
    }
  }
  bVar8 = false;
LAB_0149fa44:
  if (iVar4 + 2U != param_2) {
    FUN_014a0acc(param_1,param_2,0,LZCOUNT(param_2 | 1) << 1 ^ 0x3e);
    return;
  }
  if (!bVar8) {
    return;
  }
LAB_0149fa54:
  uVar1 = param_2 >> 1;
  puVar3 = param_1 + param_2 * 2;
  do {
    puVar2 = puVar3 + -2;
    uVar7 = *puVar2;
    uVar5 = puVar3[-1];
    uVar1 = uVar1 - 1;
    uVar6 = param_1[1];
    *puVar2 = *param_1;
    puVar3[-1] = uVar6;
    *param_1 = uVar7;
    param_1[1] = uVar5;
    param_1 = param_1 + 2;
    puVar3 = puVar2;
  } while (uVar1 != 0);
  return;
}

