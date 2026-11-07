// FUN_016f76b0 @ 016f76b0 size=184 calls_out=1 calls_in=0
// strings: 

void FUN_016f76b0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  
  iVar1 = *param_2;
  uVar6 = param_2[2];
  uVar5 = param_2[3];
  if (uVar5 <= uVar6) {
    uVar8 = param_2[4];
    puVar9 = (uint *)param_2[5];
    uVar4 = *puVar9;
    uVar7 = puVar9[1];
    uVar6 = 0;
    uVar3 = puVar9[4];
    uVar2 = uVar4;
    if (uVar7 != 0) {
      uVar2 = 0xffffffff;
    }
    uVar5 = uVar3 - uVar2;
    if (uVar3 < uVar2) {
      uVar5 = 0;
    }
    if ((uint)param_2[1] <= uVar5) {
      uVar5 = param_2[1];
    }
    if (-uVar7 < (uint)(uVar4 <= uVar3)) {
      uVar3 = uVar4;
    }
    FUN_01bed4e2(iVar1,puVar9[3] + uVar3,uVar5);
    if (uVar8 < uVar5) {
      uVar8 = uVar5;
    }
    *puVar9 = uVar4 + uVar5;
    puVar9[1] = uVar7 + CARRY4(uVar4,uVar5);
    param_2[2] = 0;
    param_2[3] = uVar5;
    param_2[4] = uVar8;
  }
  *param_1 = 0;
  param_1[1] = iVar1 + uVar6;
  param_1[2] = uVar5 - uVar6;
  return;
}

