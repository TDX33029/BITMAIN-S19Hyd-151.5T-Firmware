// FUN_000361d4 @ 000361d4  size=184  callers=1
// program: bmminer


uint FUN_000361d4(void)

{
  int iVar1;
  int iVar2;
  uint param3;
  uint local_814;
  char acStack_810 [2048];
  
  param3 = 0;
  iVar2 = 0;
  do {
    iVar1 = FUN_000201d8(iVar2);
    if (((iVar1 != 0) &&
        (iVar1 = FUN_0001bbd0(iVar2,(undefined1)DAT_0008a848,&local_814), iVar1 == 0)) &&
       (param3 < local_814)) {
      param3 = local_814;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  if (4 < DAT_00087bbc) {
    snprintf(acStack_810,0x800,"max voltage in eeprom = %d\n",param3);
    FUN_00032218(4,acStack_810,0);
  }
  if (param3 == 0) {
    param3 = 0xffffffff;
  }
  return param3;
}

