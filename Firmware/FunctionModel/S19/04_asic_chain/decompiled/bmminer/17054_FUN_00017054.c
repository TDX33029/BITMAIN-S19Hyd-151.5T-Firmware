// FUN_00017054 @ 00017054  size=352  callers=1
// program: bmminer


int FUN_00017054(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint param5;
  int iVar5;
  char acStack_820 [2052];
  
  iVar1 = param_1 * 0x100;
  uVar2 = FUN_0002009c();
  iVar3 = FUN_00067408(param_2,uVar2);
  param5 = (uint)*(byte *)(iVar1 + iVar3 + 0x88844);
  if (param5 == 0) {
    for (iVar5 = 0;
        (iVar4 = FUN_00017028(), iVar5 < iVar4 && (*(int *)(DAT_00088824 + iVar5 * 4) != iVar3));
        iVar5 = iVar5 + 1) {
    }
    iVar4 = FUN_00017028();
    if (iVar5 < iVar4) {
      iVar4 = FUN_0001d4a4();
      if (iVar4 == 0) {
        iVar4 = FUN_00017028();
        param5 = iVar4 - iVar5;
      }
      else {
        param5 = iVar5 + 1;
      }
      *(char *)(iVar1 + iVar3 + 0x88844) = (char)param5;
      goto LAB_0001713c;
    }
    if (*(char *)(iVar1 + param_2 + 0x88c44) != '\0') {
      return -1;
    }
    param5 = 0xffffffff;
  }
  else {
LAB_0001713c:
    if (*(char *)(iVar1 + param_2 + 0x88c44) != '\0') goto LAB_00017108;
  }
  if (DAT_00087bbc < 5) {
    *(undefined1 *)(iVar1 + param_2 + 0x88c44) = 1;
  }
  else {
    snprintf(acStack_820,0x800,"chain %d chip_addr %d => pos %d (%d)\n",param_1,param_2,param5,
             param5 - 1);
    FUN_00032218(4,acStack_820,0);
    *(undefined1 *)(iVar1 + param_2 + 0x88c44) = 1;
  }
LAB_00017108:
  if ((int)param5 < 1) {
    return -1;
  }
  return param5 - 1;
}

