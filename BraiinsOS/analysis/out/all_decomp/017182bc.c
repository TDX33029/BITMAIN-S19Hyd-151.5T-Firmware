// FUN_017182bc @ 017182bc size=492 calls_out=0 calls_in=2
// strings: 

bool FUN_017182bc(int *param_1,int *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  
  uVar5 = param_1[1];
  uVar10 = param_2[1];
  if ((int)uVar5 < (int)uVar10) {
    uVar6 = uVar10 - uVar5;
    iVar8 = *param_2;
    if (uVar6 - 1 < 2) {
      uVar4 = 0;
      uVar6 = uVar5;
    }
    else {
      puVar2 = (uint *)(iVar8 + uVar5 * 4);
      uVar4 = 0;
      uVar1 = 0;
      puVar7 = puVar2;
      do {
        puVar9 = puVar7 + 2;
        uVar4 = *puVar7 | uVar4;
        uVar1 = puVar7[1] | uVar1;
        puVar7 = puVar9;
      } while (puVar9 != puVar2 + (uVar6 & 0xfffffffe));
      uVar4 = uVar4 | uVar1;
      if ((uVar6 & 1) == 0) goto LAB_01718348;
      uVar6 = (uVar6 & 0xfffffffe) + uVar5;
    }
    uVar4 = uVar4 | *(uint *)(iVar8 + uVar6 * 4);
    if ((int)(uVar6 + 1) < (int)uVar10) {
LAB_01718470:
      uVar4 = uVar4 | *(uint *)(iVar8 + uVar6 * 4 + 4);
    }
  }
  else if ((int)uVar10 < (int)uVar5) {
    uVar6 = uVar5 - uVar10;
    iVar8 = *param_1;
    if (uVar6 - 1 < 2) {
      uVar4 = 0;
      uVar6 = uVar10;
    }
    else {
      puVar2 = (uint *)(iVar8 + uVar10 * 4);
      uVar4 = 0;
      uVar1 = 0;
      puVar7 = puVar2;
      do {
        puVar9 = puVar7 + 2;
        uVar4 = *puVar7 | uVar4;
        uVar1 = puVar7[1] | uVar1;
        puVar7 = puVar9;
      } while (puVar2 + (uVar6 & 0xfffffffe) != puVar9);
      uVar4 = uVar4 | uVar1;
      if ((uVar6 & 1) == 0) goto LAB_01718348;
      uVar6 = (uVar6 & 0xfffffffe) + uVar10;
    }
    uVar4 = uVar4 | *(uint *)(iVar8 + uVar6 * 4);
    if ((int)(uVar6 + 1) < (int)uVar5) goto LAB_01718470;
  }
  else {
    uVar4 = 0;
  }
LAB_01718348:
  if ((int)uVar10 <= (int)uVar5) {
    uVar5 = uVar10;
  }
  if (0 < (int)uVar5) {
    puVar7 = (uint *)*param_2;
    if (uVar5 == 1) {
      uVar5 = 0;
    }
    else {
      uVar6 = 0;
      uVar10 = 0;
      puVar2 = puVar7;
      puVar9 = (uint *)*param_1;
      do {
        puVar3 = puVar2 + 2;
        uVar6 = *puVar2 ^ *puVar9 | uVar6;
        uVar10 = puVar9[1] ^ puVar2[1] | uVar10;
        puVar2 = puVar3;
        puVar9 = puVar9 + 2;
      } while (puVar3 != puVar7 + (uVar5 & 0xfffffffe));
      uVar4 = uVar4 | uVar6 | uVar10;
      if ((uVar5 & 1) == 0) goto LAB_017183d4;
      uVar5 = uVar5 & 0xfffffffe;
    }
    uVar4 = uVar4 | puVar7[uVar5] ^ ((uint *)*param_1)[uVar5];
  }
LAB_017183d4:
  return param_1[3] == param_2[3] && uVar4 == 0;
}

