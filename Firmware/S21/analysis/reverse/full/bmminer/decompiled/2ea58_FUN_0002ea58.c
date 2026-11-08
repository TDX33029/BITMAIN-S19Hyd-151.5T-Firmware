// FUN_0002ea58 @ 0002ea58  size=316  callers=0
// program: bmminer


void FUN_0002ea58(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  char acStack_2010 [8196];
  
  if (param_1 == 0) {
    if (((DAT_00a5d20d == '\0') && (DAT_008c702d == '\0')) && (DAT_000be644 < 3)) {
      return;
    }
    snprintf(acStack_2010,0x2000,"%s: input bad json param\n","api_miner_fan_num");
    FUN_0004948c(3,acStack_2010,0);
    return;
  }
  iVar1 = FUN_0002a760();
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
          if (iVar3 != 0) {
            iVar3 = iVar1 >> 0x1f;
            goto LAB_0002ea94;
          }
        }
      }
    }
  }
  iVar1 = 0;
  iVar3 = 0;
LAB_0002ea94:
  uVar4 = FUN_00080784(iVar1,iVar3);
  FUN_0007ec50(param_1,"fan_num",uVar4);
  return;
}

