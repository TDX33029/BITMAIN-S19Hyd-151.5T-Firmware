// FUN_01040f00 @ 01040f00 size=1152 calls_out=2 calls_in=0
// strings: 

/* WARNING: Removing unreachable block (ram,0x01041170) */
/* WARNING: Removing unreachable block (ram,0x01041184) */
/* WARNING: Removing unreachable block (ram,0x01041188) */

undefined4 FUN_01040f00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  
  if (*(int *)(param_1 + 8) != 0) {
    iVar15 = *(int *)(param_1 + 4);
    iVar3 = *(int *)(param_1 + 8) * 0x4c + iVar15;
    iVar7 = *(int *)(param_1 + 0x20);
    iVar11 = *(int *)(param_1 + 0x1c);
    iVar12 = iVar7 * 0xe8 + iVar11;
    iVar16 = *(int *)(param_1 + 0x10);
    iVar4 = *(int *)(param_1 + 0x14);
    iVar8 = *(int *)(param_1 + 0x28);
    iVar13 = iVar4 * 0xe8 + iVar16;
    iVar14 = *(int *)(param_1 + 0x2c);
    if (iVar4 == 0) {
      do {
        if (*(short *)(iVar15 + 0x48) == 0x1d) {
          local_40 = 1;
          local_3c = iVar16;
          local_38 = iVar13;
          local_34 = iVar11;
          local_30 = iVar12;
          local_2c = iVar8;
          local_28 = iVar14 * 0xe8 + iVar8;
          iVar4 = FUN_0104b988(&local_40,(int)register0x00000054 + -0x24,iVar15);
          if (iVar4 != 0) {
            return 1;
          }
        }
        else {
          iVar4 = iVar16;
          iVar9 = 0;
          if (*(short *)(iVar15 + 0x48) == 3) {
            while (iVar9 != 0) {
              iVar10 = FUN_0103cf5c(iVar4,iVar15);
              iVar9 = iVar9 + -0xe8;
              iVar4 = iVar4 + 0xe8;
              if (iVar10 != 0) {
                return 1;
              }
            }
            iVar4 = iVar11;
            iVar9 = iVar7 * 0xe8;
            while (iVar9 != 0) {
              iVar10 = FUN_0103cf5c(iVar4,iVar15);
              iVar9 = iVar9 + -0xe8;
              iVar4 = iVar4 + 0xe8;
              if (iVar10 != 0) {
                return 1;
              }
            }
            iVar4 = iVar14 * 0xe8;
            iVar9 = iVar8;
            while (iVar4 != 0) {
              iVar10 = FUN_0103cf5c(iVar9,iVar15);
              iVar4 = iVar4 + -0xe8;
              iVar9 = iVar9 + 0xe8;
              if (iVar10 != 0) {
                return 1;
              }
            }
          }
          else {
            if (iVar7 * 0xe8 != 0) {
              uVar6 = 0x10;
              if (1 < *(ushort *)(iVar11 + 0x48)) {
                uVar6 = *(ushort *)(iVar11 + 0x48) - 2;
              }
                    /* WARNING: Could not recover jumptable at 0x01041328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar2 = (*(code *)(&DAT_0104132c + *(int *)(&DAT_0104132c + (uint)uVar6 * 4)))
                                (iVar11,0);
              return uVar2;
            }
            if (iVar14 != 0) {
              uVar5 = 0x10;
              if (1 < *(ushort *)(iVar8 + 0x48)) {
                uVar5 = *(ushort *)(iVar8 + 0x48) - 2;
              }
                    /* WARNING: Could not recover jumptable at 0x010414fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar2 = (*(code *)(&DAT_01041500 + *(int *)(&DAT_01041500 + (uVar5 & 0xffff) * 4)))
                                (iVar8,uVar5,0);
              return uVar2;
            }
          }
        }
        iVar15 = iVar15 + 0x4c;
      } while (iVar15 != iVar3);
    }
    else {
      do {
        if (*(short *)(iVar15 + 0x48) == 0x1d) {
          local_40 = 1;
          local_3c = iVar16;
          local_38 = iVar13;
          local_34 = iVar11;
          local_30 = iVar12;
          local_2c = iVar8;
          local_28 = iVar14 * 0xe8 + iVar8;
          iVar9 = FUN_0104b988(&local_40,(int)register0x00000054 + -0x24,iVar15);
          if (iVar9 != 0) {
            return 1;
          }
        }
        else {
          if (*(short *)(iVar15 + 0x48) != 3) {
            return 1;
          }
          iVar9 = iVar16;
          iVar10 = iVar4 * 0xe8;
          while (iVar10 != 0) {
            iVar1 = FUN_0103cf5c(iVar9,iVar15);
            iVar10 = iVar10 + -0xe8;
            iVar9 = iVar9 + 0xe8;
            if (iVar1 != 0) {
              return 1;
            }
          }
          iVar9 = iVar11;
          iVar10 = iVar7 * 0xe8;
          while (iVar10 != 0) {
            iVar1 = FUN_0103cf5c(iVar9,iVar15);
            iVar10 = iVar10 + -0xe8;
            iVar9 = iVar9 + 0xe8;
            if (iVar1 != 0) {
              return 1;
            }
          }
          iVar9 = iVar8;
          iVar10 = iVar14 * 0xe8;
          while (iVar10 != 0) {
            iVar1 = FUN_0103cf5c(iVar9,iVar15);
            iVar10 = iVar10 + -0xe8;
            iVar9 = iVar9 + 0xe8;
            if (iVar1 != 0) {
              return 1;
            }
          }
        }
        iVar15 = iVar15 + 0x4c;
      } while (iVar15 != iVar3);
    }
  }
  return 0;
}

