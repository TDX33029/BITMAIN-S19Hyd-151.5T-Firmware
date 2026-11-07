// FUN_011eb0a0 @ 011eb0a0 size=2080 calls_out=23 calls_in=3
// strings: location must start with resource_base

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_011eb0a0(undefined4 *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined *puVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int local_1b8;
  int *local_1b4;
  int *piStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  uint uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 local_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  int local_180 [14];
  int *local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined1 auStack_138 [56];
  int local_100;
  int *local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int local_70;
  int local_6c;
  int *piStack_68;
  int iStack_64;
  int iStack_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  int local_44;
  int *local_40;
  int iStack_3c;
  int local_38;
  undefined8 local_34;
  undefined8 local_2c;
  
  iVar14 = *(int *)(param_2 + 0x84);
  if (*(int *)(iVar14 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_0188adc8);
  }
  piVar9 = (int *)(iVar14 + 0xc);
  iVar4 = 0;
  *(undefined4 *)(iVar14 + 0x14) = 0;
  *(undefined4 *)(iVar14 + 8) = 0xffffffff;
  if (*piVar9 == 0) {
    FUN_011cf828(piVar9,0,1,1,1);
    iVar4 = *(int *)(iVar14 + 0x14);
  }
  iVar8 = *(int *)(param_2 + 0x3c);
  *(undefined1 *)(*(int *)(iVar14 + 0x10) + iVar4) = 0x23;
  *(undefined4 *)(iVar14 + 0x14) = 1;
  if (iVar8 != 0) {
    FUN_01357e28(*(int *)(param_2 + 0x38) + 8,iVar8,piVar9);
  }
  piVar9 = *(int **)(param_2 + 0x54);
  do {
    iVar4 = *piVar9;
    bVar2 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar2);
  *piVar9 = iVar4 + 1;
  if (iVar4 < 0) goto LAB_011eb8c4;
  local_48 = piVar9[3];
  local_44 = piVar9[4];
  local_40 = (int *)piVar9[5];
  iStack_3c = piVar9[6];
  local_38 = piVar9[7];
  local_34._0_4_ = piVar9[8];
  local_34._4_4_ = piVar9[9];
  local_2c._0_4_ = piVar9[10];
  local_2c._4_4_ = piVar9[0xb];
  FUN_0134831c(&local_100,*(undefined4 *)(param_2 + 0x50),&local_48,*(undefined4 *)(iVar14 + 0x10),
               *(undefined4 *)(iVar14 + 0x14));
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar9;
    bVar2 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar2);
  *piVar9 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_013532e4(piVar9);
  }
  piVar9 = local_fc;
  *(undefined4 *)(iVar14 + 0x14) = 0;
  local_1b8 = local_100;
  local_1b4 = local_fc;
  piStack_1b0 = (int *)local_f8;
  uStack_1ac = local_f8._4_4_;
  local_1a8 = (undefined4)local_f0;
  uStack_1a4 = local_f0._4_4_;
  uStack_1a0 = uStack_e8;
  uStack_19c = uStack_e4;
  uStack_198 = uStack_e0;
  local_194 = local_dc;
  uStack_190 = uStack_d8;
  uStack_18c = uStack_d4;
  uStack_188 = uStack_d0;
  uStack_184 = uStack_cc;
  *(int *)(iVar14 + 8) = *(int *)(iVar14 + 8) + 1;
  if (local_100 != -0x7ffffff6) {
    uVar15 = FUN_011e9f60(&local_1b8);
    param_1[2] = uVar15;
    *param_1 = 1;
    param_1[1] = 0;
    return;
  }
  uVar15 = *(undefined4 *)(param_2 + 0x50);
  piVar12 = *(int **)(param_2 + 0x54);
  do {
    iVar14 = *piVar12;
    bVar2 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar2);
  *piVar12 = iVar14 + 1;
  if (iVar14 < 0) goto LAB_011eb8c4;
  local_48 = piVar12[3];
  local_44 = piVar12[4];
  local_40 = (int *)piVar12[5];
  iStack_3c = piVar12[6];
  local_38 = piVar12[7];
  local_34._0_4_ = piVar12[8];
  local_34._4_4_ = piVar12[9];
  local_2c._0_4_ = piVar12[10];
  local_2c._4_4_ = piVar12[0xb];
  FUN_0134831c(&local_100,uVar15,&local_48,param_3,param_4);
  DataMemoryBarrier(0xb);
  do {
    iVar14 = *piVar12;
    bVar2 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar2);
  *piVar12 = iVar14 + -1;
  if (iVar14 == 1) {
    DataMemoryBarrier(0xb);
    FUN_013532e4(piVar12);
  }
  piVar12 = local_fc;
  if (local_100 == -0x7ffffff6) {
    if (local_fc == piVar9) {
LAB_011eb4e0:
      *param_1 = 0;
    }
    else {
      uVar13 = piVar9[4];
      uVar11 = local_fc[4];
      if ((uVar11 == uVar13) &&
         (iVar14 = thunk_FUN_016dd50a(local_fc[3],piVar9[3],uVar11), iVar14 == 0))
      goto LAB_011eb4e0;
      if (param_4 == 0) {
        iVar14 = piVar12[3];
        uVar10 = piVar12[6];
        if (piVar12[8] != 0) {
          uVar10 = piVar12[8];
        }
        if (uVar10 != 0) {
          if (uVar10 < uVar11) {
            if (*(char *)(iVar14 + uVar10) < -0x40) goto LAB_011eb3a4;
          }
          else if (uVar10 != uVar11) goto LAB_011eb3a4;
        }
        iVar4 = piVar9[3];
        uVar11 = piVar9[6];
        if (piVar9[8] != 0) {
          uVar11 = piVar9[8];
        }
        if (uVar11 != 0) {
          if (uVar11 < uVar13) {
            if (*(char *)(iVar4 + uVar11) < -0x40) {
LAB_011eb398:
              iVar14 = iVar4;
              uVar10 = uVar11;
              uVar11 = uVar13;
LAB_011eb3a4:
                    /* WARNING: Subroutine does not return */
              FUN_00faa8ac(iVar14,uVar11,0,uVar10,&DAT_01882194);
            }
          }
          else if (uVar11 != uVar13) goto LAB_011eb398;
        }
        if ((uVar10 == uVar11) && (iVar14 = thunk_FUN_016dd50a(iVar14,iVar4,uVar10), iVar14 == 0))
        goto LAB_011eb4e0;
      }
      uVar13 = *(uint *)(param_2 + 0x3c);
      uVar11 = *(uint *)(param_2 + 0x44);
      if (uVar13 < uVar11) {
LAB_011eb88c:
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("location must start with resource_base",0x26,&DAT_0188af28);
      }
      iVar4 = *(int *)(param_2 + 0x38) + 8;
      iVar14 = thunk_FUN_016dd50a(*(int *)(param_2 + 0x40) + 8,iVar4,uVar11);
      if (iVar14 != 0) goto LAB_011eb88c;
      uVar16 = FUN_011e1508(iVar4 + uVar11,uVar13 - uVar11);
      uVar15 = (undefined4)((ulonglong)uVar16 >> 0x20);
      piVar6 = (int *)uVar16;
      uVar16 = FUN_0123ab30(piVar6,uVar15,param_5,param_6);
      piVar5 = (int *)uVar16;
      DataMemoryBarrier(0xb);
      do {
        iVar14 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar14 + -1;
      if (iVar14 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0143daec(piVar6,uVar15);
      }
      uVar13 = piVar12[4];
      uVar11 = piVar12[6];
      if (piVar12[8] != 0) {
        uVar11 = piVar12[8];
      }
      if (uVar11 == uVar13) {
LAB_011eb4f0:
        DataMemoryBarrier(0xb);
        if (DAT_018da8bc != 0) {
          FUN_0120d52c();
        }
        do {
          iVar14 = *DAT_018da8b4;
          bVar2 = (bool)hasExclusiveAccess(DAT_018da8b4);
        } while (!bVar2);
        *DAT_018da8b4 = iVar14 + 1;
        uVar17 = CONCAT44(DAT_018da8b8,DAT_018da8b4);
        if (iVar14 < 0) goto LAB_011eb8c4;
      }
      else {
        uVar11 = uVar11 + 1;
        if ((uVar13 < uVar11) ||
           ((uVar11 != 0 && uVar11 < uVar13 && (*(char *)(piVar12[3] + uVar11) < -0x40)))) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac();
        }
        if ((uVar13 == uVar11) || (*(char *)(piVar12[3] + uVar11) != '/')) goto LAB_011eb4f0;
        uVar17 = FUN_011e1508();
      }
      piVar6 = (int *)uVar17;
      FUN_012633f8(&local_48,param_2,param_3,param_4);
      if (local_48 == 1) {
        *param_1 = 1;
        param_1[1] = 0;
        param_1[2] = local_44;
        DataMemoryBarrier(0xb);
        do {
          iVar14 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar14 + -1;
LAB_011eb760:
        if (iVar14 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0143daec(piVar6,(int)((ulonglong)uVar17 >> 0x20));
        }
        DataMemoryBarrier(0xb);
        do {
          iVar14 = *piVar5;
          bVar2 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar2);
        *piVar5 = iVar14 + -1;
        if (iVar14 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0143daec(piVar5,(int)((ulonglong)uVar16 >> 0x20));
        }
      }
      else {
        if (local_44 == 0) {
          FUN_01265564(local_180,param_2,param_3,param_4);
          if (local_180[0] == -0x7ffffff6) {
            FUN_013539bc(&local_100,(undefined4 *)(param_2 + 0x50),param_3,param_4);
            piVar3 = local_fc;
            if (local_100 == -0x7ffffff6) {
              uVar11 = local_f0._4_4_ & 0xff;
              local_148 = (int *)local_f8;
              uStack_144 = local_f8._4_4_;
              uStack_140 = (undefined4)local_f0;
              FUN_01348cc4(auStack_138,*(undefined4 *)(param_2 + 0x4c),uVar11);
              do {
                iVar14 = *piVar6;
                bVar2 = (bool)hasExclusiveAccess(piVar6);
              } while (!bVar2);
              *piVar6 = iVar14 + 1;
              if (iVar14 < 0) {
LAB_011eb8c4:
                    /* WARNING: Does not return */
                pcVar1 = (code *)software_udf(0xfdee,0x11eb8c4);
                (*pcVar1)();
              }
              FUN_01263e28(&local_100,param_2,&local_148,uVar11,auStack_138,uVar17);
              FUN_0125b034(&local_70,&local_100,piVar3,piVar12);
              local_58 = uVar16;
              local_50 = uVar17;
              if (local_70 == 0) {
                FUN_011eabec(&local_58);
                piVar12 = (int *)0x0;
                puVar7 = (undefined *)FUN_011f0ab8(local_6c);
              }
              else {
                local_48 = local_70;
                local_44 = local_6c;
                local_40 = piStack_68;
                iStack_3c = iStack_64;
                local_38 = iStack_60;
                local_34 = uVar16;
                local_2c = uVar17;
                piVar12 = (int *)FUN_011ea1b4(0x24);
                puVar7 = &DAT_0188a2d0;
                *piVar12 = local_48;
                piVar12[1] = local_44;
                piVar12[2] = (int)local_40;
                piVar12[3] = iStack_3c;
                piVar12[4] = local_38;
                *(undefined8 *)(piVar12 + 5) = local_34;
                *(undefined8 *)(piVar12 + 7) = local_2c;
              }
              *param_1 = 1;
              param_1[1] = piVar12;
              param_1[2] = puVar7;
              FUN_01161600(&local_100);
              DataMemoryBarrier(0xb);
              do {
                iVar14 = *piVar9;
                bVar2 = (bool)hasExclusiveAccess(piVar9);
              } while (!bVar2);
              *piVar9 = iVar14 + -1;
              goto LAB_011eb7ec;
            }
            uVar15 = FUN_011e9f60(&local_100);
          }
          else {
            uVar15 = FUN_011e9f60(local_180);
          }
          *param_1 = 1;
          param_1[1] = 0;
          param_1[2] = uVar15;
          DataMemoryBarrier(0xb);
          do {
            iVar14 = *piVar6;
            bVar2 = (bool)hasExclusiveAccess(piVar6);
          } while (!bVar2);
          *piVar6 = iVar14 + -1;
          goto LAB_011eb760;
        }
        local_100 = local_44;
        local_fc = local_40;
        local_f8 = uVar16;
        local_f0 = uVar17;
        piVar6 = (int *)FUN_011ea1b4(0x18);
        *piVar6 = local_100;
        piVar6[1] = (int)local_fc;
        *(undefined8 *)(piVar6 + 2) = local_f8;
        *(undefined8 *)(piVar6 + 4) = local_f0;
        param_1[1] = piVar6;
        param_1[2] = &DAT_0188a290;
        *param_1 = 1;
      }
    }
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar12;
      bVar2 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar2);
    *piVar12 = iVar14 + -1;
    if (iVar14 == 1) {
      DataMemoryBarrier(0xb);
      FUN_013532e4(piVar12);
    }
  }
  else {
    uVar15 = FUN_011e9f60(&local_100);
    *param_1 = 1;
    param_1[1] = 0;
    param_1[2] = uVar15;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar14 = *piVar9;
    bVar2 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar2);
  *piVar9 = iVar14 + -1;
LAB_011eb7ec:
  if (iVar14 == 1) {
    DataMemoryBarrier(0xb);
    FUN_013532e4(piVar9);
  }
  return;
}

