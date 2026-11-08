// FUN_01381e14 @ 01381e14 size=692 calls_out=3 calls_in=5
// strings: slot table length doesn't overflow

void FUN_01381e14(int *param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined *local_20;
  code *local_1c;
  
  uVar10 = *(uint *)(param_2 + 0x148);
  if ((int)uVar10 < 0) {
    local_1c = FUN_007883b8;
    local_20 = &DAT_00568468;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_005970ba,&local_20,&DAT_01893ca0);
  }
  uVar7 = param_1[2];
  param_1[6] = 0;
  uVar3 = uVar10;
  if (uVar7 < uVar10) {
    uVar6 = uVar10 - uVar7;
    if (*param_1 - uVar7 < uVar6) {
      FUN_013c4434(param_1,uVar7,uVar6,4,4);
      param_4 = (undefined4 *)(param_1[1] + param_1[2] * 4);
      uVar3 = param_1[2];
    }
    else {
      param_4 = (undefined4 *)(param_1[1] + uVar7 * 4);
      uVar3 = uVar7;
    }
    if (1 < uVar6) {
      iVar9 = ~uVar7 + uVar10;
      puVar4 = param_4;
      do {
        param_4 = puVar4 + 1;
        *puVar4 = 0;
        iVar9 = iVar9 + -1;
        puVar4 = param_4;
      } while (iVar9 != 0);
      uVar3 = (uVar6 + uVar3) - 1;
    }
    uVar3 = uVar3 + 1;
    *param_4 = 0;
  }
  uVar7 = param_1[5];
  param_1[2] = uVar3;
  if (uVar7 < uVar10) {
    uVar3 = uVar10 - uVar7;
    if (param_1[3] - uVar7 < uVar3) {
      FUN_013c4434(param_1 + 3,uVar7,uVar3,4,4);
      param_4 = (undefined4 *)(param_1[4] + param_1[5] * 4);
      uVar6 = param_1[5];
    }
    else {
      param_4 = (undefined4 *)(param_1[4] + uVar7 * 4);
      uVar6 = uVar7;
    }
    if (1 < uVar3) {
      iVar9 = ~uVar7 + uVar10;
      puVar4 = param_4;
      do {
        param_4 = puVar4 + 1;
        *puVar4 = 0;
        iVar9 = iVar9 + -1;
        puVar4 = param_4;
      } while (iVar9 != 0);
      uVar6 = (uVar3 + uVar6) - 1;
    }
    *param_4 = 0;
    uVar10 = uVar6 + 1;
  }
  iVar9 = *(int *)(param_2 + 0x13c);
  param_1[5] = uVar10;
  iVar8 = *(int *)(iVar9 + 0x10);
  uVar10 = 0;
  if (iVar8 != 0) {
    param_4 = (undefined4 *)(*(int *)(iVar9 + 0xc) + iVar8 * 8);
  }
  if (iVar8 != 0 && param_4 != (undefined4 *)&DAT_00000008) {
    uVar10 = param_4[-1];
  }
  uVar3 = *(uint *)(param_2 + 0x148);
  iVar9 = *(int *)(param_2 + 0x154);
  param_1[10] = uVar10;
  lVar1 = (ulonglong)uVar10 * (ulonglong)uVar3;
  uVar3 = (uint)lVar1;
  if (uVar10 < (uint)(iVar9 << 1)) {
    uVar10 = iVar9 << 1;
  }
  param_1[0xb] = uVar10;
  if (((int)((ulonglong)lVar1 >> 0x20) != 0) || (uVar7 = uVar3 + uVar10, CARRY4(uVar3,uVar10))) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("slot table length doesn\'t overflow",0x22,&DAT_01892c90);
  }
  uVar6 = param_1[9];
  if (uVar6 < uVar7) {
    uVar7 = uVar7 - uVar6;
    if (param_1[7] - uVar6 < uVar7) {
      FUN_013c4434(param_1 + 7,uVar6,uVar7,4,4);
      puVar4 = (undefined4 *)(param_1[8] + param_1[9] * 4);
      uVar2 = param_1[9];
    }
    else {
      puVar4 = (undefined4 *)(param_1[8] + uVar6 * 4);
      uVar2 = uVar6;
    }
    if (1 < uVar7) {
      iVar9 = ~uVar6 + uVar10 + uVar3;
      puVar5 = puVar4;
      do {
        puVar4 = puVar5 + 1;
        *puVar5 = 0;
        iVar9 = iVar9 + -1;
        puVar5 = puVar4;
      } while (iVar9 != 0);
      uVar2 = (uVar7 + uVar2) - 1;
    }
    uVar7 = uVar2 + 1;
    *puVar4 = 0;
  }
  param_1[9] = uVar7;
  return;
}

