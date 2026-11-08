// FUN_01714430 @ 01714430 size=200 calls_out=0 calls_in=7
// strings: 

bool FUN_01714430(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  
  uVar7 = param_1[1];
  if (uVar7 <= param_2) {
    return true;
  }
  uVar6 = uVar7 - param_2;
  iVar8 = *param_1;
  if (uVar6 - 1 < 2) {
    uVar1 = 0;
  }
  else {
    puVar3 = (uint *)(iVar8 + param_2 * 4);
    uVar2 = 0;
    uVar1 = 0;
    puVar4 = puVar3;
    do {
      puVar5 = puVar4 + 2;
      uVar2 = *puVar4 | uVar2;
      uVar1 = puVar4[1] | uVar1;
      puVar4 = puVar5;
    } while (puVar5 != puVar3 + (uVar6 & 0xfffffffe));
    uVar1 = uVar1 | uVar2;
    if ((uVar6 & 1) == 0) goto LAB_017144bc;
    param_2 = param_2 + (uVar6 & 0xfffffffe);
  }
  puVar4 = (uint *)(iVar8 + param_2 * 4);
  bVar9 = param_2 + 1 < uVar7;
  if (bVar9) {
    iVar8 = iVar8 + param_2 * 4;
  }
  uVar1 = uVar1 | *puVar4;
  if (bVar9) {
    uVar1 = uVar1 | *(uint *)(iVar8 + 4);
  }
LAB_017144bc:
  return uVar1 == 0;
}

