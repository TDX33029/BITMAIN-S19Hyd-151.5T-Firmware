// FUN_015ea8f8 @ 015ea8f8 size=864 calls_out=9 calls_in=5
// strings: 

void FUN_015ea8f8(int param_1)

{
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  undefined4 extraout_r1;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined8 uVar17;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  undefined1 local_28;
  
  *(undefined1 *)(param_1 + 0x44) = 1;
  FUN_01656cb0(&local_3c);
  iVar3 = local_38;
  if (local_3c == 1) {
    local_28 = (undefined1)local_34;
    local_2c = local_38;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_2c,&DAT_01cfd8a8,&DAT_01cfd9e0);
  }
  uVar14 = local_34 & 0xff;
  piVar9 = (int *)(local_38 + 0x2c);
  if (*piVar9 != -0x80000000) {
    uVar10 = *(uint *)(local_38 + 0x28);
    if (*(uint *)(local_38 + 0x14) < uVar10) {
      iVar4 = local_38 + 8;
      do {
        uVar17 = FUN_015ef9a8(piVar9);
        iVar11 = (int)((ulonglong)uVar17 >> 0x20);
        piVar5 = (int *)uVar17;
        if (piVar5 == (int *)0x0) break;
        uVar16 = *(uint *)(iVar11 + 8);
        uVar6 = uVar16;
        if (uVar16 < 9) {
          uVar6 = 8;
        }
        iVar12 = (int)piVar5 + (uVar6 - 1 & 0xfffffff8) + 8;
        uVar17 = FUN_015ebeb0(iVar12);
        uVar6 = (uint)((ulonglong)uVar17 >> 0x20);
        iVar8 = (int)uVar17;
        if ((uVar6 & 0xff) == 2) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01cfd9b0);
        }
        uVar13 = *(undefined4 *)(iVar8 + 0x10);
        uVar15 = *(undefined4 *)(iVar8 + 0x14);
        uVar1 = *(undefined1 *)(iVar8 + 0x18);
        uVar7 = *(uint *)(iVar8 + 8);
        *(undefined4 *)(iVar8 + 8) = 0;
        *(undefined4 *)(iVar8 + 0xc) = 0;
        if ((uVar7 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01cfd9c0);
        }
        FUN_00a97e8c(iVar8,uVar6);
        (**(code **)(iVar11 + 0xc))(iVar12 + (uVar16 - 1 & 0xffffffd8) + 0x28);
        FUN_015efa68(iVar4,extraout_r1,uVar13,uVar15,uVar1);
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *piVar5;
          bVar2 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar2);
        *piVar5 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          FUN_015fa78c(piVar5,iVar11);
        }
      } while (*(uint *)(iVar3 + 0x14) < uVar10);
      if (*piVar9 == -0x80000000) goto LAB_015eab30;
    }
    FUN_015ef948(&local_3c,piVar9);
    if (local_3c != local_38) {
      piVar9 = (int *)(local_3c + 4);
      uVar10 = (uint)(local_38 - local_3c) >> 3;
      do {
        uVar6 = *(uint *)(*piVar9 + 8);
        uVar16 = uVar6 - 1;
        if (uVar6 < 9) {
          uVar6 = 8;
        }
        (**(code **)(*piVar9 + 0xc))
                  (piVar9[-1] + (uVar6 - 1 & 0xfffffff8) + (uVar16 & 0xffffffd8) + 0x30);
        piVar9 = piVar9 + 2;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (local_34 != local_30) {
      piVar9 = (int *)(local_34 + 4);
      uVar10 = local_30 - local_34 >> 3;
      do {
        uVar6 = *(uint *)(*piVar9 + 8);
        uVar16 = uVar6 - 1;
        if (uVar6 < 9) {
          uVar6 = 8;
        }
        (**(code **)(*piVar9 + 0xc))
                  (piVar9[-1] + (uVar6 - 1 & 0xfffffff8) + (uVar16 & 0xffffffd8) + 0x30);
        piVar9 = piVar9 + 2;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
LAB_015eab30:
  FUN_015ef948(&local_3c,iVar3 + 0x18);
  if (local_3c != local_38) {
    piVar9 = (int *)(local_3c + 4);
    uVar10 = (uint)(local_38 - local_3c) >> 3;
    do {
      uVar6 = *(uint *)(*piVar9 + 8);
      uVar16 = uVar6 - 1;
      if (uVar6 < 9) {
        uVar6 = 8;
      }
      (**(code **)(*piVar9 + 0xc))
                (piVar9[-1] + (uVar6 - 1 & 0xfffffff8) + (uVar16 & 0xffffffd8) + 0x30);
      piVar9 = piVar9 + 2;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if (local_34 != local_30) {
    piVar9 = (int *)(local_34 + 4);
    uVar10 = local_30 - local_34 >> 3;
    do {
      uVar6 = *(uint *)(*piVar9 + 8);
      uVar16 = uVar6 - 1;
      if (uVar6 < 9) {
        uVar6 = 8;
      }
      (**(code **)(*piVar9 + 0xc))
                (piVar9[-1] + (uVar6 - 1 & 0xfffffff8) + (uVar16 & 0xffffffd8) + 0x30);
      piVar9 = piVar9 + 2;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  FUN_00a97e8c(iVar3,uVar14);
  return;
}

