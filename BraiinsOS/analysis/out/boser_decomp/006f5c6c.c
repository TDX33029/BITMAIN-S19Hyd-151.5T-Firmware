// FUN_006f5c6c @ 006f5c6c size=296 calls_out=4 calls_in=1
// strings: 

ulonglong FUN_006f5c6c(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  int local_38;
  int iStack_34;
  int iStack_30;
  
  iVar3 = *param_1;
  uVar1 = param_1[1];
  if ((iVar3 == 1) && ((uint)param_1[2] <= uVar1)) goto LAB_006f5d84;
  if (iVar3 == 0) {
    uVar6 = param_1[5];
    local_38 = param_1[0x20];
    iStack_34 = param_1[0x21];
    iStack_30 = param_1[0x22];
LAB_006f5cf0:
    iVar3 = param_1[0x24];
    *(bool *)(param_1 + 0x24) = (char)iVar3 != '\x01';
    iVar2 = param_1[0x20];
    iVar4 = param_1[0x21];
    iVar5 = param_1[0x22];
    FUN_00700e8c(param_1 + 0xc);
    uVar7 = FUN_006e8748(param_1);
    param_1 = (int *)(uVar7 >> 0x20);
    param_1[0x20] = iVar2;
    param_1[0x21] = iVar4;
    param_1[0x22] = iVar5;
    *(char *)(param_1 + 0x24) = (char)iVar3;
    if ((uVar7 & 1) == 0) {
      FUN_00700d14(param_1 + 0xc);
      goto LAB_006f5d5c;
    }
    FUN_00700d14(param_1 + 0xc);
    uVar7 = FUN_006f581c(param_1);
  }
  else {
    param_1[1] = uVar1 + 1;
    uVar6 = param_1[5];
    local_38 = param_1[0x20];
    iStack_34 = param_1[0x21];
    iStack_30 = param_1[0x22];
    if ((iVar3 == 0) || (uVar1 + 1 < (uint)param_1[2])) {
      param_1[1] = uVar1 + 2;
      goto LAB_006f5cf0;
    }
LAB_006f5d5c:
    uVar7 = CONCAT44(param_1,1);
  }
  param_1 = (int *)(uVar7 >> 0x20);
  if ((uVar7 & 1) == 0) {
    return uVar7;
  }
  param_1[0x20] = local_38;
  param_1[0x21] = iStack_34;
  param_1[0x22] = iStack_30;
  if (uVar6 <= (uint)param_1[5]) {
    param_1[5] = uVar6;
  }
LAB_006f5d84:
  return CONCAT44(param_1,1);
}

