// FUN_013e6e74 @ 013e6e74 size=340 calls_out=3 calls_in=1
// strings: 

void FUN_013e6e74(uint *param_1,int param_2,uint param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  int local_38;
  uint local_30;
  uint local_2c;
  
  uVar8 = param_3 * 0x10;
  bVar10 = 0xffffffe < param_3;
  bVar9 = param_3 == 0xfffffff;
  if (param_3 < 0x10000000) {
    bVar10 = 0x7ffffffb < uVar8;
    bVar9 = uVar8 == 0x7ffffffc;
  }
  if (bVar10 && !bVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  if (uVar8 == 0) {
    local_2c = 4;
    local_30 = 0;
  }
  else {
    uVar11 = thunk_FUN_016d4a50(uVar8);
    iVar3 = (int)((ulonglong)uVar11 >> 0x20);
    local_2c = (uint)uVar11;
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar8);
    }
    local_30 = param_3;
    if (param_3 != 0) {
      iVar7 = 8;
      uVar8 = 0;
      do {
        if (param_3 * -0x10 + iVar7 == 8) break;
        iVar6 = *(int *)(param_2 + 8);
        uVar2 = 0;
        if (iVar6 < 0) {
LAB_013e6fb8:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar2,iVar3);
        }
        uVar2 = *(undefined4 *)(param_2 + 4);
        if (iVar6 == 0) {
          iVar3 = 1;
          local_38 = 0;
        }
        else {
          iVar3 = thunk_FUN_016d4a50(iVar6);
          if (iVar3 == 0) {
            uVar2 = 1;
            iVar3 = iVar6;
            goto LAB_013e6fb8;
          }
          local_38 = iVar6;
        }
        uVar5 = uVar8 + 1;
        FUN_016dd1aa(iVar3,uVar2,iVar6);
        uVar1 = *(undefined1 *)(param_2 + 0xc);
        *(int *)(local_2c + iVar7 + -8) = local_38;
        iVar4 = local_2c + uVar8 * 0x10;
        *(int *)(iVar4 + 4) = iVar3;
        *(int *)(local_2c + iVar7) = iVar6;
        iVar7 = iVar7 + 0x10;
        *(undefined1 *)(iVar4 + 0xc) = uVar1;
        param_2 = param_2 + 0x10;
        uVar8 = uVar5;
      } while (param_3 != uVar5);
    }
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = param_3;
  return;
}

