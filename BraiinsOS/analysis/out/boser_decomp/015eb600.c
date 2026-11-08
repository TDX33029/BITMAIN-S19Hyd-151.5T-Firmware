// FUN_015eb600 @ 015eb600 size=880 calls_out=9 calls_in=3
// strings: 

void FUN_015eb600(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  int local_58;
  int local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  undefined1 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  *(undefined1 *)(param_1 + 0x44) = 1;
  FUN_01656cb0(&local_58);
  iVar2 = local_54;
  if (local_58 == 1) {
    local_44 = (undefined1)local_50;
    local_48 = local_54;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_48,&DAT_01cfd8d8,&DAT_01cfd9e0);
  }
  uVar3 = local_50 & 0xff;
  piVar8 = (int *)(local_54 + 0x2c);
  if (*piVar8 != -0x80000000) {
    uVar9 = *(uint *)(local_54 + 0x28);
    if (*(uint *)(local_54 + 0x14) < uVar9) {
      iVar4 = local_54 + 8;
      do {
        uVar14 = FUN_015ef9a8(piVar8);
        iVar10 = (int)((ulonglong)uVar14 >> 0x20);
        piVar5 = (int *)uVar14;
        if (piVar5 == (int *)0x0) break;
        uVar13 = *(uint *)(iVar10 + 8);
        uVar6 = uVar13;
        if (uVar13 < 5) {
          uVar6 = 4;
        }
        iVar11 = (int)piVar5 + (uVar6 - 1 & 0xfffffff8) + 8;
        uVar14 = FUN_015e96cc(iVar11);
        uVar6 = (uint)((ulonglong)uVar14 >> 0x20);
        iVar7 = (int)uVar14;
        if ((uVar6 & 0xff) == 2) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01cfd9b0);
        }
        iVar12 = *(int *)(iVar7 + 8);
        *(undefined4 *)(iVar7 + 8) = 5;
        if (iVar12 == 5) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01cfd9c0);
        }
        local_3c = *(undefined4 *)(iVar7 + 0xc);
        uStack_38 = *(undefined4 *)(iVar7 + 0x10);
        uStack_34 = *(undefined4 *)(iVar7 + 0x14);
        uStack_30 = *(undefined4 *)(iVar7 + 0x18);
        uStack_2c = *(undefined4 *)(iVar7 + 0x1c);
        uStack_28 = *(undefined4 *)(iVar7 + 0x20);
        FUN_00a97e8c(iVar7,uVar6);
        local_40 = iVar12;
        (**(code **)(iVar10 + 0xc))(iVar11 + (uVar13 - 1 & 0xffffffd8) + 0x28);
        FUN_015efba4(iVar4,&local_40);
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar5;
          bVar1 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar1);
        *piVar5 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_015fa154(piVar5,iVar10);
        }
      } while (*(uint *)(iVar2 + 0x14) < uVar9);
      if (*piVar8 == -0x80000000) goto LAB_015eb848;
    }
    FUN_015ef948(&local_58,piVar8);
    if (local_58 != local_54) {
      piVar8 = (int *)(local_58 + 4);
      uVar9 = (uint)(local_54 - local_58) >> 3;
      do {
        uVar6 = *(uint *)(*piVar8 + 8);
        uVar13 = uVar6 - 1;
        if (uVar6 < 5) {
          uVar6 = 4;
        }
        (**(code **)(*piVar8 + 0xc))
                  (piVar8[-1] + (uVar6 - 1 & 0xfffffff8) + (uVar13 & 0xffffffd8) + 0x30);
        piVar8 = piVar8 + 2;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (local_50 != local_4c) {
      piVar8 = (int *)(local_50 + 4);
      uVar9 = local_4c - local_50 >> 3;
      do {
        uVar6 = *(uint *)(*piVar8 + 8);
        uVar13 = uVar6 - 1;
        if (uVar6 < 5) {
          uVar6 = 4;
        }
        (**(code **)(*piVar8 + 0xc))
                  (piVar8[-1] + (uVar6 - 1 & 0xfffffff8) + (uVar13 & 0xffffffd8) + 0x30);
        piVar8 = piVar8 + 2;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
LAB_015eb848:
  FUN_015ef948(&local_58,iVar2 + 0x18);
  if (local_58 != local_54) {
    piVar8 = (int *)(local_58 + 4);
    uVar9 = (uint)(local_54 - local_58) >> 3;
    do {
      uVar6 = *(uint *)(*piVar8 + 8);
      uVar13 = uVar6 - 1;
      if (uVar6 < 5) {
        uVar6 = 4;
      }
      (**(code **)(*piVar8 + 0xc))
                (piVar8[-1] + (uVar6 - 1 & 0xfffffff8) + (uVar13 & 0xffffffd8) + 0x30);
      piVar8 = piVar8 + 2;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (local_50 != local_4c) {
    piVar8 = (int *)(local_50 + 4);
    uVar9 = local_4c - local_50 >> 3;
    do {
      uVar6 = *(uint *)(*piVar8 + 8);
      uVar13 = uVar6 - 1;
      if (uVar6 < 5) {
        uVar6 = 4;
      }
      (**(code **)(*piVar8 + 0xc))
                (piVar8[-1] + (uVar6 - 1 & 0xfffffff8) + (uVar13 & 0xffffffd8) + 0x30);
      piVar8 = piVar8 + 2;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_00a97e8c(iVar2,uVar3);
  return;
}

