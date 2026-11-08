// FUN_00defa3c @ 00defa3c size=304 calls_out=2 calls_in=0
// strings: 

void FUN_00defa3c(int *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint local_30;
  undefined4 *local_2c;
  uint local_28;
  int local_24;
  
  iVar2 = param_1[2];
  if ((uint)(*param_1 - iVar2) < param_2[3]) {
    FUN_0132b898(param_1,iVar2,param_2[3],4,4);
    iVar2 = param_1[2];
  }
  iVar5 = param_1[1];
  local_30 = *param_2;
  local_2c = (undefined4 *)param_2[1];
  uVar7 = param_2[2];
  uVar9 = param_2[3];
  if (uVar9 == 0) {
    iVar1 = 0;
  }
  else {
    uVar3 = uVar7 - local_30;
    if (uVar7 < local_30) {
      uVar3 = uVar7;
    }
    uVar10 = local_30 - uVar3;
    iVar11 = uVar9 - uVar10;
    iVar1 = 0;
    uVar8 = local_30;
    if (uVar9 < uVar10 || iVar11 == 0) {
      iVar11 = 0;
      uVar8 = uVar3 + uVar9;
    }
    if (uVar3 != uVar8) {
      if (uVar9 < uVar10) {
        uVar10 = uVar9;
      }
      iVar4 = uVar10 << 2;
      iVar1 = 0;
      do {
        iVar4 = iVar4 + -4;
        *(undefined4 *)(iVar5 + iVar2 * 4 + iVar1 * -4) = local_2c[uVar3 - iVar1];
        iVar1 = iVar1 + -1;
      } while (iVar4 != 0);
      iVar2 = iVar2 - iVar1;
      iVar1 = -iVar1;
    }
    if (iVar11 != 0) {
      iVar4 = iVar11 << 2;
      iVar1 = iVar1 + (iVar11 * 4 - 4U >> 2) + 1;
      puVar6 = local_2c;
      do {
        iVar4 = iVar4 + -4;
        *(undefined4 *)(iVar5 + iVar2 * 4) = *puVar6;
        iVar2 = iVar2 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar4 != 0);
    }
  }
  param_1[2] = iVar2;
  local_24 = uVar9 - iVar1;
  uVar7 = uVar7 + iVar1;
  local_28 = uVar7 - local_30;
  if (uVar7 < local_30) {
    local_28 = uVar7;
  }
  FUN_00fe1760(&local_30);
  return;
}

