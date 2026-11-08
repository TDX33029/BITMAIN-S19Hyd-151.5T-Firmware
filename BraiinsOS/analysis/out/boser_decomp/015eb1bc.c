// FUN_015eb1bc @ 015eb1bc size=892 calls_out=9 calls_in=4
// strings: 

void FUN_015eb1bc(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined8 uVar20;
  int local_70;
  int local_6c;
  uint local_68;
  uint local_64;
  int local_60;
  undefined1 local_5c;
  int local_58 [13];
  
  *(undefined1 *)(param_1 + 0x44) = 1;
  FUN_01656cb0(&local_70);
  iVar2 = local_6c;
  if (local_70 == 1) {
    local_5c = (undefined1)local_68;
    local_60 = local_6c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_60,&DAT_01cfd898,&DAT_01cfd9e0);
  }
  uVar17 = local_68 & 0xff;
  piVar8 = (int *)(local_6c + 0x2c);
  if (*piVar8 != -0x80000000) {
    uVar9 = *(uint *)(local_6c + 0x28);
    if (*(uint *)(local_6c + 0x14) < uVar9) {
      iVar3 = local_6c + 8;
      puVar4 = (undefined4 *)((uint)local_58 | 4);
      do {
        uVar20 = FUN_015ef9a8(piVar8);
        iVar10 = (int)((ulonglong)uVar20 >> 0x20);
        piVar5 = (int *)uVar20;
        if (piVar5 == (int *)0x0) break;
        uVar19 = *(uint *)(iVar10 + 8);
        uVar6 = uVar19;
        if (uVar19 < 9) {
          uVar6 = 8;
        }
        iVar12 = (int)piVar5 + (uVar6 - 1 & 0xfffffff8) + 8;
        uVar20 = FUN_015ec950(iVar12);
        uVar6 = (uint)((ulonglong)uVar20 >> 0x20);
        iVar7 = (int)uVar20;
        if ((uVar6 & 0xff) == 2) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01cfd9b0);
        }
        iVar18 = *(int *)(iVar7 + 8);
        *(undefined4 *)(iVar7 + 8) = 5;
        if (iVar18 == 5) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01cfd9c0);
        }
        uVar11 = *(undefined4 *)(iVar7 + 0x10);
        uVar13 = *(undefined4 *)(iVar7 + 0x14);
        uVar14 = *(undefined4 *)(iVar7 + 0x18);
        uVar15 = *(undefined4 *)(iVar7 + 0x1c);
        *puVar4 = *(undefined4 *)(iVar7 + 0xc);
        puVar4[1] = uVar11;
        puVar4[2] = uVar13;
        puVar4[3] = uVar14;
        puVar4[4] = uVar15;
        uVar11 = *(undefined4 *)(iVar7 + 0x24);
        uVar13 = *(undefined4 *)(iVar7 + 0x28);
        uVar14 = *(undefined4 *)(iVar7 + 0x2c);
        uVar15 = *(undefined4 *)(iVar7 + 0x30);
        uVar16 = *(undefined4 *)(iVar7 + 0x34);
        puVar4[5] = *(undefined4 *)(iVar7 + 0x20);
        puVar4[6] = uVar11;
        puVar4[7] = uVar13;
        puVar4[8] = uVar14;
        puVar4[9] = uVar15;
        puVar4[10] = uVar16;
        FUN_00a97e8c(iVar7,uVar6);
        local_58[0] = iVar18;
        (**(code **)(iVar10 + 0xc))(iVar12 + (uVar19 - 1 & 0xffffffc0) + 0x40);
        FUN_015efc20(iVar3,local_58);
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar5;
          bVar1 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar1);
        *piVar5 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_015fac78(piVar5,iVar10);
        }
      } while (*(uint *)(iVar2 + 0x14) < uVar9);
      if (*piVar8 == -0x80000000) goto LAB_015eb410;
    }
    FUN_015ef948(&local_70,piVar8);
    if (local_70 != local_6c) {
      piVar8 = (int *)(local_70 + 4);
      uVar9 = (uint)(local_6c - local_70) >> 3;
      do {
        uVar6 = *(uint *)(*piVar8 + 8);
        uVar19 = uVar6 - 1;
        if (uVar6 < 9) {
          uVar6 = 8;
        }
        (**(code **)(*piVar8 + 0xc))
                  (piVar8[-1] + (uVar6 - 1 & 0xfffffff8) + (uVar19 & 0xffffffc0) + 0x48);
        piVar8 = piVar8 + 2;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (local_68 != local_64) {
      piVar8 = (int *)(local_68 + 4);
      uVar9 = local_64 - local_68 >> 3;
      do {
        uVar6 = *(uint *)(*piVar8 + 8);
        uVar19 = uVar6 - 1;
        if (uVar6 < 9) {
          uVar6 = 8;
        }
        (**(code **)(*piVar8 + 0xc))
                  (piVar8[-1] + (uVar6 - 1 & 0xfffffff8) + (uVar19 & 0xffffffc0) + 0x48);
        piVar8 = piVar8 + 2;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
LAB_015eb410:
  FUN_015ef948(&local_70,iVar2 + 0x18);
  if (local_70 != local_6c) {
    piVar8 = (int *)(local_70 + 4);
    uVar9 = (uint)(local_6c - local_70) >> 3;
    do {
      uVar6 = *(uint *)(*piVar8 + 8);
      uVar19 = uVar6 - 1;
      if (uVar6 < 9) {
        uVar6 = 8;
      }
      (**(code **)(*piVar8 + 0xc))
                (piVar8[-1] + (uVar6 - 1 & 0xfffffff8) + (uVar19 & 0xffffffc0) + 0x48);
      piVar8 = piVar8 + 2;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (local_68 != local_64) {
    piVar8 = (int *)(local_68 + 4);
    uVar9 = local_64 - local_68 >> 3;
    do {
      uVar6 = *(uint *)(*piVar8 + 8);
      uVar19 = uVar6 - 1;
      if (uVar6 < 9) {
        uVar6 = 8;
      }
      (**(code **)(*piVar8 + 0xc))
                (piVar8[-1] + (uVar6 - 1 & 0xfffffff8) + (uVar19 & 0xffffffc0) + 0x48);
      piVar8 = piVar8 + 2;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_00a97e8c(iVar2,uVar17);
  return;
}

