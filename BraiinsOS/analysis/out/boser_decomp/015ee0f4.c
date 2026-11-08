// FUN_015ee0f4 @ 015ee0f4 size=1176 calls_out=9 calls_in=2
// strings: 

void FUN_015ee0f4(undefined4 *param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  undefined8 uVar20;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint local_bc;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint local_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint local_50;
  uint local_4c;
  uint uStack_48;
  uint uStack_44;
  uint local_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  FUN_01656cb0(&local_d0,param_2 + 8);
  uVar7 = local_cc;
  if (local_d0 == 1) {
    local_4c = CONCAT31(local_4c._1_3_,(undefined1)local_c8);
    local_50 = local_cc;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_50,&DAT_01cfd8f8,&DAT_01cfd9e0);
  }
  uVar8 = 1;
  uVar12 = local_c8 & 0xff;
  DataMemoryBarrier(0xb);
  if (*(char *)(param_2 + 0x4c) == '\0') {
    iVar1 = local_cc + 8;
    if (*(int *)(local_cc + 0x24) == 0) {
      if ((*(int *)(local_cc + 0x2c) != -0x80000000) &&
         (uVar8 = 0, *(uint *)(local_cc + 0x28) <= *(uint *)(local_cc + 0x14))) goto LAB_015ee144;
      FUN_015ef9f0(iVar1,param_3);
    }
    else {
      iVar2 = local_cc + 0x18;
      local_a0 = *param_3;
      uStack_9c = param_3[1];
      uStack_98 = param_3[2];
      uStack_94 = param_3[3];
      uStack_90 = param_3[4];
      local_8c = param_3[5];
      uStack_88 = param_3[6];
      uStack_84 = param_3[7];
      uStack_80 = param_3[8];
      uStack_7c = param_3[9];
      puVar3 = (uint *)((uint)&local_d0 | 4);
      puVar4 = (uint *)((uint)&local_a0 | 4);
      while( true ) {
        uVar20 = FUN_015ef9a8(iVar2);
        uVar9 = local_a0;
        iVar6 = (int)((ulonglong)uVar20 >> 0x20);
        piVar5 = (int *)uVar20;
        if (piVar5 == (int *)0x0) break;
        bVar19 = local_a0 == 0x80000006;
        local_a0 = 0x80000006;
        if (bVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01cfd980);
        }
        local_d0 = uVar9;
        uVar16 = *(uint *)(iVar6 + 8);
        uVar13 = puVar4[1];
        uVar10 = puVar4[2];
        uVar14 = puVar4[3];
        *puVar3 = *puVar4;
        puVar3[1] = uVar13;
        puVar3[2] = uVar10;
        puVar3[3] = uVar14;
        uVar10 = puVar4[5];
        uVar14 = puVar4[6];
        uVar11 = puVar4[7];
        uVar15 = puVar4[8];
        uVar13 = uVar16;
        if (uVar16 < 5) {
          uVar13 = 4;
        }
        puVar3[4] = puVar4[4];
        puVar3[5] = uVar10;
        puVar3[6] = uVar14;
        puVar3[7] = uVar11;
        puVar3[8] = uVar15;
        iVar18 = (int)piVar5 + (uVar13 - 1 & 0xfffffff8) + 8;
        uVar20 = FUN_015e9bc8(iVar18);
        uVar13 = (uint)((ulonglong)uVar20 >> 0x20);
        iVar17 = (int)uVar20;
        if ((uVar13 & 0xff) != 2) {
          puVar3 = (uint *)(iVar17 + 8);
          if (*puVar3 != 0x80000006) {
            FUN_015e7b58(puVar3);
          }
          *puVar3 = local_d0;
          *(uint *)(iVar17 + 0xc) = local_cc;
          *(uint *)(iVar17 + 0x10) = local_c8;
          *(uint *)(iVar17 + 0x14) = uStack_c4;
          *(uint *)(iVar17 + 0x18) = uStack_c0;
          *(uint *)(iVar17 + 0x1c) = local_bc;
          *(uint *)(iVar17 + 0x20) = local_b8;
          *(uint *)(iVar17 + 0x24) = uStack_b4;
          *(uint *)(iVar17 + 0x28) = uStack_b0;
          *(uint *)(iVar17 + 0x2c) = uStack_ac;
          FUN_00a97e8c(iVar17,uVar13 & 1);
          iVar17 = iVar18 + (uVar16 - 1 & 0xffffffcc) + 0x34;
LAB_015ee414:
          local_78 = local_50;
          uStack_74 = local_4c;
          uStack_70 = uStack_48;
          uStack_6c = uStack_44;
          local_68 = local_40;
          uStack_64 = local_3c;
          uStack_60 = uStack_38;
          uStack_5c = uStack_34;
          uStack_58 = uStack_30;
          FUN_00a97e8c(uVar7,uVar12);
          (**(code **)(iVar6 + 0xc))(iVar17);
LAB_015ee4c0:
          DataMemoryBarrier(0xb);
          do {
            iVar1 = *piVar5;
            bVar19 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar19);
          *piVar5 = iVar1 + -1;
          if (iVar1 == 1) {
            DataMemoryBarrier(0xb);
            FUN_015fa3b4(piVar5,iVar6);
          }
          if (local_a0 != 0x80000006) {
            FUN_015e7b58(&local_a0);
          }
          goto LAB_015ee500;
        }
        local_78 = *puVar4;
        uStack_74 = puVar4[1];
        uStack_70 = puVar4[2];
        uStack_6c = puVar4[3];
        local_68 = puVar4[4];
        uStack_64 = puVar4[5];
        uStack_60 = puVar4[6];
        uStack_5c = puVar4[7];
        uStack_58 = puVar4[8];
        iVar17 = iVar18 + (uVar16 - 1 & 0xffffffcc) + 0x34;
        local_50 = local_78;
        local_4c = uStack_74;
        uStack_48 = uStack_70;
        uStack_44 = uStack_6c;
        local_40 = local_68;
        local_3c = uStack_64;
        uStack_38 = uStack_60;
        uStack_34 = uStack_5c;
        uStack_30 = uStack_58;
        if (uVar9 == 0x80000006) goto LAB_015ee414;
        if (uVar9 == 0x80000007) {
          DataMemoryBarrier(0xb);
          do {
            iVar1 = *piVar5;
            bVar19 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar19);
          *piVar5 = iVar1 + -1;
          if (iVar1 == 1) {
            DataMemoryBarrier(0xb);
            FUN_015fa3b4(piVar5,iVar6);
          }
          if (local_a0 != 0x80000006) {
            FUN_015e7b58(&local_a0);
          }
          goto LAB_015ee390;
        }
        local_50 = uVar9;
        local_4c = local_78;
        uStack_48 = uStack_74;
        uStack_44 = uStack_70;
        local_40 = uStack_6c;
        local_3c = local_68;
        uStack_38 = uStack_64;
        uStack_34 = uStack_60;
        uStack_30 = uStack_5c;
        uStack_2c = uStack_58;
        iVar17 = (**(code **)(iVar6 + 0xc))(iVar17);
        if (iVar17 == 0) {
          local_d0 = uVar9;
          local_cc = local_78;
          local_c8 = uStack_74;
          uStack_c4 = uStack_70;
          uStack_c0 = uStack_6c;
          local_bc = local_68;
          local_b8 = uStack_64;
          uStack_b4 = uStack_60;
          uStack_b0 = uStack_5c;
          uStack_ac = uStack_58;
          FUN_015ef9f0(iVar1,&local_d0);
          FUN_00a97e8c(uVar7,uVar12);
          goto LAB_015ee4c0;
        }
        local_d0 = local_a0;
        local_cc = uStack_9c;
        local_c8 = uStack_98;
        uStack_c4 = uStack_94;
        uStack_c0 = uStack_90;
        local_bc = local_8c;
        local_b8 = uStack_88;
        uStack_b4 = uStack_84;
        uStack_b0 = uStack_80;
        uStack_ac = uStack_7c;
        *puVar4 = local_78;
        puVar4[1] = uStack_74;
        puVar4[2] = uStack_70;
        puVar4[3] = uStack_6c;
        puVar4[4] = local_68;
        puVar4[5] = uStack_64;
        puVar4[6] = uStack_60;
        puVar4[7] = uStack_5c;
        puVar4[8] = uStack_58;
        bVar19 = local_a0 != 0x80000006;
        local_a0 = uVar9;
        if (bVar19) {
          FUN_015e7b58(&local_d0);
        }
        DataMemoryBarrier(0xb);
        do {
          iVar17 = *piVar5;
          bVar19 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar19);
        *piVar5 = iVar17 + -1;
        if (iVar17 == 1) {
          DataMemoryBarrier(0xb);
          FUN_015fa3b4(piVar5,iVar6);
        }
      }
      if (local_a0 != 0x80000006) {
        local_cc = *puVar4;
        local_c8 = puVar4[1];
        uStack_c4 = puVar4[2];
        uStack_c0 = puVar4[3];
        local_bc = puVar4[4];
        local_b8 = puVar4[5];
        uStack_b4 = puVar4[6];
        uStack_b0 = puVar4[7];
        uStack_ac = puVar4[8];
        local_d0 = local_a0;
        FUN_015ef9f0(iVar1,&local_d0);
      }
    }
LAB_015ee390:
    FUN_00a97e8c(uVar7,uVar12);
LAB_015ee500:
    uVar8 = 2;
  }
  else {
LAB_015ee144:
    FUN_00a97e8c(local_cc,uVar12);
    uVar7 = param_3[1];
    uVar12 = param_3[2];
    uVar9 = param_3[3];
    uVar13 = param_3[4];
    param_1[1] = *param_3;
    param_1[2] = uVar7;
    param_1[3] = uVar12;
    param_1[4] = uVar9;
    param_1[5] = uVar13;
    uVar7 = param_3[6];
    uVar12 = param_3[7];
    uVar9 = param_3[8];
    uVar13 = param_3[9];
    param_1[6] = param_3[5];
    param_1[7] = uVar7;
    param_1[8] = uVar12;
    param_1[9] = uVar9;
    param_1[10] = uVar13;
  }
  *param_1 = uVar8;
  return;
}

