// FUN_0153b4cc @ 0153b4cc size=2652 calls_out=11 calls_in=2
// strings: 

void FUN_0153b4cc(undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5,
                 int param_6)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  int iVar18;
  bool bVar19;
  int local_78;
  undefined4 *local_44;
  undefined4 local_38;
  undefined4 uStack_34;
  int local_30 [3];
  
  if (0x20 < param_2) {
    local_78 = param_6;
    uVar8 = param_2;
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_0154a2a4(param_1,uVar8,param_3,param_4,1);
          return;
        }
        puVar12 = param_1 + (uVar8 >> 3) * 0x15;
        puVar6 = param_1 + (uVar8 >> 3) * 0xc;
        if (uVar8 < 0x40) {
          uVar15 = puVar6[2];
          uVar11 = puVar6[1];
          uVar13 = param_1[1];
          uVar9 = param_1[2];
          uVar10 = uVar15;
          if (uVar9 < uVar15) {
            uVar10 = uVar9;
          }
          iVar2 = FUN_01bed842(uVar13,uVar11,uVar10);
          uVar17 = puVar12[1];
          uVar10 = puVar12[2];
          if (iVar2 == 0) {
            iVar2 = uVar9 - uVar15;
          }
          uVar14 = (uint)(0 < iVar2) - (uint)(iVar2 < 0);
          uVar16 = uVar10;
          if (uVar9 < uVar10) {
            uVar16 = uVar9;
          }
          iVar2 = FUN_01bed842(uVar13,uVar17,uVar16);
          if (iVar2 == 0) {
            iVar2 = uVar9 - uVar10;
          }
          puVar3 = param_1;
          if (-1 < (int)((uint)(0 < iVar2) - (uint)(iVar2 < 0) ^ uVar14)) {
            uVar9 = uVar10;
            if (uVar15 < uVar10) {
              uVar9 = uVar15;
            }
            iVar2 = FUN_01bed842(uVar11,uVar17,uVar9);
            if (iVar2 == 0) {
              iVar2 = uVar15 - uVar10;
            }
            puVar3 = puVar6;
            if ((int)((uint)(0 < iVar2) - (uint)(iVar2 < 0) ^ uVar14) < 0) {
              puVar3 = puVar12;
            }
          }
        }
        else {
          puVar3 = (undefined4 *)FUN_015a5de8(param_1,puVar6,puVar12);
        }
        param_5 = param_5 + -1;
        uVar10 = ((uint)((int)puVar3 - (int)param_1) >> 2) * -0x55555555;
        local_38 = *puVar3;
        uStack_34 = puVar3[1];
        local_30[0] = puVar3[2];
        if (local_78 == 0) break;
        uVar15 = puVar3[2];
        uVar16 = *(uint *)(local_78 + 8);
        uVar9 = uVar15;
        if (uVar16 < uVar15) {
          uVar9 = uVar16;
        }
        uVar9 = FUN_01bed842(*(undefined4 *)(local_78 + 4),puVar3[1],uVar9);
        if (uVar9 == 0) {
          uVar9 = uVar16 - uVar15;
        }
        if (0x7fffffff < uVar9) break;
LAB_0153ba74:
        if (param_4 < uVar8) goto LAB_0153bef8;
        uVar9 = 0;
        puVar12 = param_3 + uVar8 * 3;
        local_44 = param_1;
        while( true ) {
          iVar2 = uVar10 - 3;
          if (uVar10 < 3) {
            iVar2 = 0;
          }
          if (local_44 < param_1 + iVar2 * 3) {
            iVar7 = 0;
            puVar6 = local_44;
            do {
              uVar16 = *(uint *)((int)local_44 + (8 - iVar7));
              uVar14 = puVar3[2];
              uVar15 = uVar16;
              if (uVar14 < uVar16) {
                uVar15 = uVar14;
              }
              uVar15 = FUN_01bed842(puVar3[1],*(undefined4 *)((int)local_44 + (4 - iVar7)),uVar15);
              if (uVar15 == 0) {
                uVar15 = uVar14 - uVar16;
              }
              if (uVar15 < 0x80000000) {
                uVar15 = uVar9 + 1;
                puVar4 = param_3;
              }
              else {
                uVar15 = uVar9;
                puVar4 = (undefined4 *)((int)puVar12 + iVar7 + -0xc);
              }
              puVar4 = puVar4 + uVar9 * 3;
              uVar11 = puVar6[1];
              uVar13 = puVar6[2];
              *puVar4 = *puVar6;
              puVar4[1] = uVar11;
              puVar4[2] = uVar13;
              uVar16 = *(uint *)((int)local_44 + (0x14 - iVar7));
              uVar14 = puVar3[2];
              uVar9 = uVar16;
              if (uVar14 < uVar16) {
                uVar9 = uVar14;
              }
              uVar9 = FUN_01bed842(puVar3[1],*(undefined4 *)((int)local_44 + (0x10 - iVar7)),uVar9);
              if (uVar9 == 0) {
                uVar9 = uVar14 - uVar16;
              }
              if (uVar9 < 0x80000000) {
                uVar9 = uVar15 + 1;
                puVar4 = param_3;
              }
              else {
                uVar9 = uVar15;
                puVar4 = (undefined4 *)((int)puVar12 + iVar7 + -0x18);
              }
              puVar4 = puVar4 + uVar15 * 3;
              uVar11 = *(undefined4 *)((int)local_44 + (0x10 - iVar7));
              uVar13 = *(undefined4 *)((int)local_44 + (0x14 - iVar7));
              *puVar4 = *(undefined4 *)((int)local_44 + (0xc - iVar7));
              puVar4[1] = uVar11;
              puVar4[2] = uVar13;
              uVar16 = *(uint *)((int)local_44 + (0x20 - iVar7));
              uVar14 = puVar3[2];
              uVar15 = uVar16;
              if (uVar14 < uVar16) {
                uVar15 = uVar14;
              }
              uVar15 = FUN_01bed842(puVar3[1],*(undefined4 *)((int)local_44 + (0x1c - iVar7)),uVar15
                                   );
              if (uVar15 == 0) {
                uVar15 = uVar14 - uVar16;
              }
              if (uVar15 < 0x80000000) {
                uVar15 = uVar9 + 1;
                puVar4 = param_3;
              }
              else {
                uVar15 = uVar9;
                puVar4 = (undefined4 *)((int)puVar12 + iVar7 + -0x24);
              }
              puVar4 = puVar4 + uVar9 * 3;
              uVar11 = puVar6[7];
              uVar13 = puVar6[8];
              *puVar4 = puVar6[6];
              puVar4[1] = uVar11;
              puVar4[2] = uVar13;
              uVar14 = *(uint *)((int)local_44 + (0x2c - iVar7));
              uVar16 = puVar3[2];
              uVar9 = uVar14;
              if (uVar16 < uVar14) {
                uVar9 = uVar16;
              }
              uVar9 = FUN_01bed842(puVar3[1],*(undefined4 *)((int)local_44 + (0x28 - iVar7)),uVar9);
              if (uVar9 == 0) {
                uVar9 = uVar16 - uVar14;
              }
              puVar6 = puVar6 + 0xc;
              if (uVar9 < 0x80000000) {
                uVar9 = uVar15 + 1;
                puVar4 = param_3;
              }
              else {
                uVar9 = uVar15;
                puVar4 = (undefined4 *)((int)puVar12 + iVar7 + -0x30);
              }
              puVar4 = puVar4 + uVar15 * 3;
              iVar18 = iVar7 + -0x30;
              uVar11 = *(undefined4 *)((int)local_44 + (0x28 - iVar7));
              uVar13 = *(undefined4 *)((int)local_44 + (0x2c - iVar7));
              *puVar4 = *(undefined4 *)((int)local_44 + (0x24 - iVar7));
              puVar4[1] = uVar11;
              puVar4[2] = uVar13;
              iVar7 = iVar18;
            } while (puVar6 < param_1 + iVar2 * 3);
            puVar12 = (undefined4 *)((int)puVar12 + iVar18);
            local_44 = puVar6;
          }
          uVar15 = uVar9;
          for (; local_44 < param_1 + uVar10 * 3; local_44 = local_44 + 3) {
            uVar14 = local_44[2];
            uVar16 = puVar3[2];
            uVar9 = uVar14;
            if (uVar16 < uVar14) {
              uVar9 = uVar16;
            }
            uVar9 = FUN_01bed842(puVar3[1],local_44[1],uVar9);
            puVar12 = puVar12 + -3;
            if (uVar9 == 0) {
              uVar9 = uVar16 - uVar14;
            }
            uVar16 = uVar15;
            puVar6 = puVar12;
            if (uVar9 < 0x80000000) {
              uVar16 = uVar15 + 1;
              puVar6 = param_3;
            }
            puVar6 = puVar6 + uVar15 * 3;
            uVar11 = local_44[1];
            uVar13 = local_44[2];
            *puVar6 = *local_44;
            puVar6[1] = uVar11;
            puVar6[2] = uVar13;
            uVar15 = uVar16;
          }
          if (uVar10 == uVar8) break;
          uVar11 = local_44[1];
          uVar13 = local_44[2];
          uVar9 = uVar15 + 1;
          puVar6 = param_3 + uVar15 * 3;
          puVar12 = puVar12 + -3;
          *puVar6 = *local_44;
          puVar6[1] = uVar11;
          puVar6[2] = uVar13;
          local_44 = local_44 + 3;
          uVar10 = uVar8;
        }
        FUN_01bed4e2(param_1,param_3,uVar15 * 0xc);
        param_2 = uVar8 - uVar15;
        if (param_2 == 0) {
          return;
        }
        puVar6 = param_3 + uVar8 * 3 + -3;
        puVar12 = param_1 + uVar15 * 3;
        uVar10 = param_2;
        do {
          uVar11 = *puVar6;
          uVar13 = puVar6[1];
          uVar17 = puVar6[2];
          puVar6 = puVar6 + -3;
          uVar10 = uVar10 - 1;
          *puVar12 = uVar11;
          puVar12[1] = uVar13;
          puVar12[2] = uVar17;
          puVar12 = puVar12 + 3;
        } while (uVar10 != 0);
        if (uVar8 < uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar15,uVar8,uVar8,&DAT_01d30598);
        }
        param_1 = param_1 + uVar15 * 3;
        local_78 = 0;
        uVar8 = param_2;
        if (param_2 < 0x21) goto LAB_0153b4f0;
      }
      if (param_4 < uVar8) goto LAB_0153bef8;
      param_2 = 0;
      puVar12 = param_3 + uVar8 * 3;
      uVar9 = uVar10;
      local_44 = param_1;
      while( true ) {
        iVar2 = uVar9 - 3;
        if (uVar9 < 3) {
          iVar2 = 0;
        }
        if (local_44 < param_1 + iVar2 * 3) {
          iVar7 = 0;
          puVar6 = local_44;
          do {
            uVar14 = puVar3[2];
            uVar16 = *(uint *)((int)local_44 + (8 - iVar7));
            uVar15 = uVar14;
            if (uVar16 < uVar14) {
              uVar15 = uVar16;
            }
            iVar18 = FUN_01bed842(*(undefined4 *)((int)local_44 + (4 - iVar7)),puVar3[1],uVar15);
            if (iVar18 == 0) {
              iVar18 = uVar16 - uVar14;
            }
            puVar4 = param_3;
            if (-1 < iVar18) {
              puVar4 = (undefined4 *)((int)puVar12 + iVar7 + -0xc);
            }
            puVar4 = puVar4 + param_2 * 3;
            uVar11 = puVar6[1];
            uVar13 = puVar6[2];
            *puVar4 = *puVar6;
            puVar4[1] = uVar11;
            puVar4[2] = uVar13;
            uVar16 = *(uint *)((int)local_44 + (0x14 - iVar7));
            uVar14 = puVar3[2];
            uVar15 = uVar14;
            if (uVar16 < uVar14) {
              uVar15 = uVar16;
            }
            iVar5 = FUN_01bed842(*(undefined4 *)((int)local_44 + (0x10 - iVar7)),puVar3[1],uVar15);
            if (iVar5 == 0) {
              iVar5 = uVar16 - uVar14;
            }
            puVar4 = param_3;
            if (-1 < iVar5) {
              puVar4 = (undefined4 *)((int)puVar12 + iVar7 + -0x18);
            }
            iVar18 = param_2 - (iVar18 >> 0x1f);
            puVar4 = puVar4 + iVar18 * 3;
            iVar18 = iVar18 - (iVar5 >> 0x1f);
            uVar11 = *(undefined4 *)((int)local_44 + (0x10 - iVar7));
            uVar13 = *(undefined4 *)((int)local_44 + (0x14 - iVar7));
            *puVar4 = *(undefined4 *)((int)local_44 + (0xc - iVar7));
            puVar4[1] = uVar11;
            puVar4[2] = uVar13;
            uVar16 = *(uint *)((int)local_44 + (0x20 - iVar7));
            uVar14 = puVar3[2];
            uVar15 = uVar14;
            if (uVar16 < uVar14) {
              uVar15 = uVar16;
            }
            iVar5 = FUN_01bed842(*(undefined4 *)((int)local_44 + (0x1c - iVar7)),puVar3[1],uVar15);
            if (iVar5 == 0) {
              iVar5 = uVar16 - uVar14;
            }
            puVar4 = param_3;
            if (-1 < iVar5) {
              puVar4 = (undefined4 *)((int)puVar12 + iVar7 + -0x24);
            }
            puVar4 = puVar4 + iVar18 * 3;
            uVar11 = puVar6[7];
            uVar13 = puVar6[8];
            *puVar4 = puVar6[6];
            puVar4[1] = uVar11;
            puVar4[2] = uVar13;
            uVar14 = puVar3[2];
            iVar18 = iVar18 - (iVar5 >> 0x1f);
            uVar16 = *(uint *)((int)local_44 + (0x2c - iVar7));
            uVar15 = uVar14;
            if (uVar16 < uVar14) {
              uVar15 = uVar16;
            }
            iVar5 = FUN_01bed842(*(undefined4 *)((int)local_44 + (0x28 - iVar7)),puVar3[1],uVar15);
            if (iVar5 == 0) {
              iVar5 = uVar16 - uVar14;
            }
            puVar4 = param_3;
            if (-1 < iVar5) {
              puVar4 = (undefined4 *)((int)puVar12 + iVar7 + -0x30);
            }
            param_2 = iVar18 - (iVar5 >> 0x1f);
            puVar4 = puVar4 + iVar18 * 3;
            iVar18 = iVar7 + -0x30;
            puVar6 = puVar6 + 0xc;
            uVar11 = *(undefined4 *)((int)local_44 + (0x28 - iVar7));
            uVar13 = *(undefined4 *)((int)local_44 + (0x2c - iVar7));
            *puVar4 = *(undefined4 *)((int)local_44 + (0x24 - iVar7));
            puVar4[1] = uVar11;
            puVar4[2] = uVar13;
            iVar7 = iVar18;
          } while (puVar6 < param_1 + iVar2 * 3);
          puVar12 = (undefined4 *)((int)puVar12 + iVar18);
          local_44 = puVar6;
        }
        for (; local_44 < param_1 + uVar9 * 3; local_44 = local_44 + 3) {
          uVar14 = puVar3[2];
          uVar16 = local_44[2];
          uVar15 = uVar14;
          if (uVar16 < uVar14) {
            uVar15 = uVar16;
          }
          iVar2 = FUN_01bed842(local_44[1],puVar3[1],uVar15);
          puVar12 = puVar12 + -3;
          if (iVar2 == 0) {
            iVar2 = uVar16 - uVar14;
          }
          puVar6 = puVar12;
          if (iVar2 < 0) {
            puVar6 = param_3;
          }
          puVar6 = puVar6 + param_2 * 3;
          uVar11 = local_44[1];
          uVar13 = local_44[2];
          param_2 = param_2 - (iVar2 >> 0x1f);
          *puVar6 = *local_44;
          puVar6[1] = uVar11;
          puVar6[2] = uVar13;
        }
        if (uVar9 == uVar8) break;
        puVar12 = puVar12 + -3;
        uVar11 = local_44[1];
        uVar13 = local_44[2];
        puVar6 = puVar12 + param_2 * 3;
        *puVar6 = *local_44;
        puVar6[1] = uVar11;
        puVar6[2] = uVar13;
        local_44 = local_44 + 3;
        uVar9 = uVar8;
      }
      FUN_01bed4e2(param_1,param_3,param_2 * 0xc);
      iVar2 = uVar8 - param_2;
      if (iVar2 != 0) {
        puVar6 = param_3 + uVar8 * 3 + -3;
        puVar12 = param_1 + param_2 * 3;
        iVar7 = iVar2;
        do {
          uVar11 = *puVar6;
          uVar13 = puVar6[1];
          uVar17 = puVar6[2];
          puVar6 = puVar6 + -3;
          iVar7 = iVar7 + -1;
          *puVar12 = uVar11;
          puVar12[1] = uVar13;
          puVar12[2] = uVar17;
          puVar12 = puVar12 + 3;
        } while (iVar7 != 0);
      }
      if (param_2 == 0) goto LAB_0153ba74;
      if (uVar8 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d30588);
      }
      FUN_0153b4cc(param_1 + param_2 * 3,iVar2,param_3,param_4,param_5,&local_38);
      uVar8 = param_2;
    } while (0x20 < param_2);
  }
LAB_0153b4f0:
  if (1 < param_2) {
    if (param_4 < param_2 + 0x10) {
LAB_0153bef8:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x153bef8);
      (*pcVar1)();
    }
    uVar8 = param_2 >> 1;
    if (param_2 < 0x10) {
      puVar12 = param_3 + uVar8 * 3;
      puVar6 = param_1 + uVar8 * 3;
      if (param_2 < 8) {
        uVar11 = param_1[1];
        uVar13 = param_1[2];
        *param_3 = *param_1;
        param_3[1] = uVar11;
        param_3[2] = uVar13;
        uVar11 = puVar6[1];
        uVar13 = puVar6[2];
        *puVar12 = *puVar6;
        puVar12[1] = uVar11;
        puVar12[2] = uVar13;
        uVar10 = 1;
      }
      else {
        FUN_00754a28();
        FUN_00754a28(puVar6,puVar12);
        uVar10 = 4;
      }
    }
    else {
      FUN_01538bcc(param_1,param_3,param_3 + param_2 * 3);
      FUN_01538bcc(param_1 + uVar8 * 3,param_3 + uVar8 * 3,param_3 + param_2 * 3 + 0x18);
      uVar10 = 8;
    }
    local_30[0] = 0;
    iVar2 = 0;
    local_30[1] = uVar8;
    do {
      iVar7 = local_30[iVar2];
      uVar9 = uVar8;
      if (iVar7 != 0) {
        uVar9 = param_2 - uVar8;
      }
      if (uVar10 < uVar9) {
        iVar18 = uVar9 - uVar10;
        puVar6 = param_1 + uVar10 * 3 + iVar7 * 3;
        puVar12 = param_3 + uVar10 * 3 + iVar7 * 3;
        do {
          uVar11 = puVar6[1];
          uVar13 = puVar6[2];
          *puVar12 = *puVar6;
          puVar12[1] = uVar11;
          puVar12[2] = uVar13;
          FUN_015388e0(param_3 + iVar7 * 3,puVar12);
          puVar6 = puVar6 + 3;
          puVar12 = puVar12 + 3;
          iVar18 = iVar18 + -1;
        } while (iVar18 != 0);
      }
      bVar19 = iVar2 == 0;
      iVar2 = 1;
    } while (bVar19);
    FUN_014c1fac(param_3,param_2,param_1);
  }
  return;
}

