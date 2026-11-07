// FUN_0155100c @ 0155100c size=408 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_0155100c(int *param_1,int *param_2)

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
  int iStack_28;
  int *piStack_24;
  
  if (*param_1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01551078. Too many branches */
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
    local_34 = param_1;
    iVar1 = FUN_013032f4(param_2,&DAT_004a5c38,0xc,&local_34,&LAB_0155bab8);
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
    local_2c = param_2[2];
    iStack_28 = param_2[3];
    local_30 = &DAT_01ce45f8;
    local_34 = &local_44;
    local_35 = 1;
    local_44 = iVar4;
    local_40 = iVar5;
    piStack_24 = param_1;
    iVar1 = FUN_013032f4(&local_34,&DAT_004a5c38,0xc,&piStack_24,&LAB_0155bab8);
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

