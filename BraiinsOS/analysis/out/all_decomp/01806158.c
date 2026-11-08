// FUN_01806158 @ 01806158 size=420 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01806158(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar9;
  int *piVar8;
  
  uVar7 = param_1[3];
  if ((uVar7 == 0) || (uVar6 = param_1[1], uVar7 <= uVar6)) {
    param_1[5] = -1;
    param_1[6] = -1;
    return 0;
  }
  uVar3 = param_1[2];
  iVar1 = *param_1 + uVar6 * 0xc;
  uVar4 = *(uint *)(iVar1 + 4);
  iVar2 = *(int *)(iVar1 + 8);
  if (uVar3 < uVar4) {
    uVar5 = uVar4 - uVar3;
  }
  else {
    uVar5 = 0;
    iVar2 = (uVar4 + iVar2) - uVar3;
  }
  if (uVar5 < param_3) {
    param_1[7] = *(int *)(*param_1 + uVar6 * 0xc);
    param_1[5] = param_2 + uVar5;
    uVar4 = param_2 + uVar5 + iVar2;
    param_1[6] = uVar4;
    if (param_2 + param_3 < uVar4) {
      uVar3 = uVar3 + param_3;
      param_1[6] = param_2 + param_3;
      if (uVar3 != 0) {
        do {
          piVar8 = (int *)(iVar1 + 4);
          piVar9 = (int *)(iVar1 + 8);
          uVar6 = uVar6 + 1;
          iVar1 = iVar1 + 0xc;
          uVar4 = *piVar8 + *piVar9;
          if (uVar3 < uVar4) {
LAB_01806298:
            param_1[2] = uVar3;
            return 0;
          }
          uVar3 = uVar3 - uVar4;
          param_1[1] = uVar6;
        } while ((uVar3 != 0) && (uVar7 != uVar6));
      }
    }
    else {
      uVar3 = iVar2 + uVar5 + uVar3;
      if (uVar3 != 0) {
        do {
          piVar8 = (int *)(iVar1 + 4);
          piVar9 = (int *)(iVar1 + 8);
          uVar6 = uVar6 + 1;
          iVar1 = iVar1 + 0xc;
          uVar4 = *piVar8 + *piVar9;
          if (uVar3 < uVar4) goto LAB_01806298;
          uVar3 = uVar3 - uVar4;
          param_1[1] = uVar6;
        } while ((uVar3 != 0) && (uVar7 != uVar6));
      }
    }
  }
  else {
    uVar3 = uVar3 + param_3;
    param_1[5] = -1;
    param_1[6] = -1;
    if (uVar3 != 0) {
      do {
        uVar6 = uVar6 + 1;
        uVar4 = *(int *)(iVar1 + 4) + *(int *)(iVar1 + 8);
        if (uVar3 < uVar4) goto LAB_01806298;
        uVar3 = uVar3 - uVar4;
        param_1[1] = uVar6;
      } while ((uVar3 != 0) && (iVar1 = iVar1 + 0xc, uVar7 != uVar6));
    }
  }
  param_1[2] = 0;
  return 0;
}

