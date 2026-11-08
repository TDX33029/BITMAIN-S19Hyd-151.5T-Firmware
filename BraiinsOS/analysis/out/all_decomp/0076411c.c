// FUN_0076411c @ 0076411c size=568 calls_out=2 calls_in=1
// strings: 

void FUN_0076411c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint local_60;
  uint local_4c;
  uint local_30;
  
  puVar3 = (undefined4 *)thunk_FUN_016d4a50(0x18);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x18);
  }
  puVar3[4] = 0;
  *puVar3 = 0;
  puVar4 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *puVar4 = 0;
  puVar4[1] = 0;
  piVar5 = (int *)thunk_FUN_016d4a50(0x30);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x30);
  }
  *piVar5 = 1;
  piVar5[1] = 1;
  piVar5[2] = (int)puVar3;
  piVar5[3] = (int)puVar3;
  piVar5[4] = (int)puVar4;
  piVar5[5] = (int)puVar4;
  piVar5[6] = 1;
  piVar5[7] = -0x80000000;
  piVar5[8] = 1;
  piVar5[9] = 0;
  piVar5[10] = local_30;
  piVar5[0xb] = 0;
  do {
    iVar6 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar6 + 1;
  if (-1 < iVar6) {
    puVar7 = (undefined4 *)thunk_FUN_016d4a50(0x1c);
    if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x1c);
    }
    *(undefined1 *)(puVar7 + 6) = 0;
    puVar7[4] = 0;
    *(undefined1 *)(puVar7 + 3) = 0;
    *puVar7 = 1;
    puVar7[1] = 1;
    puVar7[2] = 0;
    local_60 = local_60 & 0xffffff00;
    local_30 = local_30 & 0xffffff00;
    local_4c = (uint)puVar3 & 0xffffff00;
    puVar3 = (undefined4 *)thunk_FUN_016d4a50(0x2c);
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x2c);
    }
    *puVar3 = 1;
    puVar3[1] = 1;
    puVar3[2] = 0;
    puVar3[3] = local_4c;
    puVar3[4] = 0;
    puVar3[5] = puVar4;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 1;
    puVar3[9] = 0;
    puVar3[10] = local_30;
    do {
      puVar4 = (undefined4 *)*puVar3;
      bVar1 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar1);
    *puVar3 = (undefined1 *)((int)puVar4 + 1);
    uVar10 = 0;
    puVar2 = puVar4;
    if (puVar4 < &DAT_80000000) {
      uVar10 = local_60;
      puVar2 = param_3;
    }
    if (-1 < (int)puVar4) {
      uVar8 = *puVar2;
      uVar13 = param_2[2];
      uVar11 = *param_2;
      uVar14 = param_2[1];
      uVar12 = param_2[3];
      uVar9 = puVar2[1];
      uVar15 = puVar2[2];
      param_1[0xb] = uVar10;
      param_1[0xc] = uVar11;
      param_1[0xd] = uVar14;
      param_1[0x10] = piVar5;
      param_1[0x11] = puVar3;
      param_1[8] = puVar3;
      param_1[9] = piVar5;
      param_1[10] = puVar7;
      param_1[0xe] = uVar13;
      param_1[0xf] = uVar12;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 1;
      *param_1 = &PTR_LAB_0185bb04;
      param_1[4] = param_4;
      param_1[5] = uVar8;
      param_1[6] = uVar9;
      param_1[7] = uVar15;
      return;
    }
  }
  software_udf(0xfdee,0x764314);
  return;
}

