// FUN_01303914 @ 01303914 size=916 calls_out=5 calls_in=1
// strings: 

undefined4
FUN_01303914(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,code *param_8,
            undefined4 param_9,code *param_10)

{
  int iVar1;
  undefined4 **ppuVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  code *pcVar6;
  uint uVar7;
  undefined4 **local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 **local_34;
  undefined *local_30;
  undefined4 **local_2c;
  undefined4 local_28;
  
  ppuVar2 = (undefined4 **)*param_1;
  iVar3 = param_1[1];
  pcVar6 = *(code **)(iVar3 + 0xc);
  iVar1 = (*pcVar6)(ppuVar2);
  if (iVar1 == 0) {
    puVar5 = param_1 + 2;
    uVar7 = *puVar5;
    if ((uVar7 & 0x800000) == 0) {
      iVar1 = (*pcVar6)(ppuVar2,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_012fb170(param_4,param_5,ppuVar2,iVar3);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (*pcVar6)(ppuVar2,&DAT_00533bc1,2);
      if (iVar1 != 0) {
        return 1;
      }
      if ((uVar7 & 0x2000000) == 0) {
        if ((uVar7 & 0x4000000) == 0) {
          iVar1 = FUN_012fd02c(param_6,param_1);
        }
        else {
          iVar1 = FUN_012fdbc0(param_6,param_1);
        }
      }
      else {
        iVar1 = FUN_012fd9d0(param_6,param_1);
      }
    }
    else {
      iVar1 = (*pcVar6)(ppuVar2,"(\n",2);
      if (iVar1 != 0) goto LAB_01303940;
      local_44 = (undefined4 **)CONCAT31(local_44._1_3_,1);
      local_34 = ppuVar2;
      local_30 = (undefined *)iVar3;
      local_2c = &local_44;
      iVar1 = FUN_012fb170(param_4,param_5,&local_34,&DAT_01ce45f8);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_01302620(&local_34,&DAT_005312e2,2);
      if (iVar1 != 0) {
        return 1;
      }
      local_3c = &local_35;
      local_35 = 1;
      local_30 = &DAT_01ce45f8;
      local_2c = (undefined4 **)*puVar5;
      local_28 = param_1[3];
      local_44 = ppuVar2;
      local_40 = iVar3;
      local_34 = &local_44;
      if (((uint)local_2c & 0x2000000) == 0) {
        if (((uint)local_2c & 0x4000000) == 0) {
          iVar1 = FUN_012fd02c(param_6);
        }
        else {
          iVar1 = FUN_012fdbc0(param_6);
        }
      }
      else {
        iVar1 = FUN_012fd9d0(param_6,&local_34);
      }
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
    }
    uVar4 = 1;
    if (iVar1 == 0) {
      if ((*(byte *)((int)param_1 + 10) & 0x80) == 0) {
        iVar1 = (**(code **)(param_1[1] + 0xc))(*param_1,&DAT_00533bc1,2);
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = (*param_8)(param_7,param_1);
      }
      else {
        local_30 = &DAT_01ce45f8;
        local_34 = &local_44;
        local_2c = (undefined4 **)*puVar5;
        local_44 = (undefined4 **)*param_1;
        local_40 = param_1[1];
        local_28 = param_1[3];
        local_3c = &local_35;
        local_35 = 1;
        iVar1 = (*param_8)(param_7,&local_34);
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
      }
      if (iVar1 == 0) {
        if ((*(byte *)((int)param_1 + 10) & 0x80) == 0) {
          iVar1 = (**(code **)(param_1[1] + 0xc))(*param_1,&DAT_00533bc1,2);
          if (iVar1 != 0) {
            return 1;
          }
          iVar1 = (*param_10)(param_9,param_1);
        }
        else {
          local_3c = &local_35;
          local_30 = &DAT_01ce45f8;
          local_34 = &local_44;
          local_2c = (undefined4 **)*puVar5;
          local_44 = (undefined4 **)*param_1;
          local_40 = param_1[1];
          local_28 = param_1[3];
          local_35 = 1;
          iVar1 = (*param_10)(param_9,&local_34);
          if (iVar1 != 0) {
            return 1;
          }
          iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
        }
        if (iVar1 == 0) {
          uVar4 = (**(code **)(param_1[1] + 0xc))(*param_1,&DAT_0053341b,1);
        }
      }
    }
  }
  else {
LAB_01303940:
    uVar4 = 1;
  }
  return uVar4;
}

