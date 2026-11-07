// FUN_009ba178 @ 009ba178 size=424 calls_out=1 calls_in=1
// strings: 

void FUN_009ba178(undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  
  uVar9 = *(uint *)param_1[2];
  uVar3 = 2;
  uVar2 = uVar9;
  if (uVar9 < *(uint *)*param_1) {
    do {
      iVar1 = uVar3 * 2;
      if (uVar2 <= *(uint *)param_1[iVar1]) goto LAB_009ba1e4;
      uVar3 = uVar3 + 1;
      uVar2 = *(uint *)param_1[iVar1];
    } while (param_2 != uVar3);
  }
  else {
    do {
      iVar1 = uVar3 * 2;
      if (*(uint *)param_1[iVar1] < uVar2) goto LAB_009ba1e4;
      uVar3 = uVar3 + 1;
      uVar2 = *(uint *)param_1[iVar1];
    } while (param_2 != uVar3);
  }
LAB_009ba1ec:
  if (uVar9 < *(uint *)*param_1) {
    uVar2 = param_2 >> 1;
    puVar5 = param_1 + param_2 * 2;
    do {
      puVar4 = puVar5 + -2;
      uVar6 = *puVar4;
      uVar7 = puVar5[-1];
      uVar2 = uVar2 - 1;
      uVar8 = param_1[1];
      *puVar4 = *param_1;
      puVar5[-1] = uVar8;
      *param_1 = uVar6;
      param_1[1] = uVar7;
      param_1 = param_1 + 2;
      puVar5 = puVar4;
    } while (uVar2 != 0);
  }
  return;
LAB_009ba1e4:
  if (uVar3 != param_2) {
    FUN_009d1220(param_1,param_2,0,LZCOUNT(param_2 | 1) << 1 ^ 0x3e);
    return;
  }
  goto LAB_009ba1ec;
}

