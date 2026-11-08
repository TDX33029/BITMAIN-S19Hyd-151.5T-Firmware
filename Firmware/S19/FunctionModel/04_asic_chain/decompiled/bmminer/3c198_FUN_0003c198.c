// FUN_0003c198 @ 0003c198  size=176  callers=1
// program: bmminer


bool FUN_0003c198(int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar4;
  char *pcVar3;
  int iVar5;
  int iVar6;
  char acStack_810 [2048];
  
  iVar5 = *(int *)(DAT_00507484 + 4);
  if (4 < DAT_00087bbc) {
    snprintf(acStack_810,0x800,"[DEBUG] Check if read reg done, chain = %d, done_threshold = %d.\n",
             param_1,1);
    FUN_00032218(4,acStack_810,0);
  }
  iVar1 = FUN_0002002c();
  iVar6 = 0;
  if (iVar1 != 0) {
    pcVar2 = (char *)(iVar5 + param_1 * 0x100);
    iVar6 = 0;
    pcVar4 = pcVar2;
    do {
      pcVar3 = pcVar4 + 1;
      if (*pcVar4 != '\0') {
        iVar6 = iVar6 + 1;
      }
      pcVar4 = pcVar3;
    } while (pcVar3 != pcVar2 + iVar1);
  }
  iVar5 = FUN_0002002c();
  return iVar5 == iVar6;
}

