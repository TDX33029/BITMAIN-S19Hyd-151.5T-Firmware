// FUN_006d26e0 @ 006d26e0 size=2684 calls_out=11 calls_in=2
// strings: 

void FUN_006d26e0(undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5,
                 int param_6,undefined4 *param_7)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  bool bVar20;
  int local_84;
  undefined4 *local_50;
  undefined4 *local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  int local_30 [3];
  
  if (0x20 < param_2) {
    local_84 = param_6;
    uVar11 = param_2;
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_006e3e04(param_1,uVar11,param_3,param_4,1,param_7);
          return;
        }
        uVar13 = uVar11 >> 3;
        puVar16 = param_1 + uVar13 * 0x15;
        puVar14 = param_1 + uVar13 * 0xc;
        if (uVar11 < 0x40) {
          iVar2 = FUN_006d2464(*(undefined4 *)*param_7,param_1[1],param_1[2],puVar14[1],puVar14[2]);
          iVar10 = FUN_006d2464(*(undefined4 *)*param_7,param_1[1],param_1[2],puVar16[1],puVar16[2])
          ;
          puVar3 = param_1;
          if (iVar2 == iVar10) {
            iVar10 = FUN_006d2464(*(undefined4 *)*param_7,puVar14[1],puVar14[2],puVar16[1],
                                  puVar16[2]);
            puVar3 = puVar16;
            if (iVar2 == iVar10) {
              puVar3 = puVar14;
            }
          }
        }
        else {
          puVar3 = (undefined4 *)FUN_006e1e38(param_1,puVar14,puVar16,uVar13,param_7);
        }
        param_5 = param_5 + -1;
        uVar13 = ((uint)((int)puVar3 - (int)param_1) >> 2) * -0x55555555;
        local_38 = *puVar3;
        uStack_34 = puVar3[1];
        local_30[0] = puVar3[2];
        if ((local_84 == 0) ||
           (iVar2 = FUN_006d2464(*(undefined4 *)*param_7,*(undefined4 *)(local_84 + 4),
                                 *(undefined4 *)(local_84 + 8),puVar3[1],puVar3[2]), iVar2 != 0))
        break;
LAB_006d2c5c:
        if (param_4 < uVar11) goto LAB_006d312c;
        uVar12 = 0;
        puVar16 = param_3 + uVar11 * 3;
        local_48 = param_1;
        while( true ) {
          iVar2 = uVar13 - 3;
          if (uVar13 < 3) {
            iVar2 = 0;
          }
          if (local_48 < param_1 + iVar2 * 3) {
            puVar14 = local_48;
            iVar10 = 0;
            do {
              uVar7 = FUN_006d2464(*(undefined4 *)*param_7,puVar3[1],puVar3[2],
                                   *(undefined4 *)((int)local_48 + (4 - iVar10)),
                                   *(undefined4 *)((int)local_48 + (8 - iVar10)));
              puVar8 = param_3;
              if (uVar7 != 0) {
                puVar8 = (undefined4 *)((int)puVar16 + iVar10 + -0xc);
              }
              puVar8 = puVar8 + uVar12 * 3;
              uVar18 = puVar14[1];
              uVar15 = puVar14[2];
              *puVar8 = *puVar14;
              puVar8[1] = uVar18;
              puVar8[2] = uVar15;
              uVar9 = FUN_006d2464(*(undefined4 *)*param_7,puVar3[1],puVar3[2],
                                   *(undefined4 *)((int)local_48 + (0x10 - iVar10)),
                                   *(undefined4 *)((int)local_48 + (0x14 - iVar10)));
              puVar8 = param_3;
              if (uVar9 != 0) {
                puVar8 = (undefined4 *)((int)puVar16 + iVar10 + -0x18);
              }
              iVar19 = uVar12 + (uVar7 ^ 1);
              puVar8 = puVar8 + iVar19 * 3;
              uVar18 = *(undefined4 *)((int)local_48 + (0x10 - iVar10));
              uVar15 = *(undefined4 *)((int)local_48 + (0x14 - iVar10));
              *puVar8 = *(undefined4 *)((int)local_48 + (0xc - iVar10));
              puVar8[1] = uVar18;
              puVar8[2] = uVar15;
              uVar12 = FUN_006d2464(*(undefined4 *)*param_7,puVar3[1],puVar3[2],
                                    *(undefined4 *)((int)local_48 + (0x1c - iVar10)),
                                    *(undefined4 *)((int)local_48 + (0x20 - iVar10)));
              puVar8 = param_3;
              if (uVar12 != 0) {
                puVar8 = (undefined4 *)((int)puVar16 + iVar10 + -0x24);
              }
              iVar19 = iVar19 + (uVar9 ^ 1);
              puVar8 = puVar8 + iVar19 * 3;
              uVar18 = puVar14[7];
              uVar15 = puVar14[8];
              *puVar8 = puVar14[6];
              puVar8[1] = uVar18;
              puVar8[2] = uVar15;
              uVar7 = FUN_006d2464(*(undefined4 *)*param_7,puVar3[1],puVar3[2],
                                   *(undefined4 *)((int)local_48 + (0x28 - iVar10)),
                                   *(undefined4 *)((int)local_48 + (0x2c - iVar10)));
              puVar14 = puVar14 + 0xc;
              puVar8 = param_3;
              if (uVar7 != 0) {
                puVar8 = (undefined4 *)((int)puVar16 + iVar10 + -0x30);
              }
              iVar19 = iVar19 + (uVar12 ^ 1);
              iVar5 = iVar10 + -0x30;
              puVar8 = puVar8 + iVar19 * 3;
              uVar12 = iVar19 + (uVar7 ^ 1);
              uVar18 = *(undefined4 *)((int)local_48 + (0x28 - iVar10));
              uVar15 = *(undefined4 *)((int)local_48 + (0x2c - iVar10));
              *puVar8 = *(undefined4 *)((int)local_48 + (0x24 - iVar10));
              puVar8[1] = uVar18;
              puVar8[2] = uVar15;
              iVar10 = iVar5;
            } while (puVar14 < param_1 + iVar2 * 3);
            puVar16 = (undefined4 *)((int)puVar16 + iVar5);
            local_48 = puVar14;
          }
          for (; local_48 < param_1 + uVar13 * 3; local_48 = local_48 + 3) {
            uVar7 = FUN_006d2464(*(undefined4 *)*param_7,puVar3[1],puVar3[2],local_48[1],local_48[2]
                                );
            puVar16 = puVar16 + -3;
            puVar14 = param_3;
            if (uVar7 != 0) {
              puVar14 = puVar16;
            }
            puVar14 = puVar14 + uVar12 * 3;
            uVar18 = local_48[1];
            uVar15 = local_48[2];
            uVar12 = uVar12 + (uVar7 ^ 1);
            *puVar14 = *local_48;
            puVar14[1] = uVar18;
            puVar14[2] = uVar15;
          }
          if (uVar13 == uVar11) break;
          puVar14 = param_3 + uVar12 * 3;
          uVar18 = local_48[1];
          uVar15 = local_48[2];
          uVar12 = uVar12 + 1;
          puVar16 = puVar16 + -3;
          *puVar14 = *local_48;
          puVar14[1] = uVar18;
          puVar14[2] = uVar15;
          local_48 = local_48 + 3;
          uVar13 = uVar11;
        }
        FUN_01bed4e2(param_1,param_3,uVar12 * 0xc);
        param_2 = uVar11 - uVar12;
        if (param_2 == 0) {
          return;
        }
        puVar14 = param_3 + uVar11 * 3 + -3;
        puVar16 = param_1 + uVar12 * 3;
        uVar13 = param_2;
        do {
          uVar18 = *puVar14;
          uVar15 = puVar14[1];
          uVar17 = puVar14[2];
          puVar14 = puVar14 + -3;
          uVar13 = uVar13 - 1;
          *puVar16 = uVar18;
          puVar16[1] = uVar15;
          puVar16[2] = uVar17;
          puVar16 = puVar16 + 3;
        } while (uVar13 != 0);
        if (uVar11 < uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar12,uVar11,uVar11,&DAT_01d30598);
        }
        param_1 = param_1 + uVar12 * 3;
        local_84 = 0;
        uVar11 = param_2;
        if (param_2 < 0x21) goto LAB_006d2708;
      }
      if (param_4 < uVar11) goto LAB_006d312c;
      puVar14 = (undefined4 *)*param_7;
      param_2 = 0;
      puVar16 = param_3 + uVar11 * 3;
      uVar12 = uVar13;
      local_50 = param_1;
      while( true ) {
        iVar2 = uVar12 - 3;
        if (uVar12 < 3) {
          iVar2 = 0;
        }
        if (local_50 < param_1 + iVar2 * 3) {
          puVar8 = local_50;
          iVar10 = 0;
          do {
            iVar19 = FUN_006d2464(*puVar14,*(undefined4 *)((int)local_50 + (4 - iVar10)),
                                  *(undefined4 *)((int)local_50 + (8 - iVar10)),puVar3[1],puVar3[2])
            ;
            puVar4 = param_3;
            if (iVar19 == 0) {
              puVar4 = (undefined4 *)((int)puVar16 + iVar10 + -0xc);
            }
            puVar4 = puVar4 + param_2 * 3;
            uVar18 = puVar8[1];
            uVar15 = puVar8[2];
            *puVar4 = *puVar8;
            puVar4[1] = uVar18;
            puVar4[2] = uVar15;
            iVar5 = FUN_006d2464(*puVar14,*(undefined4 *)((int)local_50 + (0x10 - iVar10)),
                                 *(undefined4 *)((int)local_50 + (0x14 - iVar10)),puVar3[1],
                                 puVar3[2]);
            puVar4 = param_3;
            if (iVar5 == 0) {
              puVar4 = (undefined4 *)((int)puVar16 + iVar10 + -0x18);
            }
            puVar4 = puVar4 + (param_2 + iVar19) * 3;
            uVar18 = *(undefined4 *)((int)local_50 + (0x10 - iVar10));
            uVar15 = *(undefined4 *)((int)local_50 + (0x14 - iVar10));
            *puVar4 = *(undefined4 *)((int)local_50 + (0xc - iVar10));
            puVar4[1] = uVar18;
            puVar4[2] = uVar15;
            iVar6 = FUN_006d2464(*puVar14,*(undefined4 *)((int)local_50 + (0x1c - iVar10)),
                                 *(undefined4 *)((int)local_50 + (0x20 - iVar10)),puVar3[1],
                                 puVar3[2]);
            iVar5 = param_2 + iVar19 + iVar5;
            puVar4 = param_3;
            if (iVar6 == 0) {
              puVar4 = (undefined4 *)((int)puVar16 + iVar10 + -0x24);
            }
            puVar4 = puVar4 + iVar5 * 3;
            uVar18 = puVar8[7];
            uVar15 = puVar8[8];
            *puVar4 = puVar8[6];
            puVar4[1] = uVar18;
            puVar4[2] = uVar15;
            iVar19 = FUN_006d2464(*puVar14,*(undefined4 *)((int)local_50 + (0x28 - iVar10)),
                                  *(undefined4 *)((int)local_50 + (0x2c - iVar10)),puVar3[1],
                                  puVar3[2]);
            puVar8 = puVar8 + 0xc;
            puVar4 = param_3;
            if (iVar19 == 0) {
              puVar4 = (undefined4 *)((int)puVar16 + iVar10 + -0x30);
            }
            iVar5 = iVar5 + iVar6;
            iVar6 = iVar10 + -0x30;
            puVar4 = puVar4 + iVar5 * 3;
            uVar18 = *(undefined4 *)((int)local_50 + (0x28 - iVar10));
            uVar15 = *(undefined4 *)((int)local_50 + (0x2c - iVar10));
            *puVar4 = *(undefined4 *)((int)local_50 + (0x24 - iVar10));
            puVar4[1] = uVar18;
            puVar4[2] = uVar15;
            param_2 = iVar5 + iVar19;
            iVar10 = iVar6;
          } while (puVar8 < param_1 + iVar2 * 3);
          puVar16 = (undefined4 *)((int)puVar16 + iVar6);
          local_50 = puVar8;
        }
        for (; local_50 < param_1 + uVar12 * 3; local_50 = local_50 + 3) {
          iVar2 = FUN_006d2464(*puVar14,local_50[1],local_50[2],puVar3[1],puVar3[2]);
          puVar16 = puVar16 + -3;
          puVar8 = puVar16;
          if (iVar2 != 0) {
            puVar8 = param_3;
          }
          puVar8 = puVar8 + param_2 * 3;
          uVar18 = local_50[1];
          uVar15 = local_50[2];
          *puVar8 = *local_50;
          puVar8[1] = uVar18;
          puVar8[2] = uVar15;
          param_2 = param_2 + iVar2;
        }
        if (uVar12 == uVar11) break;
        puVar16 = puVar16 + -3;
        uVar18 = local_50[1];
        uVar15 = local_50[2];
        puVar8 = puVar16 + param_2 * 3;
        *puVar8 = *local_50;
        puVar8[1] = uVar18;
        puVar8[2] = uVar15;
        local_50 = local_50 + 3;
        uVar12 = uVar11;
      }
      FUN_01bed4e2(param_1,param_3,param_2 * 0xc);
      iVar2 = uVar11 - param_2;
      if (iVar2 != 0) {
        puVar14 = param_3 + uVar11 * 3 + -3;
        puVar16 = param_1 + param_2 * 3;
        iVar10 = iVar2;
        do {
          uVar18 = *puVar14;
          uVar15 = puVar14[1];
          uVar17 = puVar14[2];
          puVar14 = puVar14 + -3;
          iVar10 = iVar10 + -1;
          *puVar16 = uVar18;
          puVar16[1] = uVar15;
          puVar16[2] = uVar17;
          puVar16 = puVar16 + 3;
        } while (iVar10 != 0);
      }
      if (param_2 == 0) goto LAB_006d2c5c;
      if (uVar11 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d30588);
      }
      FUN_006d26e0(param_1 + param_2 * 3,iVar2,param_3,param_4,param_5,&local_38,param_7);
      uVar11 = param_2;
    } while (0x20 < param_2);
  }
LAB_006d2708:
  if (1 < param_2) {
    if (param_4 < param_2 + 0x10) {
LAB_006d312c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x6d312c);
      (*pcVar1)();
    }
    uVar18 = *param_7;
    uVar11 = param_2 >> 1;
    if (param_2 < 0x10) {
      puVar16 = param_3 + uVar11 * 3;
      puVar14 = param_1 + uVar11 * 3;
      if (param_2 < 8) {
        uVar15 = param_1[1];
        uVar17 = param_1[2];
        *param_3 = *param_1;
        param_3[1] = uVar15;
        param_3[2] = uVar17;
        uVar15 = puVar14[1];
        uVar17 = puVar14[2];
        *puVar16 = *puVar14;
        puVar16[1] = uVar15;
        puVar16[2] = uVar17;
        uVar13 = 1;
      }
      else {
        FUN_006c6634(param_1,param_3,uVar18);
        FUN_006c6634(puVar14,puVar16,uVar18);
        uVar13 = 4;
      }
    }
    else {
      FUN_006c6994(param_1,param_3,param_3 + param_2 * 3,uVar18);
      FUN_006c6994(param_1 + uVar11 * 3,param_3 + uVar11 * 3,param_3 + param_2 * 3 + 0x18,uVar18);
      uVar13 = 8;
    }
    local_30[0] = 0;
    iVar2 = 0;
    local_30[1] = uVar11;
    do {
      iVar10 = local_30[iVar2];
      uVar12 = uVar11;
      if (iVar10 != 0) {
        uVar12 = param_2 - uVar11;
      }
      if (uVar13 < uVar12) {
        iVar19 = uVar12 - uVar13;
        puVar16 = param_1 + uVar13 * 3 + iVar10 * 3;
        puVar14 = param_3 + uVar13 * 3 + iVar10 * 3;
        do {
          uVar15 = puVar16[1];
          uVar17 = puVar16[2];
          *puVar14 = *puVar16;
          puVar14[1] = uVar15;
          puVar14[2] = uVar17;
          FUN_006c6010(param_3 + iVar10 * 3,puVar14,uVar18);
          puVar16 = puVar16 + 3;
          puVar14 = puVar14 + 3;
          iVar19 = iVar19 + -1;
        } while (iVar19 != 0);
      }
      bVar20 = iVar2 == 0;
      iVar2 = 1;
    } while (bVar20);
    FUN_006c69dc(param_3,param_2,param_1,uVar18);
  }
  return;
}

