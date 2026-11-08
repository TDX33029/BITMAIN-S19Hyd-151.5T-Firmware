// FUN_01a0a28c @ 01a0a28c size=516 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_01a0a28c(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
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
  
  if (*param_1 == 2 && param_1[1] == 0) {
                    /* WARNING: Could not recover jumptable at 0x01a0a2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0056eb34,4);
    return uVar1;
  }
  iVar4 = *param_2;
  iVar5 = param_2[1];
  pcVar3 = *(code **)(iVar5 + 0xc);
  iVar2 = (*pcVar3)(iVar4,&DAT_0056f9dc,4);
  if (iVar2 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar2 = (*pcVar3)(iVar4,"(",1);
    if (iVar2 != 0) {
      return 1;
    }
    local_34 = param_1 + 6;
    iVar2 = FUN_01303d90(param_2,&DAT_0052a084,0x14,&DAT_0052a098,6,param_1,FUN_019482a4,
                         &DAT_0052a09e,0xf,&local_34,FUN_01a2c958);
    if (iVar2 != 0) {
      return 1;
    }
    iVar4 = *param_2;
    pcVar3 = *(code **)(param_2[1] + 0xc);
  }
  else {
    iVar2 = (*pcVar3)(iVar4,"(\n",2);
    if (iVar2 != 0) {
      return 1;
    }
    local_3c = &local_35;
    local_35 = 1;
    local_2c = param_2[2];
    local_28 = param_2[3];
    local_24 = param_1 + 6;
    local_30 = &DAT_01ce45f8;
    local_34 = &local_44;
    local_44 = iVar4;
    local_40 = iVar5;
    iVar2 = FUN_01303d90(&local_34,&DAT_0052a084,0x14,&DAT_0052a098,6,param_1,FUN_019482a4,
                         &DAT_0052a09e,0xf,&local_24,FUN_01a2c958);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
    if (iVar2 != 0) {
      return 1;
    }
  }
  uVar1 = (*pcVar3)(iVar4,&DAT_0053341b,1);
  return uVar1;
}

