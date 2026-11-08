// FUN_0002c108 @ 0002c108  size=368  callers=3
// program: cgminer


void FUN_0002c108(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + -1;
  iVar1 = *(int *)(param_2 + 0x15c);
  if (iVar1 == 0) {
    iVar4 = *(int *)(param_2 + 0x160);
    puVar5 = *(undefined4 **)(*(int *)(param_1 + 0x160) + 0x158);
    if (iVar4 == 0) {
      free((void *)*puVar5);
      free(*(void **)(*(int *)(param_1 + 0x160) + 0x158));
      *(undefined4 *)(param_1 + 0x160) = 0;
      return;
    }
    iVar3 = puVar5[5];
    if (param_2 == puVar5[4] - iVar3) goto LAB_0002c1fc;
LAB_0002c248:
    *(int *)(param_1 + 0x160) = iVar4;
  }
  else {
    puVar5 = *(undefined4 **)(*(int *)(param_1 + 0x160) + 0x158);
    iVar3 = puVar5[5];
    if (param_2 == puVar5[4] - iVar3) {
LAB_0002c1fc:
      puVar5[4] = iVar1 + iVar3;
      iVar1 = *(int *)(param_2 + 0x15c);
      if (iVar1 == 0) {
        iVar4 = *(int *)(param_2 + 0x160);
        goto LAB_0002c248;
      }
      iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x160) + 0x158) + 0x14);
    }
    *(undefined4 *)(iVar1 + iVar3 + 8) = *(undefined4 *)(param_2 + 0x160);
    iVar4 = *(int *)(param_1 + 0x160);
  }
  piVar2 = *(int **)(iVar4 + 0x158);
  if (*(int *)(param_2 + 0x160) != 0) {
    *(undefined4 *)(*(int *)(param_2 + 0x160) + piVar2[5] + 4) = *(undefined4 *)(param_2 + 0x15c);
    piVar2 = *(int **)(*(int *)(param_1 + 0x160) + 0x158);
  }
  iVar1 = (piVar2[1] - 1U & *(uint *)(param_2 + 0x174)) * 0xc;
  *(int *)(*piVar2 + iVar1 + 4) = *(int *)(*piVar2 + iVar1 + 4) + -1;
  iVar4 = **(int **)(*(int *)(param_1 + 0x160) + 0x158);
  if (*(int *)(iVar4 + iVar1) == param_2 + 0x158) {
    *(undefined4 *)(iVar4 + iVar1) = *(undefined4 *)(param_2 + 0x168);
  }
  iVar1 = *(int *)(param_2 + 0x168);
  if (*(int *)(param_2 + 0x164) != 0) {
    *(int *)(*(int *)(param_2 + 0x164) + 0x10) = iVar1;
    iVar1 = *(int *)(param_2 + 0x168);
  }
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_2 + 0x164);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x160) + 0x158);
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
  return;
}

