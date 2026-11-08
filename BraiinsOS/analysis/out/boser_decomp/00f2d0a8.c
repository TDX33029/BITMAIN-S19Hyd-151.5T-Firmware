// FUN_00f2d0a8 @ 00f2d0a8 size=632 calls_out=9 calls_in=2
// strings: Out of bounds access

void FUN_00f2d0a8(int *param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int local_48;
  int *local_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int local_34;
  undefined1 local_30;
  int local_2c;
  undefined1 local_28;
  
  local_48 = param_1[2];
  piVar7 = (int *)param_1[3];
  iStack_40 = param_1[4];
  iStack_3c = param_1[5];
  param_1[2] = -0x7fffffff;
  local_44 = piVar7;
  if (local_48 == -0x80000000) {
    piVar5 = param_1 + 1;
    if (*param_1 != 0) {
      piVar5 = (int *)param_1[1];
    }
    FUN_01656cb0(&local_38,*piVar5 + 8);
    if (local_38 == 1) {
      local_28 = local_30;
      local_2c = local_34;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_2c,&DAT_01c19374,&DAT_01c23498);
    }
    puVar2 = (uint *)(local_34 + 0x2c);
    uVar9 = *puVar2;
    if (uVar9 == 0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c19e24);
    }
    uVar11 = *(uint *)(local_34 + 0x38);
    if (uVar11 == 0) {
      uVar8 = 0;
      uVar9 = 0;
LAB_00f2d1c0:
      if (uVar9 < uVar11) {
        do {
          if (*(uint *)(local_34 + 0x38) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("Out of bounds access",0x14,&DAT_01d20e0c);
          }
          iVar10 = *(int *)(local_34 + 0x34);
          if (*(uint *)(local_34 + 0x2c) <= uVar9 + iVar10) {
            iVar10 = iVar10 - *(uint *)(local_34 + 0x2c);
          }
          piVar5 = (int *)(*(int *)(local_34 + 0x30) + (uVar9 + iVar10) * 8);
          iVar10 = piVar5[1];
          uVar3 = *(uint *)(iVar10 + 8);
          uVar6 = uVar3 - 1;
          if (uVar3 < 5) {
            uVar3 = 4;
          }
          piVar5 = (int *)(**(code **)(iVar10 + 0x14))
                                    (*piVar5 + (uVar3 - 1 & 0xfffffff8) + (uVar6 & 0xffffffe4) +
                                     0x24);
          if (piVar5 != piVar7 + 9) {
            FUN_009d2870(puVar2,uVar8,uVar9);
            uVar8 = uVar8 + 1;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar11);
      }
      if (uVar9 != uVar8) {
        FUN_009d27e4(puVar2,uVar8);
      }
    }
    else {
      iVar12 = *(int *)(local_34 + 0x34);
      uVar8 = 0;
      iVar10 = *(int *)(local_34 + 0x30) + iVar12 * 8 + 4;
      do {
        uVar3 = uVar9;
        if (iVar12 + uVar8 < uVar9) {
          uVar3 = 0;
        }
        piVar5 = (int *)(iVar10 + uVar3 * -8);
        iVar4 = *piVar5;
        uVar6 = *(uint *)(iVar4 + 8);
        uVar3 = uVar6 - 1;
        if (uVar6 < 5) {
          uVar6 = 4;
        }
        piVar5 = (int *)(**(code **)(iVar4 + 0x14))
                                  (piVar5[-1] + (uVar6 - 1 & 0xfffffff8) + (uVar3 & 0xffffffe4) +
                                   0x24);
        if (piVar5 == piVar7 + 9) {
          uVar9 = uVar8 + 1;
          goto LAB_00f2d1c0;
        }
        uVar8 = uVar8 + 1;
        iVar10 = iVar10 + 8;
      } while (uVar11 != uVar8);
    }
    FUN_00f2be94(local_34,local_30);
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *piVar7;
      bVar1 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar1);
    *piVar7 = iVar10 + -1;
    if (iVar10 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a970d8(piVar7,&DAT_01c19dcc);
    }
  }
  if (-0x7fffffff < local_48) {
    FUN_00f2d3d4(&local_48);
  }
  return;
}

