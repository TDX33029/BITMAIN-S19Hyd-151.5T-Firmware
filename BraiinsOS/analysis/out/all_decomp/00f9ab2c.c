// FUN_00f9ab2c @ 00f9ab2c size=108 calls_out=2 calls_in=4
// strings: 

void FUN_00f9ab2c(int *param_1,undefined1 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  
  iVar6 = param_1[2];
  if (iVar6 == *param_1) {
    FUN_00f98c64(param_1);
  }
  iVar2 = param_1[3];
  iVar8 = param_1[5];
  *(undefined1 *)(param_1[1] + iVar6) = param_2;
  param_1[2] = iVar6 + 1;
  if (iVar8 == iVar2) {
    FUN_00f98eac();
  }
  uVar3 = *param_3;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar7 = param_3[3];
  param_1[5] = iVar8 + 1;
  puVar1 = (undefined4 *)(param_1[4] + iVar8 * 0x10);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar7;
  return;
}

