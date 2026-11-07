// FUN_000219fc @ 000219fc  size=316  callers=0
// program: bmminer


void FUN_000219fc(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char acStack_818 [2052];
  
  if (param_1 == 0) {
    if (((DAT_0071e84c == '\0') && (DAT_0048d36d == '\0')) && (DAT_00087bc4 < 3)) {
      return;
    }
    snprintf(acStack_818,0x800,"%s: input bad json param\n","api_miner_fan_speed");
    FUN_00032218(3,acStack_818,0);
    return;
  }
  uVar1 = FUN_00055ce0();
  pcVar2 = (char *)FUN_0001fffc();
  iVar3 = strcmp(pcVar2,"HHB28601");
  if (iVar3 != 0) {
    pcVar2 = (char *)FUN_0001fffc();
    iVar3 = strcmp(pcVar2,"HHB28602");
    if (iVar3 != 0) {
      iVar3 = FUN_00020238();
      if (0 < iVar3) {
        iVar5 = 0;
        do {
          iVar6 = iVar5 + 1;
          iVar5 = FUN_00020378(iVar5);
          uVar4 = FUN_00056130(iVar5,iVar5 >> 0x1f);
          FUN_00056c34(uVar1,uVar4);
          iVar5 = iVar6;
        } while (iVar3 != iVar6);
      }
      goto LAB_00021a54;
    }
  }
  iVar3 = 4;
  do {
    uVar4 = FUN_00056130(0,0);
    FUN_00056c34(uVar1,uVar4);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
LAB_00021a54:
  FUN_00056774(param_1,&DAT_00069cac,uVar1);
  return;
}

