// FUN_016c023c @ 016c023c size=716 calls_out=0 calls_in=1
// strings: 

void FUN_016c023c(uint *param_1,uint *param_2,undefined4 *param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  
  piVar2 = (int *)*param_3;
  if (param_1[10] == 1) {
    uVar8 = *param_1 ^ 1;
  }
  else {
    uVar8 = 0;
    if (*param_1 == 0) {
      cVar1 = (**(code **)(((undefined4 *)*piVar2)[1] + 0x10))
                        (*(undefined4 *)*piVar2,param_1 + 0xc,param_1 + 2);
      piVar2 = (int *)*param_3;
      uVar8 = (uint)(cVar1 == -1);
    }
  }
  puVar9 = param_1 + 0x1e;
  puVar11 = param_1 + 0x14;
  uVar5 = *puVar11;
  if (*puVar9 == 0) {
    if ((uVar5 & 1) != 0) {
      uVar5 = 3;
      uVar7 = uVar8 ^ 1 | (uVar8 ^ 1) << 2;
      goto LAB_016c0304;
    }
    cVar1 = (**(code **)(((undefined4 *)*piVar2)[1] + 0x10))
                      (*(undefined4 *)*piVar2,param_1 + 0x20,param_1 + 0x16);
    iVar6 = 0x50;
    if (cVar1 == -1) {
      iVar6 = 0x78;
    }
    puVar13 = param_1 + (uVar8 | uVar8 << 2) * 2;
    uVar7 = *puVar13;
    iVar3 = 0x78;
    if (cVar1 == -1) {
      iVar3 = 0x50;
      puVar11 = puVar9;
    }
    puVar9 = (uint *)((int)param_1 + iVar3);
    piVar2 = (int *)*param_3;
    puVar4 = param_1 + (uVar8 ^ 1 | (uVar8 ^ 1) << 2) * 2;
    if (*(int *)((int)param_1 + iVar6) == 1) goto LAB_016c0310;
    uVar8 = 0;
    if ((uVar7 & 1) == 0) {
      cVar1 = (**(code **)(((undefined4 *)*piVar2)[1] + 0x10))
                        (*(undefined4 *)*piVar2,puVar11 + 2,puVar13 + 2);
      piVar2 = (int *)*param_3;
      uVar8 = (uint)(cVar1 == -1);
    }
  }
  else {
    if ((uVar5 & 1) == 0) {
      puVar11 = puVar9;
    }
    uVar7 = uVar8 ^ 1 | (uVar8 ^ 1) << 2;
    uVar5 = uVar5 | 2;
LAB_016c0304:
    puVar13 = param_1 + (uVar8 | uVar8 << 2) * 2;
    puVar4 = param_1 + uVar7 * 2;
    uVar7 = *puVar13;
    puVar9 = param_1 + uVar5 * 10;
LAB_016c0310:
    uVar8 = uVar7 ^ 1;
  }
  puVar10 = puVar13;
  if (*puVar9 == 0) {
    if (*puVar4 == 0) {
      cVar1 = (**(code **)(((undefined4 *)*piVar2)[1] + 0x10))
                        (*(undefined4 *)*piVar2,puVar9 + 2,puVar4 + 2);
      if ((uVar8 & 1) != 0) {
        puVar10 = puVar11;
      }
      if (cVar1 == -1) goto LAB_016c0450;
    }
    else if ((uVar8 & 1) != 0) {
      puVar10 = puVar11;
    }
LAB_016c0424:
    if ((uVar8 & 1) == 0) {
      puVar13 = puVar4;
    }
    else {
      puVar11 = puVar4;
    }
    uVar8 = *puVar13;
    if (*puVar11 == 0) goto LAB_016c046c;
LAB_016c0444:
    puVar4 = puVar11;
    if (uVar8 == 0) goto LAB_016c04b0;
  }
  else {
    if ((uVar8 & 1) != 0) {
      puVar10 = puVar11;
    }
    if (*puVar4 != 0) goto LAB_016c0424;
LAB_016c0450:
    if ((uVar8 & 1) == 0) {
      puVar13 = puVar11;
    }
    uVar8 = *puVar13;
    uVar5 = *puVar9;
    puVar11 = puVar9;
    puVar9 = puVar4;
    if (uVar5 != 0) goto LAB_016c0444;
LAB_016c046c:
    if (uVar8 == 0) {
      cVar1 = (**(code **)((*(undefined4 **)*param_3)[1] + 0x10))
                        (**(undefined4 **)*param_3,puVar11 + 2,puVar13 + 2);
      puVar4 = puVar11;
      if (cVar1 == -1) goto LAB_016c04b0;
    }
  }
  puVar4 = puVar13;
  puVar13 = puVar11;
LAB_016c04b0:
  uVar8 = puVar10[1];
  uVar5 = puVar10[2];
  uVar7 = puVar10[3];
  uVar12 = puVar10[4];
  *param_2 = *puVar10;
  param_2[1] = uVar8;
  param_2[2] = uVar5;
  param_2[3] = uVar7;
  param_2[4] = uVar12;
  uVar8 = puVar10[6];
  uVar5 = puVar10[7];
  uVar7 = puVar10[8];
  uVar12 = puVar10[9];
  param_2[5] = puVar10[5];
  param_2[6] = uVar8;
  param_2[7] = uVar5;
  param_2[8] = uVar7;
  param_2[9] = uVar12;
  uVar8 = puVar4[1];
  uVar5 = puVar4[2];
  uVar7 = puVar4[3];
  uVar12 = puVar4[4];
  param_2[10] = *puVar4;
  param_2[0xb] = uVar8;
  param_2[0xc] = uVar5;
  param_2[0xd] = uVar7;
  param_2[0xe] = uVar12;
  uVar8 = puVar4[6];
  uVar5 = puVar4[7];
  uVar7 = puVar4[8];
  uVar12 = puVar4[9];
  param_2[0xf] = puVar4[5];
  param_2[0x10] = uVar8;
  param_2[0x11] = uVar5;
  param_2[0x12] = uVar7;
  param_2[0x13] = uVar12;
  uVar8 = puVar13[1];
  uVar5 = puVar13[2];
  uVar7 = puVar13[3];
  uVar12 = puVar13[4];
  param_2[0x14] = *puVar13;
  param_2[0x15] = uVar8;
  param_2[0x16] = uVar5;
  param_2[0x17] = uVar7;
  param_2[0x18] = uVar12;
  uVar8 = puVar13[6];
  uVar5 = puVar13[7];
  uVar7 = puVar13[8];
  uVar12 = puVar13[9];
  param_2[0x19] = puVar13[5];
  param_2[0x1a] = uVar8;
  param_2[0x1b] = uVar5;
  param_2[0x1c] = uVar7;
  param_2[0x1d] = uVar12;
  uVar8 = puVar9[1];
  uVar5 = puVar9[2];
  uVar7 = puVar9[3];
  uVar12 = puVar9[4];
  param_2[0x1e] = *puVar9;
  param_2[0x1f] = uVar8;
  param_2[0x20] = uVar5;
  param_2[0x21] = uVar7;
  param_2[0x22] = uVar12;
  uVar8 = puVar9[6];
  uVar5 = puVar9[7];
  uVar7 = puVar9[8];
  uVar12 = puVar9[9];
  param_2[0x23] = puVar9[5];
  param_2[0x24] = uVar8;
  param_2[0x25] = uVar5;
  param_2[0x26] = uVar7;
  param_2[0x27] = uVar12;
  return;
}

