// FUN_00050d70 @ 00050d70  size=392  callers=6
// program: bmminer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00050d70(uint param_1)

{
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint local_2024;
  char acStack_2020 [8196];
  
  pcVar3 = (char *)FUN_0002a4e4();
  iVar4 = strcmp(pcVar3,"HHB68701");
  if (iVar4 == 0) {
    _DAT_000be904 = CONCAT11(5,DAT_000be904);
  }
  else {
    pcVar3 = (char *)FUN_0002a4e4();
    iVar4 = strcmp(pcVar3,"HHB68502");
    if (iVar4 != 0) {
      pcVar3 = (char *)FUN_0002a4e4();
      iVar4 = strcmp(pcVar3,"HHB68501");
      if (iVar4 != 0) {
        _DAT_000be904 = CONCAT11((char)DAT_000c94dc,DAT_000be904);
        goto LAB_00050da8;
      }
    }
    _DAT_000be904 = CONCAT11(4,DAT_000be904);
  }
LAB_00050da8:
  bVar1 = true;
  iVar4 = 0;
  _DAT_000be904 = CONCAT12((char)DAT_000c94e0,_DAT_000be904);
  local_2024 = 0x267;
  do {
    iVar5 = FUN_0002a6f0(iVar4);
    if ((iVar5 != 0) &&
       (FUN_0001c934(iVar4,(undefined1)DAT_000c94e8,&local_2024), 0x267 < local_2024)) {
      bVar1 = false;
    }
    uVar2 = _DAT_000be904;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  if (bVar1) {
    _DAT_000be904 = CONCAT11(4,DAT_000be904);
    DAT_000be904_2._1_1_ = SUB41(uVar2,3);
    _DAT_000be904 = CONCAT12(6,_DAT_000be904);
  }
  if (param_1 < DAT_000be63c) {
    snprintf(acStack_2020,0x2000,"pulse_mode = %d, ccdly_sel = %d, pwth_sel = %d\n",
             _DAT_000be904 & 0xff,_DAT_000be904 >> 0x10 & 0xff,_DAT_000be904 >> 8 & 0xff);
    FUN_0004948c(param_1,acStack_2020,0);
  }
  return _DAT_000be904 & 0xffffff;
}

