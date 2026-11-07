// FUN_00feaee0 @ 00feaee0 size=508 calls_out=2 calls_in=0
// strings: total_bytes | total_bytes

undefined4 FUN_00feaee0(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  int *local_34;
  undefined *local_30;
  int local_2c;
  int local_28;
  int *local_24;
  
  piVar4 = (int *)*param_1;
  if (*piVar4 == 2 && piVar4[1] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00feaf1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0056eb34,4);
    return uVar1;
  }
  iVar5 = *param_2;
  iVar6 = param_2[1];
  pcVar3 = *(code **)(iVar6 + 0xc);
  iVar2 = (*pcVar3)(iVar5,&DAT_0056f9dc,4);
  if (iVar2 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar2 = (*pcVar3)(iVar5,"(",1);
    if (iVar2 != 0) {
      return 1;
    }
    local_34 = piVar4;
    iVar2 = FUN_01303d90(param_2,&DAT_0056a1f8,0x10,&DAT_00569de8,0x10,piVar4 + 4,&LAB_01aaa164,
                         "total_bytes",0xb,&local_34,&LAB_015f5714);
    if (iVar2 != 0) {
      return 1;
    }
    iVar5 = *param_2;
    pcVar3 = *(code **)(param_2[1] + 0xc);
  }
  else {
    iVar2 = (*pcVar3)(iVar5,"(\n",2);
    if (iVar2 != 0) {
      return 1;
    }
    local_3c = &local_35;
    local_35 = 1;
    local_2c = param_2[2];
    local_28 = param_2[3];
    local_30 = &DAT_01ce45f8;
    local_34 = &local_44;
    local_44 = iVar5;
    local_40 = iVar6;
    local_24 = piVar4;
    iVar2 = FUN_01303d90(&local_34,&DAT_0056a1f8,0x10,&DAT_00569de8,0x10,piVar4 + 4,&LAB_01aaa164,
                         "total_bytes",0xb,&local_24,&LAB_015f5714);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
    if (iVar2 != 0) {
      return 1;
    }
  }
  uVar1 = (*pcVar3)(iVar5,&DAT_0053341b,1);
  return uVar1;
}

