// FUN_012b6a04 @ 012b6a04 size=420 calls_out=3 calls_in=1
// strings: 

void FUN_012b6a04(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint *puVar8;
  uint *puVar7;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int local_44;
  int local_34;
  
  if (param_2[4] == 0) {
    *param_1 = -0x80000000;
    return;
  }
  iVar1 = *param_2;
  uVar3 = param_2[1];
  if (uVar3 == 0) {
    puVar7 = (uint *)param_2[2];
    do {
      puVar8 = puVar7 + 1;
      uVar3 = *puVar7;
      iVar1 = iVar1 + -0x60;
      puVar7 = puVar8;
    } while ((uVar3 & 0x80808080) == 0x80808080);
    uVar3 = uVar3 & 0x80808080 ^ 0x80808080;
    *param_2 = iVar1;
    param_2[2] = (int)puVar8;
  }
  param_2[4] = param_2[4] + -1;
  uVar4 = 0;
  param_2[1] = uVar3 - 1 & uVar3;
  iVar6 = 1;
  uVar3 = LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
                  uVar3 >> 0x18);
  iVar1 = iVar1 + ((uVar3 >> 3) * -2 - (uVar3 >> 3)) * 8;
  uVar11 = *(undefined4 *)(iVar1 + -0x14);
  iVar12 = *(int *)(iVar1 + -0x10);
  iVar10 = *(int *)(iVar1 + -4);
  uVar2 = *(undefined4 *)(iVar1 + -8);
  if (-1 < iVar12) {
    iVar1 = 0;
    if (iVar12 != 0) {
      iVar6 = thunk_FUN_016d4a50(iVar12);
      if (iVar6 == 0) {
        uVar4 = 1;
        goto LAB_012b6b18;
      }
      iVar1 = iVar12;
    }
    FUN_016dd1aa(iVar6,uVar11,iVar12);
    iVar9 = 1;
    local_44 = CONCAT31((int3)((uint)local_44 >> 8),1);
    if (-1 < iVar10) {
      if (iVar10 == 0) {
        iVar5 = 0;
      }
      else {
        iVar9 = thunk_FUN_016d4a50(iVar10);
        if (iVar9 == 0) {
          uVar4 = 1;
          iVar12 = iVar10;
          goto LAB_012b6b18;
        }
        iVar5 = iVar10;
      }
      FUN_016dd1aa(iVar9,uVar2,iVar10);
      local_34 = CONCAT31((int3)((uint)local_34 >> 8),1);
      *param_1 = iVar1;
      param_1[1] = iVar6;
      param_1[2] = iVar12;
      param_1[3] = local_44;
      param_1[4] = iVar5;
      param_1[5] = iVar9;
      param_1[6] = iVar10;
      param_1[7] = local_34;
      param_1[8] = 0;
      param_1[9] = 0;
      return;
    }
  }
LAB_012b6b18:
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(uVar4,iVar12);
}

