// FUN_01435338 @ 01435338 size=496 calls_out=3 calls_in=0
// strings: ConnectError

void FUN_01435338(undefined4 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined4 local_4c;
  int *local_48;
  undefined1 local_44;
  undefined1 local_43;
  int local_40;
  int iStack_3c;
  undefined1 *puStack_38;
  undefined1 local_31;
  int *local_30;
  undefined *local_2c;
  int *local_28;
  int local_24;
  
  iVar3 = param_1[2];
  if (iVar3 == 0) {
    FUN_012fb170(*param_1,param_1[1],*param_2,param_2[1]);
    return;
  }
  iVar5 = *param_2;
  pcVar4 = *(code **)(param_2[1] + 0xc);
  iVar2 = (*pcVar4)(iVar5,"ConnectError",0xc);
  uVar1 = 1;
  local_43 = 0;
  local_48 = param_2;
  if (iVar2 != 0) goto LAB_01435388;
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar2 = (*pcVar4)(iVar5,"(",1);
    if (iVar2 != 0) goto LAB_01435388;
    iVar2 = FUN_012fb170(*param_1,param_1[1],*param_2,param_2[1]);
  }
  else {
    iVar2 = (*pcVar4)(iVar5,"(\n",2);
    if (iVar2 != 0) goto LAB_01435388;
    local_30 = (int *)*param_2;
    local_2c = (undefined *)param_2[1];
    local_28 = &local_40;
    local_40 = CONCAT31(local_40._1_3_,1);
    iVar2 = FUN_012fb170(*param_1,param_1[1],&local_30,&DAT_01ce45f8);
    uVar1 = 1;
    if (iVar2 != 0) goto LAB_01435388;
    iVar2 = FUN_01302620(&local_30,&DAT_005312e2,2);
    local_44 = (undefined1)iVar2;
    local_4c = 1;
  }
  uVar1 = 1;
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00533bc1,2);
      uVar1 = 1;
      if (iVar2 != 0) goto LAB_01435388;
      uVar1 = (**(code **)(param_1[3] + 0xc))(iVar3,param_2);
    }
    else {
      local_28 = (int *)param_2[2];
      local_24 = param_2[3];
      local_40 = *param_2;
      iStack_3c = param_2[1];
      puStack_38 = &local_31;
      local_30 = &local_40;
      local_31 = 1;
      local_2c = &DAT_01ce45f8;
      iVar3 = (**(code **)(param_1[3] + 0xc))(iVar3,&local_30);
      uVar1 = 1;
      if (iVar3 != 0) goto LAB_01435388;
      uVar1 = (**(code **)(local_2c + 0xc))(local_30,&DAT_005312e2,2);
    }
  }
LAB_01435388:
  local_44 = uVar1;
  local_4c = 2;
  FUN_01302aa0(&local_4c);
  return;
}

