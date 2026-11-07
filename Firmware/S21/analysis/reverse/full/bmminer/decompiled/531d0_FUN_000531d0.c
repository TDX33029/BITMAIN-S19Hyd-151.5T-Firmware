// FUN_000531d0 @ 000531d0  size=532  callers=1
// program: bmminer


void FUN_000531d0(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = FUN_0002af44();
  iVar2 = FUN_0002af54();
  if (iVar1 <= iVar2) {
    iVar1 = FUN_0002af44();
    iVar2 = FUN_0002af5c();
    if ((iVar2 <= iVar1) || (iVar1 = FUN_0002af44(), iVar1 == 0)) {
      DAT_008c721c = 0;
      DAT_008c7220 = 0;
      return;
    }
    DAT_008c721c = 0;
    DAT_008c7220 = DAT_008c7220 + 1;
    goto LAB_00053238;
  }
  DAT_008c7220 = 0;
  DAT_008c721c = DAT_008c721c + 1;
  if (DAT_008c721c < 4) {
    return;
  }
  pcVar3 = (char *)FUN_0002a4e4();
  iVar1 = strcmp(pcVar3,"H6HB70601");
  if (iVar1 == 0) {
LAB_00053224:
    uVar5 = 0x15e;
  }
  else {
    pcVar3 = (char *)FUN_0002a4e4();
    iVar1 = strcmp(pcVar3,"H6HB70602");
    if (iVar1 == 0) goto LAB_00053224;
    pcVar3 = (char *)FUN_0002a4e4();
    iVar1 = strcmp(pcVar3,"H6HB70501");
    if (iVar1 == 0) goto LAB_00053224;
    pcVar3 = (char *)FUN_0002a4e4();
    iVar1 = strcmp(pcVar3,"H6HB70801");
    if (iVar1 == 0) {
LAB_00053300:
      uVar5 = 500;
    }
    else {
      pcVar3 = (char *)FUN_0002a4e4();
      iVar1 = strcmp(pcVar3,"H6HB70802");
      if (iVar1 == 0) goto LAB_00053300;
      uVar5 = 0x18b;
    }
  }
  if (uVar5 < DAT_008c7040) {
    DAT_008c7040 = DAT_008c7040 - 0x14;
    FUN_0004e520();
    DAT_008c7218 = 1;
    DAT_008c721c = 0;
  }
LAB_00053238:
  if (DAT_008c7220 < 10) {
    return;
  }
  if (DAT_008c703c <= DAT_008c7040) {
    return;
  }
  if (DAT_000c94e8 == 2) {
    iVar1 = FUN_0004e46c();
    DAT_008c7040 = DAT_008c7040 + 0x14;
    if (DAT_000c94e8 == 2) {
      iVar6 = FUN_0004e46c();
      iVar2 = iVar1 - iVar6;
    }
    else {
      iVar6 = 0;
      iVar2 = iVar1;
    }
    iVar4 = FUN_00024c74();
    if (iVar6 < iVar1) {
      FUN_000246cc(iVar4 + iVar2,3);
      sleep(3);
      FUN_0004e520(DAT_008c7040 + -0x14);
      sleep(2);
      DAT_008c7218 = 1;
      DAT_008c7220 = 0;
      return;
    }
  }
  else {
    DAT_008c7040 = DAT_008c7040 + 0x14;
    FUN_00024c74();
  }
  FUN_0004e520(DAT_008c7040 + -0x14);
  DAT_008c7218 = 1;
  DAT_008c7220 = 0;
  return;
}

