// FUN_016cb95c @ 016cb95c size=608 calls_out=3 calls_in=0
// strings: 

void FUN_016cb95c(int *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 local_54;
  undefined4 *local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 *local_40;
  undefined1 local_39;
  undefined4 *local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  
  uVar5 = *param_2;
  pcVar3 = *(code **)(param_2[1] + 0xc);
  puVar4 = (undefined4 *)*param_1;
  iVar2 = (*pcVar3)(uVar5,1,0);
  local_4c = (undefined1)iVar2;
  local_4b = 1;
  local_54 = 0;
  local_50 = param_2;
  uVar1 = 1;
  if (iVar2 != 0) goto LAB_016cb9a4;
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar2 = (*pcVar3)(uVar5,"(",1);
    uVar1 = 1;
    if (iVar2 != 0) goto LAB_016cb9a4;
    local_38 = puVar4;
    iVar2 = FUN_013032f4(param_2,&DAT_004cf6c1,10,&local_38,FUN_015fc038);
  }
  else {
    iVar2 = (*pcVar3)(uVar5,"(\n",2);
    if (iVar2 != 0) goto LAB_016cb9a4;
    local_48 = *param_2;
    local_44 = param_2[1];
    local_40 = &local_39;
    local_38 = &local_48;
    local_30 = param_2[2];
    local_2c = param_2[3];
    local_39 = 1;
    local_34 = &DAT_01ce45f8;
    local_28 = puVar4;
    iVar2 = FUN_013032f4(&local_38,&DAT_004cf6c1,10,&local_28,FUN_015fc038);
    uVar1 = 1;
    if (iVar2 != 0) goto LAB_016cb9a4;
    iVar2 = (**(code **)(local_34 + 0xc))(local_38,&DAT_005312e2,2);
    local_4c = (undefined1)iVar2;
    local_54 = 1;
  }
  uVar1 = 1;
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00533bc1,2);
      uVar1 = 1;
      if (iVar2 != 0) goto LAB_016cb9a4;
      local_38 = puVar4 + 1;
      uVar1 = FUN_013032f4(param_2,&DAT_004cf6c1,10,&local_38,FUN_015fc038);
    }
    else {
      local_30 = param_2[2];
      local_2c = param_2[3];
      local_48 = *param_2;
      local_44 = param_2[1];
      local_40 = &local_39;
      local_38 = &local_48;
      local_39 = 1;
      local_34 = &DAT_01ce45f8;
      local_28 = puVar4 + 1;
      iVar2 = FUN_013032f4(&local_38,&DAT_004cf6c1,10,&local_28,FUN_015fc038);
      uVar1 = 1;
      if (iVar2 != 0) goto LAB_016cb9a4;
      uVar1 = (**(code **)(local_34 + 0xc))(local_38,&DAT_005312e2,2);
    }
  }
LAB_016cb9a4:
  local_4c = uVar1;
  local_54 = 2;
  FUN_01302aa0(&local_54);
  return;
}

