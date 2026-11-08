// FUN_00052850 @ 00052850  size=84  callers=1
// program: bmminer


void FUN_00052850(void)

{
  int iVar1;
  char *__src;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = FUN_0002a6f0(iVar2);
    if (iVar1 != 0) {
      FUN_0001c678(iVar2,&DAT_008c70d8 + iVar2 * 0x40,0x40);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  __src = (char *)FUN_00074d68();
  strncpy(&DAT_008c71d8,__src,0x40);
  return;
}

