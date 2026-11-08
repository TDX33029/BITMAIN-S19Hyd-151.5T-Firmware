// FUN_0004e344 @ 0004e344  size=224  callers=1
// program: bmminer


uint FUN_0004e344(void)

{
  int iVar1;
  int iVar2;
  uint param3;
  uint uVar3;
  uint local_201c;
  char acStack_2018 [8192];
  
  param3 = 0;
  iVar2 = 0;
  local_201c = 0;
  do {
    iVar1 = FUN_0002a6f0(iVar2);
    if ((iVar1 != 0) &&
       (iVar1 = FUN_0001cf90(iVar2,(undefined1)DAT_000c94e8,&local_201c), iVar1 == 0)) {
      uVar3 = local_201c;
      if (local_201c <= param3) {
        uVar3 = param3;
      }
      param3 = uVar3;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  if (4 < DAT_000be63c) {
    snprintf(acStack_2018,0x2000,"max voltage in eeprom = %d\n",param3);
    FUN_0004948c(4,acStack_2018,0);
  }
  if (param3 - 1 < 0x76b) {
    param3 = 0x76c;
  }
  else if (param3 == 0) {
    param3 = 0xffffffff;
  }
  return param3;
}

