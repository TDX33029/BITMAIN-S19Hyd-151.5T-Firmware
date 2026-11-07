// FUN_01562ef4 @ 01562ef4 size=208 calls_out=4 calls_in=10
// strings: 

void FUN_01562ef4(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  
  if (*param_1 == -0x80000000) {
    puVar1 = (undefined4 *)thunk_FUN_01be5118(0x18);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x18);
    }
    uVar2 = param_2[1];
    uVar4 = param_2[2];
    uVar6 = param_2[3];
    uVar7 = param_2[4];
    uVar8 = param_2[5];
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
    puVar1[2] = uVar4;
    puVar1[3] = uVar6;
    puVar1[4] = uVar7;
    puVar1[5] = uVar8;
    iVar3 = param_1[1];
    iVar5 = param_1[2];
    iVar9 = param_1[3];
    iVar10 = param_1[4];
    param_1[3] = 0;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[4] = 0;
    FUN_0150119c(param_1);
    *param_1 = 1;
    param_1[1] = (int)puVar1;
    param_1[2] = 1;
    param_1[3] = iVar3;
    param_1[4] = iVar5;
    param_1[5] = iVar9;
    param_1[6] = iVar10;
  }
  else {
    iVar3 = param_1[2];
    if (iVar3 == *param_1) {
      FUN_013e6234(param_1);
    }
    puVar1 = (undefined4 *)(param_1[1] + iVar3 * 0x18);
    uVar2 = param_2[1];
    uVar4 = param_2[2];
    uVar6 = param_2[3];
    uVar7 = param_2[4];
    uVar8 = param_2[5];
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
    puVar1[2] = uVar4;
    puVar1[3] = uVar6;
    puVar1[4] = uVar7;
    puVar1[5] = uVar8;
    param_1[2] = iVar3 + 1;
  }
  return;
}

