// FUN_015ea258 @ 015ea258 size=884 calls_out=9 calls_in=5
// strings: 

void FUN_015ea258(int param_1)

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
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined8 uVar18;
  int local_60;
  int local_5c;
  uint local_58;
  uint local_54;
  int local_50;
  undefined1 local_4c;
  int local_48 [9];
  
  *(undefined1 *)(param_1 + 0x44) = 1;
  FUN_01656cb0(&local_60);
  iVar2 = local_5c;
  if (local_60 == 1) {
    local_4c = (undefined1)local_58;
    local_50 = local_5c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_50,&DAT_01cfd8b8,&DAT_01cfd9e0);
  }
  uVar15 = local_58 & 0xff;
  piVar8 = (int *)(local_5c + 0x2c);
  if (*piVar8 != -0x80000000) {
    uVar9 = *(uint *)(local_5c + 0x28);
    if (*(uint *)(local_5c + 0x14) < uVar9) {
      iVar3 = local_5c + 8;
      puVar4 = (undefined4 *)((uint)local_48 | 4);
      do {
        uVar18 = FUN_015ef9a8(piVar8);
        iVar10 = (int)((ulonglong)uVar18 >> 0x20);
        piVar5 = (int *)uVar18;
        if (piVar5 == (int *)0x0) break;
        uVar17 = *(uint *)(iVar10 + 8);
        uVar6 = uVar17;
        if (uVar17 < 9) {
          uVar6 = 8;
        }
        iVar12 = (int)piVar5 + (uVar6 - 1 & 0xfffffff8) + 8;
        uVar18 = FUN_015ebd88(iVar12);
        uVar6 = (uint)((ulonglong)uVar18 >> 0x20);
        iVar7 = (int)uVar18;
        if ((uVar6 & 0xff) == 2) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01cfd9b0);
        }
        iVar16 = *(int *)(iVar7 + 8);
        *(undefined4 *)(iVar7 + 8) = 0;
        if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01cfd9c0);
        }
        uVar11 = *(undefined4 *)(iVar7 + 0x10);
        uVar13 = *(undefined4 *)(iVar7 + 0x14);
        *puVar4 = *(undefined4 *)(iVar7 + 0xc);
        puVar4[1] = uVar11;
        puVar4[2] = uVar13;
        uVar11 = *(undefined4 *)(iVar7 + 0x1c);
        uVar13 = *(undefined4 *)(iVar7 + 0x20);
        uVar14 = *(undefined4 *)(iVar7 + 0x24);
        puVar4[3] = *(undefined4 *)(iVar7 + 0x18);
        puVar4[4] = uVar11;
        puVar4[5] = uVar13;
        puVar4[6] = uVar14;
        FUN_00a97e8c(iVar7,uVar6);
        local_48[0] = iVar16;
        (**(code **)(iVar10 + 0xc))(iVar12 + (uVar17 - 1 & 0xffffffd0) + 0x30);
        FUN_015efc98(iVar3,local_48);
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar5;
          bVar1 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar1);
        *piVar5 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_015fa534(piVar5,iVar10);
        }
      } while (*(uint *)(iVar2 + 0x14) < uVar9);
      if (*piVar8 == -0x80000000) goto LAB_015ea4a4;
    }
    FUN_015ef948(&local_60,piVar8);
    if (local_60 != local_5c) {
      piVar8 = (int *)(local_60 + 4);
      uVar9 = (uint)(local_5c - local_60) >> 3;
      do {
        uVar6 = *(uint *)(*piVar8 + 8);
        uVar17 = uVar6 - 1;
        if (uVar6 < 9) {
          uVar6 = 8;
        }
        (**(code **)(*piVar8 + 0xc))
                  (piVar8[-1] + (uVar6 - 1 & 0xfffffff8) + (uVar17 & 0xffffffd0) + 0x38);
        piVar8 = piVar8 + 2;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (local_58 != local_54) {
      piVar8 = (int *)(local_58 + 4);
      uVar9 = local_54 - local_58 >> 3;
      do {
        uVar6 = *(uint *)(*piVar8 + 8);
        uVar17 = uVar6 - 1;
        if (uVar6 < 9) {
          uVar6 = 8;
        }
        (**(code **)(*piVar8 + 0xc))
                  (piVar8[-1] + (uVar6 - 1 & 0xfffffff8) + (uVar17 & 0xffffffd0) + 0x38);
        piVar8 = piVar8 + 2;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
LAB_015ea4a4:
  FUN_015ef948(&local_60,iVar2 + 0x18);
  if (local_60 != local_5c) {
    piVar8 = (int *)(local_60 + 4);
    uVar9 = (uint)(local_5c - local_60) >> 3;
    do {
      uVar6 = *(uint *)(*piVar8 + 8);
      uVar17 = uVar6 - 1;
      if (uVar6 < 9) {
        uVar6 = 8;
      }
      (**(code **)(*piVar8 + 0xc))
                (piVar8[-1] + (uVar6 - 1 & 0xfffffff8) + (uVar17 & 0xffffffd0) + 0x38);
      piVar8 = piVar8 + 2;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (local_58 != local_54) {
    piVar8 = (int *)(local_58 + 4);
    uVar9 = local_54 - local_58 >> 3;
    do {
      uVar6 = *(uint *)(*piVar8 + 8);
      uVar17 = uVar6 - 1;
      if (uVar6 < 9) {
        uVar6 = 8;
      }
      (**(code **)(*piVar8 + 0xc))
                (piVar8[-1] + (uVar6 - 1 & 0xfffffff8) + (uVar17 & 0xffffffd0) + 0x38);
      piVar8 = piVar8 + 2;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_00a97e8c(iVar2,uVar15);
  return;
}

