// FUN_01675610 @ 01675610 size=624 calls_out=4 calls_in=0
// strings: indexInvalidComponentNameInvalidModifierMissingComponentNameMissingRequiredModifierNotSupported | indexInvalidComponentNameInvalidModifierMissingComponentNameMissingRequiredModifierNotSupported

void FUN_01675610(int param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 local_54;
  int *local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  int local_48;
  int local_44;
  undefined1 *local_40;
  undefined1 local_39;
  int *local_38;
  undefined *local_34;
  int *local_30;
  int local_2c;
  int local_28;
  
  iVar4 = *param_2;
  pcVar3 = *(code **)(param_2[1] + 0xc);
  iVar2 = (*pcVar3)(iVar4,1,0);
  local_4c = (undefined1)iVar2;
  local_4b = 1;
  local_54 = 0;
  local_50 = param_2;
  uVar1 = 1;
  if (iVar2 != 0) goto LAB_01675658;
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar2 = (*pcVar3)(iVar4,"(",1);
    uVar1 = 1;
    if (iVar2 != 0) goto LAB_01675658;
    local_38 = (int *)(param_1 + 4);
    iVar2 = FUN_01303d90(param_2,&DAT_00522097,10,
                         "indexInvalidComponentNameInvalidModifierMissingComponentNameMissingRequiredModifierNotSupported"
                         ,5,param_1,&LAB_01a6a304,&DAT_0056f2ec,4,&local_38,FUN_01675374);
  }
  else {
    iVar2 = (*pcVar3)(iVar4,"(\n",2);
    if (iVar2 != 0) goto LAB_01675658;
    local_48 = *param_2;
    local_44 = param_2[1];
    local_40 = &local_39;
    local_39 = 1;
    local_30 = (int *)param_2[2];
    local_2c = param_2[3];
    local_38 = &local_48;
    local_28 = param_1 + 4;
    local_34 = &DAT_01ce45f8;
    iVar2 = FUN_01303d90(&local_38,&DAT_00522097,10,
                         "indexInvalidComponentNameInvalidModifierMissingComponentNameMissingRequiredModifierNotSupported"
                         ,5,param_1,&LAB_01a6a304,&DAT_0056f2ec,4,&local_28,FUN_01675374);
    uVar1 = 1;
    if (iVar2 != 0) goto LAB_01675658;
    iVar2 = (**(code **)(local_34 + 0xc))(local_38,&DAT_005312e2,2);
    local_4c = (undefined1)iVar2;
    local_54 = 1;
  }
  uVar1 = 1;
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00533bc1,2);
      uVar1 = 1;
      if (iVar2 != 0) goto LAB_01675658;
      uVar1 = FUN_012fb170(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),*param_2,
                           param_2[1]);
    }
    else {
      local_38 = (int *)*param_2;
      local_34 = (undefined *)param_2[1];
      local_30 = &local_48;
      local_48 = CONCAT31(local_48._1_3_,1);
      iVar2 = FUN_012fb170(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&local_38,
                           &DAT_01ce45f8);
      uVar1 = 1;
      if (iVar2 != 0) goto LAB_01675658;
      uVar1 = FUN_01302620(&local_38,&DAT_005312e2,2);
    }
  }
LAB_01675658:
  local_4c = uVar1;
  local_54 = 2;
  FUN_01302aa0(&local_54);
  return;
}

