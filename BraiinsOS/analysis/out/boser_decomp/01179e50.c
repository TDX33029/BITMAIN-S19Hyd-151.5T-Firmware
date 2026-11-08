// FUN_01179e50 @ 01179e50 size=2728 calls_out=11 calls_in=2
// strings: 

void FUN_01179e50(undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5,
                 int param_6)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  int iVar19;
  bool bVar20;
  int local_78;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  int local_30 [3];
  
  if (param_2 < 0x21) {
LAB_0117a738:
    if (1 < param_2) {
      if (param_4 < param_2 + 0x10) {
LAB_0117a8c8:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x117a8c8);
        (*pcVar1)();
      }
      uVar8 = param_2 >> 1;
      if (param_2 < 0x10) {
        puVar6 = param_3 + uVar8 * 3;
        puVar14 = param_1 + uVar8 * 3;
        if (param_2 < 8) {
          uVar13 = param_1[1];
          uVar15 = param_1[2];
          *param_3 = *param_1;
          param_3[1] = uVar13;
          param_3[2] = uVar15;
          uVar13 = puVar14[1];
          uVar15 = puVar14[2];
          *puVar6 = *puVar14;
          puVar6[1] = uVar13;
          puVar6[2] = uVar15;
          uVar12 = 1;
        }
        else {
          FUN_010138f8(param_1,param_3);
          FUN_010138f8(puVar14,puVar6);
          uVar12 = 4;
        }
      }
      else {
        FUN_010138c0(param_1,param_3,param_3 + param_2 * 3);
        FUN_010138c0(param_1 + uVar8 * 3,param_3 + uVar8 * 3,param_3 + param_2 * 3 + 0x18);
        uVar12 = 8;
      }
      local_30[0] = 0;
      iVar3 = 0;
      local_30[1] = uVar8;
      do {
        iVar7 = local_30[iVar3];
        uVar9 = uVar8;
        if (iVar7 != 0) {
          uVar9 = param_2 - uVar8;
        }
        if (uVar12 < uVar9) {
          iVar19 = uVar9 - uVar12;
          puVar6 = param_1 + uVar12 * 3 + iVar7 * 3;
          puVar14 = param_3 + uVar12 * 3 + iVar7 * 3;
          do {
            uVar13 = puVar6[1];
            uVar15 = puVar6[2];
            *puVar14 = *puVar6;
            puVar14[1] = uVar13;
            puVar14[2] = uVar15;
            FUN_01013738(param_3 + iVar7 * 3,puVar14);
            puVar6 = puVar6 + 3;
            puVar14 = puVar14 + 3;
            iVar19 = iVar19 + -1;
          } while (iVar19 != 0);
        }
        bVar20 = iVar3 == 0;
        iVar3 = 1;
      } while (bVar20);
      FUN_01013ac8(param_3,param_2,param_1);
    }
    return;
  }
  local_78 = param_6;
LAB_01179e8c:
  uVar8 = param_2;
  do {
    if (param_5 == 0) {
      FUN_01179774(param_1,uVar8,param_3,param_4,1);
      return;
    }
    puVar14 = param_1 + (uVar8 >> 3) * 0x15;
    puVar6 = param_1 + (uVar8 >> 3) * 0xc;
    if (uVar8 < 0x40) {
      uVar16 = *(uint *)(puVar6[2] + 0x54);
      uVar15 = *(undefined4 *)(param_1[2] + 0x50);
      uVar9 = *(uint *)(param_1[2] + 0x54);
      uVar13 = *(undefined4 *)(puVar6[2] + 0x50);
      uVar12 = uVar16;
      if (uVar9 < uVar16) {
        uVar12 = uVar9;
      }
      uVar12 = FUN_01bed842(uVar15,uVar13,uVar12);
      if (uVar12 == 0) {
        uVar12 = uVar9 - uVar16;
      }
      uVar17 = *(undefined4 *)(puVar14[2] + 0x50);
      uVar18 = *(uint *)(puVar14[2] + 0x54);
      uVar2 = uVar18;
      if (uVar9 < uVar18) {
        uVar2 = uVar9;
      }
      uVar2 = FUN_01bed842(uVar15,uVar17,uVar2);
      if (uVar2 == 0) {
        uVar2 = uVar9 - uVar18;
      }
      puVar4 = param_1;
      if (-1 < (int)(uVar2 ^ uVar12)) {
        uVar9 = uVar18;
        if (uVar16 < uVar18) {
          uVar9 = uVar16;
        }
        uVar9 = FUN_01bed842(uVar13,uVar17,uVar9);
        if (uVar9 == 0) {
          uVar9 = uVar16 - uVar18;
        }
        puVar4 = puVar6;
        if ((int)(uVar9 ^ uVar12) < 0) {
          puVar4 = puVar14;
        }
      }
    }
    else {
      puVar4 = (undefined4 *)FUN_005fd280(param_1,puVar6,puVar14);
    }
    param_5 = param_5 + -1;
    uVar12 = (uint)((int)puVar4 - (int)param_1) >> 2;
    local_38 = *puVar4;
    uStack_34 = puVar4[1];
    local_30[0] = puVar4[2];
    if (local_78 != 0) {
      uVar16 = *(uint *)(puVar4[2] + 0x54);
      uVar2 = *(uint *)(*(int *)(local_78 + 8) + 0x54);
      uVar9 = uVar16;
      if (uVar2 < uVar16) {
        uVar9 = uVar2;
      }
      uVar9 = FUN_01bed842(*(undefined4 *)(*(int *)(local_78 + 8) + 0x50),
                           *(undefined4 *)(puVar4[2] + 0x50),uVar9);
      if (uVar9 == 0) {
        uVar9 = uVar2 - uVar16;
      }
      if (uVar9 < 0x80000000) break;
    }
    if (param_4 < uVar8) goto LAB_0117a8c8;
    param_2 = 0;
    puVar14 = param_3 + uVar8 * 3;
    piVar10 = param_1 + uVar12 + 2;
    uVar9 = uVar12 * -0x55555555;
    local_44 = param_1;
    while( true ) {
      iVar3 = uVar9 - 3;
      if (uVar9 < 3) {
        iVar3 = 0;
      }
      if (local_44 < param_1 + iVar3 * 3) {
        iVar7 = 0;
        puVar6 = local_44;
        do {
          iVar19 = *(int *)((int)local_44 + (8 - iVar7));
          uVar18 = *(uint *)(*piVar10 + 0x54);
          uVar2 = *(uint *)(iVar19 + 0x54);
          uVar16 = uVar18;
          if (uVar2 < uVar18) {
            uVar16 = uVar2;
          }
          iVar19 = FUN_01bed842(*(undefined4 *)(iVar19 + 0x50),*(undefined4 *)(*piVar10 + 0x50),
                                uVar16);
          if (iVar19 == 0) {
            iVar19 = uVar2 - uVar18;
          }
          puVar4 = param_3;
          if (-1 < iVar19) {
            puVar4 = (undefined4 *)((int)puVar14 + iVar7 + -0xc);
          }
          puVar4 = puVar4 + param_2 * 3;
          uVar13 = puVar6[1];
          uVar15 = puVar6[2];
          *puVar4 = *puVar6;
          puVar4[1] = uVar13;
          puVar4[2] = uVar15;
          iVar5 = *(int *)((int)local_44 + (0x14 - iVar7));
          uVar2 = *(uint *)(iVar5 + 0x54);
          uVar18 = *(uint *)(*piVar10 + 0x54);
          uVar16 = uVar18;
          if (uVar2 < uVar18) {
            uVar16 = uVar2;
          }
          iVar5 = FUN_01bed842(*(undefined4 *)(iVar5 + 0x50),*(undefined4 *)(*piVar10 + 0x50),uVar16
                              );
          if (iVar5 == 0) {
            iVar5 = uVar2 - uVar18;
          }
          puVar4 = param_3;
          if (-1 < iVar5) {
            puVar4 = (undefined4 *)((int)puVar14 + iVar7 + -0x18);
          }
          iVar11 = param_2 - (iVar19 >> 0x1f);
          puVar4 = puVar4 + iVar11 * 3;
          uVar13 = *(undefined4 *)((int)local_44 + (0x10 - iVar7));
          uVar15 = *(undefined4 *)((int)local_44 + (0x14 - iVar7));
          *puVar4 = *(undefined4 *)((int)local_44 + (0xc - iVar7));
          puVar4[1] = uVar13;
          puVar4[2] = uVar15;
          iVar11 = iVar11 - (iVar5 >> 0x1f);
          iVar19 = *(int *)((int)local_44 + (0x20 - iVar7));
          uVar2 = *(uint *)(iVar19 + 0x54);
          uVar18 = *(uint *)(*piVar10 + 0x54);
          uVar16 = uVar18;
          if (uVar2 < uVar18) {
            uVar16 = uVar2;
          }
          iVar19 = FUN_01bed842(*(undefined4 *)(iVar19 + 0x50),*(undefined4 *)(*piVar10 + 0x50),
                                uVar16);
          if (iVar19 == 0) {
            iVar19 = uVar2 - uVar18;
          }
          puVar4 = param_3;
          if (-1 < iVar19) {
            puVar4 = (undefined4 *)((int)puVar14 + iVar7 + -0x24);
          }
          iVar19 = iVar11 - (iVar19 >> 0x1f);
          puVar4 = puVar4 + iVar11 * 3;
          uVar13 = *(undefined4 *)((int)local_44 + (0x1c - iVar7));
          uVar15 = *(undefined4 *)((int)local_44 + (0x20 - iVar7));
          *puVar4 = *(undefined4 *)((int)local_44 + (0x18 - iVar7));
          puVar4[1] = uVar13;
          puVar4[2] = uVar15;
          uVar2 = *(uint *)(*piVar10 + 0x54);
          uVar18 = *(uint *)(puVar6[0xb] + 0x54);
          uVar16 = uVar2;
          if (uVar18 < uVar2) {
            uVar16 = uVar18;
          }
          iVar5 = FUN_01bed842(*(undefined4 *)(puVar6[0xb] + 0x50),*(undefined4 *)(*piVar10 + 0x50),
                               uVar16);
          if (iVar5 == 0) {
            iVar5 = uVar18 - uVar2;
          }
          puVar4 = param_3;
          if (-1 < iVar5) {
            puVar4 = (undefined4 *)((int)puVar14 + iVar7 + -0x30);
          }
          iVar11 = iVar7 + -0x30;
          puVar4 = puVar4 + iVar19 * 3;
          puVar6 = puVar6 + 0xc;
          uVar13 = *(undefined4 *)((int)local_44 + (0x28 - iVar7));
          uVar15 = *(undefined4 *)((int)local_44 + (0x2c - iVar7));
          *puVar4 = *(undefined4 *)((int)local_44 + (0x24 - iVar7));
          puVar4[1] = uVar13;
          puVar4[2] = uVar15;
          param_2 = iVar19 - (iVar5 >> 0x1f);
          iVar7 = iVar11;
        } while (puVar6 < param_1 + iVar3 * 3);
        puVar14 = (undefined4 *)((int)puVar14 + iVar11);
        local_44 = puVar6;
      }
      for (; local_44 < param_1 + uVar9 * 3; local_44 = local_44 + 3) {
        uVar18 = *(uint *)(*piVar10 + 0x54);
        uVar2 = *(uint *)(local_44[2] + 0x54);
        uVar16 = uVar18;
        if (uVar2 < uVar18) {
          uVar16 = uVar2;
        }
        iVar3 = FUN_01bed842(*(undefined4 *)(local_44[2] + 0x50),*(undefined4 *)(*piVar10 + 0x50),
                             uVar16);
        puVar14 = puVar14 + -3;
        if (iVar3 == 0) {
          iVar3 = uVar2 - uVar18;
        }
        puVar6 = puVar14;
        if (iVar3 < 0) {
          puVar6 = param_3;
        }
        puVar6 = puVar6 + param_2 * 3;
        uVar13 = local_44[1];
        uVar15 = local_44[2];
        *puVar6 = *local_44;
        puVar6[1] = uVar13;
        puVar6[2] = uVar15;
        param_2 = param_2 - (iVar3 >> 0x1f);
      }
      if (uVar9 == uVar8) break;
      puVar14 = puVar14 + -3;
      uVar13 = local_44[1];
      uVar15 = local_44[2];
      puVar6 = puVar14 + param_2 * 3;
      *puVar6 = *local_44;
      puVar6[1] = uVar13;
      puVar6[2] = uVar15;
      local_44 = local_44 + 3;
      uVar9 = uVar8;
    }
    FUN_01bed4e2(param_1,param_3,param_2 * 0xc);
    iVar3 = uVar8 - param_2;
    if (iVar3 != 0) {
      puVar6 = param_3 + uVar8 * 3 + -3;
      puVar14 = param_1 + param_2 * 3;
      iVar7 = iVar3;
      do {
        uVar13 = *puVar6;
        uVar15 = puVar6[1];
        uVar17 = puVar6[2];
        puVar6 = puVar6 + -3;
        iVar7 = iVar7 + -1;
        *puVar14 = uVar13;
        puVar14[1] = uVar15;
        puVar14[2] = uVar17;
        puVar14 = puVar14 + 3;
      } while (iVar7 != 0);
    }
    if (param_2 == 0) break;
    if (uVar8 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d30588);
    }
    FUN_01179e50(param_1 + param_2 * 3,iVar3,param_3,param_4,param_5,&local_38);
    uVar8 = param_2;
    if (param_2 < 0x21) goto LAB_0117a738;
  } while( true );
  if (param_4 < uVar8) goto LAB_0117a8c8;
  uVar9 = 0;
  puVar14 = param_3 + uVar8 * 3;
  piVar10 = param_1 + uVar12 + 2;
  uVar12 = uVar12 * -0x55555555;
  local_40 = param_1;
  while( true ) {
    iVar3 = uVar12 - 3;
    if (uVar12 < 3) {
      iVar3 = 0;
    }
    if (local_40 < param_1 + iVar3 * 3) {
      puVar6 = local_40;
      iVar7 = 0;
      do {
        iVar19 = *(int *)((int)local_40 + (8 - iVar7));
        uVar2 = *(uint *)(iVar19 + 0x54);
        uVar18 = *(uint *)(*piVar10 + 0x54);
        uVar16 = uVar2;
        if (uVar18 < uVar2) {
          uVar16 = uVar18;
        }
        uVar16 = FUN_01bed842(*(undefined4 *)(*piVar10 + 0x50),*(undefined4 *)(iVar19 + 0x50),uVar16
                             );
        if (uVar16 == 0) {
          uVar16 = uVar18 - uVar2;
        }
        if (uVar16 < 0x80000000) {
          uVar16 = uVar9 + 1;
          puVar4 = param_3;
        }
        else {
          uVar16 = uVar9;
          puVar4 = (undefined4 *)((int)puVar14 + iVar7 + -0xc);
        }
        puVar4 = puVar4 + uVar9 * 3;
        uVar13 = puVar6[1];
        uVar15 = puVar6[2];
        *puVar4 = *puVar6;
        puVar4[1] = uVar13;
        puVar4[2] = uVar15;
        iVar19 = *(int *)((int)local_40 + (0x14 - iVar7));
        uVar2 = *(uint *)(iVar19 + 0x54);
        uVar18 = *(uint *)(*piVar10 + 0x54);
        uVar9 = uVar2;
        if (uVar18 < uVar2) {
          uVar9 = uVar18;
        }
        uVar9 = FUN_01bed842(*(undefined4 *)(*piVar10 + 0x50),*(undefined4 *)(iVar19 + 0x50),uVar9);
        if (uVar9 == 0) {
          uVar9 = uVar18 - uVar2;
        }
        if (uVar9 < 0x80000000) {
          uVar9 = uVar16 + 1;
          puVar4 = param_3;
        }
        else {
          uVar9 = uVar16;
          puVar4 = (undefined4 *)((int)puVar14 + iVar7 + -0x18);
        }
        puVar4 = puVar4 + uVar16 * 3;
        uVar13 = *(undefined4 *)((int)local_40 + (0x10 - iVar7));
        uVar15 = *(undefined4 *)((int)local_40 + (0x14 - iVar7));
        *puVar4 = *(undefined4 *)((int)local_40 + (0xc - iVar7));
        puVar4[1] = uVar13;
        puVar4[2] = uVar15;
        iVar19 = *(int *)((int)local_40 + (0x20 - iVar7));
        uVar2 = *(uint *)(iVar19 + 0x54);
        uVar18 = *(uint *)(*piVar10 + 0x54);
        uVar16 = uVar2;
        if (uVar18 < uVar2) {
          uVar16 = uVar18;
        }
        uVar16 = FUN_01bed842(*(undefined4 *)(*piVar10 + 0x50),*(undefined4 *)(iVar19 + 0x50),uVar16
                             );
        if (uVar16 == 0) {
          uVar16 = uVar18 - uVar2;
        }
        if (uVar16 < 0x80000000) {
          uVar16 = uVar9 + 1;
          puVar4 = param_3;
        }
        else {
          uVar16 = uVar9;
          puVar4 = (undefined4 *)((int)puVar14 + iVar7 + -0x24);
        }
        puVar4 = puVar4 + uVar9 * 3;
        uVar13 = *(undefined4 *)((int)local_40 + (0x1c - iVar7));
        uVar15 = *(undefined4 *)((int)local_40 + (0x20 - iVar7));
        *puVar4 = *(undefined4 *)((int)local_40 + (0x18 - iVar7));
        puVar4[1] = uVar13;
        puVar4[2] = uVar15;
        uVar2 = *(uint *)(puVar6[0xb] + 0x54);
        uVar18 = *(uint *)(*piVar10 + 0x54);
        uVar9 = uVar2;
        if (uVar18 < uVar2) {
          uVar9 = uVar18;
        }
        uVar9 = FUN_01bed842(*(undefined4 *)(*piVar10 + 0x50),*(undefined4 *)(puVar6[0xb] + 0x50),
                             uVar9);
        if (uVar9 == 0) {
          uVar9 = uVar18 - uVar2;
        }
        puVar6 = puVar6 + 0xc;
        if (uVar9 < 0x80000000) {
          uVar9 = uVar16 + 1;
          puVar4 = param_3;
        }
        else {
          uVar9 = uVar16;
          puVar4 = (undefined4 *)((int)puVar14 + iVar7 + -0x30);
        }
        puVar4 = puVar4 + uVar16 * 3;
        iVar19 = iVar7 + -0x30;
        uVar13 = *(undefined4 *)((int)local_40 + (0x28 - iVar7));
        uVar15 = *(undefined4 *)((int)local_40 + (0x2c - iVar7));
        *puVar4 = *(undefined4 *)((int)local_40 + (0x24 - iVar7));
        puVar4[1] = uVar13;
        puVar4[2] = uVar15;
        iVar7 = iVar19;
      } while (puVar6 < param_1 + iVar3 * 3);
      puVar14 = (undefined4 *)((int)puVar14 + iVar19);
      local_40 = puVar6;
    }
    uVar16 = uVar9;
    for (; local_40 < param_1 + uVar12 * 3; local_40 = local_40 + 3) {
      uVar18 = *(uint *)(local_40[2] + 0x54);
      uVar2 = *(uint *)(*piVar10 + 0x54);
      uVar9 = uVar18;
      if (uVar2 < uVar18) {
        uVar9 = uVar2;
      }
      uVar9 = FUN_01bed842(*(undefined4 *)(*piVar10 + 0x50),*(undefined4 *)(local_40[2] + 0x50),
                           uVar9);
      puVar14 = puVar14 + -3;
      if (uVar9 == 0) {
        uVar9 = uVar2 - uVar18;
      }
      uVar2 = uVar16;
      puVar6 = puVar14;
      if (uVar9 < 0x80000000) {
        uVar2 = uVar16 + 1;
        puVar6 = param_3;
      }
      puVar6 = puVar6 + uVar16 * 3;
      uVar13 = local_40[1];
      uVar15 = local_40[2];
      *puVar6 = *local_40;
      puVar6[1] = uVar13;
      puVar6[2] = uVar15;
      uVar16 = uVar2;
    }
    if (uVar12 == uVar8) break;
    uVar9 = uVar16 + 1;
    puVar14 = puVar14 + -3;
    puVar6 = param_3 + uVar16 * 3;
    uVar13 = local_40[1];
    uVar15 = local_40[2];
    *puVar6 = *local_40;
    puVar6[1] = uVar13;
    puVar6[2] = uVar15;
    local_40 = local_40 + 3;
    uVar12 = uVar8;
  }
  FUN_01bed4e2(param_1,param_3,uVar16 * 0xc);
  param_2 = uVar8 - uVar16;
  if (param_2 == 0) {
    return;
  }
  param_1 = param_1 + uVar16 * 3;
  puVar6 = param_3 + uVar8 * 3 + -3;
  puVar14 = param_1;
  uVar12 = param_2;
  do {
    uVar13 = *puVar6;
    uVar15 = puVar6[1];
    uVar17 = puVar6[2];
    puVar6 = puVar6 + -3;
    uVar12 = uVar12 - 1;
    *puVar14 = uVar13;
    puVar14[1] = uVar15;
    puVar14[2] = uVar17;
    puVar14 = puVar14 + 3;
  } while (uVar12 != 0);
  if (uVar8 < uVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar16,uVar8,uVar8,&DAT_01d30598);
  }
  local_78 = 0;
  if (param_2 < 0x21) goto LAB_0117a738;
  goto LAB_01179e8c;
}

