// FUN_0060e59c @ 0060e59c size=2876 calls_out=8 calls_in=2
// strings: 

void FUN_0060e59c(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint *param_6)

{
  code *pcVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  uint uVar20;
  bool bVar21;
  int iVar22;
  uint uVar23;
  uint *puVar24;
  bool bVar25;
  int local_6c;
  uint *local_68;
  uint *local_64;
  uint *local_60;
  uint local_58;
  int local_54;
  uint *local_50;
  uint local_4c;
  uint local_44;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  local_50 = param_1;
  if (0x20 < param_2) {
    local_60 = param_6;
    uVar4 = param_2;
LAB_0060e63c:
    do {
      if (param_5 == 0) {
        FUN_0060d29c(local_50,uVar4,param_3,param_4,1);
        return;
      }
      puVar17 = local_50 + (uVar4 >> 3) * 0x2a;
      puVar2 = local_50 + (uVar4 >> 3) * 0x18;
      if (uVar4 < 0x40) {
        uVar6 = puVar2[4];
        uVar12 = local_50[4];
        uVar9 = puVar2[1];
        uVar5 = *local_50;
        uVar7 = local_50[1];
        puVar18 = local_50;
        if (uVar12 < uVar6) {
          local_44 = *puVar17;
          local_4c = puVar17[1];
          uVar10 = puVar17[4];
          bVar21 = true;
          if ((uVar12 < uVar10) ||
             ((uVar12 <= uVar10 &&
              (uVar7 <= local_4c && (uint)(local_44 <= uVar5) <= uVar7 - local_4c))))
          goto LAB_0060e784;
        }
        else {
          local_44 = *puVar17;
          local_4c = puVar17[1];
          uVar10 = puVar17[4];
          bVar25 = uVar12 <= uVar6 && (uVar7 <= uVar9 && (uint)(*puVar2 <= uVar5) <= uVar7 - uVar9);
          if (uVar12 < uVar10) {
            bVar21 = true;
            if (bVar25) goto LAB_0060e784;
          }
          else {
            bVar21 = bVar25;
            if (bVar25 == (uVar12 == uVar10 &&
                          (uVar7 <= local_4c && (uint)(local_44 <= uVar5) <= uVar7 - local_4c))) {
LAB_0060e784:
              bVar25 = true;
              if (uVar10 <= uVar6) {
                bVar25 = uVar6 == uVar10 &&
                         (uVar9 <= local_4c && (uint)(local_44 <= *puVar2) <= uVar9 - local_4c);
              }
              if (bVar21 != bVar25) {
                puVar2 = puVar17;
              }
              puVar18 = puVar2;
            }
          }
        }
      }
      else {
        puVar18 = (uint *)FUN_00618ff0(local_50);
      }
      param_5 = param_5 + -1;
      uVar12 = ((uint)((int)puVar18 - (int)local_50) >> 3) * -0x55555555;
      local_40 = *puVar18;
      uStack_3c = puVar18[1];
      uStack_38 = puVar18[2];
      uStack_34 = puVar18[3];
      uStack_30 = puVar18[4];
      uStack_2c = puVar18[5];
      if (local_60 == (uint *)0x0) {
LAB_0060e838:
        if (param_4 < uVar4) goto LAB_0060f0c0;
        param_2 = 0;
        puVar17 = param_3 + uVar4 * 6;
        puVar2 = local_50;
        uVar5 = uVar12;
        while( true ) {
          for (; puVar2 < local_50 + uVar5 * 6; puVar2 = puVar2 + 6) {
            puVar17 = puVar17 + -6;
            if (puVar2[4] < puVar18[4]) {
              uVar6 = 1;
              puVar3 = param_3;
            }
            else {
              uVar6 = (uint)(puVar2[4] <= puVar18[4] &&
                            (puVar2[1] <= puVar18[1] &&
                            (uint)(*puVar18 <= *puVar2) <= puVar2[1] - puVar18[1]));
              puVar3 = puVar17;
              if (uVar6 != 0) {
                puVar3 = param_3;
              }
            }
            puVar3 = puVar3 + param_2 * 6;
            uVar7 = puVar2[1];
            uVar9 = puVar2[2];
            uVar10 = puVar2[3];
            uVar23 = puVar2[4];
            uVar8 = puVar2[5];
            *puVar3 = *puVar2;
            puVar3[1] = uVar7;
            puVar3[2] = uVar9;
            puVar3[3] = uVar10;
            puVar3[4] = uVar23;
            puVar3[5] = uVar8;
            param_2 = uVar6 + param_2;
          }
          if (uVar5 == uVar4) break;
          puVar17 = puVar17 + -6;
          uVar5 = *puVar2;
          uVar6 = puVar2[1];
          uVar7 = puVar2[2];
          uVar9 = puVar2[3];
          uVar10 = puVar2[4];
          uVar23 = puVar2[5];
          puVar3 = puVar17 + param_2 * 6;
          puVar2 = puVar2 + 6;
          *puVar3 = uVar5;
          puVar3[1] = uVar6;
          puVar3[2] = uVar7;
          puVar3[3] = uVar9;
          puVar3[4] = uVar10;
          puVar3[5] = uVar23;
          uVar5 = uVar4;
        }
        FUN_016dd1aa(local_50,param_3,param_2 * 0x18);
        iVar14 = uVar4 - param_2;
        if (iVar14 != 0) {
          puVar17 = param_3 + uVar4 * 6 + -6;
          puVar2 = local_50 + param_2 * 6;
          iVar22 = iVar14;
          do {
            uVar5 = *puVar17;
            uVar6 = puVar17[1];
            uVar7 = puVar17[2];
            uVar9 = puVar17[3];
            uVar10 = puVar17[4];
            uVar23 = puVar17[5];
            puVar17 = puVar17 + -6;
            iVar22 = iVar22 + -1;
            *puVar2 = uVar5;
            puVar2[1] = uVar6;
            puVar2[2] = uVar7;
            puVar2[3] = uVar9;
            puVar2[4] = uVar10;
            puVar2[5] = uVar23;
            puVar2 = puVar2 + 6;
          } while (iVar22 != 0);
        }
        if (param_2 != 0) {
          if (uVar4 < param_2) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
          }
          FUN_0060e59c(local_50 + param_2 * 6,iVar14,param_3,param_4,param_5,&local_40);
          uVar4 = param_2;
          if (param_2 < 0x21) break;
          goto LAB_0060e63c;
        }
      }
      else if ((local_60[4] < puVar18[4]) ||
              ((local_60[4] <= puVar18[4] &&
               (local_60[1] <= puVar18[1] &&
                (uint)(*puVar18 <= *local_60) <= local_60[1] - puVar18[1])))) goto LAB_0060e838;
      if (param_4 < uVar4) goto LAB_0060f0c0;
      uVar5 = 0;
      puVar17 = param_3 + uVar4 * 6;
      puVar2 = local_50;
      while( true ) {
        uVar6 = uVar5;
        for (puVar3 = puVar2; puVar3 < local_50 + uVar12 * 6; puVar3 = puVar3 + 6) {
          puVar17 = puVar17 + -6;
          puVar2 = puVar17;
          if (puVar18[4] < puVar3[4]) {
            uVar5 = 0;
          }
          else {
            uVar5 = (uint)(puVar3[4] < puVar18[4] ||
                          (puVar3[1] < puVar18[1] ||
                          puVar18[1] - puVar3[1] < (uint)(*puVar3 <= *puVar18)));
            if (uVar5 != 0) {
              puVar2 = param_3;
            }
          }
          puVar2 = puVar2 + uVar6 * 6;
          uVar7 = puVar3[1];
          uVar9 = puVar3[2];
          uVar10 = puVar3[3];
          uVar23 = puVar3[4];
          uVar8 = puVar3[5];
          *puVar2 = *puVar3;
          puVar2[1] = uVar7;
          puVar2[2] = uVar9;
          puVar2[3] = uVar10;
          puVar2[4] = uVar23;
          puVar2[5] = uVar8;
          uVar6 = uVar5 + uVar6;
        }
        if (uVar12 == uVar4) break;
        puVar2 = puVar3 + 6;
        uVar5 = uVar6 + 1;
        puVar15 = param_3 + uVar6 * 6;
        uVar12 = puVar3[1];
        uVar6 = puVar3[2];
        uVar7 = puVar3[3];
        uVar9 = puVar3[4];
        uVar10 = puVar3[5];
        puVar17 = puVar17 + -6;
        *puVar15 = *puVar3;
        puVar15[1] = uVar12;
        puVar15[2] = uVar6;
        puVar15[3] = uVar7;
        puVar15[4] = uVar9;
        puVar15[5] = uVar10;
        uVar12 = uVar4;
      }
      FUN_016dd1aa(local_50,param_3,uVar6 * 0x18);
      param_2 = uVar4 - uVar6;
      if (param_2 == 0) {
        return;
      }
      local_50 = local_50 + uVar6 * 6;
      puVar17 = param_3 + uVar4 * 6 + -6;
      puVar2 = local_50;
      uVar12 = param_2;
      do {
        uVar5 = *puVar17;
        uVar7 = puVar17[1];
        uVar9 = puVar17[2];
        uVar10 = puVar17[3];
        uVar23 = puVar17[4];
        uVar8 = puVar17[5];
        puVar17 = puVar17 + -6;
        uVar12 = uVar12 - 1;
        *puVar2 = uVar5;
        puVar2[1] = uVar7;
        puVar2[2] = uVar9;
        puVar2[3] = uVar10;
        puVar2[4] = uVar23;
        puVar2[5] = uVar8;
        puVar2 = puVar2 + 6;
      } while (uVar12 != 0);
      if (uVar4 < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar6,uVar4,uVar4,&DAT_018af348);
      }
      local_60 = (uint *)0x0;
      uVar4 = param_2;
    } while (0x20 < param_2);
  }
  if (param_2 < 2) {
    return;
  }
  if (param_2 + 0x10 <= param_4) {
    local_58 = param_2 >> 1;
    puVar2 = param_3 + local_58 * 6;
    puVar17 = local_50 + local_58 * 6;
    if (param_2 < 8) {
      uVar4 = local_50[1];
      uVar12 = local_50[2];
      uVar5 = local_50[3];
      uVar6 = local_50[4];
      uVar7 = local_50[5];
      *param_3 = *local_50;
      param_3[1] = uVar4;
      param_3[2] = uVar12;
      param_3[3] = uVar5;
      param_3[4] = uVar6;
      param_3[5] = uVar7;
      uVar12 = puVar17[1];
      uVar5 = puVar17[2];
      uVar6 = puVar17[3];
      uVar7 = puVar17[4];
      uVar9 = puVar17[5];
      uVar4 = 1;
      *puVar2 = *puVar17;
      puVar2[1] = uVar12;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      puVar2[4] = uVar7;
      puVar2[5] = uVar9;
    }
    else {
      FUN_00613b48(local_50,param_3);
      FUN_00613b48(puVar17,puVar2);
      uVar4 = 4;
    }
    if (uVar4 < local_58) {
      local_64 = (uint *)(uVar4 * 0x18 + -0x30);
      local_54 = uVar4 * 0x18 + -0x20;
      local_60 = (uint *)(uVar4 * 0x18 + -0x18);
      uVar12 = uVar4;
      do {
        puVar18 = local_50 + uVar12 * 6;
        puVar3 = param_3 + uVar12 * 6;
        uVar5 = puVar18[1];
        uVar6 = puVar18[2];
        uVar7 = puVar18[3];
        uVar9 = puVar18[4];
        uVar10 = puVar18[5];
        *puVar3 = *puVar18;
        puVar3[1] = uVar5;
        puVar3[2] = uVar6;
        puVar3[3] = uVar7;
        puVar3[4] = uVar9;
        puVar3[5] = uVar10;
        uVar5 = puVar3[1];
        uVar7 = puVar3[4];
        uVar6 = param_3[uVar12 * 6];
        puVar18 = puVar3 + -6;
        if ((uVar7 < puVar3[-2]) ||
           ((uVar7 <= puVar3[-2] &&
            (uVar5 <= puVar3[-5] && (uint)(*puVar18 <= uVar6) <= uVar5 - puVar3[-5])))) {
          uVar9 = puVar3[2];
          uVar23 = puVar3[3];
          uVar10 = puVar3[5];
          *puVar3 = *puVar18;
          puVar3[1] = puVar3[-5];
          puVar3[2] = puVar3[-4];
          puVar3[3] = puVar3[-3];
          puVar3[4] = puVar3[-2];
          puVar3[5] = puVar3[-1];
          if (uVar12 != 1) {
            puVar3 = local_60;
            puVar15 = local_64;
            iVar14 = local_54;
            do {
              puVar19 = (uint *)((int)param_3 + (int)puVar15);
              puVar18 = (uint *)((int)param_3 + (int)puVar3);
              if ((*(uint *)((int)param_3 + iVar14) <= uVar7) &&
                 ((*(uint *)((int)param_3 + iVar14) < uVar7 ||
                  (puVar19[1] < uVar5 || uVar5 - puVar19[1] < (uint)(*puVar19 <= uVar6))))) break;
              uVar8 = puVar19[1];
              uVar11 = puVar19[2];
              uVar13 = puVar19[3];
              uVar16 = puVar19[4];
              uVar20 = puVar19[5];
              iVar14 = iVar14 + -0x18;
              puVar15 = (uint *)((int)puVar15 + -0x18);
              puVar3 = (uint *)((int)puVar3 + -0x18);
              *puVar18 = *puVar19;
              puVar18[1] = uVar8;
              puVar18[2] = uVar11;
              puVar18[3] = uVar13;
              puVar18[4] = uVar16;
              puVar18[5] = uVar20;
              puVar18 = param_3;
            } while (puVar3 != (uint *)0x0);
          }
          *puVar18 = uVar6;
          puVar18[1] = uVar5;
          puVar18[2] = uVar9;
          puVar18[3] = uVar23;
          puVar18[4] = uVar7;
          puVar18[5] = uVar10;
        }
        uVar12 = uVar12 + 1;
        local_64 = (uint *)((int)local_64 + 0x18);
        local_54 = local_54 + 0x18;
        local_60 = (uint *)((int)local_60 + 0x18);
      } while (uVar12 != local_58);
    }
    if (uVar4 < param_2 - local_58) {
      local_68 = param_3 + local_58 * 6 + -0xc;
      local_60 = param_3 + local_58 * 6 + -8;
      local_64 = param_3 + local_58 * 6 + -6;
      local_6c = 0x18;
      uVar12 = uVar4;
      do {
        puVar18 = puVar17 + uVar12 * 6;
        puVar3 = puVar2 + uVar12 * 6;
        uVar5 = puVar18[1];
        uVar6 = puVar18[2];
        uVar7 = puVar18[3];
        uVar9 = puVar18[4];
        uVar10 = puVar18[5];
        *puVar3 = *puVar18;
        puVar3[1] = uVar5;
        puVar3[2] = uVar6;
        puVar3[3] = uVar7;
        puVar3[4] = uVar9;
        puVar3[5] = uVar10;
        uVar5 = puVar3[1];
        uVar7 = puVar2[uVar12 * 6];
        puVar18 = puVar3 + -6;
        uVar6 = puVar3[4];
        if ((uVar6 < puVar3[-2]) ||
           ((uVar6 <= puVar3[-2] &&
            (uVar5 <= puVar3[-5] && (uint)(*puVar18 <= uVar7) <= uVar5 - puVar3[-5])))) {
          uVar9 = puVar3[3];
          uVar23 = puVar3[2];
          uVar10 = puVar3[5];
          *puVar3 = *puVar18;
          puVar3[1] = puVar3[-5];
          puVar3[2] = puVar3[-4];
          puVar3[3] = puVar3[-3];
          puVar3[4] = puVar3[-2];
          puVar3[5] = puVar3[-1];
          if (uVar12 != 1) {
            iVar14 = local_6c;
            puVar3 = local_64;
            puVar15 = local_60;
            puVar19 = local_68;
            do {
              puVar24 = puVar19 + uVar4 * 6;
              puVar18 = puVar3 + uVar4 * 6;
              if ((puVar15[uVar4 * 6] <= uVar6) &&
                 ((puVar15[uVar4 * 6] < uVar6 ||
                  (puVar24[1] < uVar5 || uVar5 - puVar24[1] < (uint)(*puVar24 <= uVar7)))))
              goto LAB_0060ed7c;
              uVar8 = puVar24[1];
              uVar11 = puVar24[2];
              uVar13 = puVar24[3];
              uVar16 = puVar24[4];
              uVar20 = puVar24[5];
              iVar14 = iVar14 + 0x18;
              puVar15 = puVar15 + -6;
              puVar19 = puVar19 + -6;
              puVar3 = puVar3 + -6;
              *puVar18 = *puVar24;
              puVar18[1] = uVar8;
              puVar18[2] = uVar11;
              puVar18[3] = uVar13;
              puVar18[4] = uVar16;
              puVar18[5] = uVar20;
            } while (uVar4 * 0x18 != iVar14);
            puVar18 = puVar2;
          }
LAB_0060ed7c:
          *puVar18 = uVar7;
          puVar18[1] = uVar5;
          puVar18[2] = uVar23;
          puVar18[3] = uVar9;
          puVar18[4] = uVar6;
          puVar18[5] = uVar10;
        }
        local_68 = local_68 + 6;
        uVar12 = uVar12 + 1;
        local_6c = local_6c + -0x18;
        local_60 = local_60 + 6;
        local_64 = local_64 + 6;
      } while (uVar12 != param_2 - local_58);
    }
    iVar14 = 0;
    puVar17 = param_3 + param_2 * 6;
    puVar18 = puVar2 + -6;
    do {
      puVar15 = puVar17 + -6;
      uVar4 = 1;
      local_4c = 1;
      puVar3 = puVar2;
      if (param_3[4] <= puVar2[4]) {
        uVar4 = (uint)(puVar2[4] <= param_3[4] &&
                      (puVar2[1] <= param_3[1] &&
                      (uint)(*param_3 <= *puVar2) <= puVar2[1] - param_3[1]));
        puVar3 = param_3;
        if (uVar4 != 0) {
          puVar3 = puVar2;
        }
      }
      puVar19 = (uint *)((int)local_50 + iVar14);
      uVar12 = puVar3[1];
      uVar5 = puVar3[2];
      uVar6 = puVar3[3];
      uVar7 = puVar3[4];
      uVar9 = puVar3[5];
      *puVar19 = *puVar3;
      puVar19[1] = uVar12;
      puVar19[2] = uVar5;
      puVar19[3] = uVar6;
      puVar19[4] = uVar7;
      puVar19[5] = uVar9;
      puVar3 = puVar18;
      if (puVar18[4] <= puVar17[-2]) {
        local_4c = (uint)(puVar17[-2] <= puVar18[4] &&
                         (puVar17[-5] <= puVar18[1] &&
                         (uint)(*puVar18 <= *puVar15) <= puVar17[-5] - puVar18[1]));
        puVar3 = puVar15;
        if (local_4c != 0) {
          puVar3 = puVar18;
        }
      }
      puVar2 = puVar2 + (uVar4 | uVar4 << 1) * 2;
      param_3 = param_3 + (uVar4 ^ 1 | (uVar4 ^ 1) << 1) * 2;
      puVar17 = (uint *)((int)local_50 + ((param_2 * 0x18 + -0x18) - iVar14));
      uVar4 = puVar3[1];
      uVar12 = puVar3[2];
      uVar5 = puVar3[3];
      uVar6 = puVar3[4];
      uVar7 = puVar3[5];
      iVar14 = iVar14 + 0x18;
      *puVar17 = *puVar3;
      puVar17[1] = uVar4;
      puVar17[2] = uVar12;
      puVar17[3] = uVar5;
      puVar17[4] = uVar6;
      puVar17[5] = uVar7;
      puVar18 = puVar18 + local_4c * -6;
      puVar17 = puVar15 + local_4c * 6;
      local_58 = local_58 - 1;
    } while (local_58 != 0);
    puVar18 = puVar18 + 6;
    puVar3 = (uint *)0x0;
    if ((param_2 & 1) != 0) {
      bVar25 = puVar18 <= param_3;
      puVar3 = puVar2;
      if (!bVar25) {
        puVar3 = param_3;
      }
      uVar4 = puVar3[1];
      uVar12 = puVar3[2];
      uVar5 = puVar3[3];
      uVar6 = puVar3[4];
      uVar7 = puVar3[5];
      local_50 = (uint *)((int)local_50 + iVar14);
      *local_50 = *puVar3;
      local_50[1] = uVar4;
      local_50[2] = uVar12;
      local_50[3] = uVar5;
      local_50[4] = uVar6;
      local_50[5] = uVar7;
      puVar3 = (uint *)((uint)!bVar25 | (uint)!bVar25 << 1);
      puVar2 = puVar2 + ((uint)bVar25 | (uint)bVar25 << 1) * 2;
      param_3 = param_3 + (int)puVar3 * 2;
    }
    if (param_3 == puVar18) {
      puVar3 = puVar17;
    }
    if (param_3 == puVar18 && puVar2 == puVar3) {
      return;
    }
    FUN_00fb7254();
  }
LAB_0060f0c0:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x60f0c0);
  (*pcVar1)();
}

