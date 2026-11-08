// FUN_0003fe90 @ 0003fe90  size=300  callers=1
// program: bmminer


undefined4 FUN_0003fe90(void)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  
  if (DAT_000bfb48 == 3) {
    iVar1 = FUN_00019e18();
  }
  else if (DAT_000bfb48 == 4) {
    iVar1 = FUN_00019f38();
  }
  else {
    iVar1 = FUN_00019d24();
  }
  pcVar2 = (char *)FUN_0002a4e4();
  iVar3 = strcmp(pcVar2,"H6HB70601");
  if (iVar3 != 0) {
    pcVar2 = (char *)FUN_0002a4e4();
    iVar3 = strcmp(pcVar2,"H6HB70801");
    if (iVar3 != 0) {
      pcVar2 = (char *)FUN_0002a4e4();
      iVar3 = strcmp(pcVar2,"H6HB70802");
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
    }
  }
  if (iVar1 < 0x19) {
    uVar4 = 0x1e;
  }
  else if (iVar1 < 0x1e) {
    uVar4 = 0x14;
  }
  else if (iVar1 < 0x20) {
    uVar4 = 10;
  }
  else {
    uVar4 = 0;
  }
  fVar5 = (float)FUN_00024efc();
  iVar1 = (int)fVar5;
  if (iVar1 < 0x170d) {
    if (iVar1 < 0x16a9) {
      if (0x1644 < iVar1) {
        uVar4 = 0xfffffff1;
      }
    }
    else {
      uVar4 = 0xffffffec;
    }
  }
  else {
    uVar4 = 0xffffffe7;
  }
  return uVar4;
}

