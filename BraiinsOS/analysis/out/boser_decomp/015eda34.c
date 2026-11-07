// FUN_015eda34 @ 015eda34 size=1312 calls_out=9 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015eda34(undefined4 *param_1,int param_2,uint *param_3)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  undefined8 uVar17;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint local_98;
  uint local_94;
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint local_84;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  FUN_01656cb0(&local_c8,param_2 + 8);
  uVar9 = local_c4;
  if (local_c8 == 1) {
    local_4c = CONCAT31(local_4c._1_3_,(undefined1)local_c0);
    local_50 = local_c4;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_50,&DAT_01cfd8e8,&DAT_01cfd9e0);
  }
  uVar13 = local_c0 & 0xff;
  DataMemoryBarrier(0xb);
  if (*(char *)(param_2 + 0x4c) == '\0') {
    iVar4 = local_c4 + 8;
    if (*(int *)(local_c4 + 0x24) == 0) {
      if ((*(int *)(local_c4 + 0x2c) != -0x80000000) &&
         (*(uint *)(local_c4 + 0x28) <= *(uint *)(local_c4 + 0x14))) {
        FUN_00a97e8c(local_c4,uVar13);
        uVar3 = 0;
        goto LAB_015eda90;
      }
      FUN_015efd0c(iVar4,param_3);
    }
    else {
      iVar5 = local_c4 + 0x18;
      local_98 = *param_3;
      local_94 = param_3[1];
      local_90 = param_3[2];
      uStack_8c = param_3[3];
      uStack_88 = param_3[4];
      local_84 = param_3[5];
      local_80 = param_3[6];
      uStack_7c = param_3[7];
      uStack_78 = param_3[8];
      uStack_74 = param_3[9];
      while( true ) {
        uVar17 = FUN_015ef9a8(iVar5);
        uVar14 = local_94;
        uVar11 = local_98;
        iVar8 = (int)((ulonglong)uVar17 >> 0x20);
        piVar6 = (int *)uVar17;
        if (piVar6 == (int *)0x0) break;
        local_98 = 0x13;
        local_94 = 0;
        if ((uVar11 ^ 0x13) == 0 && uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01cfd980);
        }
        local_c8 = uVar11;
        local_c4 = uVar14;
        uVar15 = *(uint *)(iVar8 + 8);
        local_c0 = local_90;
        uStack_bc = uStack_8c;
        uStack_b8 = uStack_88;
        local_b4 = local_84;
        uVar7 = uVar15;
        if (uVar15 < 9) {
          uVar7 = 8;
        }
        local_b0 = local_80;
        local_ac = uStack_7c;
        uStack_a8 = uStack_78;
        uStack_a4 = uStack_74;
        iVar10 = (int)piVar6 + (uVar7 - 1 & 0xfffffff8) + 8;
        uVar17 = FUN_015ebc9c(iVar10);
        uVar7 = (uint)((ulonglong)uVar17 >> 0x20);
        iVar12 = (int)uVar17;
        if ((uVar7 & 0xff) != 2) {
          puVar16 = (uint *)(iVar12 + 8);
          if (*puVar16 != 0x13 || *(int *)(iVar12 + 0xc) != 0) {
            FUN_015e9eb4(puVar16);
          }
          *puVar16 = local_c8;
          *(uint *)(iVar12 + 0xc) = local_c4;
          *(uint *)(iVar12 + 0x10) = local_c0;
          *(uint *)(iVar12 + 0x14) = uStack_bc;
          *(uint *)(iVar12 + 0x18) = uStack_b8;
          *(uint *)(iVar12 + 0x1c) = local_b4;
          *(uint *)(iVar12 + 0x20) = local_b0;
          *(uint *)(iVar12 + 0x24) = local_ac;
          *(uint *)(iVar12 + 0x28) = uStack_a8;
          *(uint *)(iVar12 + 0x2c) = uStack_a4;
          FUN_00a97e8c(iVar12,uVar7);
          iVar12 = iVar10 + (uVar15 - 1 & 0xffffffc8) + 0x38;
LAB_015eddd0:
          local_70 = local_50;
          uStack_6c = local_4c;
          uStack_68 = local_48;
          uStack_64 = uStack_44;
          local_60 = local_40;
          uStack_5c = uStack_3c;
          uStack_58 = local_38;
          uStack_54 = uStack_34;
          FUN_00a97e8c(uVar9,uVar13);
          (**(code **)(iVar8 + 0xc))(iVar12);
LAB_015ede70:
          DataMemoryBarrier(0xb);
          do {
            iVar4 = *piVar6;
            bVar1 = (bool)hasExclusiveAccess(piVar6);
          } while (!bVar1);
          *piVar6 = iVar4 + -1;
          bVar1 = false;
          if (iVar4 == 1) {
            DataMemoryBarrier(0xb);
            FUN_015f9264(piVar6,iVar8);
          }
LAB_015edeb0:
          if (local_98 != 0x13 || local_94 != 0) {
            FUN_015e9eb4(&local_98);
          }
          if (bVar1) goto LAB_015eded4;
          goto LAB_015edee0;
        }
        local_70 = local_90;
        uStack_6c = uStack_8c;
        uStack_68 = uStack_88;
        uStack_64 = local_84;
        local_60 = local_80;
        uStack_5c = uStack_7c;
        uStack_58 = uStack_78;
        uStack_54 = uStack_74;
        iVar12 = iVar10 + (uVar15 - 1 & 0xffffffc8) + 0x38;
        local_50 = local_70;
        local_4c = uStack_6c;
        local_48 = uStack_68;
        uStack_44 = uStack_64;
        local_40 = local_60;
        uStack_3c = uStack_5c;
        local_38 = uStack_58;
        uStack_34 = uStack_54;
        if ((uVar11 ^ 0x13) == 0 && uVar14 == 0) goto LAB_015eddd0;
        if (uVar11 == 0x14 && uVar14 == 0) {
          DataMemoryBarrier(0xb);
          do {
            iVar4 = *piVar6;
            bVar1 = (bool)hasExclusiveAccess(piVar6);
          } while (!bVar1);
          *piVar6 = iVar4 + -1;
          bVar1 = true;
          if (iVar4 == 1) {
            DataMemoryBarrier(0xb);
            FUN_015f9264(piVar6,iVar8);
          }
          goto LAB_015edeb0;
        }
        local_50 = uVar11;
        local_4c = uVar14;
        local_48 = local_90;
        uStack_44 = uStack_8c;
        local_40 = uStack_88;
        uStack_3c = local_84;
        local_38 = local_80;
        uStack_34 = uStack_7c;
        uStack_30 = uStack_78;
        uStack_2c = uStack_74;
        iVar12 = (**(code **)(iVar8 + 0xc))(iVar12);
        if (iVar12 == 0) {
          local_c8 = uVar11;
          local_c4 = uVar14;
          local_c0 = local_70;
          uStack_bc = uStack_6c;
          uStack_b8 = uStack_68;
          local_b4 = uStack_64;
          local_b0 = local_60;
          local_ac = uStack_5c;
          uStack_a8 = uStack_58;
          uStack_a4 = uStack_54;
          FUN_015efd0c(iVar4,&local_c8);
          FUN_00a97e8c(uVar9,uVar13);
          goto LAB_015ede70;
        }
        local_c8 = local_98;
        local_c4 = local_94;
        local_c0 = local_90;
        uStack_bc = uStack_8c;
        uStack_b8 = uStack_88;
        local_b4 = local_84;
        local_b0 = local_80;
        local_ac = uStack_7c;
        uStack_a8 = uStack_78;
        uStack_a4 = uStack_74;
        local_90 = local_70;
        uStack_8c = uStack_6c;
        uStack_88 = uStack_68;
        local_84 = uStack_64;
        local_80 = local_60;
        uStack_7c = uStack_5c;
        uStack_78 = uStack_58;
        uStack_74 = uStack_54;
        bVar1 = local_98 != 0x13;
        bVar2 = local_94 != 0;
        local_98 = uVar11;
        local_94 = uVar14;
        if (bVar1 || bVar2) {
          FUN_015e9eb4(&local_c8);
        }
        DataMemoryBarrier(0xb);
        do {
          iVar12 = *piVar6;
          bVar1 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar1);
        *piVar6 = iVar12 + -1;
        if (iVar12 == 1) {
          DataMemoryBarrier(0xb);
          FUN_015f9264(piVar6,iVar8);
        }
      }
      if (local_98 != 0x13 || local_94 != 0) {
        local_c0 = local_90;
        uStack_bc = uStack_8c;
        uStack_b8 = uStack_88;
        local_b4 = local_84;
        local_b0 = local_80;
        local_ac = uStack_7c;
        uStack_a8 = uStack_78;
        uStack_a4 = uStack_74;
        local_c4 = local_94;
        local_c8 = local_98;
        FUN_015efd0c(iVar4,&local_c8);
      }
    }
LAB_015eded4:
    FUN_00a97e8c(uVar9,uVar13);
LAB_015edee0:
    uVar3 = 2;
  }
  else {
    FUN_00a97e8c(local_c4,uVar13);
    uVar3 = 1;
LAB_015eda90:
    uVar9 = param_3[1];
    uVar13 = param_3[2];
    uVar11 = param_3[3];
    uVar14 = param_3[4];
    param_1[2] = *param_3;
    param_1[3] = uVar9;
    param_1[4] = uVar13;
    param_1[5] = uVar11;
    param_1[6] = uVar14;
    uVar9 = param_3[6];
    uVar13 = param_3[7];
    uVar11 = param_3[8];
    uVar14 = param_3[9];
    param_1[7] = param_3[5];
    param_1[8] = uVar9;
    param_1[9] = uVar13;
    param_1[10] = uVar11;
    param_1[0xb] = uVar14;
  }
  *param_1 = uVar3;
  param_1[1] = 0;
  return;
}

