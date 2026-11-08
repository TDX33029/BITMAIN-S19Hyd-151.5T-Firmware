// FUN_000281f0 @ 000281f0  size=180  callers=2
// program: bmminer


uint FUN_000281f0(void)

{
  int iVar1;
  int iVar2;
  uint param3;
  uint local_201c;
  char acStack_2018 [8196];
  
  param3 = 0x7fffffff;
  iVar2 = 0;
  do {
    iVar1 = FUN_0002a6f0(iVar2);
    if (iVar1 != 0) {
      iVar1 = FUN_0001c934(iVar2,(undefined1)DAT_000c94e8,&local_201c);
      if (iVar1 == 0) {
        if (local_201c <= param3) {
          param3 = local_201c;
        }
      }
      else {
        param3 = 200;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  if (3 < DAT_000be63c) {
    snprintf(acStack_2018,0x2000,"chain min freq in eeprom = %d",param3);
    FUN_0004948c(3,acStack_2018,0);
  }
  return param3;
}

