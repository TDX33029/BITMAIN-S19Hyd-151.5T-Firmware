// FUN_01ae43f8 @ 01ae43f8 size=740 calls_out=0 calls_in=1
// strings: 

void FUN_01ae43f8(uint *param_1,uint *param_2,undefined4 *param_3)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  
  if (param_1[10] == 1) {
    uVar6 = *param_1 ^ 1;
  }
  else {
    uVar6 = 0;
    if (*param_1 == 0) {
      cVar1 = (**(code **)((*(undefined4 **)*param_3)[1] + 0x10))
                        (**(undefined4 **)*param_3,param_1 + 0xc,param_1 + 2);
      uVar6 = (uint)(cVar1 == -1);
    }
  }
  puVar7 = param_1 + 0x1e;
  puVar9 = param_1 + 0x14;
  uVar2 = *puVar9;
  if (*puVar7 == 0) {
    if ((uVar2 & 1) != 0) {
      uVar2 = 3;
      uVar4 = uVar6 ^ 1 | (uVar6 ^ 1) << 2;
      goto LAB_01ae44bc;
    }
    cVar1 = (**(code **)((*(undefined4 **)*param_3)[1] + 0x10))
                      (**(undefined4 **)*param_3,param_1 + 0x20,param_1 + 0x16);
    iVar5 = 0x78;
    if (cVar1 == -1) {
      iVar5 = 0x50;
      puVar9 = puVar7;
    }
    puVar7 = (uint *)((int)param_1 + iVar5);
    iVar5 = 0x50;
    if (cVar1 == -1) {
      iVar5 = 0x78;
    }
    puVar11 = param_1 + (uVar6 | uVar6 << 2) * 2;
    uVar4 = *puVar11;
    puVar3 = param_1 + (uVar6 ^ 1 | (uVar6 ^ 1) << 2) * 2;
    if (*(int *)((int)param_1 + iVar5) == 1) goto LAB_01ae44c8;
    uVar6 = 0;
    if ((uVar4 & 1) == 0) {
      cVar1 = (**(code **)((*(undefined4 **)*param_3)[1] + 0x10))
                        (**(undefined4 **)*param_3,puVar9 + 2,puVar11 + 2);
      uVar6 = (uint)(cVar1 == -1);
    }
  }
  else {
    if ((uVar2 & 1) == 0) {
      puVar9 = puVar7;
    }
    uVar4 = uVar6 ^ 1 | (uVar6 ^ 1) << 2;
    uVar2 = uVar2 | 2;
LAB_01ae44bc:
    puVar11 = param_1 + (uVar6 | uVar6 << 2) * 2;
    puVar3 = param_1 + uVar4 * 2;
    uVar4 = *puVar11;
    puVar7 = param_1 + uVar2 * 10;
LAB_01ae44c8:
    uVar6 = uVar4 ^ 1;
  }
  puVar8 = puVar11;
  if (*puVar7 == 0) {
    if (*puVar3 == 0) {
      cVar1 = (**(code **)((*(undefined4 **)*param_3)[1] + 0x10))
                        (**(undefined4 **)*param_3,puVar7 + 2,puVar3 + 2);
      if ((uVar6 & 1) != 0) {
        puVar8 = puVar9;
      }
      if (cVar1 == -1) goto LAB_01ae45e8;
    }
    else if ((uVar6 & 1) != 0) {
      puVar8 = puVar9;
    }
LAB_01ae45b8:
    if ((uVar6 & 1) == 0) {
      puVar11 = puVar3;
    }
    else {
      puVar9 = puVar3;
    }
  }
  else {
    if ((uVar6 & 1) != 0) {
      puVar8 = puVar9;
    }
    if (*puVar3 != 0) goto LAB_01ae45b8;
LAB_01ae45e8:
    if ((uVar6 & 1) == 0) {
      puVar11 = puVar9;
    }
    puVar9 = puVar7;
    puVar7 = puVar3;
  }
  if (*puVar9 == 0) {
    if ((*puVar11 != 0) ||
       (cVar1 = (**(code **)((*(undefined4 **)*param_3)[1] + 0x10))
                          (**(undefined4 **)*param_3,puVar9 + 2,puVar11 + 2), cVar1 != -1))
    goto LAB_01ae463c;
  }
  else if (*puVar11 != 0) {
LAB_01ae463c:
    puVar3 = puVar11;
    goto LAB_01ae464c;
  }
  puVar3 = puVar9;
  puVar9 = puVar11;
LAB_01ae464c:
  uVar6 = puVar8[1];
  uVar2 = puVar8[2];
  uVar4 = puVar8[3];
  uVar10 = puVar8[4];
  *param_2 = *puVar8;
  param_2[1] = uVar6;
  param_2[2] = uVar2;
  param_2[3] = uVar4;
  param_2[4] = uVar10;
  uVar6 = puVar8[6];
  uVar2 = puVar8[7];
  uVar4 = puVar8[8];
  uVar10 = puVar8[9];
  param_2[5] = puVar8[5];
  param_2[6] = uVar6;
  param_2[7] = uVar2;
  param_2[8] = uVar4;
  param_2[9] = uVar10;
  uVar6 = puVar3[1];
  uVar2 = puVar3[2];
  uVar4 = puVar3[3];
  uVar10 = puVar3[4];
  param_2[10] = *puVar3;
  param_2[0xb] = uVar6;
  param_2[0xc] = uVar2;
  param_2[0xd] = uVar4;
  param_2[0xe] = uVar10;
  uVar6 = puVar3[6];
  uVar2 = puVar3[7];
  uVar4 = puVar3[8];
  uVar10 = puVar3[9];
  param_2[0xf] = puVar3[5];
  param_2[0x10] = uVar6;
  param_2[0x11] = uVar2;
  param_2[0x12] = uVar4;
  param_2[0x13] = uVar10;
  uVar6 = puVar9[1];
  uVar2 = puVar9[2];
  uVar4 = puVar9[3];
  uVar10 = puVar9[4];
  param_2[0x14] = *puVar9;
  param_2[0x15] = uVar6;
  param_2[0x16] = uVar2;
  param_2[0x17] = uVar4;
  param_2[0x18] = uVar10;
  uVar6 = puVar9[6];
  uVar2 = puVar9[7];
  uVar4 = puVar9[8];
  uVar10 = puVar9[9];
  param_2[0x19] = puVar9[5];
  param_2[0x1a] = uVar6;
  param_2[0x1b] = uVar2;
  param_2[0x1c] = uVar4;
  param_2[0x1d] = uVar10;
  uVar6 = puVar7[1];
  uVar2 = puVar7[2];
  uVar4 = puVar7[3];
  uVar10 = puVar7[4];
  param_2[0x1e] = *puVar7;
  param_2[0x1f] = uVar6;
  param_2[0x20] = uVar2;
  param_2[0x21] = uVar4;
  param_2[0x22] = uVar10;
  uVar6 = puVar7[6];
  uVar2 = puVar7[7];
  uVar4 = puVar7[8];
  uVar10 = puVar7[9];
  param_2[0x23] = puVar7[5];
  param_2[0x24] = uVar6;
  param_2[0x25] = uVar2;
  param_2[0x26] = uVar4;
  param_2[0x27] = uVar10;
  return;
}

