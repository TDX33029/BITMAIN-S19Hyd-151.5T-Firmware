// FUN_019366a4 @ 019366a4 size=2252 calls_out=8 calls_in=2
// strings: 

void FUN_019366a4(undefined4 *param_1,uint param_2,undefined4 *param_3,int param_4)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  int iVar20;
  bool bVar21;
  undefined4 local_278 [24];
  undefined1 auStack_218 [480];
  uint local_38;
  uint local_34;
  undefined4 local_30;
  int local_2c [2];
  
  if (0x20 < param_2) {
    do {
      if (param_4 == 0) {
        uVar2 = param_2 + (param_2 >> 1);
        local_38 = param_2;
        do {
          uVar10 = local_38;
          uVar2 = uVar2 - 1;
          if (uVar2 < local_38) {
            local_30 = *param_1;
            local_2c[0] = param_1[1];
            local_2c[1] = param_1[2];
            puVar9 = param_1 + uVar2 * 3;
            FUN_01bed864(param_1,puVar9,0xc);
            *puVar9 = local_30;
            puVar9[1] = local_2c[0];
            puVar9[2] = local_2c[1];
            uVar14 = 0;
          }
          else {
            uVar14 = uVar2 - local_38;
          }
          uVar16 = uVar2;
          if (uVar10 < uVar2) {
            uVar16 = uVar10;
          }
          uVar10 = uVar14 << 1 | 1;
          local_34 = uVar2;
          if (uVar10 < uVar16) {
            do {
              uVar2 = uVar14 * 2 + 2;
              if (uVar2 < uVar16) {
                uVar11 = param_1[uVar2 * 3 + 2];
                uVar15 = param_1[uVar10 * 3 + 2];
                uVar3 = uVar11;
                if (uVar15 < uVar11) {
                  uVar3 = uVar15;
                }
                iVar5 = FUN_01bed842(param_1[uVar10 * 3 + 1],param_1[uVar2 * 3 + 1],uVar3);
                if (iVar5 == 0) {
                  iVar5 = uVar15 - uVar11;
                }
                uVar2 = uVar10 - (iVar5 >> 0x1f);
              }
              else {
                uVar2 = uVar10;
              }
              uVar11 = param_1[uVar2 * 3 + 2];
              uVar3 = param_1[uVar14 * 3 + 2];
              uVar10 = uVar11;
              if (uVar3 < uVar11) {
                uVar10 = uVar3;
              }
              uVar10 = FUN_01bed842(param_1[uVar14 * 3 + 1],param_1[uVar2 * 3 + 1],uVar10);
              if (uVar10 == 0) {
                uVar10 = uVar3 - uVar11;
              }
              if (uVar10 < 0x80000000) break;
              iVar5 = 0;
              do {
                uVar7 = param_1[uVar14 * 3 + iVar5];
                param_1[uVar14 * 3 + iVar5] = param_1[uVar2 * 3 + iVar5];
                param_1[uVar2 * 3 + iVar5] = uVar7;
                iVar5 = iVar5 + 1;
              } while (iVar5 != 3);
              uVar10 = uVar2 << 1 | 1;
              uVar14 = uVar2;
            } while (uVar10 < uVar16);
          }
          uVar2 = local_34;
          if (local_34 == 0) {
            return;
          }
        } while( true );
      }
      puVar19 = param_1 + (param_2 >> 3) * 0x15;
      puVar9 = param_1 + (param_2 >> 3) * 0xc;
      if (param_2 < 0x40) {
        uVar10 = puVar9[2];
        uVar17 = param_1[1];
        uVar14 = param_1[2];
        uVar7 = puVar9[1];
        uVar2 = uVar10;
        if (uVar14 < uVar10) {
          uVar2 = uVar14;
        }
        uVar2 = FUN_01bed842(uVar17,uVar7,uVar2);
        uVar16 = puVar19[2];
        uVar8 = puVar19[1];
        if (uVar2 == 0) {
          uVar2 = uVar14 - uVar10;
        }
        uVar3 = uVar16;
        if (uVar14 < uVar16) {
          uVar3 = uVar14;
        }
        uVar3 = FUN_01bed842(uVar17,uVar8,uVar3);
        if (uVar3 == 0) {
          uVar3 = uVar14 - uVar16;
        }
        puVar4 = param_1;
        if (-1 < (int)(uVar2 ^ uVar3)) {
          uVar14 = uVar16;
          if (uVar10 < uVar16) {
            uVar14 = uVar10;
          }
          uVar14 = FUN_01bed842(uVar7,uVar8,uVar14);
          if (uVar14 == 0) {
            uVar14 = uVar10 - uVar16;
          }
          puVar4 = puVar9;
          if ((int)(uVar2 ^ uVar14) < 0) {
            puVar4 = puVar19;
          }
        }
      }
      else {
        puVar4 = (undefined4 *)FUN_01936e28(param_1,puVar9,puVar19);
      }
      param_4 = param_4 + -1;
      if (param_3 == (undefined4 *)0x0) {
LAB_01936a2c:
        local_278[0] = *param_1;
        local_278[1] = param_1[1];
        local_278[2] = param_1[2];
        puVar9 = (undefined4 *)((int)param_1 + ((int)puVar4 - (int)param_1));
        FUN_01bed864(param_1,puVar9,0xc);
        puVar4 = param_1 + 3;
        uVar2 = 0;
        *puVar9 = local_278[0];
        puVar9[1] = local_278[1];
        puVar9[2] = local_278[2];
        puVar9 = param_1 + 6;
        uVar7 = param_1[1];
        uVar10 = param_1[2];
        local_278[0] = *puVar4;
        local_278[1] = param_1[4];
        local_278[2] = param_1[5];
        puVar18 = param_1 + param_2 * 3;
        puVar19 = puVar4;
        if (puVar9 < puVar18 + -3) {
          do {
            puVar19 = puVar9;
            uVar16 = puVar19[2];
            uVar14 = uVar10;
            if (uVar16 < uVar10) {
              uVar14 = uVar16;
            }
            iVar5 = FUN_01bed842(puVar19[1],uVar7,uVar14);
            puVar9 = puVar4 + uVar2 * 3;
            FUN_01bed864(puVar19 + -3,puVar9,0xc);
            if (iVar5 == 0) {
              iVar5 = uVar16 - uVar10;
            }
            uVar17 = puVar19[1];
            uVar8 = puVar19[2];
            iVar5 = uVar2 - (iVar5 >> 0x1f);
            *puVar9 = *puVar19;
            puVar9[1] = uVar17;
            puVar9[2] = uVar8;
            puVar12 = puVar4 + iVar5 * 3;
            uVar14 = puVar19[5];
            uVar2 = uVar10;
            if (uVar14 < uVar10) {
              uVar2 = uVar14;
            }
            iVar6 = FUN_01bed842(puVar19[4],uVar7,uVar2);
            FUN_01bed864(puVar19,puVar12,0xc);
            if (iVar6 == 0) {
              iVar6 = uVar14 - uVar10;
            }
            uVar17 = puVar19[4];
            uVar8 = puVar19[5];
            puVar9 = puVar19 + 6;
            uVar2 = iVar5 - (iVar6 >> 0x1f);
            *puVar12 = puVar19[3];
            puVar12[1] = uVar17;
            puVar12[2] = uVar8;
          } while (puVar9 < puVar18 + -3);
          puVar19 = puVar19 + 3;
        }
        do {
          puVar12 = puVar9;
          puVar9 = puVar12;
          if (puVar12 == puVar18) {
            puVar9 = local_278;
          }
          uVar16 = puVar9[2];
          uVar14 = uVar10;
          if (uVar16 < uVar10) {
            uVar14 = uVar16;
          }
          iVar5 = FUN_01bed842(puVar9[1],uVar7,uVar14);
          puVar13 = puVar4 + uVar2 * 3;
          FUN_01bed864(puVar19,puVar13,0xc);
          uVar17 = puVar9[1];
          uVar8 = puVar9[2];
          if (iVar5 == 0) {
            iVar5 = uVar16 - uVar10;
          }
          uVar2 = uVar2 - (iVar5 >> 0x1f);
          *puVar13 = *puVar9;
          puVar13[1] = uVar17;
          puVar13[2] = uVar8;
          puVar9 = puVar12 + 3;
          puVar19 = puVar12;
        } while (puVar12 != puVar18);
        if (param_2 <= uVar2) {
LAB_01936dfc:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x1936dfc);
          (*pcVar1)();
        }
        local_278[0] = *param_1;
        local_278[1] = param_1[1];
        local_278[2] = param_1[2];
        puVar19 = param_1 + uVar2 * 3;
        FUN_01bed864(param_1,puVar19,0xc);
        *puVar19 = local_278[0];
        puVar19[1] = local_278[1];
        puVar19[2] = local_278[2];
        FUN_019366a4(param_1,uVar2,param_3,param_4);
        puVar9 = puVar19;
      }
      else {
        puVar9 = (undefined4 *)((int)param_1 + ((int)puVar4 - (int)param_1));
        uVar10 = param_3[2];
        uVar14 = puVar9[2];
        uVar2 = uVar14;
        if (uVar10 < uVar14) {
          uVar2 = uVar10;
        }
        iVar5 = FUN_01bed842(param_3[1],puVar9[1],uVar2);
        if (iVar5 == 0) {
          iVar5 = uVar10 - uVar14;
        }
        if (iVar5 < 0) goto LAB_01936a2c;
        local_278[0] = *param_1;
        local_278[1] = param_1[1];
        local_278[2] = param_1[2];
        FUN_01bed864(param_1,puVar9,0xc);
        puVar18 = param_1 + 3;
        puVar19 = param_1 + 6;
        *puVar9 = local_278[0];
        puVar9[1] = local_278[1];
        puVar9[2] = local_278[2];
        uVar2 = 0;
        uVar7 = param_1[1];
        uVar10 = param_1[2];
        local_278[0] = *puVar18;
        local_278[1] = param_1[4];
        local_278[2] = param_1[5];
        puVar4 = param_1 + param_2 * 3;
        puVar9 = puVar18;
        if (puVar19 < puVar4 + -3) {
          do {
            puVar9 = puVar19;
            uVar16 = puVar9[2];
            uVar14 = uVar16;
            if (uVar10 < uVar16) {
              uVar14 = uVar10;
            }
            uVar14 = FUN_01bed842(uVar7,puVar9[1],uVar14);
            puVar19 = puVar18 + uVar2 * 3;
            FUN_01bed864(puVar9 + -3,puVar19,0xc);
            if (uVar14 == 0) {
              uVar14 = uVar10 - uVar16;
            }
            uVar17 = puVar9[1];
            uVar8 = puVar9[2];
            if (uVar14 < 0x80000000) {
              uVar2 = uVar2 + 1;
            }
            *puVar19 = *puVar9;
            puVar19[1] = uVar17;
            puVar19[2] = uVar8;
            uVar16 = puVar9[5];
            puVar12 = puVar18 + uVar2 * 3;
            uVar14 = uVar16;
            if (uVar10 < uVar16) {
              uVar14 = uVar10;
            }
            uVar14 = FUN_01bed842(uVar7,puVar9[4],uVar14);
            FUN_01bed864(puVar9,puVar12,0xc);
            if (uVar14 == 0) {
              uVar14 = uVar10 - uVar16;
            }
            uVar17 = puVar9[4];
            uVar8 = puVar9[5];
            if (uVar14 < 0x80000000) {
              uVar2 = uVar2 + 1;
            }
            puVar19 = puVar9 + 6;
            *puVar12 = puVar9[3];
            puVar12[1] = uVar17;
            puVar12[2] = uVar8;
          } while (puVar19 < puVar4 + -3);
          puVar9 = puVar9 + 3;
        }
        do {
          puVar12 = puVar19;
          puVar19 = puVar12;
          if (puVar12 == puVar4) {
            puVar19 = local_278;
          }
          uVar16 = puVar19[2];
          uVar14 = uVar16;
          if (uVar10 < uVar16) {
            uVar14 = uVar10;
          }
          uVar14 = FUN_01bed842(uVar7,puVar19[1],uVar14);
          puVar13 = puVar18 + uVar2 * 3;
          FUN_01bed864(puVar9,puVar13,0xc);
          uVar17 = puVar19[1];
          uVar8 = puVar19[2];
          if (uVar14 == 0) {
            uVar14 = uVar10 - uVar16;
          }
          if (uVar14 < 0x80000000) {
            uVar2 = uVar2 + 1;
          }
          *puVar13 = *puVar19;
          puVar13[1] = uVar17;
          puVar13[2] = uVar8;
          puVar19 = puVar12 + 3;
          puVar9 = puVar12;
        } while (puVar12 != puVar4);
        if (param_2 <= uVar2) goto LAB_01936dfc;
        local_278[0] = *param_1;
        local_278[1] = param_1[1];
        local_278[2] = param_1[2];
        puVar9 = param_1 + uVar2 * 3;
        FUN_01bed864(param_1,puVar9,0xc);
        puVar19 = (undefined4 *)0x0;
        *puVar9 = local_278[0];
        puVar9[1] = local_278[1];
        puVar9[2] = local_278[2];
      }
      param_2 = ~uVar2 + param_2;
      param_1 = puVar9 + 3;
      param_3 = puVar19;
    } while (0x20 < param_2);
  }
  uVar2 = param_2 >> 1;
  if (uVar2 != 0) {
    if (param_2 < 0x10) {
      puVar9 = param_1 + uVar2 * 3;
      if (param_2 < 8) {
        local_278[0] = *param_1;
        local_278[1] = param_1[1];
        local_278[2] = param_1[2];
        uVar10 = 1;
        uVar7 = puVar9[1];
        uVar17 = puVar9[2];
        local_278[uVar2 * 3] = *puVar9;
        local_278[uVar2 * 3 + 1] = uVar7;
        local_278[uVar2 * 3 + 2] = uVar17;
      }
      else {
        FUN_01936348(param_1,local_278);
        FUN_01936348(puVar9,local_278 + uVar2 * 3);
        uVar10 = 4;
      }
    }
    else {
      FUN_019364f8(param_1,local_278,local_278 + param_2 * 3);
      FUN_019364f8(param_1 + uVar2 * 3,local_278 + uVar2 * 3,auStack_218 + param_2 * 0xc);
      uVar10 = 8;
    }
    local_2c[0] = 0;
    iVar5 = 0;
    local_2c[1] = uVar2;
    do {
      iVar6 = local_2c[iVar5];
      uVar14 = uVar2;
      if (iVar6 != 0) {
        uVar14 = param_2 - uVar2;
      }
      if (uVar10 < uVar14) {
        iVar20 = uVar14 - uVar10;
        puVar19 = param_1 + uVar10 * 3 + iVar6 * 3;
        puVar9 = local_278 + uVar10 * 3 + iVar6 * 3;
        do {
          uVar7 = puVar19[1];
          uVar17 = puVar19[2];
          *puVar9 = *puVar19;
          puVar9[1] = uVar7;
          puVar9[2] = uVar17;
          FUN_01936298(local_278 + iVar6 * 3,puVar9);
          puVar19 = puVar19 + 3;
          puVar9 = puVar9 + 3;
          iVar20 = iVar20 + -1;
        } while (iVar20 != 0);
      }
      bVar21 = iVar5 == 0;
      iVar5 = 1;
    } while (bVar21);
    FUN_01936530(local_278,param_2,param_1);
  }
  return;
}

