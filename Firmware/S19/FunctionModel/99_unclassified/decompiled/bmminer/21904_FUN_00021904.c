// FUN_00021904 @ 00021904  size=244  callers=0
// program: bmminer


void FUN_00021904(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  char acStack_810 [2052];
  
  if (param_1 == 0) {
    if (((DAT_0071e84c == '\0') && (DAT_0048d36d == '\0')) && (DAT_00087bc4 < 3)) {
      return;
    }
    snprintf(acStack_810,0x800,"%s: input bad json param\n","api_miner_fan_num");
    FUN_00032218(3,acStack_810,0);
    return;
  }
  iVar1 = FUN_00020248();
  pcVar2 = (char *)FUN_0001fffc();
  iVar3 = strcmp(pcVar2,"HHB28601");
  if (iVar3 != 0) {
    pcVar2 = (char *)FUN_0001fffc();
    iVar3 = strcmp(pcVar2,"HHB28602");
    if (iVar3 != 0) {
      iVar3 = iVar1 >> 0x1f;
      goto LAB_00021940;
    }
  }
  iVar1 = 4;
  iVar3 = 0;
LAB_00021940:
  uVar4 = FUN_00056130(iVar1,iVar3);
  FUN_00056774(param_1,"fan_num",uVar4);
  return;
}

