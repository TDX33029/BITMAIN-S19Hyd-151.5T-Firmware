// FUN_008b9b50 @ 008b9b50 size=2384 calls_out=7 calls_in=2
// strings: 

void FUN_008b9b50(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint *param_6)

{
  code *pcVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  bool bVar21;
  uint *local_50;
  uint *local_48;
  int local_44;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  uint uStack_28;
  
  if (0x20 < param_2) {
    local_50 = param_6;
    do {
      uVar19 = param_2;
      while( true ) {
        if (param_5 == 0) {
          FUN_008d491c(param_1,uVar19,param_3,param_4,1);
          return;
        }
        puVar4 = param_1 + (uVar19 >> 3) * 0x23;
        puVar2 = param_1 + (uVar19 >> 3) * 0x14;
        if (uVar19 < 0x40) {
          uVar6 = *puVar2;
          uVar7 = *param_1;
          puVar3 = puVar4;
          if (uVar7 < uVar6 == uVar6 < *puVar4) {
            puVar3 = puVar2;
          }
          if (uVar7 < uVar6 != uVar7 < *puVar4) {
            puVar3 = param_1;
          }
        }
        else {
          puVar3 = (uint *)FUN_008ba4cc(param_1,puVar2,puVar4);
        }
        param_5 = param_5 + -1;
        uVar6 = (uint)((int)puVar3 - (int)param_1) >> 2;
        uVar7 = uVar6 * -0x33333333;
        local_38 = *puVar3;
        uStack_34 = puVar3[1];
        uStack_30 = puVar3[2];
        local_2c = puVar3[3];
        uStack_28 = puVar3[4];
        if ((local_50 != (uint *)0x0) && (*puVar3 <= *local_50)) break;
        if (param_4 < uVar19) goto LAB_008ba488;
        puVar4 = param_3 + uVar19 * 5;
        puVar10 = param_1 + uVar6;
        puVar2 = param_1;
        param_2 = 0;
        uVar6 = uVar7;
        if (puVar10 <= param_1) goto LAB_008b9ecc;
LAB_008b9e90:
        do {
          puVar14 = puVar2 + 5;
          puVar4 = puVar4 + -5;
          uVar9 = param_2;
          puVar13 = puVar4;
          if (*puVar2 < *puVar3) {
            uVar9 = param_2 + 1;
            puVar13 = param_3;
          }
          puVar13 = puVar13 + param_2 * 5;
          uVar12 = puVar2[1];
          uVar16 = puVar2[2];
          uVar18 = puVar2[3];
          uVar11 = puVar2[4];
          *puVar13 = *puVar2;
          puVar13[1] = uVar12;
          puVar13[2] = uVar16;
          puVar13[3] = uVar18;
          puVar13[4] = uVar11;
          puVar2 = puVar14;
          param_2 = uVar9;
        } while (puVar14 < puVar10);
LAB_008b9ecc:
        if (uVar6 != uVar19) goto code_r0x008b9ee4;
        FUN_016dd1aa(param_1,param_3,param_2 * 0x14);
        iVar8 = uVar19 - param_2;
        if (iVar8 != 0) {
          puVar4 = param_3 + uVar19 * 5 + -5;
          puVar2 = param_1 + param_2 * 5;
          iVar5 = iVar8;
          do {
            uVar6 = *puVar4;
            uVar9 = puVar4[1];
            uVar12 = puVar4[2];
            uVar16 = puVar4[3];
            uVar18 = puVar4[4];
            puVar4 = puVar4 + -5;
            iVar5 = iVar5 + -1;
            *puVar2 = uVar6;
            puVar2[1] = uVar9;
            puVar2[2] = uVar12;
            puVar2[3] = uVar16;
            puVar2[4] = uVar18;
            puVar2 = puVar2 + 5;
          } while (iVar5 != 0);
        }
        if (param_2 == 0) break;
        if (uVar19 < param_2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
        }
        FUN_008b9b50(param_1 + param_2 * 5,iVar8,param_3,param_4,param_5,&local_38);
        uVar19 = param_2;
        if (param_2 < 0x21) goto LAB_008b9b78;
      }
      if (param_4 < uVar19) goto LAB_008ba488;
      uVar6 = 0;
      puVar2 = param_3 + uVar19 * 5;
      puVar4 = param_1;
      while( true ) {
        for (puVar10 = puVar4; puVar10 < param_1 + uVar7 * 5; puVar10 = puVar10 + 5) {
          puVar2 = puVar2 + -5;
          uVar9 = uVar6;
          puVar4 = puVar2;
          if (*puVar10 <= *puVar3) {
            uVar9 = uVar6 + 1;
            puVar4 = param_3;
          }
          puVar4 = puVar4 + uVar6 * 5;
          uVar6 = puVar10[1];
          uVar12 = puVar10[2];
          uVar16 = puVar10[3];
          uVar18 = puVar10[4];
          *puVar4 = *puVar10;
          puVar4[1] = uVar6;
          puVar4[2] = uVar12;
          puVar4[3] = uVar16;
          puVar4[4] = uVar18;
          uVar6 = uVar9;
        }
        if (uVar7 == uVar19) break;
        uVar7 = puVar10[1];
        uVar9 = puVar10[2];
        uVar12 = puVar10[3];
        uVar16 = puVar10[4];
        puVar4 = puVar10 + 5;
        puVar13 = param_3 + uVar6 * 5;
        uVar6 = uVar6 + 1;
        puVar2 = puVar2 + -5;
        *puVar13 = *puVar10;
        puVar13[1] = uVar7;
        puVar13[2] = uVar9;
        puVar13[3] = uVar12;
        puVar13[4] = uVar16;
        uVar7 = uVar19;
      }
      FUN_016dd1aa(param_1,param_3,uVar6 * 0x14);
      param_2 = uVar19 - uVar6;
      if (param_2 == 0) {
        return;
      }
      param_1 = param_1 + uVar6 * 5;
      puVar4 = param_3 + uVar19 * 5 + -5;
      puVar2 = param_1;
      uVar7 = param_2;
      do {
        uVar9 = *puVar4;
        uVar12 = puVar4[1];
        uVar16 = puVar4[2];
        uVar18 = puVar4[3];
        uVar11 = puVar4[4];
        puVar4 = puVar4 + -5;
        uVar7 = uVar7 - 1;
        *puVar2 = uVar9;
        puVar2[1] = uVar12;
        puVar2[2] = uVar16;
        puVar2[3] = uVar18;
        puVar2[4] = uVar11;
        puVar2 = puVar2 + 5;
      } while (uVar7 != 0);
      if (uVar19 < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar6,uVar19,uVar19,&DAT_018af348);
      }
      local_50 = (uint *)0x0;
    } while (0x20 < param_2);
  }
LAB_008b9b78:
  if (param_2 < 2) {
    return;
  }
  if (param_2 + 0x10 <= param_4) {
    uVar19 = param_2 >> 1;
    if (param_2 < 8) {
      uVar6 = param_1[1];
      uVar7 = param_1[2];
      uVar9 = param_1[3];
      uVar12 = param_1[4];
      *param_3 = *param_1;
      param_3[1] = uVar6;
      param_3[2] = uVar7;
      param_3[3] = uVar9;
      param_3[4] = uVar12;
      puVar4 = param_1 + uVar19 * 5;
      puVar2 = param_3 + uVar19 * 5;
      uVar6 = puVar4[1];
      uVar7 = puVar4[2];
      uVar9 = puVar4[3];
      uVar12 = puVar4[4];
      *puVar2 = *puVar4;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar9;
      puVar2[4] = uVar12;
      uVar6 = 1;
    }
    else {
      uVar7 = (uint)(*param_1 <= param_1[5]);
      uVar6 = (uint)(*param_1 > param_1[5]);
      iVar8 = 0x28;
      if (param_1[0xf] < param_1[10]) {
        iVar8 = 0x3c;
      }
      iVar5 = 0x3c;
      puVar2 = (uint *)((int)param_1 + iVar8);
      if (param_1[0xf] < param_1[10]) {
        iVar5 = 0x28;
      }
      puVar10 = (uint *)((int)param_1 + iVar5);
      puVar3 = param_1 + (uVar6 | uVar6 << 2);
      puVar13 = param_1 + (uVar7 | uVar7 << 2);
      puVar4 = puVar2;
      if (*puVar2 < *puVar3) {
        puVar4 = puVar13;
      }
      puVar17 = puVar13;
      puVar14 = puVar10;
      if (*puVar10 < *puVar13) {
        puVar17 = puVar2;
        puVar14 = puVar13;
        puVar4 = puVar10;
      }
      puVar10 = puVar3;
      if (*puVar2 < *puVar3) {
        puVar10 = puVar2;
        puVar17 = puVar3;
      }
      uVar6 = *puVar17;
      uVar9 = *puVar4;
      uVar7 = puVar10[1];
      uVar12 = puVar10[2];
      uVar16 = puVar10[3];
      uVar18 = puVar10[4];
      *param_3 = *puVar10;
      param_3[1] = uVar7;
      param_3[2] = uVar12;
      param_3[3] = uVar16;
      param_3[4] = uVar18;
      if (uVar9 < uVar6) {
        puVar2 = puVar17;
        puVar17 = puVar4;
      }
      else {
        puVar2 = puVar4;
      }
      uVar6 = puVar17[1];
      uVar7 = puVar17[2];
      uVar9 = puVar17[3];
      uVar12 = puVar17[4];
      param_3[5] = *puVar17;
      param_3[6] = uVar6;
      param_3[7] = uVar7;
      param_3[8] = uVar9;
      param_3[9] = uVar12;
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar9 = puVar2[3];
      uVar12 = puVar2[4];
      param_3[10] = *puVar2;
      param_3[0xb] = uVar6;
      param_3[0xc] = uVar7;
      param_3[0xd] = uVar9;
      param_3[0xe] = uVar12;
      uVar6 = puVar14[1];
      uVar7 = puVar14[2];
      uVar9 = puVar14[3];
      uVar12 = puVar14[4];
      param_3[0xf] = *puVar14;
      param_3[0x10] = uVar6;
      param_3[0x11] = uVar7;
      param_3[0x12] = uVar9;
      param_3[0x13] = uVar12;
      iVar5 = 0x3c;
      puVar2 = param_1 + uVar19 * 5;
      uVar7 = (uint)(puVar2[5] < *puVar2);
      uVar6 = (uint)(puVar2[5] >= *puVar2);
      iVar8 = 0x28;
      if (puVar2[0xf] < puVar2[10]) {
        iVar8 = 0x3c;
        iVar5 = 0x28;
      }
      puVar10 = (uint *)((int)puVar2 + iVar8);
      puVar13 = (uint *)((int)puVar2 + iVar5);
      puVar3 = puVar2 + (uVar7 | uVar7 << 2);
      puVar2 = puVar2 + (uVar6 | uVar6 << 2);
      puVar4 = puVar10;
      if (*puVar10 < *puVar3) {
        puVar4 = puVar2;
      }
      puVar14 = puVar13;
      if (*puVar13 < *puVar2) {
        puVar14 = puVar2;
        puVar4 = puVar13;
      }
      uVar6 = *puVar4;
      if (*puVar13 < *puVar2) {
        puVar2 = puVar10;
      }
      puVar13 = puVar3;
      if (*puVar10 < *puVar3) {
        puVar13 = puVar10;
        puVar2 = puVar3;
      }
      uVar7 = *puVar2;
      puVar3 = param_3 + uVar19 * 5;
      uVar9 = puVar13[1];
      uVar12 = puVar13[2];
      uVar16 = puVar13[3];
      uVar18 = puVar13[4];
      *puVar3 = *puVar13;
      puVar3[1] = uVar9;
      puVar3[2] = uVar12;
      puVar3[3] = uVar16;
      puVar3[4] = uVar18;
      if (uVar6 < uVar7) {
        puVar10 = puVar2;
        puVar2 = puVar4;
      }
      else {
        puVar10 = puVar4;
      }
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar9 = puVar2[3];
      uVar12 = puVar2[4];
      puVar3[5] = *puVar2;
      puVar3[6] = uVar6;
      puVar3[7] = uVar7;
      puVar3[8] = uVar9;
      puVar3[9] = uVar12;
      uVar6 = puVar10[1];
      uVar7 = puVar10[2];
      uVar9 = puVar10[3];
      uVar12 = puVar10[4];
      puVar3[10] = *puVar10;
      puVar3[0xb] = uVar6;
      puVar3[0xc] = uVar7;
      puVar3[0xd] = uVar9;
      puVar3[0xe] = uVar12;
      uVar6 = puVar14[1];
      uVar7 = puVar14[2];
      uVar9 = puVar14[3];
      uVar12 = puVar14[4];
      puVar3[0xf] = *puVar14;
      puVar3[0x10] = uVar6;
      puVar3[0x11] = uVar7;
      puVar3[0x12] = uVar9;
      puVar3[0x13] = uVar12;
      uVar6 = 4;
    }
    if (uVar6 < uVar19) {
      iVar8 = uVar6 * 0x14;
      uVar7 = uVar6;
      do {
        puVar4 = param_1 + uVar7 * 5;
        puVar2 = param_3 + uVar7 * 5;
        uVar9 = puVar4[1];
        uVar12 = puVar4[2];
        uVar16 = puVar4[3];
        uVar18 = puVar4[4];
        *puVar2 = *puVar4;
        puVar2[1] = uVar9;
        puVar2[2] = uVar12;
        puVar2[3] = uVar16;
        puVar2[4] = uVar18;
        uVar9 = param_3[uVar7 * 5];
        if (uVar9 < puVar2[-5]) {
          local_38 = puVar4[1];
          uStack_34 = puVar4[2];
          uStack_30 = puVar4[3];
          local_2c = puVar4[4];
          iVar5 = iVar8;
          do {
            puVar15 = (undefined4 *)((int)param_3 + iVar5);
            *puVar15 = puVar15[-5];
            puVar15[1] = puVar15[-4];
            puVar15[2] = puVar15[-3];
            puVar15[3] = puVar15[-2];
            puVar15[4] = puVar15[-1];
            if (iVar5 == 0x14) {
              puVar2 = param_3;
              goto LAB_008ba18c;
            }
            iVar5 = iVar5 + -0x14;
          } while (uVar9 < (uint)puVar15[-10]);
          puVar2 = (uint *)((int)param_3 + iVar5);
LAB_008ba18c:
          *puVar2 = uVar9;
          puVar2[1] = local_38;
          puVar2[2] = uStack_34;
          puVar2[3] = uStack_30;
          puVar2[4] = local_2c;
        }
        iVar8 = iVar8 + 0x14;
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar19);
    }
    puVar2 = param_3 + uVar19 * 5;
    if (uVar6 < param_2 - uVar19) {
      local_44 = 0x14;
      uVar7 = uVar6;
      local_48 = puVar2;
      do {
        puVar4 = param_1 + uVar19 * 5 + uVar7 * 5;
        puVar3 = puVar2 + uVar7 * 5;
        uVar9 = puVar4[1];
        uVar12 = puVar4[2];
        uVar16 = puVar4[3];
        uVar18 = puVar4[4];
        *puVar3 = *puVar4;
        puVar3[1] = uVar9;
        puVar3[2] = uVar12;
        puVar3[3] = uVar16;
        puVar3[4] = uVar18;
        uVar9 = puVar2[uVar7 * 5];
        if (uVar9 < puVar3[-5]) {
          local_38 = puVar4[1];
          uStack_34 = puVar4[2];
          uStack_30 = puVar4[3];
          local_2c = puVar4[4];
          puVar4 = local_48;
          iVar8 = local_44;
          do {
            puVar3 = puVar4 + uVar6 * 5;
            *puVar3 = puVar3[-5];
            puVar3[1] = puVar3[-4];
            puVar3[2] = puVar3[-3];
            puVar3[3] = puVar3[-2];
            puVar3[4] = puVar3[-1];
            if (uVar6 * 0x14 == iVar8) {
              puVar4 = puVar2;
              goto LAB_008ba26c;
            }
            iVar8 = iVar8 + 0x14;
            puVar4 = puVar4 + -5;
          } while (uVar9 < puVar3[-10]);
          puVar4 = puVar4 + uVar6 * 5;
LAB_008ba26c:
          *puVar4 = uVar9;
          puVar4[1] = local_38;
          puVar4[2] = uStack_34;
          puVar4[3] = uStack_30;
          puVar4[4] = local_2c;
        }
        uVar7 = uVar7 + 1;
        local_44 = local_44 + -0x14;
        local_48 = local_48 + 5;
      } while (uVar7 != param_2 - uVar19);
    }
    puVar3 = puVar2 + -5;
    iVar8 = 0;
    puVar4 = param_3 + param_2 * 5 + -5;
    do {
      bVar20 = *puVar2 < *param_3;
      puVar10 = param_3;
      if (bVar20) {
        puVar10 = puVar2;
      }
      puVar13 = (uint *)((int)param_1 + iVar8);
      uVar6 = puVar10[1];
      uVar7 = puVar10[2];
      uVar9 = puVar10[3];
      uVar12 = puVar10[4];
      *puVar13 = *puVar10;
      puVar13[1] = uVar6;
      puVar13[2] = uVar7;
      puVar13[3] = uVar9;
      puVar13[4] = uVar12;
      bVar21 = *puVar4 < *puVar3;
      puVar10 = puVar4;
      if (bVar21) {
        puVar10 = puVar3;
      }
      puVar13 = (uint *)((int)param_1 + ((param_2 * 0x14 + -0x14) - iVar8));
      uVar6 = puVar10[1];
      uVar7 = puVar10[2];
      uVar9 = puVar10[3];
      uVar12 = puVar10[4];
      iVar8 = iVar8 + 0x14;
      *puVar13 = *puVar10;
      puVar13[1] = uVar6;
      puVar13[2] = uVar7;
      puVar13[3] = uVar9;
      puVar13[4] = uVar12;
      param_3 = param_3 + ((uint)!bVar20 | (uint)!bVar20 << 2);
      puVar2 = puVar2 + ((uint)bVar20 | (uint)bVar20 << 2);
      iVar5 = 0;
      if (bVar21) {
        iVar5 = -1;
      }
      puVar3 = puVar3 + iVar5 * 5;
      iVar5 = 0;
      if (!bVar21) {
        iVar5 = -1;
      }
      uVar19 = uVar19 - 1;
      puVar4 = puVar4 + iVar5 * 5;
    } while (uVar19 != 0);
    puVar3 = puVar3 + 5;
    puVar10 = (uint *)(iVar5 * 5);
    puVar13 = puVar2;
    if ((param_2 & 1) != 0) {
      bVar20 = puVar3 <= param_3;
      puVar10 = puVar2;
      if (!bVar20) {
        puVar10 = param_3;
      }
      param_1 = (uint *)((int)param_1 + iVar8);
      uVar19 = puVar10[1];
      uVar6 = puVar10[2];
      uVar7 = puVar10[3];
      uVar9 = puVar10[4];
      *param_1 = *puVar10;
      param_1[1] = uVar19;
      param_1[2] = uVar6;
      param_1[3] = uVar7;
      param_1[4] = uVar9;
      puVar13 = puVar2 + ((uint)bVar20 | (uint)bVar20 << 2);
      param_3 = param_3 + ((uint)!bVar20 | (uint)!bVar20 << 2);
      puVar10 = puVar2;
    }
    if (param_3 == puVar3) {
      puVar10 = puVar4 + 5;
    }
    if (param_3 == puVar3 && puVar13 == puVar10) {
      return;
    }
    FUN_00fb7254();
  }
LAB_008ba488:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x8ba488);
  (*pcVar1)();
code_r0x008b9ee4:
  uVar6 = *puVar2;
  uVar9 = puVar2[1];
  uVar12 = puVar2[2];
  uVar16 = puVar2[3];
  uVar18 = puVar2[4];
  puVar4 = puVar4 + -5;
  puVar10 = puVar4 + param_2 * 5;
  puVar2 = puVar2 + 5;
  *puVar10 = uVar6;
  puVar10[1] = uVar9;
  puVar10[2] = uVar12;
  puVar10[3] = uVar16;
  puVar10[4] = uVar18;
  puVar10 = param_1 + uVar19 * 5;
  uVar6 = uVar19;
  if (puVar2 < puVar10) goto LAB_008b9e90;
  goto LAB_008b9ecc;
}

