// FUN_014ffde8 @ 014ffde8 size=372 calls_out=5 calls_in=2
// strings: {recursion limit reached}

uint FUN_014ffde8(int *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int local_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  if ((*param_1 != 0) && (uVar4 = param_1[2], uVar4 < (uint)param_1[1])) {
    cVar1 = *(char *)(*param_1 + uVar4);
    if (cVar1 == 'I') {
      param_1[2] = uVar4 + 1;
      iVar3 = FUN_014fbd90(param_1,0);
      if (iVar3 != 0) {
        return 2;
      }
      if ((param_1[4] != 0) && (iVar3 = FUN_00faace8(param_1[4],"<",1), iVar3 != 0)) {
        return 2;
      }
      uVar2 = FUN_014fd40c(param_1);
      uVar4 = 1;
      goto LAB_014ffea0;
    }
    if (cVar1 == 'B') {
      param_1[2] = uVar4 + 1;
      FUN_014ff2f0(&local_40,param_1);
      if (local_40 == 0) {
        if (param_1[4] != 0) {
          pcVar6 = &DAT_00564580;
          uVar5 = 0x10;
          if ((char)local_3c != '\0') {
            uVar5 = 0x19;
            pcVar6 = "{recursion limit reached}";
          }
          iVar3 = FUN_00faace8(param_1[4],pcVar6,uVar5);
          if (iVar3 != 0) {
            return 2;
          }
        }
        *param_1 = local_40;
        param_1[1] = local_3c;
        param_1[2] = iStack_38;
        param_1[3] = iStack_34;
      }
      else if (param_1[4] != 0) {
        local_30 = *param_1;
        iStack_2c = param_1[1];
        iStack_28 = param_1[2];
        iStack_24 = param_1[3];
        *param_1 = local_40;
        param_1[1] = local_3c;
        param_1[2] = iStack_38;
        param_1[3] = iStack_34;
        uVar4 = FUN_014ffde8(param_1);
        *param_1 = local_30;
        param_1[1] = iStack_2c;
        param_1[2] = iStack_28;
        param_1[3] = iStack_24;
        return uVar4 & 0xff;
      }
      return 0;
    }
  }
  uVar2 = FUN_014fbd90(param_1,0);
  uVar4 = uVar2;
LAB_014ffea0:
  if (uVar2 != 0) {
    uVar4 = 2;
  }
  return uVar4;
}

