// FUN_0072c6a0 @ 0072c6a0 size=2236 calls_out=9 calls_in=2
// strings: 

void FUN_0072c6a0(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint *param_6)

{
  code *pcVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  uint *puVar19;
  bool bVar20;
  uint *local_5c;
  uint local_48;
  uint local_40;
  uint uStack_3c;
  uint local_38 [5];
  
  if (0x20 < param_2) {
    local_5c = param_6;
    uVar8 = param_2;
LAB_0072c738:
    do {
      if (param_5 == 0) {
        FUN_0071b690(param_1,uVar8,param_3,param_4,1);
        return;
      }
      puVar19 = param_1 + (uVar8 >> 3) * 0x2a;
      puVar6 = param_1 + (uVar8 >> 3) * 0x18;
      if (uVar8 < 0x40) {
        uVar3 = puVar6[4];
        uVar7 = param_1[4];
        puVar2 = param_1;
        if (uVar7 < uVar3) {
          uVar9 = puVar19[4];
          bVar20 = true;
          if ((uVar7 < uVar9) ||
             ((uVar7 <= uVar9 &&
              (param_1[1] <= puVar19[1] && (uint)(*puVar19 <= *param_1) <= param_1[1] - puVar19[1]))
             )) goto LAB_0072c780;
        }
        else if (uVar7 == uVar3) {
          uVar10 = *puVar6;
          uVar13 = puVar6[1];
          uVar11 = *param_1;
          uVar14 = param_1[1];
          uVar9 = puVar19[4];
          bVar20 = uVar14 <= uVar13 && (uint)(uVar10 <= uVar11) <= uVar14 - uVar13;
          if (uVar7 < uVar9) {
            bVar20 = true;
            if (uVar14 <= uVar13 && (uint)(uVar10 <= uVar11) <= uVar14 - uVar13) goto LAB_0072c780;
          }
          else if (uVar7 == uVar9) {
            if ((uVar14 <= uVar13 && (uint)(uVar10 <= uVar11) <= uVar14 - uVar13) ==
                (uVar14 <= puVar19[1] && (uint)(*puVar19 <= uVar11) <= uVar14 - puVar19[1]))
            goto LAB_0072c780;
          }
          else {
            bVar20 = false;
            if (uVar13 < uVar14 || uVar14 - uVar13 < (uint)(uVar10 <= uVar11)) {
LAB_0072c780:
              bVar12 = true;
              if ((uVar9 <= uVar3) &&
                 ((bVar12 = false, uVar3 <= uVar9 &&
                  (bVar12 = false,
                  puVar6[1] <= puVar19[1] && (uint)(*puVar19 <= *puVar6) <= puVar6[1] - puVar19[1]))
                 )) {
                bVar12 = true;
              }
              if (bVar20 != bVar12) {
                puVar6 = puVar19;
              }
              puVar2 = puVar6;
            }
          }
        }
        else {
          uVar9 = puVar19[4];
          if ((uVar9 <= uVar7) &&
             ((bVar20 = false, uVar9 < uVar7 ||
              (puVar19[1] < param_1[1] || param_1[1] - puVar19[1] < (uint)(*puVar19 <= *param_1)))))
          goto LAB_0072c780;
        }
      }
      else {
        puVar2 = (uint *)FUN_00723240(param_1);
      }
      param_5 = param_5 + -1;
      uVar7 = ((uint)((int)puVar2 - (int)param_1) >> 3) * -0x55555555;
      local_40 = *puVar2;
      uStack_3c = puVar2[1];
      local_38[0] = puVar2[2];
      local_38[1] = puVar2[3];
      local_38[2] = puVar2[4];
      local_38[3] = puVar2[5];
      if (local_5c != (uint *)0x0) {
        if ((local_5c[4] < puVar2[4]) ||
           ((local_5c[4] <= puVar2[4] &&
            (local_5c[1] <= puVar2[1] && (uint)(*puVar2 <= *local_5c) <= local_5c[1] - puVar2[1]))))
        goto LAB_0072c844;
LAB_0072cb08:
        if (param_4 < uVar8) goto LAB_0072cf44;
        puVar19 = param_3 + uVar8 * 6;
        uVar3 = 0;
        puVar6 = param_1;
        while( true ) {
          uVar9 = uVar3;
          for (; puVar6 < param_1 + uVar7 * 6; puVar6 = puVar6 + 6) {
            puVar19 = puVar19 + -6;
            puVar5 = puVar19;
            if (puVar2[4] < puVar6[4]) {
              uVar3 = 0;
            }
            else if (puVar2[4] == puVar6[4]) {
              uVar3 = (uint)(puVar6[1] < puVar2[1] ||
                            puVar2[1] - puVar6[1] < (uint)(*puVar6 <= *puVar2));
              if (uVar3 != 0) {
                puVar5 = param_3;
              }
            }
            else {
              uVar3 = 1;
              puVar5 = param_3;
            }
            puVar5 = puVar5 + uVar9 * 6;
            uVar10 = puVar6[1];
            uVar11 = puVar6[2];
            uVar13 = puVar6[3];
            uVar14 = puVar6[4];
            uVar18 = puVar6[5];
            *puVar5 = *puVar6;
            puVar5[1] = uVar10;
            puVar5[2] = uVar11;
            puVar5[3] = uVar13;
            puVar5[4] = uVar14;
            puVar5[5] = uVar18;
            uVar9 = uVar3 + uVar9;
          }
          if (uVar7 == uVar8) break;
          uVar3 = uVar9 + 1;
          puVar19 = puVar19 + -6;
          puVar5 = param_3 + uVar9 * 6;
          uVar7 = *puVar6;
          uVar9 = puVar6[1];
          uVar10 = puVar6[2];
          uVar11 = puVar6[3];
          uVar13 = puVar6[4];
          uVar14 = puVar6[5];
          puVar6 = puVar6 + 6;
          *puVar5 = uVar7;
          puVar5[1] = uVar9;
          puVar5[2] = uVar10;
          puVar5[3] = uVar11;
          puVar5[4] = uVar13;
          puVar5[5] = uVar14;
          uVar7 = uVar8;
        }
        FUN_01bed4e2(param_1,param_3,uVar9 * 0x18);
        param_2 = uVar8 - uVar9;
        if (param_2 == 0) {
          return;
        }
        puVar19 = param_3 + uVar8 * 6 + -6;
        puVar6 = param_1 + uVar9 * 6;
        uVar7 = param_2;
        do {
          uVar3 = *puVar19;
          uVar10 = puVar19[1];
          uVar11 = puVar19[2];
          uVar13 = puVar19[3];
          uVar14 = puVar19[4];
          uVar18 = puVar19[5];
          puVar19 = puVar19 + -6;
          uVar7 = uVar7 - 1;
          *puVar6 = uVar3;
          puVar6[1] = uVar10;
          puVar6[2] = uVar11;
          puVar6[3] = uVar13;
          puVar6[4] = uVar14;
          puVar6[5] = uVar18;
          puVar6 = puVar6 + 6;
        } while (uVar7 != 0);
        if (uVar8 < uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar9,uVar8,uVar8,&DAT_01d30598);
        }
        param_1 = param_1 + uVar9 * 6;
        local_5c = (uint *)0x0;
        uVar8 = param_2;
        if (param_2 < 0x21) break;
        goto LAB_0072c738;
      }
LAB_0072c844:
      if (param_4 < uVar8) goto LAB_0072cf44;
      param_2 = 0;
      puVar19 = param_3 + uVar8 * 6;
      puVar6 = param_1;
      uVar3 = uVar7;
      while( true ) {
        for (; puVar6 < param_1 + uVar3 * 6; puVar6 = puVar6 + 6) {
          if (puVar6[4] < puVar2[4]) {
            uVar9 = 1;
            puVar5 = param_3;
          }
          else if (puVar6[4] == puVar2[4]) {
            uVar9 = (uint)(puVar6[1] <= puVar2[1] &&
                          (uint)(*puVar2 <= *puVar6) <= puVar6[1] - puVar2[1]);
            puVar5 = puVar19 + -6;
            if (uVar9 != 0) {
              puVar5 = param_3;
            }
          }
          else {
            uVar9 = 0;
            puVar5 = puVar19 + -6;
          }
          puVar19 = puVar19 + -6;
          puVar5 = puVar5 + param_2 * 6;
          uVar10 = puVar6[1];
          uVar11 = puVar6[2];
          uVar13 = puVar6[3];
          uVar14 = puVar6[4];
          uVar18 = puVar6[5];
          *puVar5 = *puVar6;
          puVar5[1] = uVar10;
          puVar5[2] = uVar11;
          puVar5[3] = uVar13;
          puVar5[4] = uVar14;
          puVar5[5] = uVar18;
          param_2 = uVar9 + param_2;
        }
        if (uVar3 == uVar8) break;
        puVar19 = puVar19 + -6;
        puVar5 = puVar19 + param_2 * 6;
        uVar3 = *puVar6;
        uVar9 = puVar6[1];
        uVar10 = puVar6[2];
        uVar11 = puVar6[3];
        uVar13 = puVar6[4];
        uVar14 = puVar6[5];
        puVar6 = puVar6 + 6;
        *puVar5 = uVar3;
        puVar5[1] = uVar9;
        puVar5[2] = uVar10;
        puVar5[3] = uVar11;
        puVar5[4] = uVar13;
        puVar5[5] = uVar14;
        uVar3 = uVar8;
      }
      FUN_01bed4e2(param_1,param_3,param_2 * 0x18);
      iVar16 = uVar8 - param_2;
      if (iVar16 != 0) {
        puVar19 = param_3 + uVar8 * 6 + -6;
        puVar6 = param_1 + param_2 * 6;
        iVar15 = iVar16;
        do {
          uVar3 = *puVar19;
          uVar9 = puVar19[1];
          uVar10 = puVar19[2];
          uVar11 = puVar19[3];
          uVar13 = puVar19[4];
          uVar14 = puVar19[5];
          puVar19 = puVar19 + -6;
          iVar15 = iVar15 + -1;
          *puVar6 = uVar3;
          puVar6[1] = uVar9;
          puVar6[2] = uVar10;
          puVar6[3] = uVar11;
          puVar6[4] = uVar13;
          puVar6[5] = uVar14;
          puVar6 = puVar6 + 6;
        } while (iVar15 != 0);
      }
      if (param_2 == 0) goto LAB_0072cb08;
      if (uVar8 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d30588);
      }
      FUN_0072c6a0(param_1 + param_2 * 6,iVar16,param_3,param_4,param_5,&local_40);
      uVar8 = param_2;
    } while (0x20 < param_2);
  }
  if (param_2 < 2) {
    return;
  }
  if (param_2 + 0x10 <= param_4) {
    local_48 = param_2 >> 1;
    puVar6 = param_3 + local_48 * 6;
    puVar19 = param_1 + local_48 * 6;
    if (param_2 < 8) {
      uVar8 = param_1[1];
      uVar7 = param_1[2];
      uVar3 = param_1[3];
      uVar9 = param_1[4];
      uVar10 = param_1[5];
      *param_3 = *param_1;
      param_3[1] = uVar8;
      param_3[2] = uVar7;
      param_3[3] = uVar3;
      param_3[4] = uVar9;
      param_3[5] = uVar10;
      uVar8 = puVar19[1];
      uVar7 = puVar19[2];
      uVar3 = puVar19[3];
      uVar9 = puVar19[4];
      uVar10 = puVar19[5];
      *puVar6 = *puVar19;
      puVar6[1] = uVar8;
      puVar6[2] = uVar7;
      puVar6[3] = uVar3;
      puVar6[4] = uVar9;
      puVar6[5] = uVar10;
      uVar8 = 1;
    }
    else {
      FUN_00733cc8(param_1,param_3);
      FUN_00733cc8(puVar19,puVar6);
      uVar8 = 4;
    }
    local_38[0] = 0;
    iVar16 = 0;
    local_38[1] = local_48;
    do {
      uVar3 = local_38[iVar16];
      uVar7 = local_48;
      if (uVar3 != 0) {
        uVar7 = param_2 - local_48;
      }
      if (uVar8 < uVar7) {
        iVar15 = uVar7 - uVar8;
        puVar2 = param_1 + uVar8 * 6 + uVar3 * 6;
        puVar19 = param_3 + uVar8 * 6 + uVar3 * 6;
        do {
          uVar7 = puVar2[1];
          uVar9 = puVar2[2];
          uVar10 = puVar2[3];
          uVar11 = puVar2[4];
          uVar13 = puVar2[5];
          *puVar19 = *puVar2;
          puVar19[1] = uVar7;
          puVar19[2] = uVar9;
          puVar19[3] = uVar10;
          puVar19[4] = uVar11;
          puVar19[5] = uVar13;
          FUN_00733ac8(param_3 + uVar3 * 6,puVar19);
          puVar2 = puVar2 + 6;
          puVar19 = puVar19 + 6;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
      }
      bVar20 = iVar16 == 0;
      iVar16 = 1;
    } while (bVar20);
    iVar16 = 0;
    puVar19 = param_3 + param_2 * 6;
    puVar2 = puVar6 + -6;
    do {
      puVar17 = puVar19 + -6;
      uVar7 = 1;
      uVar8 = 1;
      puVar5 = puVar6;
      if (param_3[4] <= puVar6[4]) {
        uVar8 = 0;
        puVar5 = param_3;
        if ((puVar6[4] <= param_3[4]) &&
           (uVar8 = (uint)(puVar6[1] <= param_3[1] &&
                          (uint)(*param_3 <= *puVar6) <= puVar6[1] - param_3[1]), uVar8 != 0)) {
          puVar5 = puVar6;
        }
      }
      uVar3 = puVar5[1];
      uVar9 = puVar5[2];
      uVar10 = puVar5[3];
      uVar11 = puVar5[4];
      uVar13 = puVar5[5];
      puVar4 = (uint *)((int)param_1 + iVar16);
      *puVar4 = *puVar5;
      puVar4[1] = uVar3;
      puVar4[2] = uVar9;
      puVar4[3] = uVar10;
      puVar4[4] = uVar11;
      puVar4[5] = uVar13;
      puVar5 = puVar2;
      if (puVar2[4] <= puVar19[-2]) {
        uVar7 = 0;
        puVar5 = puVar17;
        if ((puVar19[-2] <= puVar2[4]) &&
           (uVar7 = (uint)(puVar19[-5] <= puVar2[1] &&
                          (uint)(*puVar2 <= *puVar17) <= puVar19[-5] - puVar2[1]), uVar7 != 0)) {
          puVar5 = puVar2;
        }
      }
      puVar6 = puVar6 + (uVar8 | uVar8 << 1) * 2;
      puVar19 = (uint *)((int)param_1 + ((param_2 * 0x18 + -0x18) - iVar16));
      iVar16 = iVar16 + 0x18;
      param_3 = param_3 + (uVar8 ^ 1 | (uVar8 ^ 1) << 1) * 2;
      uVar8 = puVar5[1];
      uVar3 = puVar5[2];
      uVar9 = puVar5[3];
      uVar10 = puVar5[4];
      uVar11 = puVar5[5];
      *puVar19 = *puVar5;
      puVar19[1] = uVar8;
      puVar19[2] = uVar3;
      puVar19[3] = uVar9;
      puVar19[4] = uVar10;
      puVar19[5] = uVar11;
      puVar2 = puVar2 + uVar7 * -6;
      puVar19 = puVar17 + uVar7 * 6;
      local_48 = local_48 - 1;
    } while (local_48 != 0);
    puVar2 = puVar2 + 6;
    puVar5 = (uint *)0x0;
    if ((param_2 & 1) != 0) {
      bVar20 = puVar2 <= param_3;
      puVar5 = puVar6;
      if (!bVar20) {
        puVar5 = param_3;
      }
      uVar8 = puVar5[1];
      uVar7 = puVar5[2];
      uVar3 = puVar5[3];
      uVar9 = puVar5[4];
      uVar10 = puVar5[5];
      param_1 = (uint *)((int)param_1 + iVar16);
      *param_1 = *puVar5;
      param_1[1] = uVar8;
      param_1[2] = uVar7;
      param_1[3] = uVar3;
      param_1[4] = uVar9;
      param_1[5] = uVar10;
      puVar5 = (uint *)((uint)!bVar20 | (uint)!bVar20 << 1);
      puVar6 = puVar6 + ((uint)bVar20 | (uint)bVar20 << 1) * 2;
      param_3 = param_3 + (int)puVar5 * 2;
    }
    if (param_3 == puVar2) {
      puVar5 = puVar19;
    }
    if (param_3 == puVar2 && puVar6 == puVar5) {
      return;
    }
    FUN_01307140();
  }
LAB_0072cf44:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x72cf44);
  (*pcVar1)();
}

