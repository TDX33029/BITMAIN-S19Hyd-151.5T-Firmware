// FUN_0139f7b8 @ 0139f7b8 size=508 calls_out=4 calls_in=0
// strings: 

void FUN_0139f7b8(int *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if (*(int *)(param_2 + 0x268) == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01892ce0);
  }
  iVar5 = param_1[0x2a4];
  FUN_01381e14(param_2 + 0x274,iVar5);
  FUN_01381e14(param_2 + 0x2a4,iVar5);
  if (param_1[0x2aa] != 2) {
    if (*(int *)(param_2 + 0x2d4) == -0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01892d10);
    }
    *(undefined4 *)(param_2 + 0x2e8) = 0;
  }
  if (param_1[0x2b1] != 3) {
    if (*(int *)(param_2 + 600) == -0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01892cf0);
    }
    uVar7 = 0;
    uVar10 = *(uint *)(param_2 + 0x260);
    iVar5 = *(int *)(param_1[0x2ba] + 0x13c);
    iVar6 = *(int *)(iVar5 + 0x10);
    if (iVar6 != 0) {
      iVar5 = *(int *)(iVar5 + 0xc) + iVar6 * 8;
    }
    if (iVar6 != 0 && iVar5 != 8) {
      uVar7 = *(uint *)(iVar5 + -4);
    }
    uVar9 = 0;
    if ((uint)(iVar6 << 1) <= uVar7) {
      uVar9 = uVar7 + iVar6 * -2;
    }
    uVar1 = uVar9;
    if (uVar10 < uVar9) {
      uVar8 = uVar9 - uVar10;
      if (*(int *)(param_2 + 600) - uVar10 < uVar8) {
        FUN_013c4434(param_2 + 600,uVar10,uVar8,4,4);
        puVar2 = (undefined4 *)(*(int *)(param_2 + 0x25c) + *(uint *)(param_2 + 0x260) * 4);
        uVar1 = *(uint *)(param_2 + 0x260);
      }
      else {
        puVar2 = (undefined4 *)(*(int *)(param_2 + 0x25c) + uVar10 * 4);
        uVar1 = uVar10;
      }
      if (1 < uVar8) {
        uVar4 = iVar6 << 1;
        if (uVar7 < (uint)(iVar6 << 1)) {
          uVar4 = uVar7;
        }
        iVar5 = (uVar10 + uVar4) - uVar7;
        puVar3 = puVar2;
        do {
          iVar5 = iVar5 + 1;
          puVar2 = puVar3 + 1;
          *puVar3 = 0;
          puVar3 = puVar2;
        } while (iVar5 != -1);
        uVar1 = (uVar8 + uVar1) - 1;
      }
      *puVar2 = 0;
      uVar1 = uVar1 + 1;
    }
    *(uint *)(param_2 + 0x260) = uVar1;
    *(uint *)(param_2 + 0x264) = uVar9;
  }
  if (*param_1 != 2 || param_1[1] != 0) {
    if (*(int *)(param_2 + 0x248) == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01892cd0);
    }
    FUN_013913bc(param_2 + 0xd8,param_1);
    FUN_013913bc(param_2 + 0x198,param_1 + 0xa2);
  }
  if (param_1[0x304] == 2 && param_1[0x305] == 0) {
    return;
  }
  if (*(int *)(param_2 + 200) == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01892d00);
  }
  FUN_013913bc(param_2 + 0x18,param_1 + 0x304);
  return;
}

