// FUN_0074e130 @ 0074e130 size=692 calls_out=3 calls_in=1
// strings: GoAway | Reset

undefined4 FUN_0074e130(char *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  int *local_30;
  undefined *local_2c;
  int *local_28;
  int local_24;
  
  if (*param_1 == '\0') {
    local_30 = (int *)(param_1 + 1);
    uVar1 = FUN_00fb2b98(param_2,"Reset",5,param_1 + 4,FUN_006bbe9c,param_1 + 8,FUN_0103066c,
                         &local_30,FUN_0074e434);
    return uVar1;
  }
  if (*param_1 == '\x01') {
    local_30 = (int *)(param_1 + 1);
    uVar1 = FUN_00fb2b98(param_2,"GoAway",6,param_1 + 8,&LAB_00f5ee9c,param_1 + 4,FUN_0103066c,
                         &local_30,FUN_0074e434);
    return uVar1;
  }
  iVar4 = *param_2;
  pcVar3 = *(code **)(param_2[1] + 0xc);
  iVar2 = (*pcVar3)(iVar4,"Io",2);
  if (iVar2 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar2 = (*pcVar3)(iVar4,"(",1);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (**(code **)(param_2[1] + 0xc))
                      (*param_2,*(undefined4 *)(&DAT_018af7f0 + (uint)(byte)param_1[1] * 4),
                       *(undefined4 *)(&DAT_0041dc6c + (uint)(byte)param_1[1] * 4));
  }
  else {
    iVar2 = (*pcVar3)(iVar4,"(\n",2);
    if (iVar2 != 0) {
      return 1;
    }
    local_28 = &local_40;
    local_30 = (int *)*param_2;
    local_2c = (undefined *)param_2[1];
    local_40 = CONCAT31(local_40._1_3_,1);
    iVar2 = FUN_00fb1f64(&local_30,(&PTR_DAT_018af898)[(byte)param_1[1]],
                         *(undefined4 *)(&DAT_0041dd14 + (uint)(byte)param_1[1] * 4));
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
  }
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_007240cc(param_1 + 4,param_2);
    }
    else {
      local_28 = (int *)param_2[2];
      local_24 = param_2[3];
      local_38 = &local_31;
      local_2c = &DAT_01880dc4;
      local_30 = &local_40;
      local_31 = 1;
      local_40 = *param_2;
      local_3c = param_2[1];
      iVar2 = FUN_007240cc(param_1 + 4,&local_30);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_00fb1f64(&local_40,&DAT_00414a81,2);
    }
    if (iVar2 == 0) {
      uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
      return uVar1;
    }
  }
  return 1;
}

