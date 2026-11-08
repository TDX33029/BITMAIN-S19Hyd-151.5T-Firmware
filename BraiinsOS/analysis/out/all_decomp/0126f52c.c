// FUN_0126f52c @ 0126f52c size=436 calls_out=6 calls_in=1
// strings: 

void FUN_0126f52c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int local_48;
  int local_44;
  undefined4 local_40;
  int iStack_3c;
  undefined4 local_38 [2];
  undefined4 local_30;
  int local_2c;
  undefined1 uStack_21;
  
  uVar2 = *(uint *)(param_2 + 0x14);
  if (*(uint *)(param_2 + 0x10) <= uVar2) {
LAB_0126f60c:
    local_38[0] = 5;
    uVar1 = FUN_008f9984(param_2,local_38);
    *param_1 = 1;
    param_1[1] = uVar1;
    return;
  }
LAB_0126f54c:
  uVar3 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar2);
  switch(uVar3) {
  case 9:
  case 10:
  case 0xd:
  case 0x20:
    goto switchD_0126f564_caseD_9;
  default:
    if (9 < uVar3 - 0x30) {
      uVar1 = FUN_0126ecc0(param_2,&uStack_21,&DAT_0188b550);
      goto LAB_0126f6fc;
    }
    FUN_0134d6c8(&local_48,param_2,1);
    if (local_48 == 3 && local_44 == 0) {
      *param_1 = 1;
      param_1[1] = local_40;
      return;
    }
    break;
  case 0x2d:
    *(uint *)(param_2 + 0x14) = uVar2 + 1;
    FUN_0134d6c8(&local_48,param_2,0);
    if (local_48 == 3 && local_44 == 0) {
      *param_1 = 1;
      param_1[1] = local_40;
      return;
    }
  }
  if (local_48 == 1) {
    if (-1 < iStack_3c) goto LAB_0126f720;
    local_30 = local_40;
    local_2c = iStack_3c;
    uVar1 = FUN_0157cd6c(local_38,&uStack_21,&DAT_0188b550);
  }
  else {
    if (local_48 == 2) {
LAB_0126f720:
      param_1[2] = local_40;
      param_1[3] = iStack_3c;
      *param_1 = 0;
      return;
    }
    local_2c = iStack_3c;
    local_30 = local_40;
    uVar1 = FUN_0157cc00(local_38,&uStack_21,&DAT_0188b550);
  }
LAB_0126f6fc:
  uVar1 = FUN_00e959bc(uVar1,param_2);
  param_1[1] = uVar1;
  *param_1 = 1;
  return;
switchD_0126f564_caseD_9:
  uVar2 = uVar2 + 1;
  *(uint *)(param_2 + 0x14) = uVar2;
  if (*(uint *)(param_2 + 0x10) == uVar2) goto LAB_0126f60c;
  goto LAB_0126f54c;
}

