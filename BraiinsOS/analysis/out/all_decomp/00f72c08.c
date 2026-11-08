// FUN_00f72c08 @ 00f72c08 size=536 calls_out=3 calls_in=1
// strings: 

void FUN_00f72c08(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint extraout_r12;
  uint uVar14;
  int local_44;
  int local_38;
  int local_28;
  
  iVar6 = param_3 * 0xc;
  if (0xaaaaaaa < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4();
  }
  if (iVar6 == 0) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = param_3;
    return;
  }
  uVar1 = thunk_FUN_016d4a50(iVar6);
  if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,iVar6);
  }
  if (param_3 != 0) {
    iVar7 = param_2 + param_3 * 0xc;
    iVar6 = 0;
    uVar10 = param_3;
    uVar14 = extraout_r12;
    do {
      if (param_2 == iVar7) break;
      uVar13 = *(uint *)(param_2 + 8);
      uVar2 = 0;
      if (0xaaaaaaa < uVar13) {
LAB_00f72e00:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar2,uVar14);
      }
      uVar14 = uVar13 * 0xc;
      if (uVar14 == 0) {
        uVar3 = 4;
        uVar5 = 0;
      }
      else {
        local_28 = *(int *)(param_2 + 4);
        uVar3 = thunk_FUN_016d4a50();
        if (uVar3 == 0) {
          uVar2 = 4;
          goto LAB_00f72e00;
        }
        uVar5 = uVar13;
        if (uVar13 != 0) {
          uVar11 = 0;
          uVar12 = 0;
          do {
            if (uVar14 == uVar11) break;
            uVar2 = 0;
            iVar9 = *(int *)(local_28 + 8);
            if (iVar9 < 0) {
LAB_00f72e14:
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(uVar2,local_38);
            }
            uVar2 = *(undefined4 *)(local_28 + 4);
            if (iVar9 == 0) {
              local_38 = 1;
              local_44 = 0;
            }
            else {
              local_38 = thunk_FUN_016d4a50(iVar9);
              if (local_38 == 0) {
                uVar2 = 1;
                local_38 = iVar9;
                goto LAB_00f72e14;
              }
              local_44 = iVar9;
            }
            local_28 = local_28 + 0xc;
            uVar12 = uVar12 + 1;
            FUN_016dd1aa(local_38,uVar2,iVar9);
            piVar4 = (int *)(uVar3 + uVar11);
            *piVar4 = local_44;
            uVar11 = uVar11 + 0xc;
            piVar4[1] = local_38;
            piVar4[2] = iVar9;
          } while (uVar13 != uVar12);
        }
      }
      uVar10 = uVar10 - 1;
      puVar8 = (uint *)(uVar1 + iVar6 * 0xc);
      *puVar8 = uVar5;
      param_2 = param_2 + 0xc;
      puVar8[1] = uVar3;
      puVar8[2] = uVar13;
      iVar6 = iVar6 + 1;
      uVar14 = uVar3;
    } while (uVar10 != 0);
  }
  *param_1 = param_3;
  param_1[1] = uVar1;
  param_1[2] = param_3;
  return;
}

