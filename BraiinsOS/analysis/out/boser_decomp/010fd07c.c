// FUN_010fd07c @ 010fd07c size=3644 calls_out=30 calls_in=0
// strings: power_target_profiles | assertion failed: !self.only_contains_attribute_certs | a UUID string | assertion failed: !self.only_contains_attribute_certs | a UUID string | hashrate_target_profiles

/* WARNING: Removing unreachable block (ram,0x010fde54) */
/* WARNING: Removing unreachable block (ram,0x010fde50) */

void FUN_010fd07c(undefined4 *param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  int *piVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int iVar16;
  bool bVar17;
  undefined4 local_45c;
  undefined1 *local_450;
  undefined1 auStack_448 [136];
  undefined4 local_3c0;
  undefined4 local_3bc;
  int local_3b8;
  int local_3b4;
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 local_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 local_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 local_380;
  undefined4 uStack_37c;
  int iStack_378;
  int iStack_374;
  int iStack_370;
  undefined4 local_36c;
  int iStack_368;
  int iStack_364;
  undefined4 local_360;
  undefined4 uStack_35c;
  int local_318;
  int local_314;
  int local_310;
  undefined4 uStack_30c;
  int iStack_308;
  int local_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 local_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 local_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 local_2d0;
  undefined4 *local_2cc;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  int local_250;
  undefined4 uStack_24c;
  int iStack_248;
  int local_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  int local_208;
  undefined4 uStack_204;
  int iStack_200;
  int local_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  int local_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 local_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 local_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 *local_19c;
  undefined1 auStack_198 [72];
  int local_150;
  int local_14c;
  int local_148;
  undefined4 local_144;
  int local_140;
  int local_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined1 auStack_f0 [8];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 local_a4;
  int iStack_a0;
  int iStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int local_68;
  undefined4 uStack_64;
  int iStack_60;
  int local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  uint local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x94)) {
  case 0:
    puVar15 = (undefined4 *)(param_2 + 0x90);
    *(undefined1 *)(param_2 + 0xa0) = 0;
    *(undefined2 *)(param_2 + 0x95) = 0x101;
    *(int *)(param_2 + 0x98) = param_2;
    *(undefined1 *)(param_2 + 0x97) = 1;
    *(undefined4 **)(param_2 + 0x9c) = puVar15;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c22510);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c22510);
  case 3:
    if (*(char *)(param_2 + 0xa0) != '\0') {
      if (*(char *)(param_2 + 0xa0) == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20db4);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20db4);
    }
    puVar15 = *(undefined4 **)(param_2 + 0x9c);
    break;
  case 4:
    goto switchD_010fd0a0_caseD_4;
  case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xad)) {
    case 0:
      uVar5 = *(undefined4 *)(param_2 + 0xa4);
      iVar7 = *(int *)(param_2 + 0xa8);
      goto LAB_010fd2cc;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1faec);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1faec);
    case 3:
      uVar5 = *(undefined4 *)(param_2 + 0x98);
    }
    goto LAB_010fd384;
  }
  piVar4 = (int *)*puVar15;
  do {
    iVar7 = *piVar4;
    bVar17 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar17);
  *piVar4 = iVar7 + 1;
  if (iVar7 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x10fdef0);
    (*pcVar1)();
  }
  *(int **)(param_2 + 0x98) = piVar4;
  *(undefined1 *)(param_2 + 0xa0) = 1;
  *(undefined1 *)(param_2 + 0x96) = 0;
  FUN_01bed4e2(auStack_448,param_2,0x88);
  local_3c0 = *(undefined4 *)(param_2 + 0x88);
  local_3bc = *(undefined4 *)(param_2 + 0x8c);
  *(undefined1 *)(param_2 + 0x95) = 0;
  FUN_00f1eb4c(&local_318,auStack_448,param_2 + 0x90);
  FUN_01bed4e2(&local_3b8,&local_318,0xa0);
  FUN_01bed4e2(param_2 + 0xa0,&local_3b8,0xa0);
switchD_010fd0a0_caseD_4:
  FUN_00fb2224(&local_318,param_2 + 0xa0);
  iVar7 = local_310;
  iVar12 = local_314;
  if (local_318 == 1) {
    *param_1 = 3;
    param_1[1] = 0;
    uVar3 = 4;
    goto LAB_010fd6b8;
  }
  if (*(char *)(param_2 + 0x138) == '\x03' || *(char *)(param_2 + 0x138) == '\0') {
    FUN_01839f10(param_2 + 0xa0);
  }
  if (iVar12 == 0) {
    uVar5 = *(undefined4 *)(param_2 + 0x98);
    *(undefined4 *)(param_2 + 0xa4) = uVar5;
    *(undefined1 *)(param_2 + 0x97) = 0;
    *(int *)(param_2 + 0xa8) = iVar7;
    *(undefined1 *)(param_2 + 0xad) = 0;
LAB_010fd2cc:
    *(undefined4 *)(param_2 + 0xa0) = uVar5;
    *(undefined1 *)(param_2 + 0xac) = 0;
    FUN_0160aaa4(&local_318,0);
    local_2d8 = 0;
    piVar4 = (int *)FUN_00a5284c(&local_2d8,iVar7);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar4;
        bVar17 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar17);
      *piVar4 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00a934a0();
      }
    }
    FUN_01bed4e2(auStack_198,&local_318,0x48);
    *(undefined1 *)(param_2 + 0xac) = 0;
    uVar5 = FUN_00e3c144(*(int *)(param_2 + 0xa0) + 8,auStack_198);
    *(undefined4 *)(param_2 + 0x98) = uVar5;
    *(undefined **)(param_2 + 0x9c) = &DAT_01c17134;
LAB_010fd384:
    local_450 = (undefined1 *)(param_2 + 0xad);
    puVar15 = (undefined4 *)(param_2 + 0x98);
    (**(code **)(*(int *)(param_2 + 0x9c) + 0xc))(&local_318,uVar5,param_3);
    iVar12 = local_314;
    iVar7 = local_318;
    if (local_318 != 4 || local_314 != 0) {
      FUN_01bed4e2(auStack_f0,&local_310,0x60);
      FUN_01139b38(*puVar15,*(undefined4 *)(param_2 + 0x9c));
      if (iVar7 == 3 && iVar12 == 0) {
        FUN_01bed4e2(&local_150,auStack_f0,0x60);
        if (local_150 != 3 || local_14c != 0) {
          local_394 = local_cc;
          uStack_390 = uStack_c8;
          uStack_38c = uStack_c4;
          uStack_388 = uStack_c0;
          uStack_384 = uStack_bc;
          local_380 = local_b8;
          uStack_37c = uStack_b4;
          iStack_378 = local_b0;
          iStack_374 = iStack_ac;
          iStack_370 = iStack_a8;
          local_36c = local_a4;
          iStack_368 = iStack_a0;
          iStack_364 = iStack_9c;
          local_360 = uStack_98;
          uStack_35c = uStack_94;
          local_3b4 = local_14c;
          local_3b8 = local_150;
          local_3b0 = local_e8;
          uStack_3ac = uStack_e4;
          uStack_3a8 = uStack_e0;
          local_3a4 = local_dc;
          uStack_3a0 = uStack_d8;
          uStack_39c = uStack_d4;
          uStack_398 = uStack_d0;
          FUN_0142e6dc();
          FUN_0178e884(local_360);
          local_150 = local_b0;
          local_14c = iStack_ac;
          local_148 = iStack_a8;
          local_144 = local_a4;
          local_140 = iStack_a0;
          local_13c = iStack_9c;
          local_48 = thunk_FUN_01be5118(0x80);
          if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,0x80);
          }
          uVar9 = 1;
          pcVar10 = "{";
          local_3c = 1;
          local_40 = 0x80;
          local_44 = 0;
          local_28 = &local_48;
          do {
            uVar13 = local_44;
            uVar11 = local_44 ^ 0x7fffffff;
            if (uVar9 < (local_44 ^ 0x7fffffff)) {
              uVar11 = uVar9;
            }
            FUN_01284394(&local_48,pcVar10,uVar11);
            if (uVar13 == 0x7fffffff) goto LAB_010fd864;
            pcVar10 = pcVar10 + uVar11;
            uVar9 = uVar9 - uVar11;
          } while (uVar9 != 0);
          FUN_0096b2b0(&local_38,local_28,"power_target_profiles",0x15);
          piVar4 = local_28;
          if ((char)local_38 == '\x04') {
            uVar9 = 1;
            pcVar10 = ":";
            do {
              uVar11 = piVar4[1];
              uVar13 = uVar11 ^ 0x7fffffff;
              if (uVar9 < uVar13) {
                uVar13 = uVar9;
              }
              FUN_01284394(piVar4,pcVar10,uVar13);
              piVar2 = local_28;
              iVar7 = local_148;
              iVar12 = local_14c;
              if (uVar11 == 0x7fffffff) goto LAB_010fd864;
              pcVar10 = pcVar10 + uVar13;
              uVar9 = uVar9 - uVar13;
            } while (uVar9 != 0);
            uVar9 = 1;
            puVar8 = &DAT_0053340d;
            iVar6 = local_14c + local_148 * 0x48;
            do {
              uVar11 = piVar2[1];
              uVar13 = uVar11 ^ 0x7fffffff;
              if (uVar9 < uVar13) {
                uVar13 = uVar9;
              }
              FUN_01284394(piVar2,puVar8,uVar13);
              if (uVar11 == 0x7fffffff) goto LAB_010fd864;
              puVar8 = puVar8 + uVar13;
              uVar9 = uVar9 - uVar13;
            } while (uVar9 != 0);
            bVar17 = iVar7 != 0;
            iVar16 = 0x100;
            if (!bVar17) {
              uVar9 = 1;
              pcVar10 = "]";
              do {
                uVar11 = piVar2[1];
                uVar13 = uVar11 ^ 0x7fffffff;
                if (uVar9 < uVar13) {
                  uVar13 = uVar9;
                }
                FUN_01284394(piVar2,pcVar10,uVar13);
                if (uVar11 == 0x7fffffff) goto LAB_010fd864;
                pcVar10 = pcVar10 + uVar13;
                uVar9 = uVar9 - uVar13;
              } while (uVar9 != 0);
              iVar16 = 0;
            }
            do {
              piVar4 = local_28;
              if (iVar12 == iVar6) {
                if (iVar16 == 0) goto LAB_010fdabc;
                uVar9 = 1;
                pcVar10 = "]";
                goto LAB_010fda78;
              }
              if (!bVar17) {
                uVar9 = 1;
                pcVar10 = ",";
                do {
                  uVar11 = piVar4[1];
                  uVar13 = uVar11 ^ 0x7fffffff;
                  if (uVar9 < uVar13) {
                    uVar13 = uVar9;
                  }
                  FUN_01284394(piVar4,pcVar10,uVar13);
                  if (uVar11 == 0x7fffffff) goto LAB_010fd864;
                  pcVar10 = pcVar10 + uVar13;
                  uVar9 = uVar9 - uVar13;
                } while (uVar9 != 0);
              }
              iVar7 = FUN_00ee3a98(iVar12,&local_28);
              iVar12 = iVar12 + 0x48;
              iVar16 = 0x200;
              bVar17 = false;
            } while (iVar7 == 0);
          }
          else {
            iVar7 = FUN_01966f50(local_38,local_34);
          }
          goto LAB_010fd870;
        }
      }
      else {
        FUN_01bed4e2(&local_310,auStack_f0,0x60);
        FUN_00a40ce8(&local_148,&local_318);
      }
      local_68 = local_148;
      uStack_64 = local_144;
      iStack_60 = local_140;
      local_5c = local_13c;
      uStack_58 = uStack_138;
      uStack_54 = uStack_134;
      uStack_50 = uStack_130;
      *(undefined1 *)(param_2 + 0xac) = 0;
      piVar4 = *(int **)(param_2 + 0xa0);
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar4;
        bVar17 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar17);
      *piVar4 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_011808f4(*(undefined4 *)(param_2 + 0xa0));
      }
      *local_450 = 1;
      iVar7 = 0;
      puVar14 = puVar15;
      iVar12 = 3;
      goto LAB_010fd5d0;
    }
    *local_450 = 3;
    goto LAB_010fd3c0;
  }
  FUN_0070821c(&local_1e8,iVar12,iVar7);
  piVar4 = *(int **)(param_2 + 0x98);
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar4;
    bVar17 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar17);
  *piVar4 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_011808f4(*(undefined4 *)(param_2 + 0x98));
  }
  if (*(char *)(param_2 + 0x96) != '\0') {
    FUN_01839f10(param_2);
  }
  piVar4 = *(int **)(param_2 + 0x90);
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar4;
    bVar17 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar17);
  *piVar4 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_011808f4(*(undefined4 *)(param_2 + 0x90));
  }
  if (*(char *)(param_2 + 0x95) == '\x01') {
    FUN_00b19860(*(undefined4 *)(param_2 + 0x88),*(undefined4 *)(param_2 + 0x8c));
  }
  goto LAB_010fd6a4;
  while( true ) {
    pcVar10 = pcVar10 + uVar13;
    uVar9 = uVar9 - uVar13;
    if (uVar9 == 0) break;
LAB_010fda78:
    uVar11 = piVar4[1];
    uVar13 = uVar11 ^ 0x7fffffff;
    if (uVar9 < uVar13) {
      uVar13 = uVar9;
    }
    FUN_01284394(piVar4,pcVar10,uVar13);
    if (uVar11 == 0x7fffffff) goto LAB_010fd864;
  }
LAB_010fdabc:
  piVar4 = local_28;
  uVar9 = 1;
  pcVar10 = ",";
  do {
    uVar11 = piVar4[1];
    uVar13 = uVar11 ^ 0x7fffffff;
    if (uVar9 < uVar13) {
      uVar13 = uVar9;
    }
    FUN_01284394(piVar4,pcVar10,uVar13);
    if (uVar11 == 0x7fffffff) goto LAB_010fd864;
    pcVar10 = pcVar10 + uVar13;
    uVar9 = uVar9 - uVar13;
  } while (uVar9 != 0);
  FUN_0096b2b0(&local_38,local_28,"hashrate_target_profiles",0x18);
  piVar4 = local_28;
  if ((char)local_38 == '\x04') {
    uVar9 = 1;
    pcVar10 = ":";
    do {
      uVar11 = piVar4[1];
      uVar13 = uVar11 ^ 0x7fffffff;
      if (uVar9 < uVar13) {
        uVar13 = uVar9;
      }
      FUN_01284394(piVar4,pcVar10,uVar13);
      piVar2 = local_28;
      iVar7 = local_13c;
      iVar12 = local_140;
      if (uVar11 == 0x7fffffff) goto LAB_010fd864;
      pcVar10 = pcVar10 + uVar13;
      uVar9 = uVar9 - uVar13;
    } while (uVar9 != 0);
    uVar9 = 1;
    puVar8 = &DAT_0053340d;
    iVar6 = local_140 + local_13c * 0x48;
    do {
      uVar11 = piVar2[1];
      uVar13 = uVar11 ^ 0x7fffffff;
      if (uVar9 < uVar13) {
        uVar13 = uVar9;
      }
      FUN_01284394(piVar2,puVar8,uVar13);
      if (uVar11 == 0x7fffffff) goto LAB_010fd864;
      puVar8 = puVar8 + uVar13;
      uVar9 = uVar9 - uVar13;
    } while (uVar9 != 0);
    if (iVar7 == 0) {
      uVar9 = 1;
      pcVar10 = "]";
      do {
        uVar11 = piVar2[1];
        uVar13 = uVar11 ^ 0x7fffffff;
        if (uVar9 < uVar13) {
          uVar13 = uVar9;
        }
        FUN_01284394(piVar2,pcVar10,uVar13);
        if (uVar11 == 0x7fffffff) goto LAB_010fd864;
        pcVar10 = pcVar10 + uVar13;
        uVar9 = uVar9 - uVar13;
      } while (uVar9 != 0);
      iVar16 = 0;
      bVar17 = false;
    }
    else {
      bVar17 = true;
      iVar16 = 0x100;
    }
    do {
      piVar4 = local_28;
      if (iVar12 == iVar6) {
        if (iVar16 == 0) goto LAB_010fdde8;
        uVar9 = 1;
        pcVar10 = "]";
        goto LAB_010fdda4;
      }
      if (!bVar17) {
        uVar9 = 1;
        pcVar10 = ",";
        do {
          uVar11 = piVar4[1];
          uVar13 = uVar11 ^ 0x7fffffff;
          if (uVar9 < uVar13) {
            uVar13 = uVar9;
          }
          FUN_01284394(piVar4,pcVar10,uVar13);
          if (uVar11 == 0x7fffffff) goto LAB_010fd864;
          pcVar10 = pcVar10 + uVar13;
          uVar9 = uVar9 - uVar13;
        } while (uVar9 != 0);
      }
      iVar7 = FUN_00ee3920(iVar12,&local_28);
      iVar16 = 0x200;
      iVar12 = iVar12 + 0x48;
      bVar17 = false;
    } while (iVar7 == 0);
  }
  else {
    iVar7 = FUN_01966f50(local_38,local_34);
  }
  goto LAB_010fd870;
LAB_010fd864:
  iVar7 = FUN_01966f50(2,&DAT_01d2e7b8);
  goto LAB_010fd870;
  while( true ) {
    pcVar10 = pcVar10 + uVar13;
    uVar9 = uVar9 - uVar13;
    if (uVar9 == 0) break;
LAB_010fdda4:
    uVar11 = piVar4[1];
    uVar13 = uVar11 ^ 0x7fffffff;
    if (uVar9 < uVar13) {
      uVar13 = uVar9;
    }
    FUN_01284394(piVar4,pcVar10,uVar13);
    if (uVar11 == 0x7fffffff) goto LAB_010fd864;
  }
LAB_010fdde8:
  piVar4 = local_28;
  uVar9 = 1;
  pcVar10 = "}";
  do {
    uVar11 = piVar4[1];
    uVar13 = uVar11 ^ 0x7fffffff;
    if (uVar9 < uVar13) {
      uVar13 = uVar9;
    }
    FUN_01284394(piVar4,pcVar10,uVar13);
    if (uVar11 == 0x7fffffff) goto LAB_010fd864;
    pcVar10 = pcVar10 + uVar13;
    uVar9 = uVar9 - uVar13;
  } while (uVar9 != 0);
  iVar7 = 0;
LAB_010fd870:
  local_38 = local_48;
  local_34 = local_44;
  uStack_30 = local_40;
  uStack_2c = local_3c;
  FUN_00710a2c(&local_318,&local_38,iVar7);
  FUN_0132b958(local_150,local_14c,8,0x48);
  FUN_0132b958(local_144,local_140,8,0x48);
  local_68 = local_310;
  uStack_64 = uStack_30c;
  iStack_60 = iStack_308;
  local_5c = local_304;
  uStack_58 = uStack_300;
  uStack_54 = uStack_2fc;
  uStack_50 = uStack_2f8;
  local_90 = local_2f4;
  uStack_8c = uStack_2f0;
  uStack_88 = uStack_2ec;
  uStack_84 = uStack_2e8;
  local_80 = local_2e4;
  uStack_7c = uStack_2e0;
  uStack_78 = uStack_2dc;
  uStack_74 = local_2d8;
  uStack_70 = uStack_2d4;
  *(undefined1 *)(param_2 + 0xac) = 0;
  piVar4 = *(int **)(param_2 + 0xa0);
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar4;
    bVar17 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar17);
  *piVar4 = iVar7 + -1;
  local_45c = local_2d0;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_011808f4(*(undefined4 *)(param_2 + 0xa0));
  }
  *local_450 = 1;
  iVar7 = local_314;
  puVar14 = local_2cc;
  iVar12 = local_318;
  if (local_318 == 4 && local_314 == 0) {
LAB_010fd3c0:
    *param_1 = 3;
    param_1[1] = 0;
    uVar3 = 5;
  }
  else {
LAB_010fd5d0:
    local_208 = local_68;
    uStack_204 = uStack_64;
    iStack_200 = iStack_60;
    local_1fc = local_5c;
    uStack_1f8 = uStack_58;
    uStack_1f4 = uStack_54;
    uStack_1f0 = uStack_50;
    local_230 = local_90;
    uStack_22c = uStack_8c;
    uStack_228 = uStack_88;
    uStack_224 = uStack_84;
    local_220 = local_80;
    uStack_21c = uStack_7c;
    uStack_218 = uStack_78;
    uStack_214 = uStack_74;
    uStack_210 = uStack_70;
    local_278 = local_90;
    uStack_274 = uStack_8c;
    uStack_270 = uStack_88;
    uStack_26c = uStack_84;
    local_268 = local_80;
    uStack_264 = uStack_7c;
    uStack_260 = uStack_78;
    uStack_25c = uStack_74;
    uStack_258 = uStack_70;
    local_250 = local_68;
    uStack_24c = uStack_64;
    iStack_248 = iStack_60;
    local_244 = local_5c;
    uStack_240 = uStack_58;
    uStack_23c = uStack_54;
    uStack_238 = uStack_50;
    FUN_00fb4058(puVar15);
    if (iVar12 == 3 && iVar7 == 0) {
      FUN_00a28800(&local_1e8,&local_208);
    }
    else {
      local_1e0 = local_208;
      uStack_1dc = uStack_204;
      iStack_1d8 = iStack_200;
      local_1d4 = local_1fc;
      uStack_1d0 = uStack_1f8;
      uStack_1cc = uStack_1f4;
      uStack_1c8 = uStack_1f0;
      local_1c4 = local_230;
      uStack_1c0 = uStack_22c;
      uStack_1bc = uStack_228;
      uStack_1b8 = uStack_224;
      local_1b4 = local_220;
      uStack_1b0 = uStack_21c;
      uStack_1ac = uStack_218;
      uStack_1a8 = uStack_214;
      uStack_1a4 = uStack_210;
      local_1a0 = local_45c;
      local_1e8 = iVar12;
      local_1e4 = iVar7;
      local_19c = puVar14;
    }
    piVar4 = *(int **)(param_2 + 0x90);
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar17 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar17);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011808f4(*(undefined4 *)(param_2 + 0x90));
    }
LAB_010fd6a4:
    FUN_01bed4e2(param_1,&local_1e8,0x50);
    uVar3 = 1;
  }
LAB_010fd6b8:
  *(undefined1 *)(param_2 + 0x94) = uVar3;
  return;
}

