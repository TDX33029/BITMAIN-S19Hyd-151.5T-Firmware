// FUN_005fe214 @ 005fe214 size=776 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_005fe214(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_4c;
  int local_48;
  undefined1 *local_44;
  undefined1 local_3d;
  undefined4 *local_3c;
  undefined *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 **local_2c;
  char local_28;
  undefined1 local_27;
  
  if (*param_1 == 1) {
    uVar5 = *param_2;
    iVar6 = param_2[1];
    pcVar3 = *(code **)(iVar6 + 0xc);
    iVar2 = (*pcVar3)(uVar5,&DAT_004091fd,5);
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
LAB_005fe36c:
      iVar2 = (*pcVar3)(uVar5,"(",1);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = param_1[1];
      iVar6 = param_1[2];
      bVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418df9,1);
      local_38._0_2_ = (ushort)bVar1;
      local_3c = param_2;
      FUN_007b9178(&local_3c,iVar2,iVar2 + iVar6);
      if ((char)local_38 == '\x01') {
        return 1;
      }
      iVar2 = (**(code **)(local_3c[1] + 0xc))(*local_3c,&DAT_00418ec5,1);
      if (iVar2 != 0) {
        return 1;
      }
      goto LAB_005fe4f4;
    }
    iVar2 = (*pcVar3)(uVar5,"(\n",2);
    if (iVar2 != 0) {
      return 1;
    }
    local_44 = &local_3d;
    local_34 = param_2[2];
    local_30 = param_2[3];
    local_3c = &local_4c;
    local_38 = &DAT_01880dc4;
    local_3d = 1;
    iVar2 = param_1[1];
    iVar4 = param_1[2];
    local_4c = uVar5;
    local_48 = iVar6;
    local_28 = FUN_00fb1f64(local_3c,&DAT_00418df9,1);
    local_2c = &local_3c;
    local_27 = 0;
    FUN_007b9178(&local_2c,iVar2,iVar2 + iVar4);
    if (local_28 == '\x01') {
      return 1;
    }
    iVar2 = (*(code *)local_2c[1][3])(*local_2c,&DAT_00418ec5,1);
    if (iVar2 != 0) {
      return 1;
    }
  }
  else {
    uVar5 = *param_2;
    iVar6 = param_2[1];
    pcVar3 = *(code **)(iVar6 + 0xc);
    iVar2 = (*pcVar3)(uVar5,&DAT_0056a600,8);
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) goto LAB_005fe36c;
    iVar2 = (*pcVar3)(uVar5,"(\n",2);
    if (iVar2 != 0) {
      return 1;
    }
    local_44 = &local_3d;
    local_34 = param_2[2];
    local_30 = param_2[3];
    local_3c = &local_4c;
    local_38 = &DAT_01880dc4;
    local_3d = 1;
    iVar2 = param_1[1];
    iVar4 = param_1[2];
    local_4c = uVar5;
    local_48 = iVar6;
    local_28 = FUN_00fb1f64(local_3c,&DAT_00418df9,1);
    local_2c = &local_3c;
    local_27 = 0;
    FUN_007b9178(&local_2c,iVar2,iVar2 + iVar4);
    if ((local_28 == '\x01') ||
       (iVar2 = (*(code *)local_2c[1][3])(*local_2c,&DAT_00418ec5,1), iVar2 != 0)) {
      return 1;
    }
  }
  iVar2 = (**(code **)(local_38 + 0xc))(local_3c,&DAT_00414a81,2);
  if (iVar2 != 0) {
    return 1;
  }
LAB_005fe4f4:
  uVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
  return uVar5;
}

