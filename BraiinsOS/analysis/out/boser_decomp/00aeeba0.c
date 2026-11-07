// FUN_00aeeba0 @ 00aeeba0 size=216 calls_out=4 calls_in=1
// strings: 

void FUN_00aeeba0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_50;
  int local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  iVar4 = *param_2;
  iVar5 = param_2[5];
  iVar6 = param_2[6];
  iVar3 = param_2[1];
  local_28 = param_2[2];
  iVar2 = param_2[3];
  local_38 = 2;
  if (iVar4 == -0x80000000) {
    local_38 = 8;
  }
  *param_2 = -0x80000000;
  local_34 = iVar5;
  local_30 = iVar4;
  local_2c = iVar3;
  local_24 = iVar6;
  iVar1 = FUN_0167459c(iVar2);
  if (iVar1 == 0) {
    FUN_00ad98e0(&local_50,&local_38,iVar2);
    if ((char)local_50 != '\x06') {
      *param_1 = local_50;
      param_1[1] = local_4c;
      param_1[2] = uStack_48;
      param_1[3] = uStack_44;
      param_1[4] = uStack_40;
      param_1[5] = uStack_3c;
      return;
    }
  }
  else {
    local_50 = CONCAT31(local_50._1_3_,6);
    local_4c = iVar1;
    if (iVar4 != -0x80000000) {
      FUN_019bb7e0(iVar4,iVar3);
    }
  }
  iVar2 = local_4c;
  local_38 = local_4c;
  FUN_0196bf0c(iVar6,iVar5);
  param_1[1] = iVar2;
  *(undefined1 *)param_1 = 6;
  return;
}

