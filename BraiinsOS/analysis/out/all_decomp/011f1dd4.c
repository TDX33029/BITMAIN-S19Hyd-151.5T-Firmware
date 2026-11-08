// FUN_011f1dd4 @ 011f1dd4 size=384 calls_out=3 calls_in=19
// strings: 

void FUN_011f1dd4(undefined1 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined3 uStack_2c;
  
  uVar9 = param_2[2];
  iVar11 = *param_2;
  puVar12 = (undefined4 *)param_2[1];
  uVar2 = 0;
  iVar6 = uVar9 * 0x18;
  if (0x5555555 < uVar9) {
LAB_011f1e18:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar2,iVar6);
  }
  iVar13 = 0;
  if (iVar6 == 0) {
    iVar3 = 8;
    uVar5 = 0;
  }
  else {
    iVar3 = thunk_FUN_016d4a50(iVar6);
    uVar5 = uVar9;
    if (iVar3 == 0) {
      uVar2 = 8;
      goto LAB_011f1e18;
    }
  }
  puVar8 = puVar12;
  if (uVar9 != 0) {
    iVar6 = uVar9 * 0xc;
    puVar4 = (undefined4 *)(iVar3 + 1);
    iVar13 = (iVar6 - 0xcU) / 0xc + 1;
    puVar7 = (undefined4 *)((uint)&local_38 | 3);
    do {
      uVar10 = *puVar8;
      iVar6 = iVar6 + -0xc;
      uVar2 = puVar8[1];
      puVar1 = puVar8 + 2;
      puVar8 = puVar8 + 3;
      puVar7[2] = *puVar1;
      puVar7[1] = uVar2;
      *puVar7 = uVar10;
      *(undefined1 *)((int)puVar4 + -1) = 3;
      puVar4[2] = local_30;
      *puVar4 = local_38;
      puVar4[1] = local_34;
      *(uint *)((int)puVar4 + 0xb) = CONCAT31(uStack_2c,local_30._3_1_);
      puVar4 = puVar4 + 6;
    } while (iVar6 != 0);
    puVar8 = puVar12 + uVar9 * 3;
  }
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + 0xc) {
    if (*(int *)((int)puVar8 + iVar6) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)((int)puVar8 + iVar6 + 4));
    }
  }
  if (iVar11 != 0) {
    thunk_FUN_016d3fb4(puVar12);
  }
  *(uint *)(param_1 + 4) = uVar5;
  *(int *)(param_1 + 8) = iVar3;
  *(int *)(param_1 + 0xc) = iVar13;
  *param_1 = 4;
  return;
}

