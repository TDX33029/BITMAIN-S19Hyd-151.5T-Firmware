// FUN_01798d68 @ 01798d68 size=704 calls_out=1 calls_in=2
// strings: 

void FUN_01798d68(int param_1,undefined4 *param_2,int *param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int local_3c;
  int local_38 [5];
  
  uVar2 = DAT_018ddaf8;
  puVar11 = (uint *)*param_2;
  iVar16 = *(int *)(param_1 + 8);
  local_38[3] = DAT_018ddaf8;
  iVar3 = param_2[1] - (int)puVar11;
  iVar7 = *(int *)(param_1 + 4) + iVar16 * 0x10;
  uVar12 = (iVar3 >> 3) + 1;
  iVar10 = *(int *)(param_1 + 4);
  if (iVar16 != 0) {
    iVar10 = iVar7;
  }
  if ((uint)(*(int *)(param_1 + 0xc) - iVar16) < uVar12) {
    uVar4 = 0xffffffba;
    iVar3 = iVar7;
  }
  else {
    local_3c = param_2[3] - param_2[2];
    local_38[0] = *param_3;
    local_38[1] = param_3[1];
    local_38[2] = param_3[2];
    if (iVar3 != 0) {
      uVar9 = 0;
      uVar14 = param_2[10];
      iVar7 = 0;
      iVar13 = iVar10 + 0xc;
      do {
        uVar5 = (uint)(ushort)puVar11[1];
        uVar1 = *(ushort *)((int)puVar11 + 6);
        *(uint *)(iVar10 + 4 + uVar9 * 0x10) = uVar5;
        *(uint *)(iVar10 + 8 + uVar9 * 0x10) = uVar1 + 3;
        *(undefined4 *)(iVar13 + uVar9 * 0x10) = 0;
        if (uVar14 == uVar9) {
          if (param_2[9] != 1) {
            if (param_2[9] == 2) {
              *(undefined1 **)(iVar10 + 8 + uVar14 * 0x10) = &DAT_00010003 + uVar1;
            }
            goto LAB_01798e60;
          }
          uVar6 = uVar5 + 0x10000;
          *(uint *)(iVar10 + 4 + uVar14 * 0x10) = uVar6;
          uVar8 = *puVar11;
          uVar5 = (uint)(uVar5 == 0);
          uVar17 = uVar8 - 1;
          if (2 < uVar17) goto LAB_01798f84;
          *(uint *)(iVar13 + uVar14 * 0x10) = uVar8;
          *(int *)(iVar10 + uVar14 * 0x10) = local_38[uVar17];
LAB_01799000:
          uVar17 = uVar17 + uVar5;
          if (uVar17 != 0) {
            if (uVar17 != 3) {
              iVar15 = uVar17 * 4;
              goto LAB_01798e9c;
            }
            iVar15 = local_38[0] + -1;
            local_38[2] = local_38[1];
            goto LAB_01798eb4;
          }
        }
        else {
LAB_01798e60:
          uVar8 = *puVar11;
          uVar17 = uVar8 - 1;
          uVar6 = uVar5;
          if (2 < uVar17) {
            uVar5 = (uint)(uVar5 == 0);
LAB_01798f84:
            *(uint *)(iVar10 + uVar9 * 0x10) = uVar8 - 3;
            if (uVar8 < 4) goto LAB_01799000;
            local_38[2] = local_38[1];
            local_38[1] = local_38[0];
            local_38[0] = uVar8 - 3;
            goto LAB_01798ec0;
          }
          *(uint *)(iVar13 + uVar9 * 0x10) = uVar8;
          if (uVar5 == 0) {
            if (uVar8 != 3) {
              iVar15 = uVar8 * 4;
              *(int *)(iVar10 + uVar9 * 0x10) = local_38[uVar8];
              uVar17 = uVar8;
              goto LAB_01798e9c;
            }
            iVar15 = local_38[0] + -1;
            *(int *)(iVar10 + uVar9 * 0x10) = iVar15;
          }
          else {
            iVar15 = uVar17 * 4;
            *(int *)(iVar10 + uVar9 * 0x10) = local_38[uVar17];
            if (uVar17 == 0) goto LAB_01798ec0;
LAB_01798e9c:
            iVar15 = *(int *)((int)local_38 + iVar15);
            if (uVar17 == 1) goto LAB_01798eb4;
          }
          local_38[2] = local_38[1];
LAB_01798eb4:
          local_38[1] = local_38[0];
          local_38[0] = iVar15;
        }
LAB_01798ec0:
        uVar9 = uVar9 + 1;
        iVar7 = iVar7 + uVar6;
        puVar11 = puVar11 + 2;
      } while (uVar9 < (uint)(iVar3 >> 3));
      local_3c = local_3c - iVar7;
    }
    iVar7 = iVar10 + iVar3 * 2;
    *(int *)(iVar7 + 4) = local_3c;
    uVar4 = 0;
    *(undefined4 *)(iVar7 + 8) = 0;
    *(undefined4 *)(iVar10 + iVar3 * 2) = 0;
    *(uint *)(param_1 + 8) = iVar16 + uVar12;
  }
  if ((uVar2 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar4,iVar3,uVar2 ^ DAT_018ddaf8,0);
  }
  return;
}

