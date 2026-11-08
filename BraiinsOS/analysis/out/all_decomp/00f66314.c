// FUN_00f66314 @ 00f66314 size=348 calls_out=1 calls_in=3
// strings: 

void FUN_00f66314(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  FUN_00f63940(&local_38);
  iVar2 = local_38;
  if (local_30 == 0x3b9aca10) {
    iVar5 = 0xc;
    uVar4 = 0;
    iVar6 = 8;
    iVar3 = 4;
    if ((param_2[1] == 0) || (*(char *)*param_2 != ':')) {
      iVar1 = 0;
LAB_00f66438:
      local_38 = 0;
      goto LAB_00f6643c;
    }
    param_2[1] = param_2[1] + -1;
    *param_2 = (char *)*param_2 + 1;
    param_2[2] = param_2[2] + 1;
    FUN_00f63940(&local_38,param_2);
    iVar1 = local_38;
    if (local_30 == 0x3b9aca10) {
      if ((param_2[1] == 0) || (*(char *)*param_2 != ':')) goto LAB_00f66438;
      param_2[1] = param_2[1] + -1;
      *param_2 = (char *)*param_2 + 1;
      param_2[2] = param_2[2] + 1;
      FUN_00f63940(&local_38,param_2);
      if (local_30 == 0x3b9aca10) goto LAB_00f6643c;
    }
    param_1[2] = local_38;
    iVar1 = local_30;
    iVar2 = local_34;
    local_38 = local_2c;
  }
  else {
    param_1[2] = local_38;
    iVar1 = local_30;
    iVar2 = local_34;
    local_38 = local_2c;
  }
  uVar4 = 1;
  iVar5 = 0x14;
  iVar6 = 0x10;
  iVar3 = 0xc;
LAB_00f6643c:
  *(int *)((int)param_1 + iVar3) = iVar2;
  *(int *)((int)param_1 + iVar6) = iVar1;
  *(int *)((int)param_1 + iVar5) = local_38;
  *param_1 = uVar4;
  return;
}

