// FUN_015d9d3c @ 015d9d3c size=3008 calls_out=8 calls_in=2
// strings: 

void FUN_015d9d3c(uint *param_1,uint *param_2,uint *param_3,uint *param_4,int param_5,uint *param_6)

{
  code *pcVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  uint *puVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  int local_74;
  uint *local_70;
  uint *local_6c;
  uint *local_68;
  uint *local_64;
  uint local_60;
  int local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  if (param_2 <= &DAT_00000020) {
LAB_015d9d60:
    local_60 = (uint)param_2 >> 1;
    if (local_60 != 0) {
      puVar5 = param_3 + local_60 * 6;
      puVar21 = param_1 + local_60 * 6;
      if (param_2 < &DAT_00000008) {
        uVar4 = param_1[1];
        uVar16 = param_1[2];
        uVar6 = param_1[3];
        uVar10 = param_1[4];
        uVar12 = param_1[5];
        *param_3 = *param_1;
        param_3[1] = uVar4;
        param_3[2] = uVar16;
        param_3[3] = uVar6;
        param_3[4] = uVar10;
        param_3[5] = uVar12;
        uVar16 = puVar21[1];
        uVar6 = puVar21[2];
        uVar10 = puVar21[3];
        uVar12 = puVar21[4];
        uVar14 = puVar21[5];
        uVar4 = 1;
        *puVar5 = *puVar21;
        puVar5[1] = uVar16;
        puVar5[2] = uVar6;
        puVar5[3] = uVar10;
        puVar5[4] = uVar12;
        puVar5[5] = uVar14;
      }
      else {
        FUN_015da928(param_1,param_3);
        FUN_015da928(puVar21,puVar5);
        uVar4 = 4;
      }
      if (uVar4 < local_60) {
        local_58 = uVar4 * 0x18 + -0x30;
        local_68 = (uint *)(uVar4 * 0x18 + -0x20);
        local_6c = (uint *)(uVar4 * 0x18 + -0x18);
        uVar16 = uVar4;
        do {
          puVar19 = param_1 + uVar16 * 6;
          puVar7 = param_3 + uVar16 * 6;
          uVar6 = puVar19[1];
          uVar10 = puVar19[2];
          uVar12 = puVar19[3];
          uVar14 = puVar19[4];
          uVar23 = puVar19[5];
          *puVar7 = *puVar19;
          puVar7[1] = uVar6;
          puVar7[2] = uVar10;
          puVar7[3] = uVar12;
          puVar7[4] = uVar14;
          puVar7[5] = uVar23;
          uVar6 = puVar7[1];
          uVar12 = param_3[uVar16 * 6];
          puVar19 = puVar7 + -6;
          uVar10 = puVar7[4];
          if ((uVar10 < puVar7[-2]) ||
             ((uVar10 <= puVar7[-2] &&
              (uVar6 <= puVar7[-5] && (uint)(*puVar19 <= uVar12) <= uVar6 - puVar7[-5])))) {
            uVar14 = puVar7[2];
            uVar23 = puVar7[3];
            uVar24 = puVar7[5];
            *puVar7 = *puVar19;
            puVar7[1] = puVar7[-5];
            puVar7[2] = puVar7[-4];
            puVar7[3] = puVar7[-3];
            puVar7[4] = puVar7[-2];
            puVar7[5] = puVar7[-1];
            if (uVar16 != 1) {
              puVar7 = local_68;
              puVar8 = local_6c;
              iVar3 = local_58;
              do {
                puVar17 = (uint *)((int)param_3 + iVar3);
                puVar19 = (uint *)((int)param_3 + (int)puVar8);
                if ((*(uint *)((int)param_3 + (int)puVar7) <= uVar10) &&
                   ((*(uint *)((int)param_3 + (int)puVar7) < uVar10 ||
                    (puVar17[1] < uVar6 || uVar6 - puVar17[1] < (uint)(*puVar17 <= uVar12)))))
                break;
                uVar11 = puVar17[1];
                uVar13 = puVar17[2];
                uVar15 = puVar17[3];
                uVar18 = puVar17[4];
                uVar20 = puVar17[5];
                puVar7 = (uint *)((int)puVar7 + -0x18);
                iVar3 = iVar3 + -0x18;
                puVar8 = (uint *)((int)puVar8 + -0x18);
                *puVar19 = *puVar17;
                puVar19[1] = uVar11;
                puVar19[2] = uVar13;
                puVar19[3] = uVar15;
                puVar19[4] = uVar18;
                puVar19[5] = uVar20;
                puVar19 = param_3;
              } while (puVar8 != (uint *)0x0);
            }
            *puVar19 = uVar12;
            puVar19[1] = uVar6;
            puVar19[2] = uVar14;
            puVar19[3] = uVar23;
            puVar19[4] = uVar10;
            puVar19[5] = uVar24;
          }
          uVar16 = uVar16 + 1;
          local_58 = local_58 + 0x18;
          local_68 = (uint *)((int)local_68 + 0x18);
          local_6c = (uint *)((int)local_6c + 0x18);
        } while (uVar16 != local_60);
      }
      if (uVar4 < (int)param_2 - local_60) {
        local_68 = param_3 + local_60 * 6 + -0xc;
        local_6c = param_3 + local_60 * 6 + -8;
        local_70 = param_3 + local_60 * 6 + -6;
        local_74 = 0x18;
        uVar16 = uVar4;
        do {
          puVar19 = puVar21 + uVar16 * 6;
          puVar7 = puVar5 + uVar16 * 6;
          uVar6 = puVar19[1];
          uVar10 = puVar19[2];
          uVar12 = puVar19[3];
          uVar14 = puVar19[4];
          uVar23 = puVar19[5];
          *puVar7 = *puVar19;
          puVar7[1] = uVar6;
          puVar7[2] = uVar10;
          puVar7[3] = uVar12;
          puVar7[4] = uVar14;
          puVar7[5] = uVar23;
          uVar6 = puVar7[1];
          uVar10 = puVar7[4];
          uVar12 = puVar5[uVar16 * 6];
          puVar19 = puVar7 + -6;
          if ((uVar10 < puVar7[-2]) ||
             ((uVar10 <= puVar7[-2] &&
              (uVar6 <= puVar7[-5] && (uint)(*puVar19 <= uVar12) <= uVar6 - puVar7[-5])))) {
            uVar14 = puVar7[3];
            uVar24 = puVar7[2];
            uVar23 = puVar7[5];
            *puVar7 = *puVar19;
            puVar7[1] = puVar7[-5];
            puVar7[2] = puVar7[-4];
            puVar7[3] = puVar7[-3];
            puVar7[4] = puVar7[-2];
            puVar7[5] = puVar7[-1];
            if (uVar16 != 1) {
              iVar3 = local_74;
              puVar7 = local_6c;
              puVar8 = local_70;
              puVar17 = local_68;
              do {
                puVar2 = puVar17 + uVar4 * 6;
                puVar19 = puVar8 + uVar4 * 6;
                if ((puVar7[uVar4 * 6] <= uVar10) &&
                   ((puVar7[uVar4 * 6] < uVar10 ||
                    (puVar2[1] < uVar6 || uVar6 - puVar2[1] < (uint)(*puVar2 <= uVar12))))) break;
                uVar11 = puVar2[1];
                uVar13 = puVar2[2];
                uVar15 = puVar2[3];
                uVar18 = puVar2[4];
                uVar20 = puVar2[5];
                puVar7 = puVar7 + -6;
                puVar17 = puVar17 + -6;
                puVar8 = puVar8 + -6;
                iVar3 = iVar3 + 0x18;
                *puVar19 = *puVar2;
                puVar19[1] = uVar11;
                puVar19[2] = uVar13;
                puVar19[3] = uVar15;
                puVar19[4] = uVar18;
                puVar19[5] = uVar20;
                puVar19 = puVar5;
              } while (uVar4 * 0x18 != iVar3);
            }
            *puVar19 = uVar12;
            puVar19[1] = uVar6;
            puVar19[2] = uVar24;
            puVar19[3] = uVar14;
            puVar19[4] = uVar10;
            puVar19[5] = uVar23;
          }
          uVar16 = uVar16 + 1;
          local_68 = local_68 + 6;
          local_74 = local_74 + -0x18;
          local_6c = local_6c + 6;
          local_70 = local_70 + 6;
        } while (uVar16 != (int)param_2 - local_60);
      }
      puVar21 = param_3 + (int)param_2 * 6;
      puVar19 = puVar5 + -6;
      local_4c = 0;
      do {
        puVar8 = puVar21 + -6;
        uVar4 = 1;
        local_50 = 1;
        puVar7 = puVar5;
        if (param_3[4] <= puVar5[4]) {
          uVar4 = (uint)(puVar5[4] <= param_3[4] &&
                        (puVar5[1] <= param_3[1] &&
                        (uint)(*param_3 <= *puVar5) <= puVar5[1] - param_3[1]));
          puVar7 = param_3;
          if (uVar4 != 0) {
            puVar7 = puVar5;
          }
        }
        puVar17 = (uint *)((int)param_1 + local_4c);
        uVar16 = puVar7[1];
        uVar6 = puVar7[2];
        uVar10 = puVar7[3];
        uVar12 = puVar7[4];
        uVar14 = puVar7[5];
        *puVar17 = *puVar7;
        puVar17[1] = uVar16;
        puVar17[2] = uVar6;
        puVar17[3] = uVar10;
        puVar17[4] = uVar12;
        puVar17[5] = uVar14;
        puVar7 = puVar19;
        if (puVar19[4] <= puVar21[-2]) {
          local_50 = (uint)(puVar21[-2] <= puVar19[4] &&
                           (puVar21[-5] <= puVar19[1] &&
                           (uint)(*puVar19 <= *puVar8) <= puVar21[-5] - puVar19[1]));
          puVar7 = puVar8;
          if (local_50 != 0) {
            puVar7 = puVar19;
          }
        }
        puVar5 = puVar5 + (uVar4 | uVar4 << 1) * 2;
        param_3 = param_3 + (uVar4 ^ 1 | (uVar4 ^ 1) << 1) * 2;
        puVar21 = (uint *)((int)param_1 + (((int)param_2 * 0x18 + -0x18) - local_4c));
        uVar4 = puVar7[1];
        uVar16 = puVar7[2];
        uVar6 = puVar7[3];
        uVar10 = puVar7[4];
        uVar12 = puVar7[5];
        local_4c = local_4c + 0x18;
        *puVar21 = *puVar7;
        puVar21[1] = uVar4;
        puVar21[2] = uVar16;
        puVar21[3] = uVar6;
        puVar21[4] = uVar10;
        puVar21[5] = uVar12;
        puVar19 = puVar19 + local_50 * -6;
        puVar21 = puVar8 + local_50 * 6;
        local_60 = local_60 - 1;
      } while (local_60 != 0);
      puVar19 = puVar19 + 6;
      if (((uint)param_2 & 1) != 0) {
        bVar25 = puVar19 <= param_3;
        puVar7 = puVar5;
        if (!bVar25) {
          puVar7 = param_3;
        }
        param_1 = (uint *)((int)param_1 + local_4c);
        uVar4 = puVar7[1];
        uVar16 = puVar7[2];
        uVar6 = puVar7[3];
        uVar10 = puVar7[4];
        uVar12 = puVar7[5];
        *param_1 = *puVar7;
        param_1[1] = uVar4;
        param_1[2] = uVar16;
        param_1[3] = uVar6;
        param_1[4] = uVar10;
        param_1[5] = uVar12;
        param_2 = (uint *)((uint)!bVar25 | (uint)!bVar25 << 1);
        puVar5 = puVar5 + ((uint)bVar25 | (uint)bVar25 << 1) * 2;
        param_3 = param_3 + (int)param_2 * 2;
      }
      if (param_3 == puVar19) {
        param_2 = puVar21;
      }
      if (param_3 != puVar19 || puVar5 != param_2) {
        FUN_00fb7254();
LAB_015da8e4:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x15da8e4);
        (*pcVar1)();
      }
    }
    return;
  }
  local_64 = param_6;
LAB_015d9dd0:
  puVar5 = param_2;
  do {
    if (param_5 == 0) {
      FUN_015d95d0(param_1,puVar5,param_3,param_4,1);
      return;
    }
    puVar19 = param_1 + ((uint)puVar5 >> 3) * 0x2a;
    puVar21 = param_1 + ((uint)puVar5 >> 3) * 0x18;
    if (&DAT_0000003f < puVar5) {
      puVar7 = (uint *)FUN_015dab2c(param_1);
    }
    else {
      uVar6 = *param_1;
      uVar10 = param_1[1];
      uVar12 = puVar21[4];
      uVar4 = param_1[4];
      uVar16 = puVar21[1];
      puVar7 = param_1;
      if (uVar4 < uVar12) {
        local_48 = puVar19[1];
        uVar14 = *puVar19;
        local_4c = puVar19[4];
        bVar9 = true;
        if ((uVar4 < local_4c) ||
           ((uVar4 <= local_4c &&
            (!(local_48 < uVar10 || uVar10 - local_48 < (uint)(uVar14 <= uVar6))))))
        goto LAB_015d9f2c;
      }
      else {
        uVar14 = *puVar19;
        local_48 = puVar19[1];
        local_4c = puVar19[4];
        bVar25 = uVar4 <= uVar12 &&
                 (uVar10 <= uVar16 && (uint)(*puVar21 <= uVar6) <= uVar10 - uVar16);
        if (uVar4 < local_4c) {
          bVar9 = true;
          if (bVar25) goto LAB_015d9f2c;
        }
        else {
          bVar9 = bVar25;
          if (bVar25 == (uVar4 == local_4c &&
                        (uVar10 <= local_48 && (uint)(uVar14 <= uVar6) <= uVar10 - local_48))) {
LAB_015d9f2c:
            bVar25 = true;
            if (local_4c <= uVar12) {
              bVar25 = uVar12 == local_4c &&
                       (uVar16 <= local_48 && (uint)(uVar14 <= *puVar21) <= uVar16 - local_48);
            }
            if (bVar9 != bVar25) {
              puVar21 = puVar19;
            }
            puVar7 = puVar21;
          }
        }
      }
    }
    param_5 = param_5 + -1;
    puVar21 = (uint *)(((uint)((int)puVar7 - (int)param_1) >> 3) * -0x55555555);
    local_40 = *puVar7;
    uStack_3c = puVar7[1];
    uStack_38 = puVar7[2];
    uStack_34 = puVar7[3];
    uStack_30 = puVar7[4];
    uStack_2c = puVar7[5];
    if (local_64 != (uint *)0x0) {
      if ((puVar7[4] <= local_64[4]) &&
         ((puVar7[4] < local_64[4] ||
          (puVar7[1] < local_64[1] || local_64[1] - puVar7[1] < (uint)(*puVar7 <= *local_64)))))
      break;
    }
    if (param_4 < puVar5) goto LAB_015da8e4;
    param_2 = (uint *)0x0;
    puVar19 = param_3 + (int)puVar5 * 6;
    puVar17 = puVar21;
    puVar8 = param_1;
    while( true ) {
      for (; puVar8 < param_1 + (int)puVar17 * 6; puVar8 = puVar8 + 6) {
        puVar19 = puVar19 + -6;
        if (puVar8[4] < puVar7[4]) {
          uVar4 = 1;
          puVar2 = param_3;
        }
        else {
          uVar4 = (uint)(puVar8[4] <= puVar7[4] &&
                        (puVar8[1] <= puVar7[1] &&
                        (uint)(*puVar7 <= *puVar8) <= puVar8[1] - puVar7[1]));
          puVar2 = puVar19;
          if (uVar4 != 0) {
            puVar2 = param_3;
          }
        }
        puVar2 = puVar2 + (int)param_2 * 6;
        uVar16 = puVar8[1];
        uVar6 = puVar8[2];
        uVar10 = puVar8[3];
        uVar12 = puVar8[4];
        uVar14 = puVar8[5];
        *puVar2 = *puVar8;
        puVar2[1] = uVar16;
        puVar2[2] = uVar6;
        puVar2[3] = uVar10;
        puVar2[4] = uVar12;
        puVar2[5] = uVar14;
        param_2 = (uint *)(uVar4 + (int)param_2);
      }
      if (puVar17 == puVar5) break;
      puVar19 = puVar19 + -6;
      puVar17 = puVar19 + (int)param_2 * 6;
      uVar4 = *puVar8;
      uVar16 = puVar8[1];
      uVar6 = puVar8[2];
      uVar10 = puVar8[3];
      uVar12 = puVar8[4];
      uVar14 = puVar8[5];
      puVar8 = puVar8 + 6;
      *puVar17 = uVar4;
      puVar17[1] = uVar16;
      puVar17[2] = uVar6;
      puVar17[3] = uVar10;
      puVar17[4] = uVar12;
      puVar17[5] = uVar14;
      puVar17 = puVar5;
    }
    FUN_016dd1aa(param_1,param_3,(int)param_2 * 0x18);
    iVar3 = (int)puVar5 - (int)param_2;
    if (iVar3 != 0) {
      puVar8 = param_3 + (int)puVar5 * 6 + -6;
      puVar19 = param_1 + (int)param_2 * 6;
      iVar22 = iVar3;
      do {
        uVar4 = *puVar8;
        uVar16 = puVar8[1];
        uVar6 = puVar8[2];
        uVar10 = puVar8[3];
        uVar12 = puVar8[4];
        uVar14 = puVar8[5];
        puVar8 = puVar8 + -6;
        iVar22 = iVar22 + -1;
        *puVar19 = uVar4;
        puVar19[1] = uVar16;
        puVar19[2] = uVar6;
        puVar19[3] = uVar10;
        puVar19[4] = uVar12;
        puVar19[5] = uVar14;
        puVar19 = puVar19 + 6;
      } while (iVar22 != 0);
    }
    if (param_2 == (uint *)0x0) break;
    if (puVar5 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018ab268);
    }
    FUN_015d9d3c(param_1 + (int)param_2 * 6,iVar3,param_3,param_4,param_5,&local_40);
    puVar5 = param_2;
    if (param_2 < &DAT_00000021) goto LAB_015d9d60;
  } while( true );
  if (param_4 < puVar5) goto LAB_015da8e4;
  puVar19 = (uint *)0x0;
  puVar17 = param_3 + (int)puVar5 * 6;
  puVar8 = param_1;
  while( true ) {
    for (; puVar8 < param_1 + (int)puVar21 * 6; puVar8 = puVar8 + 6) {
      puVar17 = puVar17 + -6;
      puVar2 = puVar17;
      if (puVar7[4] < puVar8[4]) {
        uVar4 = 0;
      }
      else {
        uVar4 = (uint)(puVar8[4] < puVar7[4] ||
                      (puVar8[1] < puVar7[1] || puVar7[1] - puVar8[1] < (uint)(*puVar8 <= *puVar7)))
        ;
        if (uVar4 != 0) {
          puVar2 = param_3;
        }
      }
      puVar2 = puVar2 + (int)puVar19 * 6;
      uVar16 = puVar8[1];
      uVar6 = puVar8[2];
      uVar10 = puVar8[3];
      uVar12 = puVar8[4];
      uVar14 = puVar8[5];
      *puVar2 = *puVar8;
      puVar2[1] = uVar16;
      puVar2[2] = uVar6;
      puVar2[3] = uVar10;
      puVar2[4] = uVar12;
      puVar2[5] = uVar14;
      puVar19 = (uint *)(uVar4 + (int)puVar19);
    }
    if (puVar21 == puVar5) break;
    puVar21 = param_3 + (int)puVar19 * 6;
    uVar4 = *puVar8;
    uVar16 = puVar8[1];
    uVar6 = puVar8[2];
    uVar10 = puVar8[3];
    uVar12 = puVar8[4];
    uVar14 = puVar8[5];
    puVar8 = puVar8 + 6;
    puVar19 = (uint *)((int)puVar19 + 1);
    puVar17 = puVar17 + -6;
    *puVar21 = uVar4;
    puVar21[1] = uVar16;
    puVar21[2] = uVar6;
    puVar21[3] = uVar10;
    puVar21[4] = uVar12;
    puVar21[5] = uVar14;
    puVar21 = puVar5;
  }
  FUN_016dd1aa(param_1,param_3,(int)puVar19 * 0x18);
  param_2 = (uint *)((int)puVar5 - (int)puVar19);
  if (param_2 == (uint *)0x0) {
    return;
  }
  param_1 = param_1 + (int)puVar19 * 6;
  puVar8 = param_3 + (int)puVar5 * 6 + -6;
  puVar21 = param_1;
  puVar7 = param_2;
  do {
    uVar4 = *puVar8;
    uVar16 = puVar8[1];
    uVar6 = puVar8[2];
    uVar10 = puVar8[3];
    uVar12 = puVar8[4];
    uVar14 = puVar8[5];
    puVar8 = puVar8 + -6;
    puVar7 = (uint *)((int)puVar7 + -1);
    *puVar21 = uVar4;
    puVar21[1] = uVar16;
    puVar21[2] = uVar6;
    puVar21[3] = uVar10;
    puVar21[4] = uVar12;
    puVar21[5] = uVar14;
    puVar21 = puVar21 + 6;
  } while (puVar7 != (uint *)0x0);
  if (puVar5 < puVar19) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(puVar19,puVar5,puVar5,&DAT_018ab278);
  }
  local_64 = (uint *)0x0;
  if (param_2 < &DAT_00000021) goto LAB_015d9d60;
  goto LAB_015d9dd0;
}

