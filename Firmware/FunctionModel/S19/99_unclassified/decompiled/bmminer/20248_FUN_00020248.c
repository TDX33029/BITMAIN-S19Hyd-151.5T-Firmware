// FUN_00020248 @ 00020248  size=68  callers=2
// program: bmminer


int FUN_00020248(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_0071c434 < 1) {
    return 0;
  }
  iVar2 = 0;
  iVar3 = 0;
  do {
    iVar1 = iVar3 * 8;
    iVar3 = iVar3 + 1;
    if (*(char *)(DAT_0071c450 + iVar1) != '\0') {
      iVar2 = iVar2 + 1;
    }
  } while (iVar3 != DAT_0071c434);
  return iVar2;
}

