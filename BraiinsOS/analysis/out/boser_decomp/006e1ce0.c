// FUN_006e1ce0 @ 006e1ce0 size=344 calls_out=2 calls_in=4
// strings: 

int * FUN_006e1ce0(int *param_1,int *param_2,int *param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  
  param_4 = param_4 >> 3;
  if (param_4 != 0) {
    param_1 = (int *)FUN_006e1ce0(param_1,param_1 + param_4 * 4,param_1 + param_4 * 7,param_4);
    param_2 = (int *)FUN_006e1ce0(param_2,param_2 + param_4 * 4,param_2 + param_4 * 7,param_4);
    param_3 = (int *)FUN_006e1ce0(param_3,param_3 + param_4 * 4,param_3 + param_4 * 7,param_4);
  }
  uVar7 = *(uint *)(*param_2 + 8);
  uVar5 = *(undefined4 *)(*param_1 + 4);
  uVar6 = *(uint *)(*param_1 + 8);
  uVar2 = *(undefined4 *)(*param_2 + 4);
  uVar3 = uVar7;
  if (uVar6 < uVar7) {
    uVar3 = uVar6;
  }
  iVar1 = FUN_01bed842(uVar5,uVar2,uVar3);
  if (iVar1 == 0) {
    iVar1 = uVar6 - uVar7;
  }
  uVar8 = *(undefined4 *)(*param_3 + 4);
  uVar9 = *(uint *)(*param_3 + 8);
  uVar4 = (uint)(0 < iVar1) - (uint)(iVar1 < 0);
  uVar3 = uVar9;
  if (uVar6 < uVar9) {
    uVar3 = uVar6;
  }
  iVar1 = FUN_01bed842(uVar5,uVar8,uVar3);
  if (iVar1 == 0) {
    iVar1 = uVar6 - uVar9;
  }
  if (-1 < (int)((uint)(0 < iVar1) - (uint)(iVar1 < 0) ^ uVar4)) {
    uVar3 = uVar9;
    if (uVar7 < uVar9) {
      uVar3 = uVar7;
    }
    iVar1 = FUN_01bed842(uVar2,uVar8,uVar3);
    if (iVar1 == 0) {
      iVar1 = uVar7 - uVar9;
    }
    param_1 = param_2;
    if ((int)((uint)(0 < iVar1) - (uint)(iVar1 < 0) ^ uVar4) < 0) {
      param_1 = param_3;
    }
  }
  return param_1;
}

