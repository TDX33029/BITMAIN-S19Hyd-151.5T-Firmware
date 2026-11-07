// FUN_013a2844 @ 013a2844 size=524 calls_out=2 calls_in=0
// strings: indexInvalidComponentNameInvalidModifierMissingComponentNameMissingRequiredModifierNotSupported | stream_id | indexInvalidComponentNameInvalidModifierMissingComponentNameMissingRequiredModifierNotSupported | stream_id

undefined4 FUN_013a2844(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  int *local_34;
  undefined *local_30;
  int local_2c;
  int local_28;
  int *local_24;
  
  if (*param_1 != 1) {
                    /* WARNING: Could not recover jumptable at 0x013a28b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0056eb34,4);
    return uVar2;
  }
  iVar4 = *param_2;
  iVar5 = param_2[1];
  pcVar3 = *(code **)(iVar5 + 0xc);
  iVar1 = (*pcVar3)(iVar4,&DAT_0056f9dc,4);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar3)(iVar4,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    local_34 = param_1 + 2;
    iVar1 = FUN_01303d90(param_2,"Key",3,
                         "indexInvalidComponentNameInvalidModifierMissingComponentNameMissingRequiredModifierNotSupported"
                         ,5,param_1 + 1,FUN_0136ad34,"stream_id",9,&local_34,FUN_013b10f0);
    if (iVar1 != 0) {
      return 1;
    }
    iVar4 = *param_2;
    pcVar3 = *(code **)(param_2[1] + 0xc);
  }
  else {
    iVar1 = (*pcVar3)(iVar4,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_3c = &local_35;
    local_35 = 1;
    local_2c = param_2[2];
    local_28 = param_2[3];
    local_24 = param_1 + 2;
    local_30 = &DAT_01ce45f8;
    local_34 = &local_44;
    local_44 = iVar4;
    local_40 = iVar5;
    iVar1 = FUN_01303d90(&local_34,"Key",3,
                         "indexInvalidComponentNameInvalidModifierMissingComponentNameMissingRequiredModifierNotSupported"
                         ,5,param_1 + 1,FUN_0136ad34,"stream_id",9,&local_24,FUN_013b10f0);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  uVar2 = (*pcVar3)(iVar4,&DAT_0053341b,1);
  return uVar2;
}

