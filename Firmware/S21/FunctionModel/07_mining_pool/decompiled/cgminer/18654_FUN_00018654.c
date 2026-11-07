// FUN_00018654 @ 00018654  size=184  callers=1
// program: cgminer


void FUN_00018654(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (*(int *)(param_2 + 8) < 1) {
    return;
  }
  piVar4 = *(int **)(param_2 + 0x10);
  if (param_3 == *piVar4) {
    iVar3 = 0;
  }
  else {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
      iVar3 = iVar2 * 4;
      if (iVar2 == *(int *)(param_2 + 8)) {
        return;
      }
      piVar4 = piVar4 + 1;
    } while (*piVar4 != param_3);
  }
  uVar1 = FUN_000491bc(*(undefined4 *)(*(int *)(param_2 + 0xc) + iVar3));
  FUN_00049a4c(param_1,"status",uVar1);
  iVar2 = *(int *)(*(int *)(param_2 + 0x10) + iVar3);
  uVar1 = FUN_00049408(iVar2,iVar2 >> 0x1f);
  FUN_00049a4c(param_1,"code",uVar1);
  uVar1 = FUN_000491bc(*(undefined4 *)(*(int *)(param_2 + 0x14) + iVar3));
  FUN_00049a4c(param_1,&DAT_0004b664,uVar1);
  return;
}

