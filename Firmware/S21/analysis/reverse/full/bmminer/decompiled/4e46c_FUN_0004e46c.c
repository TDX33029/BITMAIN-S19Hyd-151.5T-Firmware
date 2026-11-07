// FUN_0004e46c @ 0004e46c  size=180  callers=1
// program: bmminer


undefined4 FUN_0004e46c(undefined4 param_1)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (DAT_008c703c <= DAT_008c7040) {
    return 0;
  }
  uVar1 = (DAT_008c703c - DAT_008c7040) / 0x14;
  pcVar2 = (char *)FUN_0002a4e4(param_1,DAT_008c703c,(DAT_008c703c - DAT_008c7040) * -0x33333333);
  iVar3 = strcmp(pcVar2,"H6HB70601");
  if (iVar3 != 0) {
    pcVar2 = (char *)FUN_0002a4e4();
    iVar3 = strcmp(pcVar2,"H6HB70602");
    if (iVar3 != 0) {
      pcVar2 = (char *)FUN_0002a4e4();
      iVar3 = strcmp(pcVar2,"H6HB70501");
      if (iVar3 != 0) {
        return 0;
      }
    }
  }
  if (uVar1 == 2) {
    return 10;
  }
  if (uVar1 == 3) {
    return 0xf;
  }
  if (uVar1 == 1) {
    uVar4 = 5;
  }
  else {
    uVar4 = 0x14;
  }
  return uVar4;
}

