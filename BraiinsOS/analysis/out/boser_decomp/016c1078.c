// FUN_016c1078 @ 016c1078 size=148 calls_out=1 calls_in=6
// strings: 

void FUN_016c1078(int *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1[2];
  if ((uint)(*param_1 - iVar3) < param_2) {
    FUN_006520b4(param_1,iVar3,param_2,4,4);
    iVar3 = param_1[2];
  }
  puVar1 = (undefined4 *)(param_1[1] + iVar3 * 4);
  if (param_2 < 2) {
    if (param_2 == 0) goto LAB_016c10e0;
  }
  else {
    iVar4 = param_2 - 1;
    puVar2 = puVar1;
    do {
      puVar1 = puVar2 + 1;
      *puVar2 = 0;
      iVar4 = iVar4 + -1;
      puVar2 = puVar1;
    } while (iVar4 != 0);
    iVar3 = iVar3 + param_2 + -1;
  }
  iVar3 = iVar3 + 1;
  *puVar1 = 0;
LAB_016c10e0:
  param_1[2] = iVar3;
  return;
}

