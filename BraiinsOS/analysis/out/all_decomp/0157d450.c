// FUN_0157d450 @ 0157d450 size=480 calls_out=6 calls_in=7
// strings: 

/* WARNING: Removing unreachable block (ram,0x0157d698) */

undefined4 FUN_0157d450(int *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  undefined2 local_38;
  undefined4 local_34;
  undefined4 local_30 [3];
  
switchD_0157d4d0_caseD_0:
  FUN_0157d790(param_1);
  uVar4 = param_1[1];
  uVar3 = param_1[2];
  if (uVar3 == uVar4) {
    local_30[0] = 4;
    goto LAB_0157d72c;
  }
  if (uVar4 <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar3,uVar4,&DAT_018a94d4);
  }
  iVar6 = *param_1;
  if (*(char *)(iVar6 + uVar3) != '\\') {
    if (*(char *)(iVar6 + uVar3) == '\"') {
      param_1[2] = uVar3 + 1;
      return 0;
    }
    local_30[0] = 0x10;
    goto LAB_0157d72c;
  }
  uVar5 = uVar3 + 1;
  param_1[2] = uVar5;
  if (uVar5 < uVar4) {
    bVar1 = *(byte *)(iVar6 + uVar5);
    uVar5 = uVar3 + 2;
    param_1[2] = uVar5;
  }
  else {
    local_30[0] = 4;
    FUN_0157d8ec(&local_38,param_1,local_30);
    if ((char)local_38 != '\0') {
      return local_34;
    }
    bVar1 = local_38._1_1_;
  }
  if (0x53 < bVar1 - 0x22) goto switchD_0157d4d0_caseD_1;
  switch(bVar1 - 0x22) {
  case 0:
  case 0xd:
  case 0x3a:
  case 0x40:
  case 0x44:
  case 0x4c:
  case 0x50:
  case 0x52:
    goto switchD_0157d4d0_caseD_0;
  default:
switchD_0157d4d0_caseD_1:
    local_30[0] = 0xc;
LAB_0157d72c:
    uVar2 = FUN_0157d8a0(param_1,local_30);
    return uVar2;
  case 0x53:
    if (uVar4 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar5,uVar4,uVar4,&DAT_018a94e4);
    }
    if (uVar4 - uVar5 < 4) {
      param_1[2] = uVar4;
      local_30[0] = 4;
    }
    else {
      pbVar7 = (byte *)(iVar6 + uVar5);
      bVar1 = *pbVar7;
      param_1[2] = uVar5 + 4;
      if (-1 < (short)(*(ushort *)(&DAT_0040e9d0 + (uint)pbVar7[1] * 2) |
                       *(ushort *)(&DAT_0040ebd0 + (uint)bVar1 * 2) |
                       *(ushort *)(&DAT_0040ebd0 + (uint)pbVar7[2] * 2) |
                      *(ushort *)(&DAT_0040e9d0 + (uint)pbVar7[3] * 2))) {
        local_38 = 0;
        goto switchD_0157d4d0_caseD_0;
      }
      local_30[0] = 0xc;
    }
    FUN_0157d948(&local_38,param_1,local_30);
    if (local_38 == 1) {
      return local_34;
    }
    goto switchD_0157d4d0_caseD_0;
  }
}

