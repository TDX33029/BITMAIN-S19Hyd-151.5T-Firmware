// FUN_0146a5c0 @ 0146a5c0 size=176 calls_out=1 calls_in=0
// strings: 

void FUN_0146a5c0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  iVar1 = *param_2;
  if (uVar4 <= uVar3) {
    uVar6 = param_2[4];
    puVar7 = (uint *)param_2[5];
    uVar3 = 0;
    uVar8 = *puVar7;
    uVar9 = puVar7[1];
    uVar2 = puVar7[4];
    uVar5 = uVar8;
    if (uVar9 != 0) {
      uVar5 = 0xffffffff;
    }
    uVar4 = uVar2 - uVar5;
    if (uVar2 < uVar5) {
      uVar4 = 0;
    }
    if ((uint)param_2[1] <= uVar4) {
      uVar4 = param_2[1];
    }
    if (-uVar9 < (uint)(uVar8 <= uVar2)) {
      uVar2 = uVar8;
    }
    FUN_016dd1aa(iVar1,puVar7[3] + uVar2,uVar4);
    *puVar7 = uVar8 + uVar4;
    if (uVar6 < uVar4) {
      uVar6 = uVar4;
    }
    puVar7[1] = uVar9 + CARRY4(uVar8,uVar4);
    param_2[2] = 0;
    param_2[3] = uVar4;
    param_2[4] = uVar6;
  }
  *param_1 = 0;
  param_1[1] = iVar1 + uVar3;
  param_1[2] = uVar4 - uVar3;
  return;
}

