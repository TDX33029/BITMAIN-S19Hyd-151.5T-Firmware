// FUN_01935564 @ 01935564 size=272 calls_out=1 calls_in=1
// strings: 

void FUN_01935564(uint *param_1,uint param_2)

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
LAB_019355c8:
      iVar4 = 0;
      do {
        uVar7 = param_1[iVar4 * 2 + 4];
        bVar8 = uVar1 <= uVar7;
        if (uVar7 == uVar1) {
          bVar8 = param_1[iVar4 * 2 + 3] <= param_1[iVar4 * 2 + 5];
        }
        if (bVar8) {
          bVar8 = true;
          goto LAB_01935618;
        }
        iVar4 = iVar4 + 1;
        uVar1 = uVar7;
      } while (param_2 - 2 != iVar4);
      goto LAB_01935628;
    }
  }
  else if (uVar1 < *param_1) goto LAB_019355c8;
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
LAB_01935618:
  if (iVar4 + 2U != param_2) {
    FUN_01905784(param_1,param_2,0,LZCOUNT(param_2 | 1) << 1 ^ 0x3e);
    return;
  }
  if (!bVar8) {
    return;
  }
LAB_01935628:
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

