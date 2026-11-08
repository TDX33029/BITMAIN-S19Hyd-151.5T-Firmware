// FUN_00a5f64c @ 00a5f64c size=520 calls_out=3 calls_in=1
// strings: 

void FUN_00a5f64c(uint *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint local_30;
  uint local_2c;
  
  iVar1 = param_3 * 0x28;
  if (0x3333333 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar1);
  }
  if (iVar1 == 0) {
    local_2c = 4;
    local_30 = 0;
  }
  else {
    local_2c = thunk_FUN_016d4a50(iVar1);
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar1);
    }
    local_30 = param_3;
    if (param_3 != 0) {
      iVar12 = 0;
      uVar3 = 0;
      iVar13 = param_2;
      do {
        if (iVar1 == iVar12) break;
        iVar11 = *(int *)(iVar13 + 8);
        iVar10 = 1;
        uVar7 = *(undefined4 *)(iVar13 + 4);
        iVar5 = 1;
        uVar2 = *(undefined1 *)(iVar13 + 0x24);
        if ((iVar11 != 0) && (iVar5 = thunk_FUN_016d4a50(iVar11), iVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar11);
        }
        FUN_016dd1aa(iVar5,uVar7,iVar11);
        iVar8 = *(int *)(iVar13 + 0x10);
        iVar9 = *(int *)(iVar13 + 0x14);
        if ((iVar9 != 0) && (iVar10 = thunk_FUN_016d4a50(iVar9), iVar10 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar9);
        }
        FUN_016dd1aa(iVar10,iVar8,iVar9);
        iVar6 = -0x80000000;
        if (*(int *)(iVar13 + 0x18) != -0x80000000) {
          iVar6 = *(int *)(param_2 + iVar12 + 0x20);
          uVar7 = *(undefined4 *)(param_2 + iVar12 + 0x1c);
          if (iVar6 == 0) {
            iVar8 = 1;
          }
          else {
            iVar8 = thunk_FUN_016d4a50(iVar6,uVar7);
            if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,iVar6);
            }
          }
          FUN_016dd1aa(iVar8,uVar7,iVar6);
        }
        iVar13 = iVar13 + 0x28;
        piVar4 = (int *)(local_2c + iVar12);
        *piVar4 = iVar11;
        uVar3 = uVar3 + 1;
        iVar12 = iVar12 + 0x28;
        piVar4[3] = iVar9;
        piVar4[5] = iVar9;
        piVar4[6] = iVar6;
        piVar4[8] = iVar6;
        *(undefined1 *)(piVar4 + 9) = uVar2;
        piVar4[1] = iVar5;
        piVar4[2] = iVar11;
        piVar4[4] = iVar10;
        piVar4[7] = iVar8;
      } while (param_3 != uVar3);
    }
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = param_3;
  return;
}

