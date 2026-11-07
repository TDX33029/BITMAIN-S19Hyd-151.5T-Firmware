// FUN_00b9357c @ 00b9357c size=2524 calls_out=9 calls_in=2
// strings: 

void FUN_00b9357c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 int param_5,int param_6)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined4 *puVar20;
  uint uVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  bool bVar24;
  int local_6c;
  undefined4 *local_5c;
  int local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_2 <= &DAT_00000020) {
LAB_00b9359c:
    uVar6 = (uint)param_2 >> 1;
    if (uVar6 != 0) {
      puVar7 = param_3 + uVar6 * 6;
      puVar8 = param_1 + uVar6 * 6;
      if (param_2 < &DAT_00000008) {
        uVar11 = param_1[1];
        uVar12 = param_1[2];
        uVar13 = param_1[3];
        uVar14 = param_1[4];
        uVar16 = param_1[5];
        *param_3 = *param_1;
        param_3[1] = uVar11;
        param_3[2] = uVar12;
        param_3[3] = uVar13;
        param_3[4] = uVar14;
        param_3[5] = uVar16;
        uVar11 = puVar8[1];
        uVar12 = puVar8[2];
        uVar13 = puVar8[3];
        uVar14 = puVar8[4];
        uVar16 = puVar8[5];
        *puVar7 = *puVar8;
        puVar7[1] = uVar11;
        puVar7[2] = uVar12;
        puVar7[3] = uVar13;
        puVar7[4] = uVar14;
        puVar7[5] = uVar16;
        uVar2 = 1;
      }
      else {
        FUN_00b8f280(param_1,param_3);
        FUN_00b8f280(puVar8,puVar7);
        uVar2 = 4;
      }
      if (uVar2 < uVar6) {
        local_48 = uVar2 * 0x18;
        uVar19 = uVar2;
        do {
          puVar10 = param_1 + uVar19 * 6;
          puVar20 = param_3 + uVar19 * 6;
          uVar11 = puVar10[1];
          uVar12 = puVar10[2];
          uVar13 = puVar10[3];
          uVar14 = puVar10[4];
          uVar16 = puVar10[5];
          *puVar20 = *puVar10;
          puVar20[1] = uVar11;
          puVar20[2] = uVar12;
          puVar20[3] = uVar13;
          puVar20[4] = uVar14;
          puVar20[5] = uVar16;
          uVar17 = puVar20[-4];
          uVar21 = puVar20[2];
          uVar11 = puVar20[1];
          uVar4 = uVar17;
          if (uVar21 < uVar17) {
            uVar4 = uVar21;
          }
          uVar4 = FUN_016dd50a(uVar11,puVar20[-5],uVar4);
          if (uVar4 == 0) {
            uVar4 = uVar21 - uVar17;
          }
          if (0x7fffffff < uVar4) {
            uVar12 = *puVar20;
            iVar18 = local_48;
            do {
              puVar20 = (undefined4 *)((int)param_3 + iVar18);
              *puVar20 = puVar20[-6];
              puVar20[1] = puVar20[-5];
              puVar20[2] = puVar20[-4];
              puVar20[3] = puVar20[-3];
              puVar20[4] = puVar20[-2];
              puVar20[5] = puVar20[-1];
              if (iVar18 == 0x18) {
                puVar3 = param_3;
                goto LAB_00b93adc;
              }
              uVar17 = puVar20[-10];
              uVar4 = uVar17;
              if (uVar21 < uVar17) {
                uVar4 = uVar21;
              }
              iVar5 = FUN_016dd50a(uVar11,puVar20[-0xb],uVar4);
              iVar18 = iVar18 + -0x18;
              if (iVar5 == 0) {
                iVar5 = uVar21 - uVar17;
              }
            } while (iVar5 < 0);
            puVar3 = (undefined4 *)((int)param_3 + iVar18);
LAB_00b93adc:
            *puVar3 = uVar12;
            puVar20[-5] = uVar11;
            uVar11 = puVar10[3];
            uVar12 = puVar10[4];
            uVar13 = puVar10[5];
            puVar20[-4] = uVar21;
            puVar20[-1] = uVar13;
            puVar20[-2] = uVar12;
            puVar20[-3] = uVar11;
          }
          uVar19 = uVar19 + 1;
          local_48 = local_48 + 0x18;
        } while (uVar19 != uVar6);
      }
      if (uVar2 < (int)param_2 - uVar6) {
        local_48 = 0x18;
        uVar19 = uVar2;
        local_5c = puVar7;
        do {
          puVar10 = puVar8 + uVar19 * 6;
          puVar20 = puVar7 + uVar19 * 6;
          uVar11 = puVar10[1];
          uVar12 = puVar10[2];
          uVar13 = puVar10[3];
          uVar14 = puVar10[4];
          uVar16 = puVar10[5];
          *puVar20 = *puVar10;
          puVar20[1] = uVar11;
          puVar20[2] = uVar12;
          puVar20[3] = uVar13;
          puVar20[4] = uVar14;
          puVar20[5] = uVar16;
          uVar21 = puVar20[-4];
          uVar11 = puVar20[1];
          uVar17 = puVar20[2];
          uVar4 = uVar21;
          if (uVar17 < uVar21) {
            uVar4 = uVar17;
          }
          uVar4 = FUN_016dd50a(uVar11,puVar20[-5],uVar4);
          if (uVar4 == 0) {
            uVar4 = uVar17 - uVar21;
          }
          if (0x7fffffff < uVar4) {
            uVar12 = *puVar20;
            puVar20 = local_5c;
            iVar18 = local_48;
            do {
              puVar3 = puVar20 + uVar2 * 6;
              *puVar3 = puVar3[-6];
              puVar3[1] = puVar3[-5];
              puVar3[2] = puVar3[-4];
              puVar3[3] = puVar3[-3];
              puVar3[4] = puVar3[-2];
              puVar3[5] = puVar3[-1];
              if (uVar2 * 0x18 == iVar18) {
                puVar20 = puVar7;
                goto LAB_00b93c34;
              }
              uVar21 = puVar3[-10];
              uVar4 = uVar21;
              if (uVar17 < uVar21) {
                uVar4 = uVar17;
              }
              iVar5 = FUN_016dd50a(uVar11,puVar3[-0xb],uVar4);
              iVar18 = iVar18 + 0x18;
              puVar20 = puVar20 + -6;
              if (iVar5 == 0) {
                iVar5 = uVar17 - uVar21;
              }
            } while (iVar5 < 0);
            puVar20 = puVar20 + uVar2 * 6;
LAB_00b93c34:
            *puVar20 = uVar12;
            puVar3[-4] = uVar17;
            uVar12 = puVar10[3];
            uVar13 = puVar10[4];
            uVar14 = puVar10[5];
            puVar3[-5] = uVar11;
            puVar3[-1] = uVar14;
            puVar3[-2] = uVar13;
            puVar3[-3] = uVar12;
          }
          uVar19 = uVar19 + 1;
          local_48 = local_48 + -0x18;
          local_5c = local_5c + 6;
        } while (uVar19 != (int)param_2 - uVar6);
      }
      iVar18 = 0;
      puVar8 = param_3 + (int)param_2 * 6 + -6;
      local_5c = puVar7 + -6;
      do {
        uVar4 = param_3[2];
        uVar19 = puVar7[2];
        uVar2 = uVar4;
        if (uVar19 < uVar4) {
          uVar2 = uVar19;
        }
        uVar2 = FUN_016dd50a(puVar7[1],param_3[1],uVar2);
        if (uVar2 == 0) {
          uVar2 = uVar19 - uVar4;
        }
        puVar20 = puVar7;
        if (uVar2 < 0x80000000) {
          puVar20 = param_3;
        }
        puVar10 = (undefined4 *)((int)param_1 + iVar18);
        uVar11 = puVar20[1];
        uVar12 = puVar20[2];
        uVar13 = puVar20[3];
        uVar14 = puVar20[4];
        uVar16 = puVar20[5];
        *puVar10 = *puVar20;
        puVar10[1] = uVar11;
        puVar10[2] = uVar12;
        puVar10[3] = uVar13;
        puVar10[4] = uVar14;
        puVar10[5] = uVar16;
        uVar17 = puVar8[2];
        uVar4 = local_5c[2];
        uVar19 = uVar4;
        if (uVar17 < uVar4) {
          uVar19 = uVar17;
        }
        uVar19 = FUN_016dd50a(puVar8[1],local_5c[1],uVar19);
        if (uVar19 == 0) {
          uVar19 = uVar17 - uVar4;
        }
        puVar10 = (undefined4 *)((int)param_1 + (((int)param_2 * 0x18 + -0x18) - iVar18));
        puVar20 = local_5c;
        if (uVar19 < 0x80000000) {
          puVar20 = puVar8;
        }
        uVar11 = puVar20[1];
        uVar12 = puVar20[2];
        uVar13 = puVar20[3];
        uVar14 = puVar20[4];
        uVar16 = puVar20[5];
        *puVar10 = *puVar20;
        puVar10[1] = uVar11;
        puVar10[2] = uVar12;
        puVar10[3] = uVar13;
        puVar10[4] = uVar14;
        puVar10[5] = uVar16;
        puVar7 = puVar7 + (uVar2 >> 0x1f | (uVar2 >> 0x1f) << 1) * 2;
        uVar2 = uVar2 >> 0x1f ^ 1;
        param_3 = param_3 + (uVar2 | uVar2 << 1) * 2;
        local_5c = local_5c + ((int)uVar19 >> 0x1f) * 6;
        puVar8 = puVar8 + ~((int)uVar19 >> 0x1f) * 6;
        iVar18 = iVar18 + 0x18;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      local_5c = local_5c + 6;
      if (((uint)param_2 & 1) != 0) {
        param_1 = (undefined4 *)((int)param_1 + iVar18);
        bVar24 = local_5c <= param_3;
        puVar20 = puVar7;
        if (!bVar24) {
          puVar20 = param_3;
        }
        uVar11 = puVar20[1];
        uVar12 = puVar20[2];
        uVar13 = puVar20[3];
        uVar14 = puVar20[4];
        uVar16 = puVar20[5];
        *param_1 = *puVar20;
        param_1[1] = uVar11;
        param_1[2] = uVar12;
        param_1[3] = uVar13;
        param_1[4] = uVar14;
        param_1[5] = uVar16;
        param_2 = (undefined4 *)((uint)!bVar24 | (uint)!bVar24 << 1);
        puVar7 = puVar7 + ((uint)bVar24 | (uint)bVar24 << 1) * 2;
        param_3 = param_3 + (int)param_2 * 2;
      }
      if (param_3 == local_5c) {
        param_2 = puVar8 + 6;
      }
      if (param_3 != local_5c || puVar7 != param_2) {
        FUN_00fb7254();
LAB_00b93f40:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xb93f40);
        (*pcVar1)();
      }
    }
    return;
  }
  local_6c = param_6;
LAB_00b935f8:
  puVar7 = param_2;
  do {
    if (param_5 == 0) {
      FUN_00b92de4(param_1,puVar7,param_3,param_4,1);
      return;
    }
    puVar20 = param_1 + ((uint)puVar7 >> 3) * 0x2a;
    puVar8 = param_1 + ((uint)puVar7 >> 3) * 0x18;
    if (&DAT_0000003f < puVar7) {
      puVar10 = (undefined4 *)FUN_00b93f84(param_1,puVar8,puVar20);
    }
    else {
      uVar19 = puVar8[2];
      uVar2 = param_1[2];
      uVar12 = param_1[1];
      uVar11 = puVar8[1];
      uVar6 = uVar19;
      if (uVar2 < uVar19) {
        uVar6 = uVar2;
      }
      uVar6 = FUN_016dd50a(uVar12,uVar11,uVar6);
      uVar4 = puVar20[2];
      uVar13 = puVar20[1];
      if (uVar6 == 0) {
        uVar6 = uVar2 - uVar19;
      }
      uVar17 = uVar4;
      if (uVar2 < uVar4) {
        uVar17 = uVar2;
      }
      uVar17 = FUN_016dd50a(uVar12,uVar13,uVar17);
      if (uVar17 == 0) {
        uVar17 = uVar2 - uVar4;
      }
      puVar10 = param_1;
      if (-1 < (int)(uVar17 ^ uVar6)) {
        uVar2 = uVar4;
        if (uVar19 < uVar4) {
          uVar2 = uVar19;
        }
        uVar2 = FUN_016dd50a(uVar11,uVar13,uVar2);
        if (uVar2 == 0) {
          uVar2 = uVar19 - uVar4;
        }
        puVar10 = puVar8;
        if ((int)(uVar2 ^ uVar6) < 0) {
          puVar10 = puVar20;
        }
      }
    }
    param_5 = param_5 + -1;
    puVar8 = (undefined4 *)(((uint)((int)puVar10 - (int)param_1) >> 3) * -0x55555555);
    local_40 = *puVar10;
    uStack_3c = puVar10[1];
    uStack_38 = puVar10[2];
    uStack_34 = puVar10[3];
    uStack_30 = puVar10[4];
    uStack_2c = puVar10[5];
    if (local_6c != 0) {
      uVar2 = puVar10[2];
      uVar19 = *(uint *)(local_6c + 8);
      uVar6 = uVar2;
      if (uVar19 < uVar2) {
        uVar6 = uVar19;
      }
      uVar6 = FUN_016dd50a(*(undefined4 *)(local_6c + 4),puVar10[1],uVar6);
      if (uVar6 == 0) {
        uVar6 = uVar19 - uVar2;
      }
      if (uVar6 < 0x80000000) break;
    }
    if (param_4 < puVar7) goto LAB_00b93f40;
    param_2 = (undefined4 *)0x0;
    puVar20 = param_3 + (int)puVar7 * 6;
    puVar3 = param_1;
    puVar22 = puVar8;
    while( true ) {
      for (; puVar3 < param_1 + (int)puVar22 * 6; puVar3 = puVar3 + 6) {
        uVar19 = puVar10[2];
        uVar2 = puVar3[2];
        uVar6 = uVar19;
        if (uVar2 < uVar19) {
          uVar6 = uVar2;
        }
        iVar18 = FUN_016dd50a(puVar3[1],puVar10[1],uVar6);
        puVar20 = puVar20 + -6;
        if (iVar18 == 0) {
          iVar18 = uVar2 - uVar19;
        }
        puVar9 = puVar20;
        if (iVar18 < 0) {
          puVar9 = param_3;
        }
        puVar9 = puVar9 + (int)param_2 * 6;
        uVar11 = puVar3[1];
        uVar12 = puVar3[2];
        uVar13 = puVar3[3];
        uVar14 = puVar3[4];
        uVar16 = puVar3[5];
        param_2 = (undefined4 *)((int)param_2 - (iVar18 >> 0x1f));
        *puVar9 = *puVar3;
        puVar9[1] = uVar11;
        puVar9[2] = uVar12;
        puVar9[3] = uVar13;
        puVar9[4] = uVar14;
        puVar9[5] = uVar16;
      }
      if (puVar22 == puVar7) break;
      puVar20 = puVar20 + -6;
      uVar11 = *puVar3;
      uVar12 = puVar3[1];
      uVar13 = puVar3[2];
      uVar14 = puVar3[3];
      uVar16 = puVar3[4];
      uVar15 = puVar3[5];
      puVar22 = puVar20 + (int)param_2 * 6;
      puVar3 = puVar3 + 6;
      *puVar22 = uVar11;
      puVar22[1] = uVar12;
      puVar22[2] = uVar13;
      puVar22[3] = uVar14;
      puVar22[4] = uVar16;
      puVar22[5] = uVar15;
      puVar22 = puVar7;
    }
    FUN_016dd1aa(param_1,param_3,(int)param_2 * 0x18);
    iVar18 = (int)puVar7 - (int)param_2;
    if (iVar18 != 0) {
      puVar3 = param_3 + (int)puVar7 * 6 + -6;
      puVar20 = param_1 + (int)param_2 * 6;
      iVar5 = iVar18;
      do {
        uVar11 = *puVar3;
        uVar12 = puVar3[1];
        uVar13 = puVar3[2];
        uVar14 = puVar3[3];
        uVar16 = puVar3[4];
        uVar15 = puVar3[5];
        puVar3 = puVar3 + -6;
        iVar5 = iVar5 + -1;
        *puVar20 = uVar11;
        puVar20[1] = uVar12;
        puVar20[2] = uVar13;
        puVar20[3] = uVar14;
        puVar20[4] = uVar16;
        puVar20[5] = uVar15;
        puVar20 = puVar20 + 6;
      } while (iVar5 != 0);
    }
    if (param_2 == (undefined4 *)0x0) break;
    if (puVar7 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
    }
    FUN_00b9357c(param_1 + (int)param_2 * 6,iVar18,param_3,param_4,param_5,&local_40);
    puVar7 = param_2;
    if (param_2 < &DAT_00000021) goto LAB_00b9359c;
  } while( true );
  if (param_4 < puVar7) goto LAB_00b93f40;
  puVar22 = (undefined4 *)0x0;
  puVar20 = param_3 + (int)puVar7 * 6;
  puVar3 = param_1;
  while( true ) {
    for (; puVar3 < param_1 + (int)puVar8 * 6; puVar3 = puVar3 + 6) {
      uVar19 = puVar3[2];
      uVar2 = puVar10[2];
      uVar6 = uVar19;
      if (uVar2 < uVar19) {
        uVar6 = uVar2;
      }
      uVar6 = FUN_016dd50a(puVar10[1],puVar3[1],uVar6);
      puVar20 = puVar20 + -6;
      if (uVar6 == 0) {
        uVar6 = uVar2 - uVar19;
      }
      puVar23 = puVar22;
      puVar9 = puVar20;
      if (uVar6 < 0x80000000) {
        puVar23 = (undefined4 *)((int)puVar22 + 1);
        puVar9 = param_3;
      }
      puVar9 = puVar9 + (int)puVar22 * 6;
      uVar11 = puVar3[1];
      uVar12 = puVar3[2];
      uVar13 = puVar3[3];
      uVar14 = puVar3[4];
      uVar16 = puVar3[5];
      *puVar9 = *puVar3;
      puVar9[1] = uVar11;
      puVar9[2] = uVar12;
      puVar9[3] = uVar13;
      puVar9[4] = uVar14;
      puVar9[5] = uVar16;
      puVar22 = puVar23;
    }
    if (puVar8 == puVar7) break;
    puVar8 = param_3 + (int)puVar22 * 6;
    uVar11 = *puVar3;
    uVar12 = puVar3[1];
    uVar13 = puVar3[2];
    uVar14 = puVar3[3];
    uVar16 = puVar3[4];
    uVar15 = puVar3[5];
    puVar3 = puVar3 + 6;
    puVar22 = (undefined4 *)((int)puVar22 + 1);
    puVar20 = puVar20 + -6;
    *puVar8 = uVar11;
    puVar8[1] = uVar12;
    puVar8[2] = uVar13;
    puVar8[3] = uVar14;
    puVar8[4] = uVar16;
    puVar8[5] = uVar15;
    puVar8 = puVar7;
  }
  FUN_016dd1aa(param_1,param_3,(int)puVar22 * 0x18);
  param_2 = (undefined4 *)((int)puVar7 - (int)puVar22);
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  param_1 = param_1 + (int)puVar22 * 6;
  puVar10 = param_3 + (int)puVar7 * 6 + -6;
  puVar8 = param_1;
  puVar20 = param_2;
  do {
    uVar11 = *puVar10;
    uVar12 = puVar10[1];
    uVar13 = puVar10[2];
    uVar14 = puVar10[3];
    uVar16 = puVar10[4];
    uVar15 = puVar10[5];
    puVar10 = puVar10 + -6;
    puVar20 = (undefined4 *)((int)puVar20 + -1);
    *puVar8 = uVar11;
    puVar8[1] = uVar12;
    puVar8[2] = uVar13;
    puVar8[3] = uVar14;
    puVar8[4] = uVar16;
    puVar8[5] = uVar15;
    puVar8 = puVar8 + 6;
  } while (puVar20 != (undefined4 *)0x0);
  if (puVar7 < puVar22) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(puVar22,puVar7,puVar7,&DAT_018af348);
  }
  local_6c = 0;
  if (param_2 < &DAT_00000021) goto LAB_00b9359c;
  goto LAB_00b935f8;
}

