// FUN_01094664 @ 01094664 size=1484 calls_out=10 calls_in=1
// strings: 

void FUN_01094664(uint *param_1,int *param_2,int param_3,int *param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint **ppuVar5;
  int **ppiVar6;
  undefined1 **ppuVar7;
  code *pcVar8;
  uint *puVar9;
  undefined1 *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  uint *local_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint uStack_78;
  undefined1 *local_70;
  uint **local_6c;
  int **local_68;
  undefined *local_64;
  uint local_5c;
  undefined1 **local_58;
  code *local_54;
  uint *local_50;
  code *local_4c;
  uint *local_48;
  code *local_44;
  char *local_40;
  code *local_3c;
  int *local_38;
  code *local_34;
  int local_30;
  code *local_2c;
  
  piVar14 = (int *)*param_2;
  cVar1 = *(char *)(param_3 + 0x28);
  piVar16 = (int *)(param_3 + 0x20);
  if (((((cVar1 == (char)piVar14[2]) && (*(char *)(param_3 + 0x2d) == *(char *)((int)piVar14 + 0xd))
        ) && (*(int *)(param_3 + 0x24) == piVar14[1])) &&
      ((*piVar16 == *piVar14 && (*(char *)(param_3 + 0x29) == *(char *)((int)piVar14 + 9))))) &&
     ((*(char *)(param_3 + 0x2a) == *(char *)((int)piVar14 + 10) &&
      ((*(char *)((int)piVar14 + 0xb) == *(char *)(param_3 + 0x2b) &&
       ((char)piVar14[3] == *(char *)(param_3 + 0x2c))))))) {
    puVar10 = (undefined1 *)param_2[1];
    *param_1 = 0x80000000;
    *puVar10 = 1;
  }
  else if (*(char *)param_2[1] == '\0') {
    *param_1 = 0x80000000;
  }
  else {
    piVar14 = (int *)param_2[2];
    if ((((cVar1 == (char)piVar14[2]) &&
         (*(char *)(param_3 + 0x2d) == *(char *)((int)piVar14 + 0xd))) &&
        (*(int *)(param_3 + 0x24) == piVar14[1])) &&
       (((*piVar16 == *piVar14 && (*(char *)(param_3 + 0x29) == *(char *)((int)piVar14 + 9))) &&
        ((*(char *)(param_3 + 0x2a) == *(char *)((int)piVar14 + 10) &&
         ((*(char *)((int)piVar14 + 0xb) == *(char *)(param_3 + 0x2b) &&
          ((char)piVar14[3] == *(char *)(param_3 + 0x2c))))))))) {
      *(char *)param_2[1] = '\0';
    }
    iVar15 = *param_4;
    if (iVar15 == 2) {
      FUN_01bed93e(&local_b0,0,0x20);
    }
    else {
      local_b0 = (uint *)param_4[0x1a];
      iStack_ac = param_4[0x1b];
      iStack_a8 = param_4[0x1c];
      iStack_a4 = param_4[0x1d];
      local_a0 = param_4[0x1e];
      iStack_9c = param_4[0x1f];
      iStack_98 = param_4[0x20];
      iStack_94 = param_4[0x21];
    }
    local_84 = 0;
    local_8c = 0;
    local_88 = 1;
    local_6c = (uint **)&local_58;
    local_58 = (undefined1 **)local_b0;
    local_54 = (code *)iStack_ac;
    local_50 = (uint *)iStack_a8;
    local_4c = (code *)iStack_a4;
    local_48 = (uint *)local_a0;
    local_44 = (code *)iStack_9c;
    local_40 = (char *)iStack_98;
    local_3c = (code *)iStack_94;
    local_68 = &local_38;
    local_64 = &DAT_005679b8;
    local_70 = &DAT_00110000;
    FUN_01aa5450(&local_80,&local_70);
    local_54 = (code *)&LAB_00632348;
    local_58 = (undefined1 **)&local_80;
    iVar11 = FUN_012fa178(&local_8c,&DAT_01c1dd64,&DAT_00590e5f,&local_58);
    FUN_019bb7e0(local_80,local_7c);
    uVar4 = local_84;
    uVar3 = local_88;
    uVar2 = local_8c;
    if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_5c,&DAT_01c1dd8c,&DAT_01d30334);
    }
    local_6c = (uint **)0x1;
    uVar13 = *(uint *)(param_3 + 0x24);
    local_68 = (int **)0x0;
    local_70 = (undefined1 *)0x0;
    local_5c = (int)uVar13 >> 0xd;
    uVar12 = (uVar13 & 0x1fff) >> 3;
    if (0x2dc < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar12,0x2dd,&DAT_01d2a928);
    }
    local_8c = uVar12 + (byte)""[uVar12] >> 6;
    local_80 = ((uVar13 >> 3) + (uint)(byte)""[uVar12] & 0x3f) >> 1;
    local_30 = param_3 + 0x29;
    local_58 = (undefined1 **)&local_5c;
    local_34 = FUN_0160054c;
    local_2c = FUN_015fe7bc;
    local_3c = FUN_012fcc70;
    local_44 = FUN_012fd02c;
    local_4c = FUN_012fd02c;
    local_54 = FUN_012fce60;
    local_50 = &local_8c;
    local_48 = &local_80;
    local_40 = (char *)(param_3 + 0x28);
    local_38 = piVar16;
    iVar11 = FUN_012fa178(&local_70,&DAT_01c1dd64,&DAT_004ba524,&local_58);
    if (iVar11 != 0) {
LAB_01094b8c:
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_5c,&DAT_01c1dd8c,&DAT_01d30334);
    }
    if (*(char *)(param_3 + 0x2d) != '\0') {
      if ((uint)((int)local_70 - (int)local_68) < 5) {
        FUN_0132b898(&local_70,local_68,5,1,1);
      }
      *(undefined4 *)((int)local_6c + (int)local_68) = 0x756c702d;
      *(undefined1 *)((undefined4 *)((int)local_6c + (int)local_68) + 1) = 0x73;
      local_68 = (int **)((int)local_68 + 5);
    }
    if (*(char *)(param_3 + 0x2c) != '\x1c') {
      local_80 = CONCAT31(local_80._1_3_,*(char *)(param_3 + 0x2c));
      local_54 = (code *)&LAB_015fe870;
      local_58 = (undefined1 **)&local_80;
      iVar11 = FUN_012fa178(&local_70,&DAT_01c1dd64,&DAT_0057fe0b,&local_58);
      if (iVar11 != 0) goto LAB_01094b8c;
    }
    ppiVar6 = local_68;
    ppuVar5 = local_6c;
    puVar10 = local_70;
    local_50 = (uint *)0x0;
    local_58 = (undefined1 **)0x0;
    local_54 = (code *)0x1;
    iVar11 = FUN_01291dd8(*(undefined4 *)(param_3 + 0x30),&local_58,&DAT_01c1dd64);
    puVar9 = local_50;
    pcVar8 = local_54;
    ppuVar7 = local_58;
    if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_5c,&DAT_01c1dd8c,&DAT_01d30334);
    }
    FUN_006666fc(&local_80,*(undefined4 *)(param_3 + 0x38),*(undefined4 *)(param_3 + 0x3c));
    local_68 = (int **)0x0;
    local_70 = (undefined1 *)0x0;
    local_4c = (code *)0x0;
    local_6c = (uint **)0x1;
    local_50 = (uint *)0x60000020;
    local_54 = (code *)&DAT_01c1dd64;
    piVar14 = param_4;
    if (iVar15 == 2) {
      piVar14 = param_4 + 1;
    }
    local_58 = &local_70;
    iVar11 = FUN_012fb940(&local_58,piVar14[5],piVar14[6]);
    if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_5c,&DAT_01c1dd8c,&DAT_01d30334);
    }
    param_1[0xc] = (uint)local_70;
    param_1[0xd] = (uint)local_6c;
    param_1[0xe] = (uint)local_68;
    uVar13 = param_4[0x22];
    param_1[9] = local_80;
    param_1[10] = local_7c;
    param_1[0xb] = uStack_78;
    uVar12 = 0;
    if (iVar15 != 2) {
      uVar12 = uVar13;
    }
    param_1[0xf] = uVar12;
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = (uint)puVar10;
    param_1[4] = (uint)ppuVar5;
    param_1[6] = (uint)ppuVar7;
    param_1[8] = (uint)puVar9;
    param_1[5] = (uint)ppiVar6;
    param_1[7] = (uint)pcVar8;
  }
  return;
}

