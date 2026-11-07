// FUN_0002eb98 @ 0002eb98  size=352  callers=0
// program: bmminer


void FUN_0002eb98(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char acStack_2018 [8196];
  
  if (param_1 == 0) {
    if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
      snprintf(acStack_2018,0x2000,"%s: input bad json param\n","api_miner_fan_speed");
      FUN_0004948c(3,acStack_2018,0);
      return;
    }
  }
  else {
    uVar1 = FUN_0007f548();
    pcVar2 = (char *)FUN_0002a4e4();
    iVar3 = strcmp(pcVar2,"H6HB70601");
    if (iVar3 != 0) {
      pcVar2 = (char *)FUN_0002a4e4();
      iVar3 = strcmp(pcVar2,"H6HB70602");
      if (iVar3 != 0) {
        pcVar2 = (char *)FUN_0002a4e4();
        iVar3 = strcmp(pcVar2,"H6HB70801");
        if (iVar3 != 0) {
          pcVar2 = (char *)FUN_0002a4e4();
          iVar3 = strcmp(pcVar2,"H6HB70802");
          if (iVar3 != 0) {
            pcVar2 = (char *)FUN_0002a4e4();
            iVar3 = strcmp(pcVar2,"H6HB70501");
            if ((iVar3 != 0) && (iVar3 = FUN_0002a750(), 0 < iVar3)) {
              iVar4 = 0;
              do {
                iVar6 = iVar4 + 1;
                iVar4 = FUN_0002a890(iVar4);
                uVar5 = FUN_00080784(iVar4,iVar4 >> 0x1f);
                FUN_0007f9e4(uVar1,uVar5);
                iVar4 = iVar6;
              } while (iVar3 != iVar6);
            }
          }
        }
      }
    }
    FUN_0007ec50(param_1,&DAT_0009c740,uVar1);
  }
  return;
}

