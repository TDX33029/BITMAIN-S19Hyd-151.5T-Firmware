// FUN_00aa3d3c @ 00aa3d3c size=188 calls_out=0 calls_in=2
// strings: 

void FUN_00aa3d3c(uint *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  uVar5 = param_1[3];
  iVar6 = 0;
  if (uVar5 == 0) {
    uVar4 = 0;
    uVar2 = 0;
  }
  else {
    uVar4 = *param_1;
    uVar8 = param_1[2];
    uVar2 = uVar8 - uVar4;
    if (uVar8 < uVar4) {
      uVar2 = uVar8;
    }
    if (uVar4 - uVar2 < uVar5) {
      iVar6 = uVar5 - (uVar4 - uVar2);
    }
    else {
      uVar4 = uVar2 + uVar5;
    }
  }
  uVar5 = param_1[1];
  iVar7 = uVar2 << 4;
  for (iVar9 = uVar4 - uVar2; iVar9 != 0; iVar9 = iVar9 + -1) {
    piVar3 = (int *)(uVar5 + iVar7);
    iVar7 = iVar7 + 0x10;
    (**(code **)(*piVar3 + 0x10))(piVar3 + 3,piVar3[1],piVar3[2]);
  }
  puVar1 = (undefined4 *)(uVar5 + 8);
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    (**(code **)(puVar1[-2] + 0x10))(puVar1 + 1,puVar1[-1],*puVar1);
    puVar1 = puVar1 + 4;
  }
  return;
}

