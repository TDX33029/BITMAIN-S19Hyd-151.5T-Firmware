// FUN_013bc33c @ 013bc33c size=664 calls_out=2 calls_in=0
// strings: GroupInfo | GroupInfoInner | memory_extra | slot_ranges | name_to_index | index_to_name

undefined4 FUN_013bc33c(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_48;
  int local_44;
  undefined1 *local_40;
  undefined1 local_39;
  undefined4 *local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  
  uVar4 = *param_2;
  iVar5 = param_2[1];
  piVar3 = (int *)*param_1;
  pcVar2 = *(code **)(iVar5 + 0xc);
  iVar1 = (*pcVar2)(uVar4,"GroupInfo",9);
  if (iVar1 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar2)(uVar4,"(",1);
      if (iVar1 == 0) {
        iVar1 = *piVar3;
        local_38 = (undefined4 *)(iVar1 + 0x2c);
        iVar1 = FUN_00fb34b0(param_2,"GroupInfoInner",0xe,"slot_ranges",0xb,iVar1 + 8,FUN_01360a94,
                             "name_to_index",0xd,iVar1 + 0x14,FUN_01360860,"index_to_name",0xd,
                             iVar1 + 0x20,FUN_01360f10,"memory_extra",0xc,&local_38,FUN_00d47d08);
        if (iVar1 == 0) {
          uVar4 = *param_2;
          pcVar2 = *(code **)(param_2[1] + 0xc);
LAB_013bc5b0:
          uVar4 = (*pcVar2)(uVar4,&DAT_00418e07,1);
          return uVar4;
        }
      }
    }
    else {
      iVar1 = (*pcVar2)(uVar4,"(\n",2);
      if (iVar1 == 0) {
        local_40 = &local_39;
        local_30 = param_2[2];
        local_2c = param_2[3];
        local_34 = &DAT_01880dc4;
        local_38 = &local_48;
        iVar1 = *piVar3;
        local_39 = 1;
        local_28 = iVar1 + 0x2c;
        local_48 = uVar4;
        local_44 = iVar5;
        iVar1 = FUN_00fb34b0(&local_38,"GroupInfoInner",0xe,"slot_ranges",0xb,iVar1 + 8,FUN_01360a94
                             ,"name_to_index",0xd,iVar1 + 0x14,FUN_01360860,"index_to_name",0xd,
                             iVar1 + 0x20,FUN_01360f10,"memory_extra",0xc,&local_28,FUN_00d47d08);
        if ((iVar1 == 0) &&
           (iVar1 = (**(code **)(local_34 + 0xc))(local_38,&DAT_00414a81,2), iVar1 == 0))
        goto LAB_013bc5b0;
      }
    }
  }
  return 1;
}

