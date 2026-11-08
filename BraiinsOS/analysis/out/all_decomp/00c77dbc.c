// FUN_00c77dbc @ 00c77dbc size=756 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_00c77dbc(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  int *local_34;
  undefined *local_30;
  int *local_2c;
  int local_28;
  
  iVar4 = *param_2;
  iVar5 = param_2[1];
  pcVar3 = *(code **)(iVar5 + 0xc);
  iVar1 = (*pcVar3)(iVar4,&DAT_00563f10,0x10);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar3)(iVar4,&DAT_00414a79,3);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (*pcVar3)(iVar4,&DAT_00418447,5);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (*pcVar3)(iVar4,&DAT_00414a7c,2);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_015ed828(param_1,param_2);
    if (iVar1 != 0) {
      return 1;
    }
    piVar6 = (int *)param_2[2];
  }
  else {
    iVar1 = (*pcVar3)(iVar4,&DAT_00414a7e,3);
    if (iVar1 != 0) {
      return 1;
    }
    local_3c = &local_35;
    piVar6 = (int *)param_2[2];
    local_28 = param_2[3];
    local_30 = &DAT_01880dc4;
    local_34 = &local_44;
    local_35 = 1;
    local_44 = iVar4;
    local_40 = iVar5;
    local_2c = piVar6;
    iVar1 = FUN_00fb1f64(local_34,&DAT_00418447,5);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_00fb1f64(&local_44,&DAT_00414a7c,2);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_015ed828(param_1,&local_34);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  if (((uint)piVar6 & 0x800000) == 0) {
    iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
    if (((iVar1 != 0) ||
        (iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00568e60,4), iVar1 != 0)) ||
       (iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2), iVar1 != 0)) {
      return 1;
    }
    iVar1 = FUN_00fb8bb0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),*param_2,
                         param_2[1]);
  }
  else {
    local_34 = (int *)*param_2;
    local_30 = (undefined *)param_2[1];
    local_2c = &local_44;
    local_44 = CONCAT31(local_44._1_3_,1);
    iVar1 = FUN_00fb1f64(&local_34,&DAT_00568e60,4);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_00fb1f64(&local_34,&DAT_00414a7c,2);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_00fb8bb0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),&local_34,
                         &DAT_01880dc4);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_00fb1f64(&local_34,&DAT_00414a81,2);
  }
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2," }",2);
    return uVar2;
  }
  uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,"}",1);
  return uVar2;
}

