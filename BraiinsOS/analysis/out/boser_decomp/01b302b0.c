// FUN_01b302b0 @ 01b302b0 size=236 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_01b302b0(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int extraout_r2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  iVar4 = param_2[1];
  iVar7 = param_3[1];
  iVar5 = iVar4;
  piVar6 = param_3;
  if (iVar7 <= iVar4) {
    iVar5 = iVar7;
    piVar6 = param_2;
    iVar7 = iVar4;
    param_2 = param_3;
  }
  iVar4 = FUN_01b2b248(param_1,iVar7 + 1);
  if (iVar4 == 0) {
    return 0;
  }
  iVar2 = *param_2;
  iVar4 = *piVar6;
  param_1[1] = iVar7 + 1;
  uVar1 = FUN_01b30190(*param_1,iVar4,iVar2,iVar5);
  iVar4 = *param_1;
  for (; iVar5 < iVar7; iVar5 = iVar5 + 1) {
    if (1 < uVar1) {
      uVar1 = FUN_01b20980();
      iVar4 = extraout_r2;
    }
    uVar3 = *(uint *)(*piVar6 + iVar5 * 4);
    *(uint *)(iVar4 + iVar5 * 4) = uVar3 + uVar1;
    uVar1 = (uint)CARRY4(uVar3,uVar1);
  }
  *(uint *)(iVar4 + iVar7 * 4) = uVar1;
  return 1;
}

