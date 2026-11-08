// FUN_0195e814 @ 0195e814 size=756 calls_out=3 calls_in=0
// strings: NonCronJob | NonCronJob | repeating | repeated_every | CronJob | CronJob

undefined4 FUN_0195e814(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int local_48;
  int local_44;
  undefined1 *local_40;
  undefined1 local_39;
  int *local_38;
  undefined *local_34;
  int local_30;
  int local_2c;
  int *local_28;
  
  piVar3 = (int *)*param_1;
  if (*piVar3 == 1) {
    iVar5 = *param_2;
    iVar6 = param_2[1];
    pcVar4 = *(code **)(iVar6 + 0xc);
    iVar1 = (*pcVar4)(iVar5,"NonCronJob",10);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar4)(iVar5,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      local_38 = piVar3 + 2;
      iVar1 = FUN_01303d90(param_2,"NonCronJob",10,"repeating",9,piVar3 + 4,&LAB_01a705e0,
                           "repeated_every",0xe,&local_38,&LAB_015f5418);
      goto LAB_0195ead8;
    }
    iVar1 = (*pcVar4)(iVar5,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_40 = &local_39;
    local_30 = param_2[2];
    local_2c = param_2[3];
    local_39 = 1;
    local_34 = &DAT_01ce45f8;
    local_38 = &local_48;
    local_48 = iVar5;
    local_44 = iVar6;
    local_28 = piVar3 + 2;
    iVar1 = FUN_01303d90(&local_38,"NonCronJob",10,"repeating",9,piVar3 + 4,&LAB_01a705e0,
                         "repeated_every",0xe,&local_28,&LAB_015f5418);
  }
  else {
    iVar5 = *param_2;
    iVar6 = param_2[1];
    pcVar4 = *(code **)(iVar6 + 0xc);
    iVar1 = (*pcVar4)(iVar5,"CronJob",7);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar4)(iVar5,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      local_38 = piVar3 + 1;
      iVar1 = FUN_01303cdc(param_2,"CronJob",7,&DAT_005703e0,8,&local_38,&LAB_01ad035c);
      goto LAB_0195ead8;
    }
    iVar1 = (*pcVar4)(iVar5,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_40 = &local_39;
    local_30 = param_2[2];
    local_2c = param_2[3];
    local_34 = &DAT_01ce45f8;
    local_38 = &local_48;
    local_39 = 1;
    local_48 = iVar5;
    local_44 = iVar6;
    local_28 = piVar3 + 1;
    iVar1 = FUN_01303cdc(&local_38,"CronJob",7,&DAT_005703e0,8,&local_28,&LAB_01ad035c);
  }
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = (**(code **)(local_34 + 0xc))(local_38,&DAT_005312e2,2);
LAB_0195ead8:
  uVar2 = 1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0053341b,1);
  }
  return uVar2;
}

