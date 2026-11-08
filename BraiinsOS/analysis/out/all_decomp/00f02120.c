// FUN_00f02120 @ 00f02120 size=148 calls_out=1 calls_in=1
// strings: 

void FUN_00f02120(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  iVar2 = param_2[2];
  iVar7 = param_2[1];
  iVar9 = *param_2;
  uVar3 = param_2[3] - iVar7;
  uVar1 = uVar3 / 0x28;
  if (uVar3 != 0) {
    iVar5 = 0;
    uVar3 = uVar1;
    do {
      iVar6 = iVar9 + iVar5;
      puVar4 = (undefined4 *)(iVar7 + iVar5);
      uVar8 = *puVar4;
      uVar10 = puVar4[1];
      uVar11 = puVar4[2];
      FUN_016dd52c(iVar6,puVar4 + 4,0x18);
      iVar5 = iVar5 + 0x28;
      uVar3 = uVar3 - 1;
      *(undefined4 *)(iVar6 + 0x18) = uVar8;
      *(undefined4 *)(iVar6 + 0x1c) = uVar10;
      *(undefined4 *)(iVar6 + 0x20) = uVar11;
    } while (uVar3 != 0);
  }
  *param_1 = iVar2;
  param_1[1] = iVar9;
  param_1[2] = uVar1;
  return;
}

