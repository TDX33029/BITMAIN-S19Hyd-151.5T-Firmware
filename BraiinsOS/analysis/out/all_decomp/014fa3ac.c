// FUN_014fa3ac @ 014fa3ac size=664 calls_out=5 calls_in=1
// strings: {recursion limit reached}

undefined4 FUN_014fa3ac(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  int local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  bVar1 = FUN_014fa664();
  if (bVar1 == 2) {
    return 1;
  }
  if (((*param_1 == 0) || (uVar6 = param_1[2], (uint)param_1[1] <= uVar6)) ||
     (*(char *)(*param_1 + uVar6) != 'p')) {
    if ((bVar1 & 1) == 0) {
      return 0;
    }
LAB_014fa43c:
    if (param_1[4] == 0) {
      return 0;
    }
    uVar5 = FUN_00faace8(param_1[4],">",1);
    return uVar5;
  }
  iVar2 = param_1[4];
  param_1[2] = uVar6 + 1;
  if ((bVar1 & 1) == 0) {
    if ((iVar2 != 0) && (iVar2 = FUN_00faace8(iVar2,"<",1), iVar2 != 0)) {
      return 1;
    }
  }
  else if ((iVar2 != 0) && (iVar2 = FUN_00faace8(iVar2,&DAT_0041950f,2), iVar2 != 0)) {
    return 1;
  }
  FUN_014f67cc(&local_40,param_1);
  if (local_40 != 0) {
    iVar2 = param_1[4];
    local_30 = local_40;
    uStack_2c = local_3c;
    uStack_28 = uStack_38;
    uStack_24 = uStack_34;
    if (iVar2 != 0) {
      iVar3 = FUN_014f6a3c(&local_30,iVar2);
      if (iVar3 != 0) {
        return 1;
      }
      iVar2 = FUN_00faace8(iVar2," = ",3);
      if (iVar2 != 0) {
        return 1;
      }
    }
    iVar2 = FUN_014f7080(param_1);
    if (iVar2 != 0) {
      return 1;
    }
    while (((*param_1 != 0 && (uVar6 = param_1[2], uVar6 < (uint)param_1[1])) &&
           (*(char *)(*param_1 + uVar6) == 'p'))) {
      param_1[2] = uVar6 + 1;
      if ((param_1[4] != 0) && (iVar2 = FUN_00faace8(param_1[4],&DAT_0041950f,2), iVar2 != 0)) {
        return 1;
      }
      FUN_014f67cc(&local_40,param_1);
      if (local_40 == 0) goto LAB_014fa5e0;
      iVar2 = param_1[4];
      local_30 = local_40;
      uStack_2c = local_3c;
      uStack_28 = uStack_38;
      uStack_24 = uStack_34;
      if (iVar2 != 0) {
        iVar3 = FUN_014f6a3c(&local_30,iVar2);
        if (iVar3 != 0) {
          return 1;
        }
        iVar2 = FUN_00faace8(iVar2," = ",3);
        if (iVar2 != 0) {
          return 1;
        }
      }
      iVar2 = FUN_014f7080(param_1);
      if (iVar2 != 0) {
        return 1;
      }
    }
    goto LAB_014fa43c;
  }
LAB_014fa5e0:
  iVar2 = param_1[4];
  if ((char)local_3c == '\0') {
    if (iVar2 == 0) goto LAB_014fa630;
    uVar5 = 0x10;
    pcVar4 = &DAT_00564580;
  }
  else {
    if (iVar2 == 0) goto LAB_014fa630;
    uVar5 = 0x19;
    pcVar4 = "{recursion limit reached}";
  }
  iVar2 = FUN_00faace8(iVar2,pcVar4,uVar5);
  if (iVar2 != 0) {
    return 1;
  }
LAB_014fa630:
  *(char *)(param_1 + 1) = (char)local_3c;
  *param_1 = 0;
  return 0;
}

