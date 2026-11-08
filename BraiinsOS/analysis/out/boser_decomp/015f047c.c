// FUN_015f047c @ 015f047c size=480 calls_out=4 calls_in=0
// strings: 

void FUN_015f047c(int *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 local_4c;
  undefined4 *local_48;
  undefined1 local_44;
  undefined1 local_43;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 local_31;
  undefined4 *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar5 = *param_2;
  pcVar4 = *(code **)(param_2[1] + 0xc);
  iVar3 = *param_1;
  iVar2 = (*pcVar4)(uVar5,1,0);
  local_43 = 1;
  local_48 = param_2;
  uVar1 = 1;
  if (iVar2 != 0) goto LAB_015f04b8;
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar2 = (*pcVar4)(uVar5,"(",1);
    uVar1 = 1;
    if (iVar2 != 0) goto LAB_015f04b8;
    iVar2 = FUN_015fc038(iVar3,param_2);
  }
  else {
    iVar2 = (*pcVar4)(uVar5,"(\n",2);
    if (iVar2 != 0) goto LAB_015f04b8;
    local_40 = *param_2;
    uStack_3c = param_2[1];
    puStack_38 = &local_31;
    local_28 = param_2[2];
    local_24 = param_2[3];
    local_30 = &local_40;
    local_31 = 1;
    local_2c = &DAT_01ce45f8;
    iVar2 = FUN_015fc038(iVar3,&local_30);
    uVar1 = 1;
    if (iVar2 != 0) goto LAB_015f04b8;
    iVar2 = (**(code **)(local_2c + 0xc))(local_30,&DAT_005312e2,2);
    local_44 = (undefined1)iVar2;
    local_4c = 1;
  }
  uVar1 = 1;
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00533bc1,2);
      uVar1 = 1;
      if (iVar2 != 0) goto LAB_015f04b8;
      uVar1 = FUN_015f0090(iVar3 + 4,param_2);
    }
    else {
      local_28 = param_2[2];
      local_24 = param_2[3];
      local_40 = *param_2;
      uStack_3c = param_2[1];
      puStack_38 = &local_31;
      local_30 = &local_40;
      local_31 = 1;
      local_2c = &DAT_01ce45f8;
      iVar2 = FUN_015f0090(iVar3 + 4,&local_30);
      uVar1 = 1;
      if (iVar2 != 0) goto LAB_015f04b8;
      uVar1 = (**(code **)(local_2c + 0xc))(local_30,&DAT_005312e2,2);
    }
  }
LAB_015f04b8:
  local_44 = uVar1;
  local_4c = 2;
  FUN_01302aa0(&local_4c);
  return;
}

