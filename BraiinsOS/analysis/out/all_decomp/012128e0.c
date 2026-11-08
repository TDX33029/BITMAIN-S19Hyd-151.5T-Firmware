// FUN_012128e0 @ 012128e0 size=152 calls_out=3 calls_in=10
// strings: 

void FUN_012128e0(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  
  if (*param_1 != -0x80000000) {
    iVar2 = param_1[2];
    if (iVar2 == *param_1) {
      FUN_011cf3b8(param_1);
    }
    puVar1 = (undefined4 *)(param_1[1] + iVar2 * 0x18);
    uVar4 = param_2[1];
    uVar6 = param_2[2];
    uVar7 = param_2[3];
    uVar8 = param_2[4];
    uVar9 = param_2[5];
    *puVar1 = *param_2;
    puVar1[1] = uVar4;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    puVar1[4] = uVar8;
    puVar1[5] = uVar9;
    param_1[2] = iVar2 + 1;
    return;
  }
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x18);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x18);
  }
  uVar4 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = param_2[4];
  uVar9 = param_2[5];
  *puVar1 = *param_2;
  puVar1[1] = uVar4;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  puVar1[4] = uVar8;
  puVar1[5] = uVar9;
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  iVar5 = param_1[3];
  iVar10 = param_1[4];
  param_1[1] = (int)puVar1;
  param_1[2] = 1;
  *param_1 = 1;
  param_1[3] = iVar2;
  param_1[4] = iVar3;
  param_1[5] = iVar5;
  param_1[6] = iVar10;
  return;
}

