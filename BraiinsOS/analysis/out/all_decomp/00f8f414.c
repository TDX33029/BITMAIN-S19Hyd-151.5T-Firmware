// FUN_00f8f414 @ 00f8f414 size=3600 calls_out=11 calls_in=3
// strings: `Extensions` tracks values by type | `Extensions` tracks values by type | {before-help}{about-with-newline} {usage-heading} {usage}  {all-args}{after-help} | {before-help}{about-with-newline} {usage-heading} {usage}  {all-args}{after-help} | {before-help}{about-with-newline} {usage-heading} {usage}{after-help}

void FUN_00f8f414(uint *param_1,int param_2,byte param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  byte *pbVar14;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined4 *puVar18;
  undefined1 *puVar19;
  byte *pbVar20;
  uint *puVar21;
  byte *pbVar22;
  int *piVar23;
  uint uVar24;
  bool bVar25;
  bool bVar26;
  int *piVar28;
  int *piVar27;
  int *piVar29;
  int local_64;
  undefined4 *local_60;
  undefined4 local_5c;
  uint local_58;
  byte *local_54;
  uint local_50;
  int local_4c;
  int local_48;
  uint local_40;
  uint *local_3c;
  uint local_38;
  undefined4 *local_34;
  int *local_30;
  undefined4 local_2c;
  undefined1 local_28;
  
  piVar23 = *(int **)(param_2 + 0x78);
  iVar7 = *(int *)(param_2 + 0x7c);
  param_3 = param_3 & *(byte *)(param_2 + 0x168);
  iVar8 = iVar7 << 4;
  uVar3 = 0xffffffff;
  piVar9 = piVar23;
  do {
    if (iVar8 == 0) {
      puVar18 = (undefined4 *)0x0;
      goto LAB_00f8f550;
    }
    iVar15 = *piVar9;
    piVar27 = piVar9 + 1;
    piVar28 = piVar9 + 2;
    iVar8 = iVar8 + -0x10;
    piVar29 = piVar9 + 3;
    uVar3 = uVar3 + 1;
    piVar9 = piVar9 + 4;
  } while ((iVar15 != -0x7e2dea42 || *piVar28 != -0x2f8246a2) ||
           (*piVar27 != 0x4c65521b || *piVar29 != 0x76f4a2ad));
  if (*(uint *)(param_2 + 0x88) <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar3,*(uint *)(param_2 + 0x88),&DAT_01880824);
  }
  piVar9 = (int *)(*(int *)(param_2 + 0x84) + uVar3 * 0x18);
  iVar8 = piVar9[1];
  puVar18 = (undefined4 *)(*piVar9 + (*(int *)(iVar8 + 8) - 1U & 0xfffffff8) + 8);
  (**(code **)(iVar8 + 0xc))(&local_40,puVar18);
  if ((local_40 != 0x81d215be || local_38 != -0x2f8246a2) ||
      (local_3c != (uint *)0x4c65521b || local_34 != (undefined4 *)0x76f4a2ad)) {
    puVar18 = (undefined4 *)0x0;
  }
  if (puVar18 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("`Extensions` tracks values by type",0x22,&DAT_0188076c);
  }
LAB_00f8f550:
  local_5c = 0;
  local_60 = puVar18;
  if (puVar18 == (undefined4 *)0x0) {
    local_60 = &DAT_0035dc52;
  }
  local_50 = 0;
  local_54 = &DAT_00000001;
  local_58 = 0;
  local_64 = param_2;
  if (*(int *)(param_2 + 0x104) == -0x80000000) {
    if (*(int *)(param_2 + 0x110) != -0x80000000) {
      iVar8 = iVar7 << 4;
      uVar3 = 0xffffffff;
      piVar9 = piVar23;
      do {
        if (iVar8 == 0) {
          uVar3 = 0xffffffff;
          piVar9 = piVar23;
          iVar8 = iVar7 << 4;
          goto LAB_00f8f9e4;
        }
        iVar15 = *piVar9;
        piVar27 = piVar9 + 1;
        iVar8 = iVar8 + -0x10;
        piVar29 = piVar9 + 2;
        piVar28 = piVar9 + 3;
        uVar3 = uVar3 + 1;
        piVar9 = piVar9 + 4;
      } while ((iVar15 != 0x7ba24db2 || *piVar29 != 0x67821a35) ||
               (*piVar27 != 0x14a12d16 || *piVar28 != -0x2799366a));
      uVar10 = *(uint *)(param_2 + 0x88);
      if (uVar10 <= uVar3) goto LAB_00f90218;
      piVar9 = (int *)(*(int *)(param_2 + 0x84) + uVar3 * 0x18);
      iVar8 = piVar9[1];
      puVar21 = (uint *)(*piVar9 + (*(int *)(iVar8 + 8) - 1U & 0xfffffff8) + 8);
      (**(code **)(iVar8 + 0xc))(&local_40,puVar21);
      if (((local_40 != 0x7ba24db2 || local_38 != 0x67821a35) ||
           (local_3c != (uint *)0x14a12d16 || local_34 != (undefined4 *)0xd866c996)) ||
         (puVar21 == (uint *)0x0)) goto LAB_00f8fbc4;
      uVar24 = *puVar21;
      if (uVar24 == 0) {
        uVar24 = 0xffffffff;
      }
      goto LAB_00f8fac4;
    }
    iVar8 = iVar7 << 4;
    uVar3 = 0xffffffff;
    piVar9 = piVar23;
    do {
      if (iVar8 == 0) {
        uVar3 = 0xffffffff;
        piVar9 = piVar23;
        iVar8 = iVar7 << 4;
        goto LAB_00f8f7cc;
      }
      iVar15 = *piVar9;
      piVar27 = piVar9 + 1;
      iVar8 = iVar8 + -0x10;
      piVar29 = piVar9 + 2;
      piVar28 = piVar9 + 3;
      uVar3 = uVar3 + 1;
      piVar9 = piVar9 + 4;
    } while ((iVar15 != 0x7ba24db2 || *piVar29 != 0x67821a35) ||
             (*piVar27 != 0x14a12d16 || *piVar28 != -0x2799366a));
    uVar10 = *(uint *)(param_2 + 0x88);
    if (uVar10 <= uVar3) goto LAB_00f90218;
    piVar9 = (int *)(*(int *)(param_2 + 0x84) + uVar3 * 0x18);
    iVar8 = piVar9[1];
    puVar21 = (uint *)(*piVar9 + (*(int *)(iVar8 + 8) - 1U & 0xfffffff8) + 8);
    (**(code **)(iVar8 + 0xc))(&local_40,puVar21);
    if (((local_40 != 0x7ba24db2 || local_38 != 0x67821a35) ||
         (local_3c != (uint *)0x14a12d16 || local_34 != (undefined4 *)0xd866c996)) ||
       (puVar21 == (uint *)0x0)) goto LAB_00f8fbc4;
    uVar24 = *puVar21;
    if (uVar24 == 0) {
      uVar24 = 0xffffffff;
    }
    goto LAB_00f8f8ac;
  }
  iVar8 = *(int *)(param_2 + 0x10c);
  uVar13 = *(undefined4 *)(param_2 + 0x108);
  if (iVar8 != 0) {
    FUN_00f991dc(&local_58,0,iVar8,1,1);
  }
  uVar3 = local_50;
  FUN_016dd1aa(local_54 + local_50,uVar13,iVar8);
  local_50 = uVar3 + iVar8;
  goto LAB_00f8fe5c;
  while( true ) {
    iVar12 = *piVar9;
    piVar27 = piVar9 + 1;
    piVar28 = piVar9 + 2;
    uVar3 = uVar3 + 1;
    piVar29 = piVar9 + 3;
    piVar9 = piVar9 + 4;
    iVar8 = iVar15 + -0x10;
    if ((iVar12 == 0x1c375901 && *piVar28 == 0x7c648b43) &&
        (*piVar27 == 0x6d35dd7 && *piVar29 == 0x234bc10e)) break;
LAB_00f8f9e4:
    iVar15 = iVar8;
    uVar10 = 0;
    if (iVar15 == 0) goto LAB_00f8faa4;
  }
  uVar10 = *(uint *)(param_2 + 0x88);
  if (uVar10 <= uVar3) goto LAB_00f90218;
  piVar9 = (int *)(*(int *)(param_2 + 0x84) + uVar3 * 0x18);
  iVar8 = piVar9[1];
  puVar21 = (uint *)(*piVar9 + (*(int *)(iVar8 + 8) - 1U & 0xfffffff8) + 8);
  (**(code **)(iVar8 + 0xc))(&local_40);
  if (((local_40 != 0x1c375901 || local_38 != 0x7c648b43) ||
       (local_3c != (uint *)0x6d35dd7 || local_34 != (undefined4 *)0x234bc10e)) ||
     (puVar21 == (uint *)0x0)) goto LAB_00f8fbc4;
  uVar10 = *puVar21;
LAB_00f8faa4:
  uVar24 = 100;
  if (uVar10 < 100) {
    uVar24 = uVar10;
  }
  if (uVar10 == 0) {
    uVar24 = 100;
  }
  if (iVar15 == 0) {
    uVar24 = 100;
  }
LAB_00f8fac4:
  uVar4 = *(uint *)(param_2 + 0x144);
  uVar11 = *(uint *)(param_2 + 0x148);
  iVar7 = iVar7 << 4;
  uVar3 = 0xffffffff;
  do {
    if (iVar7 == 0) {
      puVar18 = (undefined4 *)0x0;
      goto LAB_00f8fc8c;
    }
    iVar8 = *piVar23;
    piVar29 = piVar23 + 1;
    piVar28 = piVar23 + 2;
    piVar9 = piVar23 + 3;
    iVar7 = iVar7 + -0x10;
    uVar3 = uVar3 + 1;
    piVar23 = piVar23 + 4;
  } while ((iVar8 != -0x7e2dea42 || *piVar28 != -0x2f8246a2) ||
           (*piVar29 != 0x4c65521b || *piVar9 != 0x76f4a2ad));
  uVar10 = *(uint *)(param_2 + 0x88);
  if (uVar10 <= uVar3) goto LAB_00f90218;
  piVar9 = (int *)(*(int *)(param_2 + 0x84) + uVar3 * 0x18);
  iVar8 = piVar9[1];
  puVar18 = (undefined4 *)(*piVar9 + (*(int *)(iVar8 + 8) - 1U & 0xfffffff8) + 8);
  (**(code **)(iVar8 + 0xc))(&local_40,puVar18);
  if ((local_40 != 0x81d215be || local_38 != -0x2f8246a2) ||
      (local_3c != (uint *)0x4c65521b || local_34 != (undefined4 *)0x76f4a2ad)) {
    puVar18 = (undefined4 *)0x0;
  }
  if (puVar18 == (undefined4 *)0x0) goto LAB_00f8fbc4;
LAB_00f8fc8c:
  local_30 = &local_64;
  local_3c = &local_58;
  local_2c._0_2_ = CONCAT11(param_3,(char)(((uVar4 | uVar11) & 0x3ffff) >> 0x11));
  local_34 = &DAT_0035dc52;
  if (puVar18 != (undefined4 *)0x0) {
    local_34 = puVar18;
  }
  local_40 = uVar24;
  local_38 = param_2;
  FUN_00f8060c(&local_40,*(undefined4 *)(param_2 + 0x114),*(undefined4 *)(param_2 + 0x118));
  goto LAB_00f8fe5c;
LAB_00f8fd1c:
  bVar25 = true;
LAB_00f8fd28:
  puVar21 = (uint *)(*(int *)(param_2 + 0x48) + 0x11c);
  if (param_3 == 0) {
    do {
      puVar19 = (undefined1 *)puVar21[1];
      bVar26 = puVar19 == (undefined1 *)0x0;
      if (bVar26) {
        puVar19 = (undefined1 *)puVar21[-0x3a];
      }
      if (((!bVar26 || puVar19 != &DAT_00110000) && ((*puVar21 & 4) == 0)) &&
         ((*puVar21 & 0x1008) != 0x1000)) goto LAB_00f8fdc0;
      puVar21 = puVar21 + 0x4d;
      iVar8 = iVar8 + -0x134;
    } while (iVar8 != 0);
  }
  else {
    do {
      puVar19 = (undefined1 *)puVar21[1];
      bVar26 = puVar19 == (undefined1 *)0x0;
      if (bVar26) {
        puVar19 = (undefined1 *)puVar21[-0x3a];
      }
      if (((!bVar26 || puVar19 != &DAT_00110000) && ((*puVar21 & 4) == 0)) &&
         ((*puVar21 & 0x2008) != 0x2000)) goto LAB_00f8fdc0;
      puVar21 = puVar21 + 0x4d;
      iVar8 = iVar8 + -0x134;
    } while (iVar8 != 0);
  }
  goto LAB_00f8fdc8;
LAB_00f8fdc0:
  uVar13 = 0x51;
  pcVar5 = "{before-help}{about-with-newline}\n{usage-heading} {usage}\n\n{all-args}{after-help}";
  goto LAB_00f8fe54;
LAB_00f90074:
  do {
    pbVar17 = pbVar16 + -1;
    uVar10 = (uint)(char)*pbVar17;
    if (0x7fffffff < uVar10) {
      pbVar17 = pbVar16 + -2;
      bVar1 = *pbVar17;
      if ((char)bVar1 < -0x40) {
        pbVar17 = pbVar16 + -3;
        bVar2 = *pbVar17;
        if ((char)bVar2 < -0x40) {
          pbVar17 = pbVar16 + -4;
          uVar24 = (int)(char)bVar2 & 0x3fU | (*pbVar17 & 7) << 6;
        }
        else {
          uVar24 = bVar2 & 0xf;
        }
        uVar24 = (int)(char)bVar1 & 0x3fU | uVar24 << 6;
      }
      else {
        uVar24 = bVar1 & 0x1f;
      }
      uVar10 = uVar10 & 0x3f | uVar24 << 6;
    }
    if ((4 < uVar10 - 9) && (uVar10 != 0x20)) {
      if (0x7f < uVar10) {
        uVar24 = uVar10 >> 8;
        if (uVar24 < 0x20) {
          if (uVar24 == 0) {
            bVar1 = (&DAT_0041951b)[uVar10 & 0xff] & 1;
            goto joined_r0x00f90130;
          }
          if ((uVar24 == 0x16) && (uVar10 == 0x1680)) goto LAB_00f9006c;
        }
        else if (uVar24 == 0x20) {
          bVar1 = (&DAT_0041951b)[uVar10 & 0xff] & 2;
joined_r0x00f90130:
          if (bVar1 != 0) goto LAB_00f9006c;
        }
        else if (uVar24 == 0x30 && uVar10 == 0x3000) goto LAB_00f9006c;
      }
      pbVar6 = pbVar16 + ((int)pbVar6 - (int)pbVar22);
      break;
    }
LAB_00f9006c:
    pbVar16 = pbVar17;
  } while (pbVar22 != pbVar17);
LAB_00f90150:
  if (pbVar6 != pbVar14) goto LAB_00f90190;
  goto LAB_00f8feb4;
  while( true ) {
    iVar12 = *piVar9;
    piVar28 = piVar9 + 1;
    piVar27 = piVar9 + 2;
    uVar3 = uVar3 + 1;
    piVar29 = piVar9 + 3;
    piVar9 = piVar9 + 4;
    iVar8 = iVar15 + -0x10;
    if ((iVar12 == 0x1c375901 && *piVar27 == 0x7c648b43) &&
        (*piVar28 == 0x6d35dd7 && *piVar29 == 0x234bc10e)) break;
LAB_00f8f7cc:
    iVar15 = iVar8;
    uVar10 = 0;
    if (iVar15 == 0) goto LAB_00f8f88c;
  }
  uVar10 = *(uint *)(param_2 + 0x88);
  if (uVar10 <= uVar3) goto LAB_00f90218;
  piVar9 = (int *)(*(int *)(param_2 + 0x84) + uVar3 * 0x18);
  iVar8 = piVar9[1];
  puVar21 = (uint *)(*piVar9 + (*(int *)(iVar8 + 8) - 1U & 0xfffffff8) + 8);
  (**(code **)(iVar8 + 0xc))(&local_40);
  if (((local_40 != 0x1c375901 || local_38 != 0x7c648b43) ||
       (local_3c != (uint *)0x6d35dd7 || local_34 != (undefined4 *)0x234bc10e)) ||
     (puVar21 == (uint *)0x0)) goto LAB_00f8fbc4;
  uVar10 = *puVar21;
LAB_00f8f88c:
  uVar24 = 100;
  if (uVar10 < 100) {
    uVar24 = uVar10;
  }
  if (uVar10 == 0) {
    uVar24 = 100;
  }
  if (iVar15 == 0) {
    uVar24 = 100;
  }
LAB_00f8f8ac:
  uVar4 = *(uint *)(param_2 + 0x144);
  uVar11 = *(uint *)(param_2 + 0x148);
  bVar25 = false;
  iVar7 = iVar7 << 4;
  uVar3 = 0xffffffff;
  do {
    if (iVar7 == 0) {
      puVar18 = (undefined4 *)0x0;
      goto LAB_00f8fbe4;
    }
    iVar8 = *piVar23;
    piVar29 = piVar23 + 1;
    piVar28 = piVar23 + 2;
    piVar9 = piVar23 + 3;
    iVar7 = iVar7 + -0x10;
    uVar3 = uVar3 + 1;
    piVar23 = piVar23 + 4;
  } while ((iVar8 != -0x7e2dea42 || *piVar28 != -0x2f8246a2) ||
           (*piVar29 != 0x4c65521b || *piVar9 != 0x76f4a2ad));
  uVar10 = *(uint *)(param_2 + 0x88);
  if (uVar10 <= uVar3) {
LAB_00f90218:
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar3,uVar10,&DAT_01880824);
  }
  piVar9 = (int *)(*(int *)(param_2 + 0x84) + uVar3 * 0x18);
  iVar8 = piVar9[1];
  puVar18 = (undefined4 *)(*piVar9 + (*(int *)(iVar8 + 8) - 1U & 0xfffffff8) + 8);
  (**(code **)(iVar8 + 0xc))(&local_40,puVar18);
  if ((local_40 != 0x81d215be || local_38 != -0x2f8246a2) ||
      (local_3c != (uint *)0x4c65521b || local_34 != (undefined4 *)0x76f4a2ad)) {
    puVar18 = (undefined4 *)0x0;
  }
  if (puVar18 == (undefined4 *)0x0) {
LAB_00f8fbc4:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("`Extensions` tracks values by type",0x22,&DAT_0188076c);
  }
LAB_00f8fbe4:
  local_30 = &local_64;
  local_3c = &local_58;
  local_2c = CONCAT31(CONCAT21(local_2c._2_2_,param_3),(char)(((uVar4 | uVar11) & 0x3ffff) >> 0x11))
  ;
  local_34 = &DAT_0035dc52;
  if (puVar18 != (undefined4 *)0x0) {
    local_34 = puVar18;
  }
  if (*(int *)(param_2 + 0x4c) != 0) {
    iVar8 = *(int *)(param_2 + 0x4c) * 0x134;
    puVar18 = (undefined4 *)(*(int *)(param_2 + 0x48) + 0x11c);
    if (param_3 == 0) {
      iVar7 = iVar8;
      do {
        if (puVar18[1] == 0) {
          puVar19 = (undefined1 *)puVar18[-0x3a];
          bVar25 = puVar19 == &DAT_00110000;
          if (bVar25) {
            puVar19 = (undefined1 *)*puVar18;
          }
          if ((bVar25 && ((uint)puVar19 & 4) == 0) && (((uint)puVar19 & 0x1008) != 0x1000))
          goto LAB_00f8fd1c;
        }
        puVar18 = puVar18 + 0x4d;
        iVar7 = iVar7 + -0x134;
      } while (iVar7 != 0);
    }
    else {
      iVar7 = iVar8;
      do {
        if (puVar18[1] == 0) {
          puVar19 = (undefined1 *)puVar18[-0x3a];
          bVar25 = puVar19 == &DAT_00110000;
          if (bVar25) {
            puVar19 = (undefined1 *)*puVar18;
          }
          if ((bVar25 && ((uint)puVar19 & 4) == 0) && (((uint)puVar19 & 0x2008) != 0x2000))
          goto LAB_00f8fd1c;
        }
        puVar18 = puVar18 + 0x4d;
        iVar7 = iVar7 + -0x134;
      } while (iVar7 != 0);
    }
    bVar25 = false;
    goto LAB_00f8fd28;
  }
LAB_00f8fdc8:
  if (*(int *)(param_2 + 100) != 0) {
    iVar8 = *(int *)(param_2 + 100) * 0x16c;
    puVar18 = (undefined4 *)(*(int *)(param_2 + 0x60) + 0x11c);
    do {
      if (((puVar18[1] != 4) || (*(int *)*puVar18 != 0x706c6568)) &&
         (((puVar18[10] | puVar18[0xb]) & 0x800000) == 0)) goto LAB_00f8fdc0;
      puVar18 = puVar18 + 0x5b;
      iVar8 = iVar8 + -0x16c;
    } while (iVar8 != 0);
  }
  uVar13 = 0x45;
  pcVar5 = "{before-help}{about-with-newline}\n{usage-heading} {usage}{after-help}";
  if (bVar25) {
    uVar13 = 0x51;
    pcVar5 = "{before-help}{about-with-newline}\n{usage-heading} {usage}\n\n{all-args}{after-help}";
  }
LAB_00f8fe54:
  local_40 = uVar24;
  local_38 = param_2;
  FUN_00f8060c(&local_40,pcVar5,uVar13);
LAB_00f8fe5c:
  uVar3 = local_50;
  pbVar6 = local_54;
  local_34 = (undefined4 *)0x0;
  local_28 = 1;
  local_30 = (int *)local_50;
  local_38 = local_50;
  local_3c = (uint *)local_54;
  local_40 = 10;
  local_2c = 10;
  FUN_0062a644(&local_4c,&local_40);
  if (local_4c == 1) {
    uVar10 = local_48 + 1;
    if (local_48 == -1) {
      pbVar20 = pbVar6;
    }
    else {
      if (uVar10 < uVar3) {
        if ((char)pbVar6[uVar10] < -0x40) goto LAB_00f8fee4;
      }
      else if (uVar3 != uVar10) {
LAB_00f8fee4:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(pbVar6,uVar3,0,uVar10,&DAT_018adf70);
      }
      pbVar20 = pbVar6 + uVar10;
      uVar3 = uVar3 - uVar10;
      pbVar14 = (byte *)0x0;
      do {
        pbVar22 = pbVar6 + 1;
        uVar10 = (uint)*pbVar6;
        if (0x7fffffff < (uint)(int)(char)*pbVar6) {
          if (uVar10 < 0xe0) {
            uVar10 = pbVar6[1] & 0x3f | (uVar10 & 0x1f) << 6;
            pbVar22 = pbVar6 + 2;
          }
          else {
            uVar24 = pbVar6[2] & 0x3f | (pbVar6[1] & 0x3f) << 6;
            if (uVar10 < 0xf0) {
              uVar10 = uVar24 | (uVar10 & 0x1f) << 0xc;
              pbVar22 = pbVar6 + 3;
            }
            else {
              pbVar22 = pbVar6 + 4;
              uVar10 = pbVar6[3] & 0x3f | uVar24 << 6 | (uVar10 & 7) << 0x12;
            }
          }
        }
        pbVar6 = pbVar14 + ((int)pbVar22 - (int)pbVar6);
        if ((4 < uVar10 - 9) && (uVar10 != 0x20)) {
          if (0x7f < uVar10) {
            uVar24 = uVar10 >> 8;
            if (uVar24 < 0x20) {
              if (uVar24 == 0) {
                bVar1 = (&DAT_0041951b)[uVar10 & 0xff] & 1;
                goto joined_r0x00f90040;
              }
              if (uVar24 == 0x16 && uVar10 == 0x1680) goto LAB_00f8ff60;
            }
            else if (uVar24 == 0x20) {
              bVar1 = (&DAT_0041951b)[uVar10 & 0xff] & 2;
joined_r0x00f90040:
              if (bVar1 != 0) goto LAB_00f8ff60;
            }
            else if ((uVar24 == 0x30) && (uVar10 == 0x3000)) goto LAB_00f8ff60;
          }
          if (pbVar22 == pbVar20) goto LAB_00f90150;
          pbVar16 = pbVar20;
          goto LAB_00f90074;
        }
LAB_00f8ff60:
        pbVar14 = pbVar6;
        pbVar6 = pbVar22;
      } while (pbVar22 != pbVar20);
    }
LAB_00f8feb4:
    uVar13 = 0;
    if ((int)uVar3 < 0) {
LAB_00f8fec0:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar13,uVar3);
    }
    if (uVar3 == 0) {
      uVar10 = 0;
      pbVar6 = &DAT_00000001;
    }
    else {
      pbVar6 = (byte *)thunk_FUN_016d4a50(uVar3);
      uVar10 = uVar3;
      if (pbVar6 == (byte *)0x0) {
        uVar13 = 1;
        goto LAB_00f8fec0;
      }
    }
    FUN_016dd1aa(pbVar6,pbVar20,uVar3);
    if (local_58 != 0) {
      thunk_FUN_016d3fb4(local_54);
    }
    local_58 = uVar10;
    local_54 = pbVar6;
    local_50 = uVar3;
  }
LAB_00f90190:
  FUN_00f9a3e0(&local_58);
  if (local_58 == local_50) {
    FUN_00f991dc(&local_58,local_50,1,1,1);
  }
  local_54[local_50] = 10;
  *param_1 = local_58;
  param_1[1] = (uint)local_54;
  param_1[2] = local_50 + 1;
  return;
}

