// FUN_0002a760 @ 0002a760  size=68  callers=2
// program: bmminer


int FUN_0002a760(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_00a4ee00 < 1) {
    return 0;
  }
  iVar2 = 0;
  iVar3 = 0;
  do {
    iVar1 = iVar3 * 8;
    iVar3 = iVar3 + 1;
    if (*(char *)(DAT_00a4ee18 + iVar1) != '\0') {
      iVar2 = iVar2 + 1;
    }
  } while (iVar3 != DAT_00a4ee00);
  return iVar2;
}

