// FUN_01acf8a4 @ 01acf8a4 size=1332 calls_out=16 calls_in=2
// strings: a non-empty list of numbers

void FUN_01acf8a4(undefined2 *param_1,char *param_2,int param_3)

{
  byte *pbVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int *extraout_r3;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined *puVar12;
  undefined4 *puVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  ulonglong uVar17;
  int local_13c;
  undefined4 local_138;
  undefined4 local_134;
  int local_130;
  int *local_12c;
  undefined *local_128;
  undefined4 local_124;
  int *local_120;
  undefined *local_11c;
  undefined4 local_118;
  undefined *local_114;
  undefined4 local_110;
  undefined1 local_10c;
  undefined4 local_108;
  undefined *local_104;
  undefined4 local_100;
  undefined *local_fc;
  undefined4 local_c8;
  undefined *local_c4;
  undefined4 local_94;
  undefined *local_90;
  undefined2 local_78;
  undefined1 local_76;
  undefined4 local_74;
  undefined *local_70;
  undefined *local_64;
  undefined *local_60;
  undefined *local_5c;
  undefined4 local_58;
  undefined *local_54;
  
  if ((param_3 != 0) && (*param_2 == '[')) {
    if (param_2[param_3 + -1] != ']') {
      *param_1 = 0x403;
      return;
    }
    if ((param_3 == 1) || (param_2[1] < -0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb514(param_2,param_3,1,param_3 + -1,&DAT_01d2fd98);
    }
    FUN_01acf484(&local_124,param_2 + 1,param_3 + -2);
    if ((char)local_124 == '\x01') {
      *(undefined1 *)((int)param_1 + 1) = local_124._1_1_;
      uVar5 = 3;
    }
    else {
      FUN_01bed4e2((undefined1 *)((int)param_1 + 1),(int)&local_124 + 1,0x10);
      uVar5 = 2;
    }
    *(undefined1 *)param_1 = uVar5;
    return;
  }
  FUN_016558d4(&local_13c,param_2,param_2 + param_3);
  local_70 = &DAT_01cf9014;
  local_76 = 0x41;
  local_78 = 0x41;
  local_90 = &DAT_01cf9054;
  local_54 = &DAT_01cf9084;
  local_c4 = &DAT_01cf9084;
  local_58 = 0;
  local_74 = 0;
  local_94 = 0;
  local_c8 = 0;
  local_fc = &DAT_01cf9020;
  local_100 = 0;
  local_104 = (undefined *)0x1;
  local_124 = 1;
  local_120 = (int *)0x0;
  local_11c = &DAT_01cf906c;
  local_5c = &DAT_01cf912c;
  local_60 = &DAT_01cf90fc;
  local_64 = &DAT_01cf915c;
  FUN_0144d298(&local_130,&local_124,local_138,local_134,0xffffffff,0xd4008029,0x7fffffff,0x90000000
               ,0,0);
  FUN_013da4dc(&local_124);
  puVar12 = local_128;
  piVar4 = local_12c;
  iVar3 = local_130;
  if (local_130 == -0x7fffffff) {
    *param_1 = 0x103;
    goto LAB_01acfd24;
  }
  if (local_128 == (undefined *)0x0) {
    uVar5 = 0;
LAB_01acfd04:
    *(undefined1 *)((int)param_1 + 1) = uVar5;
    *(undefined1 *)param_1 = 3;
  }
  else {
    local_100 = CONCAT22(local_100._2_2_,1);
    local_10c = 1;
    local_104 = local_128;
    local_108 = 0;
    local_110 = 0x2e;
    local_114 = local_128;
    local_118 = 0;
    local_11c = local_128;
    local_120 = local_12c;
    local_124 = 0x2e;
    uVar17 = FUN_019bfa68(&local_124);
    if ((int)uVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d2fd58);
    }
    if ((int)(uVar17 >> 0x20) == 0) {
      uVar17 = FUN_019bfa68(&local_124);
      if ((int)uVar17 != 0) {
        if ((int)(uVar17 >> 0x20) != 0) goto LAB_01acfa70;
        uVar17 = uVar17 & 0xffffffff;
        goto LAB_01acfa90;
      }
    }
    else {
LAB_01acfa70:
      iVar6 = 0;
      do {
        if ((int)(uVar17 >> 0x20) == iVar6) goto LAB_01acfa9c;
        pbVar1 = (byte *)((int)uVar17 + iVar6);
        iVar6 = iVar6 + 1;
      } while (*pbVar1 - 0x30 < 10);
LAB_01acfa90:
      iVar6 = FUN_01acfea0((int)uVar17,(int)(uVar17 >> 0x20));
      if (iVar6 != 2) {
LAB_01acfa9c:
        local_100 = CONCAT22(local_100._2_2_,1);
        local_10c = 1;
        local_104 = puVar12;
        local_108 = 0;
        local_110 = 0x2e;
        local_114 = puVar12;
        local_118 = 0;
        local_11c = puVar12;
        local_120 = piVar4;
        local_124 = 0x2e;
        FUN_01ad0a10(&local_130,&local_124);
        piVar15 = extraout_r3;
        if (local_128 != (undefined *)0x0) {
          piVar15 = local_12c + (int)local_128 * 2;
        }
        if ((local_128 != (undefined *)0x0 && piVar15 != (int *)&DAT_00000008) && (piVar15[-1] == 0)
           ) {
          local_128 = local_128 + -1;
        }
        if (local_128 < (undefined *)0x5) {
          piVar15 = (int *)&SUB_00000004;
          local_11c = (undefined *)0x0;
          local_120 = (int *)&SUB_00000004;
          local_124 = 0;
          if (local_128 == (undefined *)0x0) {
            FUN_01af7af8(local_130,local_12c,4,8);
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("a non-empty list of numbers",0x1b,&DAT_01d2fd18);
          }
          iVar6 = 0;
          iVar14 = -1;
          do {
            iVar7 = iVar6;
            puVar13 = (undefined4 *)((int)local_12c + iVar7 * 2);
            uVar17 = FUN_01acfea0(*puVar13,puVar13[1]);
            if ((uVar17 & 1) == 0) {
              FUN_01af7af8(local_130,local_12c,4,8);
              goto LAB_01acfcf4;
            }
            iVar16 = iVar14 + 1;
            if (iVar16 == local_124) {
              FUN_0155a420(&local_124);
              piVar15 = local_120;
            }
            local_11c = (undefined *)(iVar14 + 2);
            *(int *)((int)piVar15 + iVar7) = (int)(uVar17 >> 0x20);
            iVar6 = iVar7 + 4;
            iVar14 = iVar16;
          } while (puVar13 + 2 != local_12c + (int)local_128 * 2);
          FUN_01af7af8(local_130,local_12c,4,8);
          uVar11 = local_120[iVar16];
          if (uVar11 <= 0xffffffffU >> (iVar16 * 8 & 0x18U)) {
            iVar6 = 0;
LAB_01acfc70:
            if (iVar7 != iVar6) goto code_r0x01acfc78;
            if (iVar16 != 0) {
              uVar9 = 0x18;
              piVar15 = local_120;
              do {
                uVar10 = uVar9 & 0x18;
                uVar9 = uVar9 - 8;
                iVar7 = iVar7 + -4;
                uVar11 = uVar11 + (*piVar15 << uVar10);
                piVar15 = piVar15 + 1;
              } while (iVar7 != 0);
            }
            FUN_01af7af8(local_124,local_120,4,4);
            iVar6 = 1;
            puVar12 = (undefined *)
                      (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8
                      | uVar11 >> 0x18);
            *(undefined1 *)param_1 = 1;
            goto LAB_01acfcc4;
          }
LAB_01acfcf4:
          uVar8 = 4;
          local_130 = local_124;
          local_12c = local_120;
        }
        else {
          uVar8 = 8;
        }
        FUN_01af7af8(local_130,local_12c,4,uVar8);
        uVar5 = 3;
        goto LAB_01acfd04;
      }
    }
    if ((int)puVar12 < 0) {
      uVar8 = 0;
LAB_01acfb5c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar8,puVar12);
    }
    uVar8 = 1;
    iVar6 = FUN_01298504(puVar12,1);
    if (iVar6 == 0) goto LAB_01acfb5c;
    FUN_01bed4e2(iVar6,piVar4,puVar12);
    *(undefined **)(param_1 + 2) = puVar12;
    *(int *)(param_1 + 4) = iVar6;
    *(undefined1 *)param_1 = 0;
    iVar6 = 0xc;
LAB_01acfcc4:
    *(undefined **)((int)param_1 + iVar6) = puVar12;
  }
  if (iVar3 != -0x80000000) {
    FUN_019bb7e0(iVar3,piVar4);
  }
LAB_01acfd24:
  if (local_13c != -0x80000000) {
    FUN_019bb7e0(local_13c,local_138);
  }
  return;
code_r0x01acfc78:
  puVar2 = (uint *)((int)local_120 + iVar6);
  iVar6 = iVar6 + 4;
  if (0xff < *puVar2) goto LAB_01acfcf4;
  goto LAB_01acfc70;
}

