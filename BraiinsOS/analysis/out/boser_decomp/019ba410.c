// FUN_019ba410 @ 019ba410 size=112 calls_out=2 calls_in=8
// strings: 

void FUN_019ba410(undefined1 *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = param_3[2];
  uVar4 = param_3[1] - iVar5;
  if (0x7ffffffe < uVar4) {
    uVar4 = 0x7fffffff;
  }
  iVar1 = FUN_01bf0424(param_2,*param_3 + iVar5,uVar4);
  if (iVar1 == -1) {
    puVar3 = (undefined4 *)FUN_01be3244();
    *(undefined4 *)(param_1 + 4) = *puVar3;
    *param_1 = 0;
    return;
  }
  uVar2 = iVar1 + iVar5;
  uVar4 = param_3[3];
  if ((uint)param_3[3] < uVar2) {
    uVar4 = uVar2;
  }
  param_3[2] = uVar2;
  param_3[3] = uVar4;
  *param_1 = 4;
  return;
}

