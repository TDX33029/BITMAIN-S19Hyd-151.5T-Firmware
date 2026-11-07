// FUN_01b8586c @ 01b8586c size=520 calls_out=2 calls_in=2
// strings: 

void FUN_01b8586c(int param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  int local_38 [4];
  undefined1 auStack_28 [4];
  
  piVar13 = (int *)*param_2;
  iVar14 = *(int *)(param_1 + 8);
  local_38[3] = DAT_01d53560;
  iVar8 = param_2[1] - (int)piVar13;
  piVar15 = *(int **)(param_1 + 4);
  if (iVar14 != 0) {
    piVar15 = *(int **)(param_1 + 4) + iVar14 * 4;
  }
  uVar9 = (iVar8 >> 3) + 1;
  if (uVar9 <= (uint)(*(int *)(param_1 + 0xc) - iVar14)) {
    iVar5 = param_2[3];
    iVar10 = param_2[2];
    local_38[0] = *param_3;
    local_38[1] = param_3[1];
    local_38[2] = param_3[2];
    iVar11 = 0;
    piVar12 = piVar15;
    for (iVar16 = 0; iVar16 != iVar8 >> 3; iVar16 = iVar16 + 1) {
      uVar2 = *(ushort *)((int)piVar13 + 6);
      uVar7 = (uint)*(ushort *)(piVar13 + 1);
      piVar12[1] = uVar7;
      piVar12[2] = uVar2 + 3;
      piVar12[3] = 0;
      if (param_2[10] == iVar16) {
        if (param_2[9] == 1) {
          piVar12[1] = uVar7 + 0x10000;
        }
        else if (param_2[9] == 2) {
          piVar12[2] = uVar2 + 0x10003;
        }
      }
      iVar6 = *piVar13;
      if (iVar6 - 1U < 3) {
        piVar12[3] = iVar6;
        if (piVar12[1] == 0) {
          if (iVar6 == 3) {
            iVar3 = local_38[0] + -1;
            goto LAB_01b85a28;
          }
          puVar4 = auStack_28 + iVar6 * 4;
        }
        else {
          puVar4 = auStack_28 + (iVar6 - 1U) * 4;
        }
        iVar3 = *(int *)(puVar4 + -0x10);
      }
      else {
        iVar3 = iVar6 + -3;
      }
LAB_01b85a28:
      *piVar12 = iVar3;
      FUN_01b857dc(local_38,iVar6,uVar7 == 0);
      piVar1 = piVar12 + 1;
      piVar12 = piVar12 + 4;
      piVar13 = piVar13 + 2;
      iVar11 = iVar11 + *piVar1;
    }
    *(int *)((int)piVar15 + iVar8 * 2 + 4) = (iVar5 - iVar10) - iVar11;
    *(undefined4 *)((int)piVar15 + iVar8 * 2 + 8) = 0;
    *(undefined4 *)((int)piVar15 + iVar8 * 2) = 0;
    *(uint *)(param_1 + 8) = iVar14 + uVar9;
  }
  if (local_38[3] != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return;
}

