// FUN_00600684 @ 00600684 size=480 calls_out=2 calls_in=1
// strings: 

void FUN_00600684(uint *param_1,uint param_2,uint *param_3,int *param_4)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint extraout_r12;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  uint *local_2c;
  uint *local_28;
  
  uVar6 = param_2 >> 1;
  puVar3 = param_1 + (param_2 - 1);
  puVar9 = param_1 + uVar6;
  local_2c = puVar9 + -1;
  puVar8 = param_3 + (param_2 - 1);
  local_28 = param_1;
  do {
    uVar11 = *puVar9;
    uVar10 = *(uint *)(*param_4 + 8);
    if (uVar10 <= uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar11,uVar10,&DAT_018574a8);
    }
    uVar4 = *local_28;
    if (uVar10 <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar4,uVar10,&DAT_018574b8);
    }
    iVar7 = *(int *)(*param_4 + 4);
    uVar5 = *(uint *)(iVar7 + uVar11 * 0xc + 8);
    uVar1 = *(uint *)(iVar7 + uVar4 * 0xc + 8);
    uVar10 = *local_2c;
    bVar13 = uVar1 <= uVar5;
    bVar12 = uVar5 == uVar1;
    if (bVar13 && !bVar12) {
      uVar4 = uVar11;
    }
    uVar11 = *puVar3;
    puVar2 = param_3 + 1;
    *param_3 = uVar4;
    uVar4 = *(uint *)(*param_4 + 8);
    if (uVar4 <= uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar11,uVar4,&DAT_018574a8);
    }
    if (uVar4 <= uVar10) goto LAB_00600814;
    local_28 = local_28 + (!bVar13 || bVar12);
    iVar7 = *(int *)(*param_4 + 4);
    puVar9 = puVar9 + (bVar13 && !bVar12);
    uVar4 = *(uint *)(iVar7 + uVar11 * 0xc + 8);
    uVar1 = *(uint *)(iVar7 + uVar10 * 0xc + 8);
    iVar7 = 0;
    if (uVar1 < uVar4) {
      iVar7 = -1;
      uVar11 = uVar10;
    }
    local_2c = local_2c + iVar7;
    iVar7 = 0;
    if (uVar4 <= uVar1) {
      iVar7 = -1;
    }
    *puVar8 = uVar11;
    puVar3 = puVar3 + iVar7;
    uVar6 = uVar6 - 1;
    param_3 = puVar2;
    puVar8 = puVar8 + -1;
  } while (uVar6 != 0);
  local_2c = local_2c + 1;
  if ((param_2 & 1) != 0) {
    bVar12 = local_28 < local_2c;
    puVar8 = puVar9;
    if (bVar12) {
      puVar8 = local_28;
    }
    *puVar2 = *puVar8;
    local_28 = local_28 + bVar12;
    puVar9 = puVar9 + !bVar12;
  }
  bVar12 = local_28 == local_2c;
  if (bVar12) {
    local_28 = puVar3 + 1;
  }
  if (bVar12 && puVar9 == local_28) {
    return;
  }
  FUN_00fb7254();
  uVar10 = extraout_r12;
LAB_00600814:
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(uVar10,uVar4,&DAT_018574b8);
}

