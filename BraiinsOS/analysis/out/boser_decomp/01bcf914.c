// FUN_01bcf914 @ 01bcf914 size=364 calls_out=1 calls_in=1
// strings: 

undefined8
FUN_01bcf914(int *param_1,uint param_2,int *param_3,int param_4,uint *param_5,uint param_6,
            int *param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int *piVar10;
  int iVar11;
  
  if ((param_6 == 0 || param_6 != param_2) || (param_4 != param_6 * 2)) {
    return 0;
  }
  iVar11 = *param_7;
  uVar6 = 0;
  iVar8 = 0;
  puVar4 = (uint *)(param_3 + param_6);
  piVar10 = param_3;
  do {
    uVar6 = uVar6 + 1;
    iVar1 = FUN_01bd5500(piVar10,param_5,*piVar10 * iVar11,param_6,param_4);
    uVar5 = *puVar4;
    uVar2 = uVar5 + iVar1 + iVar8;
    *puVar4 = uVar2;
    if (uVar5 != uVar2) {
      iVar8 = 1;
    }
    if (uVar5 < uVar2) {
      iVar8 = 0;
    }
    puVar4 = puVar4 + 1;
    piVar10 = piVar10 + 1;
  } while (uVar6 < param_6);
  uVar2 = param_3[param_6];
  uVar6 = *param_5;
  *param_1 = uVar2 - uVar6;
  uVar6 = (uint)(uVar2 < uVar6);
  for (uVar2 = 1; uVar2 < param_6; uVar2 = uVar2 + 1) {
    uVar5 = param_3[param_6 + uVar2];
    uVar7 = param_5[uVar2];
    uVar3 = uVar5 - uVar6;
    param_1[uVar2] = uVar3 - uVar7;
    uVar6 = -(uint)(uVar3 < uVar7) - (uint)(uVar5 < uVar6) & 1;
  }
  uVar2 = 0;
  puVar4 = (uint *)(param_3 + (param_6 - 1));
  puVar9 = (uint *)(param_1 + -1);
  do {
    puVar9 = puVar9 + 1;
    uVar2 = uVar2 + 1;
    puVar4 = puVar4 + 1;
    *puVar9 = (*puVar4 ^ *puVar9) & iVar8 - uVar6 ^ *puVar9;
    *puVar4 = 0;
  } while (uVar2 < param_6);
  return 1;
}

