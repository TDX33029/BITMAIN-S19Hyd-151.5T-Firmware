// FUN_0074e614 @ 0074e614 size=2036 calls_out=14 calls_in=2
// strings: BROADCASTPOINTOPOINTMULTICAST

void FUN_0074e614(undefined4 param_1)

{
  int iVar1;
  char ***pppcVar2;
  uint uVar3;
  int iVar4;
  int *****pppppiVar5;
  undefined4 *puVar6;
  char ****ppppcVar7;
  char ****ppppcVar8;
  int ****ppppiVar9;
  undefined4 uVar10;
  int *****pppppiVar11;
  int *****pppppiVar12;
  int *****pppppiVar13;
  undefined4 uVar14;
  int ****ppppiVar15;
  uint uVar16;
  uint uVar17;
  int *****pppppiVar18;
  int ****local_104;
  int ****local_fc;
  int ****local_f4;
  undefined1 auStack_c4 [4];
  int local_c0;
  int *****local_bc;
  int *****local_b8;
  int local_b4;
  int *****local_b0;
  int *****local_a8;
  int *****local_a4;
  int *****local_a0;
  int *****local_98;
  int *****local_94;
  int *****pppppiStack_90;
  int *****local_88;
  int *****local_84;
  int *****local_80;
  undefined1 local_78 [2];
  undefined1 auStack_76 [2];
  undefined4 local_74;
  int *****pppppiStack_70;
  char *****local_68 [2];
  int *****local_60;
  int *****local_5c;
  int *****local_58;
  code *local_54;
  char ****local_50;
  code *local_4c;
  char *****local_48;
  code *local_44;
  char *****local_40;
  code *local_3c;
  int local_38;
  code *local_34;
  int *****local_30;
  int *****local_2c;
  int *****local_28;
  
  FUN_01656528(auStack_c4);
  uVar10 = 0;
  iVar4 = (int)local_bc * 0xc;
  if ((int *****)0xaaaaaaa < local_bc) {
LAB_0074e648:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar10,iVar4);
  }
  pppppiVar13 = (int *****)0x0;
  if (iVar4 == 0) {
    iVar1 = 4;
    local_b8 = (int *****)0x0;
  }
  else {
    uVar10 = 4;
    iVar1 = FUN_01298504(iVar4,4);
    local_b8 = local_bc;
    if (iVar1 == 0) goto LAB_0074e648;
  }
  local_b0 = (int *****)0x0;
  local_b4 = iVar1;
  if (local_bc != (int *****)0x0) {
    pppppiVar11 = (int *****)0x0;
    pppppiVar18 = local_bc;
    do {
      ppppcVar8 = (char ****)((int)pppppiVar11 * 0x34 + local_c0);
      local_a0 = (int *****)0x0;
      local_a4 = (int *****)&DAT_00000001;
      local_a8 = (int *****)0x0;
      ppppcVar7 = ppppcVar8 + 10;
      pppcVar2 = *ppppcVar7;
      if (pppcVar2 != (char ***)0x0) {
        local_68[1] = (char *****)
                      (CONCAT31(CONCAT21(CONCAT11((char)((uint)pppcVar2 >> 0x10),
                                                  (char)(((uint)pppcVar2 & 0x3ffff) >> 0x11)),
                                         (char)(((uint)pppcVar2 & 0x7f) >> 6)),
                                (char)(((uint)pppcVar2 & 0x1fff) >> 0xc)) & 0x1ffffff);
        local_68[0] = (char *****)
                      (CONCAT31(CONCAT21(CONCAT11((char)(((uint)pppcVar2 & 0x1f) >> 4),
                                                  (char)(((uint)pppcVar2 & 0xf) >> 3)),
                                         (char)(((uint)pppcVar2 & 3) >> 1)),(char)pppcVar2) &
                      0xffffff01);
        uVar16 = 0;
LAB_0074e778:
        uVar3 = uVar16;
        if (uVar3 != 8) goto code_r0x0074e780;
        local_28 = (int *****)0x0;
        local_2c = (int *****)&SUB_00000004;
        local_30 = (int *****)0x0;
LAB_0074e974:
        pppppiVar13 = (int *****)local_78;
        FUN_01656f40(pppppiVar13,local_2c,local_28,",");
        local_54 = (code *)&LAB_00632348;
        local_5c = (int *****)FUN_012fdbc0;
        local_60 = (int *****)ppppcVar7;
        local_58 = pppppiVar13;
        FUN_00664898(&local_88,&DAT_005aa1a9,&local_60);
        FUN_0134bd64(_local_78,local_74);
        FUN_006a41c0(&local_30);
        local_98 = local_88;
        local_94 = local_84;
        pppppiStack_90 = local_80;
        pppppiVar18 = local_80;
        goto LAB_0074e9ec;
      }
      local_5c = (int *****)FUN_012fdbc0;
      local_60 = (int *****)ppppcVar7;
      FUN_00664898(&local_98,&DAT_00590e5f,&local_60);
LAB_0074e9ec:
      pppppiVar12 = (int *****)&DAT_80000000;
      if (((uint)ppppcVar8[0xb] & 1) != 0) {
        _local_78 = *(int ******)((int)ppppcVar8 + 0x2d);
        local_74 = (code *)CONCAT22(local_74._2_2_,*(undefined2 *)((int)ppppcVar8 + 0x31));
        local_28 = (int *****)0x0;
        local_2c = (int *****)&DAT_00000001;
        local_30 = (int *****)0x0;
        local_60 = (int *****)local_78;
        local_34 = FUN_012fd63c;
        local_3c = FUN_012fd63c;
        local_44 = FUN_012fd63c;
        local_4c = FUN_012fd63c;
        local_54 = FUN_012fd63c;
        local_5c = (int *****)FUN_012fd63c;
        local_58 = (int *****)(local_78 + 1);
        local_50 = (char ****)auStack_76;
        local_48 = (char *****)(auStack_76 + 1);
        local_40 = (char *****)&local_74;
        local_38 = (int)&local_74 + 1;
        iVar4 = FUN_012fa178(&local_30,&DAT_01d06be8,&DAT_004c1826,&local_60);
        if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533383,0x37,&local_60,&DAT_01d06c00,&DAT_01d30334);
        }
        pppppiVar12 = local_30;
        pppppiVar13 = local_2c;
        pppppiVar18 = local_28;
      }
      pppppiVar5 = (int *****)thunk_FUN_01be5118(3);
      if (pppppiVar5 == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,3);
      }
      *(undefined1 *)((int)pppppiVar5 + 2) = 0x41;
      *(undefined2 *)pppppiVar5 = 0x2f4e;
      if (pppppiVar12 == (int *****)&DAT_80000000) {
        local_80 = (int *****)&DAT_00000003;
        local_88 = (int *****)&DAT_00000003;
        local_84 = pppppiVar5;
      }
      else {
        local_88 = pppppiVar12;
        local_84 = pppppiVar13;
        local_80 = pppppiVar18;
        FUN_0134bd64(3);
      }
      pppppiVar18 = (int *****)ppppcVar8[8];
      if (pppppiVar18 == (int *****)0x0) {
        local_28 = (int *****)0x0;
        local_30 = (int *****)0x0;
        local_2c = (int *****)&DAT_00000001;
      }
      else {
        ppppiVar15 = (int ****)ppppcVar8[7];
        puVar6 = (undefined4 *)FUN_01298504((int)pppppiVar18 * 0xc,4);
        if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(4,(int)pppppiVar18 * 0xc);
        }
        pppppiVar13 = (int *****)0x0;
        local_28 = (int *****)0x0;
        local_30 = pppppiVar18;
        local_2c = (int *****)puVar6;
        do {
          _local_78 = (int *****)local_68;
          local_68[0] = (char *****)ppppiVar15;
          if (*(char *)ppppiVar15 == '\0') {
            local_74 = FUN_01656e60;
            FUN_00664898(&local_60,&DAT_005a0d53,local_78);
          }
          else {
            local_74 = FUN_01656e60;
            FUN_00664898(&local_60,&DAT_005a8ba3,local_78);
          }
          pppppiVar13 = (int *****)((int)pppppiVar13 + 1);
          *puVar6 = local_60;
          puVar6[1] = local_5c;
          puVar6[2] = local_58;
          puVar6 = puVar6 + 3;
          ppppiVar15 = (int ****)((int)ppppiVar15 + 0x12);
        } while (pppppiVar18 != pppppiVar13);
        local_60 = local_30;
        local_5c = local_2c;
        local_58 = pppppiVar18;
        local_28 = pppppiVar18;
        FUN_01656f40(&local_30,local_2c,pppppiVar18,"\n");
        local_68[1] = (char *****)&LAB_00632348;
        local_68[0] = (char *****)&local_30;
        FUN_00664898(local_78,&DAT_005ad29b,local_68);
        FUN_0134bd64(local_30,local_2c);
        FUN_006a41c0(&local_60);
        local_30 = _local_78;
        local_2c = (int *****)local_74;
        local_28 = pppppiStack_70;
      }
      local_40 = (char *****)&local_30;
      local_48 = (char *****)&local_88;
      local_50 = ppppcVar8 + 9;
      local_58 = (int *****)&local_98;
      local_3c = (code *)&LAB_00632348;
      local_44 = (code *)&LAB_00632348;
      local_54 = (code *)&LAB_00632348;
      local_4c = FUN_012fd02c;
      local_5c = (int *****)&LAB_00632348;
      local_60 = (int *****)ppppcVar8;
      iVar4 = FUN_012fa178(&local_a8,&DAT_01c08af8,&DAT_00595e32,&local_60);
      FUN_0134bd64(local_30,local_2c);
      FUN_0134bd64(local_88,local_84);
      FUN_0134bd64(local_98,local_94);
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,&local_60,&DAT_01c08b10,&DAT_01d30334);
      }
      local_60 = local_a8;
      local_5c = local_a4;
      local_58 = local_a0;
      pppppiVar12 = (int *****)((int)pppppiVar11 + 1);
      puVar6 = (undefined4 *)(iVar1 + (int)pppppiVar11 * 0xc);
      *puVar6 = local_a8;
      puVar6[1] = local_a4;
      puVar6[2] = local_a0;
      pppppiVar11 = pppppiVar12;
      pppppiVar18 = local_a0;
    } while (pppppiVar12 != local_bc);
    pppppiVar13 = local_bc;
  }
  local_60 = local_b8;
  local_5c = (int *****)local_b4;
  local_b0 = pppppiVar13;
  local_58 = pppppiVar13;
  FUN_018c9750(param_1,local_b4,pppppiVar13,&DAT_00420454,2);
  FUN_006a41c0(&local_60);
  FUN_016572d4(auStack_c4);
  return;
code_r0x0074e780:
  uVar16 = uVar3 + 1;
  if (*(char *)((int)local_68 + uVar3) == '\x01') goto code_r0x0074e794;
  goto LAB_0074e778;
code_r0x0074e794:
  uVar14 = 0;
  uVar10 = (&DAT_01d06c10)[uVar3 * 2];
  ppppiVar15 = (int ****)(&DAT_01d06c14)[uVar3 * 2];
  if ((int)ppppiVar15 < 0) {
LAB_0074ee00:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar14,local_f4);
  }
  if (ppppiVar15 == (int ****)0x0) {
    local_f4 = (int ****)0x1;
    ppppiVar9 = (int ****)0x0;
  }
  else {
    uVar14 = 1;
    local_f4 = (int ****)FUN_01298504(ppppiVar15,1);
    if (local_f4 == (int ****)0x0) {
      local_f4 = ppppiVar15;
      goto LAB_0074ee00;
    }
    ppppiVar9 = ppppiVar15;
  }
  FUN_01bed4e2(local_f4,uVar10,ppppiVar15);
  pppppiVar13 = (int *****)thunk_FUN_01be5118(0x30);
  if (pppppiVar13 == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(4,0x30);
  }
  *pppppiVar13 = ppppiVar9;
  pppppiVar13[1] = local_f4;
  pppppiVar13[2] = ppppiVar15;
  local_5c = pppppiVar13;
  local_58 = (int *****)&DAT_00000001;
  local_60 = (int *****)&SUB_00000004;
  while( true ) {
    pppppiVar18 = local_58;
    uVar3 = uVar16;
    if (uVar16 < 9) {
      uVar3 = 8;
    }
    do {
      uVar17 = uVar16;
      if (uVar3 == uVar17) {
        local_30 = local_60;
        local_2c = local_5c;
        local_28 = local_58;
        goto LAB_0074e974;
      }
      uVar16 = uVar17 + 1;
    } while (*(char *)((int)local_68 + uVar17) != '\x01');
    uVar14 = 0;
    uVar10 = (&DAT_01d06c10)[uVar17 * 2];
    ppppiVar15 = (int ****)(&DAT_01d06c14)[uVar17 * 2];
    if ((int)ppppiVar15 < 0) break;
    if (ppppiVar15 == (int ****)0x0) {
      local_104 = (int ****)0x0;
      local_fc = (int ****)0x1;
    }
    else {
      uVar14 = 1;
      local_fc = (int ****)FUN_01298504(ppppiVar15,1);
      if (local_fc == (int ****)0x0) {
        local_fc = ppppiVar15;
        break;
      }
      local_104 = ppppiVar15;
    }
    FUN_01bed4e2(local_fc,uVar10,ppppiVar15);
    if (pppppiVar18 == local_60) {
      FUN_006520b4(&local_60,pppppiVar18,1,4,0xc);
      pppppiVar13 = local_5c;
    }
    pppppiVar12 = pppppiVar13 + (int)pppppiVar18 * 3;
    *pppppiVar12 = local_104;
    pppppiVar12[1] = local_fc;
    pppppiVar12[2] = ppppiVar15;
    local_58 = (int *****)((int)pppppiVar18 + 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar14,local_fc);
}

