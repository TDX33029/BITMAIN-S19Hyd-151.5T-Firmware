// FUN_009e38c0 @ 009e38c0 size=3572 calls_out=26 calls_in=5
// strings: timestamp/var/lock/bosminer.lock | stderr | stderr | errors | componentsFan

void FUN_009e38c0(int *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  char **ppcVar10;
  int extraout_r2;
  uint uVar11;
  uint uVar12;
  undefined *puVar13;
  int *piVar14;
  uint *puVar15;
  uint **ppuVar16;
  uint *puVar17;
  char ***pppcVar18;
  code *pcVar19;
  uint *puVar20;
  int *piVar21;
  int *piVar22;
  uint *puVar23;
  undefined8 uVar24;
  int *local_d0;
  int local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  char **local_b0;
  uint **local_ac;
  int local_a8;
  uint local_a0;
  undefined4 local_9c;
  int local_98;
  uint *local_90;
  uint *local_8c;
  char ***local_88;
  code *local_84;
  int *piStack_80;
  int iStack_7c;
  uint **local_78;
  uint **local_74;
  uint *local_70;
  code *local_6c;
  undefined4 *local_68;
  int local_64;
  uint *local_60;
  uint *local_5c;
  char ***local_58;
  code *pcStack_54;
  int *local_50;
  int local_4c;
  uint local_48;
  undefined1 *local_44;
  undefined4 local_40;
  uint *local_3c;
  undefined4 local_38;
  uint **local_34;
  uint *local_30;
  code *local_2c;
  
  uVar24 = thunk_FUN_016de0ee(param_1,param_2,0x90);
  piVar7 = (int *)((ulonglong)uVar24 >> 0x20);
  piVar22 = (int *)((int)uVar24 + extraout_r2);
  if ((char)piVar22[4] != '\x01') {
    if ((char)piVar22[4] == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_015f853c(&DAT_018ae900);
    }
    FUN_015e8e6c(piVar22,&DAT_00a03638);
    *(undefined1 *)(piVar22 + 4) = 1;
  }
  iVar3 = *piVar22;
  if (iVar3 == 0) {
    local_d0 = piVar22 + 1;
    *piVar22 = -1;
  }
  else {
    local_c4 = 0;
    local_cc = 0;
    local_d0 = &local_cc;
    local_c8 = 1;
  }
  piVar14 = *(int **)(*piVar7 + 0x10);
  pcVar19 = *(code **)(*param_1 + 0x10);
  local_a8 = 0;
  local_ac = (uint **)&DAT_00000001;
  local_b0 = (char **)0x0;
  iVar4 = FUN_016a7d70(&local_b0,&DAT_0186b3dc);
  if (iVar4 == 0) {
    local_a0 = 0x80000000;
    if (piVar14[1] == 0) {
LAB_009e3a3c:
      puVar8 = (undefined4 *)thunk_FUN_016d4a50(0xf);
      local_98 = 0xf;
      if (puVar8 == (undefined4 *)0x0) {
LAB_009e46b4:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,local_98);
      }
      *(undefined4 *)((int)puVar8 + 0xb) = 0x65676173;
      puVar8[2] = 0x7373656d;
      puVar8[1] = 0x20676e69;
      *puVar8 = 0x7373696d;
      iVar4 = 0xf;
    }
    else {
      iVar9 = *(int *)(piVar14[2] + 8);
      piVar21 = (int *)(*piVar14 + 4);
      iVar4 = piVar14[1] * 0xc;
      do {
        if ((*(int *)(piVar21[-1] + 8) == iVar9) && (*piVar21 != 0)) {
          (**(code **)(piVar21[1] + 0xc))(*piVar21,piVar21[-1],&local_a0,&DAT_0186b3f4);
        }
        uVar2 = local_9c;
        piVar21 = piVar21 + 3;
        iVar4 = iVar4 + -0xc;
      } while (iVar4 != 0);
      if (local_a0 == 0x80000000) goto LAB_009e3a3c;
      if (local_98 == 0) {
        puVar8 = (undefined4 *)&DAT_00000001;
      }
      else {
        puVar8 = (undefined4 *)thunk_FUN_016d4a50(local_98);
        if (puVar8 == (undefined4 *)0x0) goto LAB_009e46b4;
      }
      FUN_016dd1aa(puVar8,uVar2,local_98);
      iVar4 = local_98;
    }
    (*pcVar19)(&local_90,puVar8,iVar4);
    local_78 = (uint **)local_b0;
    local_74 = local_ac;
    local_70 = (uint *)local_a8;
    local_60 = local_90;
    local_5c = local_8c;
    local_58 = local_88;
    pcStack_54 = local_84;
    local_50 = piStack_80;
    local_4c = iStack_7c;
    local_6c = (code *)iVar4;
    local_68 = puVar8;
    local_64 = iVar4;
    local_44 = (undefined1 *)thunk_FUN_016d4a50(0x80);
    if (local_44 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x80);
    }
    local_3c = &local_48;
    *local_44 = 0x7b;
    local_40 = 1;
    local_34 = &local_3c;
    local_48 = 0x80;
    local_38 = (char **)CONCAT22(local_38._2_2_,0x100);
    puVar5 = (undefined1 *)
             FUN_009e6fd4(&local_38,"timestamp/var/lock/bosminer.lock",9,local_74,local_70);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = (undefined1 *)FUN_009e6fd4(&local_38,&DAT_00418440,7,puVar8,iVar4);
      ppuVar16 = local_34;
      pppcVar18 = local_58;
      puVar15 = local_5c;
      if (puVar5 != (undefined1 *)0x0) goto LAB_009e3b9c;
      if ((char)local_38 != '\0') {
        puVar13 = &DAT_018a94f4;
LAB_009e4508:
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00419463,0x28,puVar13);
      }
      if (local_38._1_1_ != '\x01') {
        puVar20 = *local_34;
        uVar12 = puVar20[2];
        if (*puVar20 == uVar12) {
          FUN_009f4d18(puVar20,uVar12,1,1,1);
          uVar12 = puVar20[2];
        }
        *(undefined1 *)(puVar20[1] + uVar12) = 0x2c;
        puVar20[2] = uVar12 + 1;
      }
      local_38._0_2_ = CONCAT11(2,(char)local_38);
      FUN_009e7120(&local_30,*ppuVar16,"errors",6);
      if ((char)local_30 != '\x04') {
        puVar5 = (undefined1 *)FUN_0157c4a0(local_30,local_2c);
        goto LAB_009e3b9c;
      }
      puVar20 = *ppuVar16;
      uVar12 = puVar20[2];
      if (*puVar20 == uVar12) {
        FUN_009f4d18(puVar20,uVar12,1,1,1);
        uVar12 = puVar20[2];
      }
      *(undefined1 *)(puVar20[1] + uVar12) = 0x3a;
      puVar20[2] = uVar12 + 1;
      puVar20 = *ppuVar16;
      uVar12 = puVar20[2];
      if (*puVar20 == uVar12) {
        FUN_009f4d18(puVar20,uVar12,1,1,1);
        uVar12 = puVar20[2];
      }
      *(undefined1 *)(puVar20[1] + uVar12) = 0x5b;
      uVar12 = uVar12 + 1;
      puVar20[2] = uVar12;
      if (pppcVar18 != (char ***)0x0) {
        puVar5 = (undefined1 *)FUN_009f6070(puVar15,ppuVar16);
        if (puVar5 == (undefined1 *)0x0) {
          iVar4 = (int)pppcVar18 * 0x24;
          do {
            iVar4 = iVar4 + -0x24;
            puVar15 = puVar15 + 9;
            puVar20 = *ppuVar16;
            if (iVar4 == 0) {
              uVar12 = puVar20[2];
              goto LAB_009e4298;
            }
            uVar12 = puVar20[2];
            if (*puVar20 == uVar12) {
              FUN_009f4d18(puVar20,uVar12,1,1,1);
              uVar12 = puVar20[2];
            }
            *(undefined1 *)(puVar20[1] + uVar12) = 0x2c;
            puVar20[2] = uVar12 + 1;
            puVar5 = (undefined1 *)FUN_009f6070(puVar15,ppuVar16);
          } while (puVar5 == (undefined1 *)0x0);
        }
        goto LAB_009e3b9c;
      }
LAB_009e4298:
      if (*puVar20 == uVar12) {
        FUN_009f4d18(puVar20,uVar12,1,1,1);
        uVar12 = puVar20[2];
      }
      iVar4 = local_4c;
      piVar14 = local_50;
      *(undefined1 *)(puVar20[1] + uVar12) = 0x5d;
      puVar20[2] = uVar12 + 1;
      puVar15 = *ppuVar16;
      uVar12 = puVar15[2];
      if (*puVar15 == uVar12) {
        FUN_009f4d18(puVar15,uVar12,1,1,1);
        uVar12 = puVar15[2];
      }
      *(undefined1 *)(puVar15[1] + uVar12) = 0x2c;
      puVar15[2] = uVar12 + 1;
      local_38._0_2_ = CONCAT11(2,(char)local_38);
      FUN_009e7120(&local_30,*ppuVar16,"componentsFan",10);
      if ((char)local_30 != '\x04') {
        puVar5 = (undefined1 *)FUN_0157c4a0(local_30,local_2c);
        goto LAB_009e3b9c;
      }
      puVar15 = *ppuVar16;
      uVar12 = puVar15[2];
      if (*puVar15 == uVar12) {
        FUN_009f4d18(puVar15,uVar12,1,1,1);
        uVar12 = puVar15[2];
      }
      *(undefined1 *)(puVar15[1] + uVar12) = 0x3a;
      puVar15[2] = uVar12 + 1;
      puVar15 = *ppuVar16;
      uVar12 = puVar15[2];
      if (*puVar15 == uVar12) {
        FUN_009f4d18(puVar15,uVar12,1,1,1);
        uVar12 = puVar15[2];
      }
      *(undefined1 *)(puVar15[1] + uVar12) = 0x5b;
      uVar12 = uVar12 + 1;
      puVar15[2] = uVar12;
      if (iVar4 != 0) {
        puVar5 = (undefined1 *)
                 FUN_009f5da0(*ppuVar16,*(undefined4 *)(&DAT_018b0a54 + *piVar14 * 4),
                              *(undefined4 *)(&DAT_0041ed5c + *piVar14 * 4),piVar14[1]);
        if (puVar5 == (undefined1 *)0x0) {
          iVar4 = iVar4 * 8;
          do {
            iVar4 = iVar4 + -8;
            puVar15 = *ppuVar16;
            if (iVar4 == 0) {
              uVar12 = puVar15[2];
              goto LAB_009e4438;
            }
            uVar12 = puVar15[2];
            if (*puVar15 == uVar12) {
              FUN_009f4d18(puVar15,uVar12,1,1,1);
              uVar12 = puVar15[2];
            }
            *(undefined1 *)(puVar15[1] + uVar12) = 0x2c;
            puVar15[2] = uVar12 + 1;
            iVar9 = piVar14[2];
            puVar5 = (undefined1 *)
                     FUN_009f5da0(*ppuVar16,*(undefined4 *)(&DAT_018b0a60 + iVar9 * 4),
                                  *(undefined4 *)(&DAT_0041ed68 + iVar9 * 4),piVar14[3]);
            piVar14 = piVar14 + 2;
          } while (puVar5 == (undefined1 *)0x0);
        }
        goto LAB_009e3b9c;
      }
LAB_009e4438:
      if (*puVar15 == uVar12) {
        FUN_009f4d18(puVar15,uVar12,1,1,1);
        uVar12 = puVar15[2];
      }
      *(undefined1 *)(puVar15[1] + uVar12) = 0x5d;
      puVar15[2] = uVar12 + 1;
      if (((uint)local_38 & 1) != 0) {
        puVar13 = &DAT_018a9514;
        goto LAB_009e4508;
      }
      if (((uint)local_38 & 0xff00) != 0) {
        FUN_00a053f4(*ppuVar16,"}",1);
      }
      if (local_48 == 0x80000000) {
        puVar5 = local_44;
        goto LAB_009e3bb4;
      }
    }
    else {
LAB_009e3b9c:
      if (local_48 != 0) {
        thunk_FUN_016d3fb4(local_44);
      }
LAB_009e3bb4:
      puVar6 = (undefined1 *)thunk_FUN_016d4a50(0x13);
      if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,0x13);
      }
      FUN_016dd1aa(puVar6,&DAT_0034b5f8,0x13);
      local_40 = 0x13;
      local_48 = 0x13;
      local_44 = puVar6;
      FUN_00f3d3b0(puVar5);
    }
    local_30 = &local_48;
    local_2c = (code *)&DAT_006043a8;
    iVar4 = FUN_00fa948c(local_d0,&DAT_0186b53c,&DAT_00580c3b,&local_30);
    if (local_48 != 0) {
      thunk_FUN_016d3fb4(local_44);
    }
    FUN_009f26d0(&local_78);
    if ((local_a0 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(local_9c);
    }
    if (iVar4 == 0) {
      puVar8 = (undefined4 *)*param_1;
      pppcVar18 = (char ***)puVar8[2];
      do {
        ppcVar10 = *pppcVar18;
        bVar1 = (bool)hasExclusiveAccess(pppcVar18);
      } while (!bVar1);
      *pppcVar18 = (char **)((int)ppcVar10 + 1);
      if ((int)ppcVar10 < 0) goto LAB_009e46c4;
      puVar20 = (uint *)*puVar8;
      puVar15 = (uint *)puVar8[1];
      if (puVar20 == (uint *)0x0) {
        puVar17 = puVar15 + 0x28;
        do {
          uVar12 = *puVar17;
          bVar1 = (bool)hasExclusiveAccess(puVar17);
        } while (!bVar1);
        *puVar17 = uVar12 + 1;
LAB_009e3f78:
        if ((int)uVar12 < 0) goto LAB_009e44b0;
      }
      else {
        if (puVar20 == (uint *)&DAT_00000001) {
          puVar17 = puVar15 + 0x20;
          do {
            uVar12 = *puVar17;
            bVar1 = (bool)hasExclusiveAccess(puVar17);
          } while (!bVar1);
          *puVar17 = uVar12 + 1;
          goto LAB_009e3f78;
        }
        do {
          uVar12 = *puVar15;
          bVar1 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar1);
        *puVar15 = uVar12 + 1;
        if (0x7fffffff < uVar12) goto LAB_009e44b0;
      }
      local_84._1_3_ = (undefined3)((uint)local_84 >> 8);
      local_84 = (code *)CONCAT31(local_84._1_3_,*(undefined1 *)(puVar8 + 3));
      local_90 = puVar20;
      local_8c = puVar15;
      local_88 = pppcVar18;
      FUN_0169831c(&local_78,&local_90,local_d0[1],local_d0[2]);
      ppuVar16 = local_74;
      if ((char)local_78 != '\x04') {
        uVar12 = (uint)local_78 & 0xff;
        if ((*(char *)(*param_1 + 0x17) == '\x01') && (uVar12 != 4)) {
          local_38 = (char **)local_78;
          local_30 = &local_38;
          local_34 = local_74;
          local_2c = FUN_015ef5b4;
          local_ac = (uint **)&DAT_00000006;
          local_b0 = (char **)0x40ff20;
          FUN_015ee5cc(&local_a0,&DAT_018dd9d8,&DAT_00576f20,&local_30);
          ppuVar16 = local_34;
          if ((char)local_a0 != '\x04') {
            local_74 = (uint **)&DAT_015bee04;
            local_78 = (uint **)&local_b0;
            local_48 = local_a0;
            local_70 = &local_48;
            local_44 = (undefined1 *)local_9c;
            local_6c = FUN_015ef5b4;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_0056faa6,&local_78,&DAT_018aab78);
          }
          if ((char)local_38 == '\x03') {
            puVar17 = local_34[1];
            puVar23 = *local_34;
            if ((code *)*puVar17 != (code *)0x0) {
              (*(code *)*puVar17)(puVar23);
            }
            goto LAB_009e41f8;
          }
        }
        else if ((uVar12 != 4) && (uVar12 == 3)) {
          puVar17 = local_74[1];
          puVar23 = *local_74;
          if ((code *)*puVar17 != (code *)0x0) {
            (*(code *)*puVar17)(puVar23);
          }
LAB_009e41f8:
          if (puVar17[1] != 0) {
            thunk_FUN_016d3fb4(puVar23);
          }
          thunk_FUN_016d3fb4(ppuVar16);
        }
      }
      DataMemoryBarrier(0xb);
      do {
        ppcVar10 = *pppcVar18;
        bVar1 = (bool)hasExclusiveAccess(pppcVar18);
      } while (!bVar1);
      *pppcVar18 = (char **)((int)ppcVar10 + -1);
      if (ppcVar10 == (char **)0x1) {
        DataMemoryBarrier(0xb);
        FUN_00aaaeec(pppcVar18);
      }
      FUN_00a045b4(puVar20,puVar15);
      goto LAB_009e424c;
    }
  }
  else if (local_b0 != (char **)0x0) {
    thunk_FUN_016d3fb4(local_ac);
  }
  if (*(char *)(*param_1 + 0x17) == '\0') goto LAB_009e424c;
  iVar4 = *piVar7;
  iVar9 = *(int *)(iVar4 + 0x14);
  local_a0 = *(uint *)(iVar9 + 0xc);
  local_9c = *(undefined4 *)(iVar9 + 0x10);
  piVar7 = *(int **)(*(int *)(iVar4 + 0x10) + 8);
  local_78 = (uint **)*piVar7;
  local_64 = piVar7[1];
  local_74 = (uint **)piVar7[1];
  local_70 = (uint *)piVar7[2];
  local_6c = (code *)piVar7[3];
  local_88 = (char ***)&local_78;
  local_90 = &local_a0;
  local_68 = (undefined4 *)0x0;
  local_84 = FUN_009e4988;
  local_8c = &DAT_0157d360;
  FUN_00600d2c(&local_48,&DAT_0059135a,&local_90);
  puVar5 = local_44;
  uVar12 = local_48;
  puVar8 = (undefined4 *)*param_1;
  pppcVar18 = (char ***)puVar8[2];
  do {
    ppcVar10 = *pppcVar18;
    bVar1 = (bool)hasExclusiveAccess(pppcVar18);
  } while (!bVar1);
  *pppcVar18 = (char **)((int)ppcVar10 + 1);
  if ((int)ppcVar10 < 0) {
LAB_009e46c4:
                    /* WARNING: Does not return */
    pcVar19 = (code *)software_udf(0xfdee,0x9e46c4);
    (*pcVar19)();
  }
  puVar20 = (uint *)*puVar8;
  puVar15 = (uint *)puVar8[1];
  if (puVar20 == (uint *)0x0) {
    puVar17 = puVar15 + 0x28;
    do {
      uVar11 = *puVar17;
      bVar1 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar1);
    *puVar17 = uVar11 + 1;
LAB_009e3e1c:
    if ((int)uVar11 < 0) {
LAB_009e44b0:
                    /* WARNING: Subroutine does not return */
      FUN_015bef44();
    }
  }
  else {
    if (puVar20 == (uint *)&DAT_00000001) {
      puVar17 = puVar15 + 0x20;
      do {
        uVar11 = *puVar17;
        bVar1 = (bool)hasExclusiveAccess(puVar17);
      } while (!bVar1);
      *puVar17 = uVar11 + 1;
      goto LAB_009e3e1c;
    }
    do {
      uVar11 = *puVar15;
      bVar1 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar1);
    *puVar15 = uVar11 + 1;
    if (0x7fffffff < uVar11) goto LAB_009e44b0;
  }
  local_84 = (code *)CONCAT31(local_84._1_3_,*(undefined1 *)(puVar8 + 3));
  local_90 = puVar20;
  local_8c = puVar15;
  local_88 = pppcVar18;
  FUN_0169831c(&local_78,&local_90,local_44);
  if (((char)local_78 != '\x04') && (((uint)local_78 & 0xff) != 4)) {
    local_38 = (char **)local_78;
    local_30 = &local_38;
    local_34 = local_74;
    local_2c = FUN_015ef5b4;
    local_ac = (uint **)&DAT_00000006;
    local_b0 = (char **)0x40ff20;
    FUN_015ee5cc(&local_a0,&DAT_018dd9d8,&DAT_005948be,&local_30);
    ppuVar16 = local_34;
    if ((char)local_a0 != '\x04') {
      local_74 = (uint **)&DAT_015bee04;
      local_78 = (uint **)&local_b0;
      local_44 = (undefined1 *)local_9c;
      local_48 = local_a0;
      local_6c = FUN_015ef5b4;
      local_70 = &local_48;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0056faa6,&local_78,&DAT_018aab78);
    }
    if ((char)local_38 == '\x03') {
      puVar17 = *local_34;
      puVar23 = local_34[1];
      pcVar19 = (code *)*puVar23;
      if (pcVar19 != (code *)0x0) {
        (*pcVar19)(puVar17);
      }
      if (puVar23[1] != 0) {
        thunk_FUN_016d3fb4(puVar17);
      }
      thunk_FUN_016d3fb4(ppuVar16);
    }
  }
  DataMemoryBarrier(0xb);
  do {
    ppcVar10 = *pppcVar18;
    bVar1 = (bool)hasExclusiveAccess(pppcVar18);
  } while (!bVar1);
  *pppcVar18 = (char **)((int)ppcVar10 + -1);
  if (ppcVar10 == (char **)0x1) {
    DataMemoryBarrier(0xb);
    FUN_00aaaeec(pppcVar18);
  }
  FUN_00a045b4(puVar20,puVar15);
  if (uVar12 != 0) {
    thunk_FUN_016d3fb4(puVar5);
  }
LAB_009e424c:
  local_d0[2] = 0;
  if (iVar3 == 0) {
    *piVar22 = *piVar22 + 1;
  }
  else if (local_cc != 0) {
    thunk_FUN_016d3fb4(local_c8);
    return;
  }
  return;
}

