// FUN_00b1467c @ 00b1467c size=180 calls_out=1 calls_in=1
// strings: 

void FUN_00b1467c(undefined4 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  iVar2 = *param_2;
  iVar3 = param_2[1];
  if (iVar2 == iVar3) {
    iVar4 = param_2[2];
    iVar5 = param_2[3];
    param_2[2] = iVar2;
    *param_2 = iVar4;
    param_2[1] = iVar5;
    param_2[3] = iVar3;
    if ((iVar4 == iVar5) || (*param_2 = iVar4 + 0x2c, iVar4 == 0)) {
      *param_1 = 0x80000000;
      return;
    }
  }
  else {
    *param_2 = iVar2 + 0x2c;
    iVar4 = iVar2;
  }
  FUN_006666fc(&local_50,*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8));
  uVar1 = *(undefined1 *)(iVar4 + 0x28);
  local_38 = *(undefined4 *)(iVar4 + 0x18);
  uStack_34 = *(undefined4 *)(iVar4 + 0x1c);
  uStack_30 = *(undefined4 *)(iVar4 + 0x20);
  uStack_2c = *(undefined4 *)(iVar4 + 0x24);
  FUN_006666fc(&uStack_44,*(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(iVar4 + 0x14));
  local_28 = CONCAT31(local_28._1_3_,uVar1);
  *param_1 = local_50;
  param_1[1] = uStack_4c;
  param_1[2] = uStack_48;
  param_1[3] = uStack_44;
  param_1[4] = uStack_40;
  param_1[5] = local_3c;
  param_1[6] = local_38;
  param_1[7] = uStack_34;
  param_1[8] = uStack_30;
  param_1[9] = uStack_2c;
  param_1[10] = local_28;
  return;
}

