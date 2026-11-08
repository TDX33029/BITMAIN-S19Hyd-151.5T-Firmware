// FUN_00b78540 @ 00b78540 size=2452 calls_out=7 calls_in=2
// strings: 

void FUN_00b78540(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint *param_6)

{
  code *pcVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  bool bVar22;
  uint *local_5c;
  uint *local_58;
  int local_54;
  uint local_44;
  uint local_40 [2];
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  if (0x20 < param_2) {
    local_5c = param_6;
    do {
      uVar2 = param_2;
      while( true ) {
        if (param_5 == 0) {
          FUN_00b77eec(param_1,uVar2,param_3,param_4,1);
          return;
        }
        puVar5 = param_1 + (uVar2 >> 3) * 0x2a;
        puVar6 = param_1 + (uVar2 >> 3) * 0x18;
        if (uVar2 < 0x40) {
          uVar8 = *puVar6;
          uVar11 = *param_1;
          puVar3 = puVar5;
          if (uVar11 < uVar8 == uVar8 < *puVar5) {
            puVar3 = puVar6;
          }
          if (uVar11 < uVar8 != uVar11 < *puVar5) {
            puVar3 = param_1;
          }
        }
        else {
          puVar3 = (uint *)FUN_00b78f00(param_1,puVar6,puVar5);
        }
        param_5 = param_5 + -1;
        local_38 = puVar3[2];
        uStack_34 = puVar3[3];
        uStack_30 = puVar3[4];
        uStack_2c = puVar3[5];
        uVar8 = ((uint)((int)puVar3 - (int)param_1) >> 3) * -0x55555555;
        local_40[0] = *puVar3;
        if ((local_5c != (uint *)0x0) && (local_40[0] <= *local_5c)) break;
        if (param_4 < uVar2) goto LAB_00b78ebc;
        param_2 = 0;
        puVar6 = param_3 + uVar2 * 6;
        puVar5 = param_1;
        uVar11 = uVar8;
        while( true ) {
          for (puVar4 = puVar5; puVar4 < param_1 + uVar11 * 6; puVar4 = puVar4 + 6) {
            puVar6 = puVar6 + -6;
            uVar16 = param_2;
            puVar5 = puVar6;
            if (*puVar4 < *puVar3) {
              uVar16 = param_2 + 1;
              puVar5 = param_3;
            }
            puVar5 = puVar5 + param_2 * 6;
            uVar18 = puVar4[1];
            uVar19 = puVar4[2];
            uVar20 = puVar4[3];
            uVar12 = puVar4[4];
            uVar15 = puVar4[5];
            *puVar5 = *puVar4;
            puVar5[1] = uVar18;
            puVar5[2] = uVar19;
            puVar5[3] = uVar20;
            puVar5[4] = uVar12;
            puVar5[5] = uVar15;
            param_2 = uVar16;
          }
          if (uVar11 == uVar2) break;
          puVar6 = puVar6 + -6;
          puVar17 = puVar6 + param_2 * 6;
          uVar11 = puVar4[1];
          uVar16 = puVar4[2];
          uVar18 = puVar4[3];
          uVar19 = puVar4[4];
          uVar20 = puVar4[5];
          puVar5 = puVar4 + 6;
          *puVar17 = *puVar4;
          puVar17[1] = uVar11;
          puVar17[2] = uVar16;
          puVar17[3] = uVar18;
          puVar17[4] = uVar19;
          puVar17[5] = uVar20;
          uVar11 = uVar2;
        }
        FUN_016dd1aa(param_1,param_3,param_2 * 0x18);
        iVar7 = uVar2 - param_2;
        if (iVar7 != 0) {
          puVar5 = param_3 + uVar2 * 6 + -6;
          puVar6 = param_1 + param_2 * 6;
          iVar9 = iVar7;
          do {
            uVar11 = *puVar5;
            uVar16 = puVar5[1];
            uVar18 = puVar5[2];
            uVar19 = puVar5[3];
            uVar20 = puVar5[4];
            uVar12 = puVar5[5];
            puVar5 = puVar5 + -6;
            iVar9 = iVar9 + -1;
            *puVar6 = uVar11;
            puVar6[1] = uVar16;
            puVar6[2] = uVar18;
            puVar6[3] = uVar19;
            puVar6[4] = uVar20;
            puVar6[5] = uVar12;
            puVar6 = puVar6 + 6;
          } while (iVar9 != 0);
        }
        if (param_2 == 0) break;
        if (uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
        }
        FUN_00b78540(param_1 + param_2 * 6,iVar7,param_3,param_4,param_5,local_40);
        uVar2 = param_2;
        if (param_2 < 0x21) goto LAB_00b78560;
      }
      if (param_4 < uVar2) goto LAB_00b78ebc;
      uVar11 = 0;
      puVar6 = param_3 + uVar2 * 6;
      puVar5 = param_1;
      while( true ) {
        for (puVar4 = puVar5; puVar4 < param_1 + uVar8 * 6; puVar4 = puVar4 + 6) {
          puVar6 = puVar6 + -6;
          uVar16 = uVar11;
          puVar5 = puVar6;
          if (*puVar4 <= *puVar3) {
            uVar16 = uVar11 + 1;
            puVar5 = param_3;
          }
          puVar5 = puVar5 + uVar11 * 6;
          uVar11 = puVar4[1];
          uVar18 = puVar4[2];
          uVar19 = puVar4[3];
          uVar20 = puVar4[4];
          uVar12 = puVar4[5];
          *puVar5 = *puVar4;
          puVar5[1] = uVar11;
          puVar5[2] = uVar18;
          puVar5[3] = uVar19;
          puVar5[4] = uVar20;
          puVar5[5] = uVar12;
          uVar11 = uVar16;
        }
        if (uVar8 == uVar2) break;
        puVar17 = param_3 + uVar11 * 6;
        uVar8 = puVar4[1];
        uVar16 = puVar4[2];
        uVar18 = puVar4[3];
        uVar19 = puVar4[4];
        uVar20 = puVar4[5];
        puVar5 = puVar4 + 6;
        uVar11 = uVar11 + 1;
        puVar6 = puVar6 + -6;
        *puVar17 = *puVar4;
        puVar17[1] = uVar8;
        puVar17[2] = uVar16;
        puVar17[3] = uVar18;
        puVar17[4] = uVar19;
        puVar17[5] = uVar20;
        uVar8 = uVar2;
      }
      FUN_016dd1aa(param_1,param_3,uVar11 * 0x18);
      param_2 = uVar2 - uVar11;
      if (param_2 == 0) {
        return;
      }
      param_1 = param_1 + uVar11 * 6;
      puVar5 = param_3 + uVar2 * 6 + -6;
      puVar6 = param_1;
      uVar8 = param_2;
      do {
        uVar16 = *puVar5;
        uVar18 = puVar5[1];
        uVar19 = puVar5[2];
        uVar20 = puVar5[3];
        uVar12 = puVar5[4];
        uVar15 = puVar5[5];
        puVar5 = puVar5 + -6;
        uVar8 = uVar8 - 1;
        *puVar6 = uVar16;
        puVar6[1] = uVar18;
        puVar6[2] = uVar19;
        puVar6[3] = uVar20;
        puVar6[4] = uVar12;
        puVar6[5] = uVar15;
        puVar6 = puVar6 + 6;
      } while (uVar8 != 0);
      if (uVar2 < uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar11,uVar2,uVar2,&DAT_018af348);
      }
      local_5c = (uint *)0x0;
    } while (0x20 < param_2);
  }
LAB_00b78560:
  local_44 = param_2 >> 1;
  if (local_44 != 0) {
    if (param_2 < 8) {
      uVar2 = param_1[1];
      uVar8 = param_1[2];
      uVar11 = param_1[3];
      uVar16 = param_1[4];
      uVar18 = param_1[5];
      *param_3 = *param_1;
      param_3[1] = uVar2;
      param_3[2] = uVar8;
      param_3[3] = uVar11;
      param_3[4] = uVar16;
      param_3[5] = uVar18;
      puVar5 = param_1 + local_44 * 6;
      puVar6 = param_3 + local_44 * 6;
      uVar2 = puVar5[1];
      uVar8 = puVar5[2];
      uVar11 = puVar5[3];
      uVar16 = puVar5[4];
      uVar18 = puVar5[5];
      *puVar6 = *puVar5;
      puVar6[1] = uVar2;
      puVar6[2] = uVar8;
      puVar6[3] = uVar11;
      puVar6[4] = uVar16;
      puVar6[5] = uVar18;
      uVar2 = 1;
    }
    else {
      iVar9 = 0x30;
      uVar8 = (uint)(param_1[6] < *param_1);
      uVar2 = (uint)(param_1[6] >= *param_1);
      iVar7 = 0x48;
      if (param_1[0x12] < param_1[0xc]) {
        iVar7 = 0x30;
        iVar9 = 0x48;
      }
      puVar17 = (uint *)((int)param_1 + iVar7);
      puVar3 = param_1 + (uVar8 | uVar8 << 1) * 2;
      puVar5 = (uint *)((int)param_1 + iVar9);
      puVar4 = param_1 + (uVar2 | uVar2 << 1) * 2;
      puVar6 = puVar5;
      if (*puVar5 < *puVar3) {
        puVar6 = puVar4;
      }
      puVar14 = puVar4;
      puVar10 = puVar17;
      if (*puVar17 < *puVar4) {
        puVar14 = puVar5;
        puVar10 = puVar4;
        puVar6 = puVar17;
      }
      uVar2 = *puVar6;
      puVar4 = puVar3;
      if (*puVar5 < *puVar3) {
        puVar4 = puVar5;
        puVar14 = puVar3;
      }
      uVar8 = *puVar14;
      uVar11 = puVar4[1];
      uVar16 = puVar4[2];
      uVar18 = puVar4[3];
      uVar19 = puVar4[4];
      uVar20 = puVar4[5];
      *param_3 = *puVar4;
      param_3[1] = uVar11;
      param_3[2] = uVar16;
      param_3[3] = uVar18;
      param_3[4] = uVar19;
      param_3[5] = uVar20;
      if (uVar2 < uVar8) {
        puVar5 = puVar14;
        puVar14 = puVar6;
      }
      else {
        puVar5 = puVar6;
      }
      uVar2 = puVar14[1];
      uVar8 = puVar14[2];
      uVar11 = puVar14[3];
      uVar16 = puVar14[4];
      uVar18 = puVar14[5];
      param_3[6] = *puVar14;
      param_3[7] = uVar2;
      param_3[8] = uVar8;
      param_3[9] = uVar11;
      param_3[10] = uVar16;
      param_3[0xb] = uVar18;
      uVar2 = puVar5[1];
      uVar8 = puVar5[2];
      uVar11 = puVar5[3];
      uVar16 = puVar5[4];
      uVar18 = puVar5[5];
      param_3[0xc] = *puVar5;
      param_3[0xd] = uVar2;
      param_3[0xe] = uVar8;
      param_3[0xf] = uVar11;
      param_3[0x10] = uVar16;
      param_3[0x11] = uVar18;
      uVar2 = puVar10[1];
      uVar8 = puVar10[2];
      uVar11 = puVar10[3];
      uVar16 = puVar10[4];
      uVar18 = puVar10[5];
      param_3[0x12] = *puVar10;
      param_3[0x13] = uVar2;
      param_3[0x14] = uVar8;
      param_3[0x15] = uVar11;
      param_3[0x16] = uVar16;
      param_3[0x17] = uVar18;
      puVar6 = param_1 + local_44 * 6;
      uVar8 = (uint)(puVar6[6] < *puVar6);
      uVar2 = (uint)(puVar6[6] >= *puVar6);
      iVar7 = 0x30;
      if (puVar6[0x12] < puVar6[0xc]) {
        iVar7 = 0x48;
      }
      iVar9 = 0x48;
      puVar5 = (uint *)((int)puVar6 + iVar7);
      if (puVar6[0x12] < puVar6[0xc]) {
        iVar9 = 0x30;
      }
      puVar4 = puVar6 + (uVar8 | uVar8 << 1) * 2;
      puVar17 = (uint *)((int)puVar6 + iVar9);
      puVar6 = puVar6 + (uVar2 | uVar2 << 1) * 2;
      puVar3 = puVar5;
      if (*puVar5 < *puVar4) {
        puVar3 = puVar6;
      }
      puVar10 = puVar17;
      if (*puVar17 < *puVar6) {
        puVar10 = puVar6;
        puVar3 = puVar17;
      }
      uVar2 = *puVar3;
      if (*puVar17 < *puVar6) {
        puVar6 = puVar5;
      }
      puVar17 = puVar4;
      if (*puVar5 < *puVar4) {
        puVar17 = puVar5;
        puVar6 = puVar4;
      }
      puVar5 = param_3 + local_44 * 6;
      uVar16 = *puVar6;
      uVar8 = puVar17[1];
      uVar11 = puVar17[2];
      uVar18 = puVar17[3];
      uVar19 = puVar17[4];
      uVar20 = puVar17[5];
      *puVar5 = *puVar17;
      puVar5[1] = uVar8;
      puVar5[2] = uVar11;
      puVar5[3] = uVar18;
      puVar5[4] = uVar19;
      puVar5[5] = uVar20;
      if (uVar2 < uVar16) {
        puVar4 = puVar6;
        puVar6 = puVar3;
      }
      else {
        puVar4 = puVar3;
      }
      uVar2 = puVar6[1];
      uVar8 = puVar6[2];
      uVar11 = puVar6[3];
      uVar16 = puVar6[4];
      uVar18 = puVar6[5];
      puVar5[6] = *puVar6;
      puVar5[7] = uVar2;
      puVar5[8] = uVar8;
      puVar5[9] = uVar11;
      puVar5[10] = uVar16;
      puVar5[0xb] = uVar18;
      uVar2 = puVar4[1];
      uVar8 = puVar4[2];
      uVar11 = puVar4[3];
      uVar16 = puVar4[4];
      uVar18 = puVar4[5];
      puVar5[0xc] = *puVar4;
      puVar5[0xd] = uVar2;
      puVar5[0xe] = uVar8;
      puVar5[0xf] = uVar11;
      puVar5[0x10] = uVar16;
      puVar5[0x11] = uVar18;
      uVar2 = puVar10[1];
      uVar8 = puVar10[2];
      uVar11 = puVar10[3];
      uVar16 = puVar10[4];
      uVar18 = puVar10[5];
      puVar5[0x12] = *puVar10;
      puVar5[0x13] = uVar2;
      puVar5[0x14] = uVar8;
      puVar5[0x15] = uVar11;
      puVar5[0x16] = uVar16;
      puVar5[0x17] = uVar18;
      uVar2 = 4;
    }
    if (uVar2 < local_44) {
      iVar7 = uVar2 * 0x18;
      uVar8 = uVar2;
      do {
        puVar5 = param_1 + uVar8 * 6;
        puVar6 = param_3 + uVar8 * 6;
        uVar11 = puVar5[1];
        uVar16 = puVar5[2];
        uVar18 = puVar5[3];
        uVar19 = puVar5[4];
        uVar20 = puVar5[5];
        *puVar6 = *puVar5;
        puVar6[1] = uVar11;
        puVar6[2] = uVar16;
        puVar6[3] = uVar18;
        puVar6[4] = uVar19;
        puVar6[5] = uVar20;
        uVar11 = param_3[uVar8 * 6];
        if (uVar11 < puVar6[-6]) {
          uVar16 = puVar6[2];
          uVar18 = puVar6[3];
          uVar19 = puVar6[4];
          uVar20 = puVar6[5];
          iVar9 = iVar7;
          do {
            puVar13 = (undefined4 *)((int)param_3 + iVar9);
            *puVar13 = puVar13[-6];
            puVar13[1] = puVar13[-5];
            puVar13[2] = puVar13[-4];
            puVar13[3] = puVar13[-3];
            puVar13[4] = puVar13[-2];
            puVar13[5] = puVar13[-1];
            if (iVar9 == 0x18) {
              puVar6 = param_3;
              goto LAB_00b78b58;
            }
            iVar9 = iVar9 + -0x18;
          } while (uVar11 < (uint)puVar13[-0xc]);
          puVar6 = (uint *)((int)param_3 + iVar9);
LAB_00b78b58:
          puVar6[2] = uVar16;
          puVar6[3] = uVar18;
          puVar6[4] = uVar19;
          *puVar6 = uVar11;
          puVar6[5] = uVar20;
        }
        iVar7 = iVar7 + 0x18;
        uVar8 = uVar8 + 1;
      } while (uVar8 != local_44);
    }
    puVar6 = param_3 + local_44 * 6;
    if (uVar2 < param_2 - local_44) {
      local_54 = 0x18;
      uVar8 = uVar2;
      local_58 = puVar6;
      do {
        puVar3 = param_1 + local_44 * 6 + uVar8 * 6;
        puVar5 = puVar6 + uVar8 * 6;
        uVar11 = puVar3[1];
        uVar16 = puVar3[2];
        uVar18 = puVar3[3];
        uVar19 = puVar3[4];
        uVar20 = puVar3[5];
        *puVar5 = *puVar3;
        puVar5[1] = uVar11;
        puVar5[2] = uVar16;
        puVar5[3] = uVar18;
        puVar5[4] = uVar19;
        puVar5[5] = uVar20;
        uVar11 = puVar6[uVar8 * 6];
        if (uVar11 < puVar5[-6]) {
          uVar16 = puVar5[2];
          uVar18 = puVar5[3];
          uVar19 = puVar5[4];
          uVar20 = puVar5[5];
          iVar7 = local_54;
          puVar5 = local_58;
          do {
            puVar3 = puVar5 + uVar2 * 6;
            *puVar3 = puVar3[-6];
            puVar3[1] = puVar3[-5];
            puVar3[2] = puVar3[-4];
            puVar3[3] = puVar3[-3];
            puVar3[4] = puVar3[-2];
            puVar3[5] = puVar3[-1];
            if (uVar2 * 0x18 == iVar7) {
              puVar5 = puVar6;
              goto LAB_00b78c78;
            }
            iVar7 = iVar7 + 0x18;
            puVar5 = puVar5 + -6;
          } while (uVar11 < puVar3[-0xc]);
          puVar5 = puVar5 + uVar2 * 6;
LAB_00b78c78:
          puVar5[2] = uVar16;
          puVar5[3] = uVar18;
          puVar5[4] = uVar19;
          *puVar5 = uVar11;
          puVar5[5] = uVar20;
        }
        local_54 = local_54 + -0x18;
        uVar8 = uVar8 + 1;
        local_58 = local_58 + 6;
      } while (uVar8 != param_2 - local_44);
    }
    puVar3 = puVar6 + -6;
    iVar7 = 0;
    puVar5 = param_3 + param_2 * 6 + -6;
    do {
      bVar21 = *puVar6 < *param_3;
      puVar4 = param_3;
      if (bVar21) {
        puVar4 = puVar6;
      }
      puVar17 = (uint *)((int)param_1 + iVar7);
      uVar2 = puVar4[1];
      uVar8 = puVar4[2];
      uVar11 = puVar4[3];
      uVar16 = puVar4[4];
      uVar18 = puVar4[5];
      *puVar17 = *puVar4;
      puVar17[1] = uVar2;
      puVar17[2] = uVar8;
      puVar17[3] = uVar11;
      puVar17[4] = uVar16;
      puVar17[5] = uVar18;
      bVar22 = *puVar5 < *puVar3;
      puVar4 = puVar5;
      if (bVar22) {
        puVar4 = puVar3;
      }
      puVar17 = (uint *)((int)param_1 + ((param_2 * 0x18 + -0x18) - iVar7));
      uVar2 = puVar4[1];
      uVar8 = puVar4[2];
      uVar11 = puVar4[3];
      uVar16 = puVar4[4];
      uVar18 = puVar4[5];
      iVar7 = iVar7 + 0x18;
      *puVar17 = *puVar4;
      puVar17[1] = uVar2;
      puVar17[2] = uVar8;
      puVar17[3] = uVar11;
      puVar17[4] = uVar16;
      puVar17[5] = uVar18;
      param_3 = param_3 + ((uint)!bVar21 | (uint)!bVar21 << 1) * 2;
      puVar6 = puVar6 + ((uint)bVar21 | (uint)bVar21 << 1) * 2;
      iVar9 = 0;
      if (bVar22) {
        iVar9 = -1;
      }
      puVar3 = puVar3 + iVar9 * 6;
      iVar9 = 0;
      if (!bVar22) {
        iVar9 = -1;
      }
      puVar5 = puVar5 + iVar9 * 6;
      local_44 = local_44 - 1;
    } while (local_44 != 0);
    puVar3 = puVar3 + 6;
    puVar4 = (uint *)0x0;
    if ((param_2 & 1) != 0) {
      bVar21 = puVar3 <= param_3;
      puVar4 = puVar6;
      if (!bVar21) {
        puVar4 = param_3;
      }
      param_1 = (uint *)((int)param_1 + iVar7);
      uVar2 = puVar4[1];
      uVar8 = puVar4[2];
      uVar11 = puVar4[3];
      uVar16 = puVar4[4];
      uVar18 = puVar4[5];
      *param_1 = *puVar4;
      param_1[1] = uVar2;
      param_1[2] = uVar8;
      param_1[3] = uVar11;
      param_1[4] = uVar16;
      param_1[5] = uVar18;
      puVar4 = (uint *)((uint)!bVar21 | (uint)!bVar21 << 1);
      puVar6 = puVar6 + ((uint)bVar21 | (uint)bVar21 << 1) * 2;
      param_3 = param_3 + (int)puVar4 * 2;
    }
    if (param_3 == puVar3) {
      puVar4 = puVar5 + 6;
    }
    if (param_3 != puVar3 || puVar6 != puVar4) {
      FUN_00fb7254();
LAB_00b78ebc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xb78ebc);
      (*pcVar1)();
    }
  }
  return;
}

