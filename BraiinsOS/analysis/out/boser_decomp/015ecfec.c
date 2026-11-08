// FUN_015ecfec @ 015ecfec size=1784 calls_out=18 calls_in=3
// strings: internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015ecfec(undefined4 *param_1,int param_2,uint *param_3)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  undefined *puVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  undefined8 uVar22;
  uint local_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint local_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint local_78;
  uint local_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint local_58;
  int *local_54;
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  int *local_28;
  
  FUN_01656cb0(&local_58,param_2 + 8);
  piVar2 = local_54;
  if (local_58 == 1) {
    local_74 = CONCAT31(local_74._1_3_,(undefined1)local_50);
    local_78 = (uint)local_54;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_78,&DAT_01cfd8d8,&DAT_01cfd9e0);
  }
  uVar13 = local_50 & 0xff;
  DataMemoryBarrier(0xb);
  if (*(char *)(param_2 + 0x4c) == '\0') {
    iVar3 = (int)local_54 + 8;
    if (*(int *)((int)local_54 + 0x24) != 0) {
      iVar4 = (int)local_54 + 0x18;
      local_b0 = *param_3;
      uStack_ac = param_3[1];
      uStack_a8 = param_3[2];
      local_a4 = param_3[3];
      uStack_a0 = param_3[4];
      uStack_9c = param_3[5];
      uStack_98 = param_3[6];
      puVar5 = (uint *)((uint)&local_58 | 4);
      puVar6 = (uint *)((uint)&local_b0 | 4);
      while( true ) {
        uVar22 = FUN_015ef9a8(iVar4);
        uVar20 = local_b0;
        iVar7 = (int)((ulonglong)uVar22 >> 0x20);
        piVar15 = (int *)uVar22;
        if (piVar15 == (int *)0x0) break;
        bVar21 = local_b0 == 5;
        local_b0 = 5;
        if (bVar21) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01cfd980);
        }
        local_58 = uVar20;
        uVar19 = *(uint *)(iVar7 + 8);
        uVar8 = puVar6[1];
        uVar9 = puVar6[2];
        uVar10 = puVar6[3];
        uVar11 = puVar6[4];
        uVar14 = puVar6[5];
        *puVar5 = *puVar6;
        puVar5[1] = uVar8;
        puVar5[2] = uVar9;
        puVar5[3] = uVar10;
        puVar5[4] = uVar11;
        puVar5[5] = uVar14;
        uVar8 = uVar19;
        if (uVar19 < 5) {
          uVar8 = 4;
        }
        iVar16 = (int)piVar15 + (uVar8 - 1 & 0xfffffff8) + 8;
        uVar22 = FUN_015e96cc(iVar16);
        uVar8 = (uint)((ulonglong)uVar22 >> 0x20);
        iVar17 = (int)uVar22;
        if ((uVar8 & 0xff) != 2) {
          puVar5 = (uint *)(iVar17 + 8);
          if (*puVar5 != 5) {
            FUN_015e9624(puVar5);
          }
          *puVar5 = local_58;
          *(int **)(iVar17 + 0xc) = local_54;
          *(uint *)(iVar17 + 0x10) = local_50;
          *(uint *)(iVar17 + 0x14) = local_4c;
          *(uint *)(iVar17 + 0x18) = local_48;
          *(uint *)(iVar17 + 0x1c) = uStack_44;
          *(uint *)(iVar17 + 0x20) = uStack_40;
          FUN_00a97e8c(iVar17,uVar8 & 1);
          iVar17 = iVar16 + (uVar19 - 1 & 0xffffffd8) + 0x28;
LAB_015ed32c:
          local_90 = local_78;
          uStack_8c = local_74;
          uStack_88 = uStack_70;
          uStack_84 = uStack_6c;
          uStack_80 = uStack_68;
          uStack_7c = uStack_64;
          FUN_00a97e8c(piVar2,uVar13);
          (**(code **)(iVar7 + 0xc))(iVar17);
LAB_015ed3c0:
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar15;
            bVar21 = (bool)hasExclusiveAccess(piVar15);
          } while (!bVar21);
          *piVar15 = iVar3 + -1;
          bVar21 = false;
          if (iVar3 == 1) {
            DataMemoryBarrier(0xb);
            FUN_015fa154(piVar15,iVar7);
          }
LAB_015ed3f4:
          if (local_b0 != 5) {
            FUN_015e9624(&local_b0);
          }
          if (!bVar21) goto LAB_015ed41c;
          goto LAB_015ed410;
        }
        local_90 = *puVar6;
        uStack_8c = puVar6[1];
        uStack_88 = puVar6[2];
        uStack_84 = puVar6[3];
        uStack_80 = puVar6[4];
        uStack_7c = puVar6[5];
        iVar17 = iVar16 + (uVar19 - 1 & 0xffffffd8) + 0x28;
        local_78 = local_90;
        local_74 = uStack_8c;
        uStack_70 = uStack_88;
        uStack_6c = uStack_84;
        uStack_68 = uStack_80;
        uStack_64 = uStack_7c;
        if (uVar20 == 5) goto LAB_015ed32c;
        if (uVar20 == 6) {
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar15;
            bVar21 = (bool)hasExclusiveAccess(piVar15);
          } while (!bVar21);
          *piVar15 = iVar3 + -1;
          bVar21 = true;
          if (iVar3 == 1) {
            DataMemoryBarrier(0xb);
            FUN_015fa154(piVar15,iVar7);
          }
          goto LAB_015ed3f4;
        }
        local_78 = uVar20;
        local_74 = local_90;
        uStack_70 = uStack_8c;
        uStack_6c = uStack_88;
        uStack_68 = uStack_84;
        uStack_64 = uStack_80;
        uStack_60 = uStack_7c;
        iVar17 = (**(code **)(iVar7 + 0xc))(iVar17);
        if (iVar17 == 0) {
          local_58 = uVar20;
          local_54 = (int *)local_90;
          local_50 = uStack_8c;
          local_4c = uStack_88;
          local_48 = uStack_84;
          uStack_44 = uStack_80;
          uStack_40 = uStack_7c;
          FUN_015efba4(iVar3,&local_58);
          FUN_00a97e8c(piVar2,uVar13);
          goto LAB_015ed3c0;
        }
        local_58 = local_b0;
        local_54 = (int *)uStack_ac;
        local_50 = uStack_a8;
        local_4c = local_a4;
        local_48 = uStack_a0;
        uStack_44 = uStack_9c;
        uStack_40 = uStack_98;
        *puVar6 = local_90;
        puVar6[1] = uStack_8c;
        puVar6[2] = uStack_88;
        puVar6[3] = uStack_84;
        puVar6[4] = uStack_80;
        puVar6[5] = uStack_7c;
        bVar21 = local_b0 != 5;
        local_b0 = uVar20;
        if (bVar21) {
          FUN_015e9624(&local_58);
        }
        DataMemoryBarrier(0xb);
        do {
          iVar17 = *piVar15;
          bVar21 = (bool)hasExclusiveAccess(piVar15);
        } while (!bVar21);
        *piVar15 = iVar17 + -1;
        if (iVar17 == 1) {
          DataMemoryBarrier(0xb);
          FUN_015fa154(piVar15,iVar7);
        }
      }
      if (local_b0 != 5) {
        local_54 = (int *)*puVar6;
        local_50 = puVar6[1];
        local_4c = puVar6[2];
        local_48 = puVar6[3];
        uStack_44 = puVar6[4];
        uStack_40 = puVar6[5];
        local_58 = local_b0;
        FUN_015efba4(iVar3,&local_58);
      }
LAB_015ed410:
      FUN_00a97e8c(piVar2,uVar13);
      goto LAB_015ed41c;
    }
    piVar15 = (int *)((int)local_54 + 0x2c);
    if ((*piVar15 == -0x80000000) ||
       (*(uint *)((int)local_54 + 0x14) < *(uint *)((int)local_54 + 0x28))) {
      FUN_015efba4(iVar3,param_3);
      uVar20 = 3;
      goto LAB_015ed058;
    }
    uVar22 = thunk_FUN_01bee35a(iVar3,0x240);
    uVar20 = *(uint *)((int)uVar22 + (int)((ulonglong)uVar22 >> 0x20));
    if (uVar20 < 3) {
      piVar12 = (int *)FUN_019b03e8();
    }
    else {
      piVar12 = (int *)(uVar20 - 8);
      do {
        iVar3 = *piVar12;
        bVar21 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar21);
      *piVar12 = iVar3 + 1;
      if (iVar3 < 0) goto LAB_015ed6f4;
    }
    FUN_01bed4e2((uint)&local_78 | 3,param_3,0x1c);
    local_48 = local_48 & 0xffffff00;
    local_4c = 0;
    local_50 = 1;
    local_54 = (int *)0x1;
    local_58 = 1;
    FUN_01bed4e2((int)&local_48 + 1,&local_78,0x1f);
    local_28 = piVar12;
    puVar5 = (uint *)thunk_FUN_01be5118(0x34);
    if (puVar5 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x34);
    }
    *puVar5 = local_58;
    puVar5[1] = (uint)local_54;
    puVar5[2] = local_50;
    puVar5[3] = local_4c;
    puVar5[4] = local_48;
    puVar5[5] = uStack_44;
    puVar5[6] = uStack_40;
    puVar5[7] = uStack_3c;
    puVar5[8] = local_38;
    puVar5[9] = uStack_34;
    puVar5[10] = uStack_30;
    puVar5[0xb] = uStack_2c;
    puVar5[0xc] = (uint)local_28;
    if (*piVar15 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01cfd970);
    }
    do {
      uVar20 = *puVar5;
      bVar21 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar21);
    *puVar5 = uVar20 + 1;
    if ((int)uVar20 < 0) {
LAB_015ed6f4:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x15ed6f4);
      (*pcVar1)();
    }
    uVar8 = *(uint *)((int)piVar2 + 0x2c);
    uVar20 = *(uint *)((int)piVar2 + 0x38);
    if (uVar20 == uVar8) {
      FUN_015ef758(piVar15);
      uVar8 = *(uint *)((int)piVar2 + 0x2c);
      uVar20 = *(uint *)((int)piVar2 + 0x38);
    }
    uVar9 = *(int *)((int)piVar2 + 0x34) + uVar20;
    *(uint *)((int)piVar2 + 0x38) = uVar20 + 1;
    uVar20 = uVar9 - uVar8;
    if (uVar9 < uVar8) {
      uVar20 = uVar9;
    }
    piVar15 = (int *)(*(int *)((int)piVar2 + 0x30) + uVar20 * 8);
    *piVar15 = (int)puVar5;
    piVar15[1] = (int)&DAT_01cfd958;
    FUN_00a97e8c(piVar2,uVar13);
    DataMemoryBarrier(0xb);
    if (*(char *)(param_2 + 0x4c) == '\0') {
      puVar18 = &DAT_01cfd9d0;
      do {
        uVar22 = FUN_015e96cc(puVar5 + 2);
        uVar13 = (uint)((ulonglong)uVar22 >> 0x20);
        if ((uVar13 & 0xff) == 2) goto LAB_015ed6ec;
        iVar3 = *(int *)((int)uVar22 + 8);
        FUN_00a97e8c((int)uVar22,uVar13 & 1);
        if (iVar3 == 5) break;
        FUN_019b37f8();
        DataMemoryBarrier(0xb);
      } while (*(char *)(param_2 + 0x4c) == '\0');
    }
    uVar22 = FUN_015e96cc(puVar5 + 2);
    uVar13 = (uint)((ulonglong)uVar22 >> 0x20);
    iVar3 = (int)uVar22;
    if ((uVar13 & 0xff) == 2) {
      puVar18 = &DAT_01cfd9a0;
LAB_015ed6ec:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(puVar18);
    }
    piVar15 = *(int **)(iVar3 + 8);
    local_58 = *(uint *)(iVar3 + 0xc);
    local_54 = *(int **)(iVar3 + 0x10);
    local_50 = *(uint *)(iVar3 + 0x14);
    local_4c = *(uint *)(iVar3 + 0x18);
    local_48 = *(uint *)(iVar3 + 0x1c);
    uStack_44 = *(uint *)(iVar3 + 0x20);
    *(undefined4 *)(iVar3 + 8) = 5;
    FUN_00a97e8c(iVar3,uVar13 & 1);
    uVar20 = 3;
    if (piVar15 != (int *)&DAT_00000005) {
      uVar20 = 1;
      local_78 = local_58;
      local_74 = (uint)local_54;
      uStack_70 = local_50;
      uStack_6c = local_4c;
      uStack_68 = local_48;
      uStack_64 = uStack_44;
    }
    DataMemoryBarrier(0xb);
    do {
      uVar13 = *puVar5;
      bVar21 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar21);
    *puVar5 = uVar13 - 1;
    if (uVar13 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015fa62c(puVar5);
    }
  }
  else {
    piVar15 = (int *)*param_3;
    uVar20 = 1;
    local_78 = param_3[1];
    local_74 = param_3[2];
    uStack_70 = param_3[3];
    uStack_6c = param_3[4];
    uStack_68 = param_3[5];
    uStack_64 = param_3[6];
LAB_015ed058:
    FUN_00a97e8c(local_54,uVar13);
  }
  if (uVar20 != 3) {
    local_50 = local_78;
    local_4c = local_74;
    local_48 = uStack_70;
    uStack_44 = uStack_6c;
    uStack_40 = uStack_68;
    uStack_3c = uStack_64;
    if (uVar20 != 1) {
      local_58 = uVar20;
      local_54 = piVar15;
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cfd948);
    }
    *param_1 = piVar15;
    param_1[1] = local_78;
    param_1[2] = local_74;
    param_1[3] = uStack_70;
    param_1[4] = uStack_6c;
    param_1[5] = uStack_68;
    param_1[6] = uStack_64;
    return;
  }
LAB_015ed41c:
  *param_1 = 5;
  return;
}

