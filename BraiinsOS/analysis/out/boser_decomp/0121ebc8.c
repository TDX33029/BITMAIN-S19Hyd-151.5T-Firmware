// FUN_0121ebc8 @ 0121ebc8 size=892 calls_out=4 calls_in=0
// strings: FromUtf8Error | FromUtf8Error | bytes | CmdInvalid upgrade imageUpgrade is not supportedSystem upgrade was not successfulSynchronization with script was not successfulSynchronization with script timed out | FromUtf8Error | bytes

undefined4 FUN_0121ebc8(uint *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  uint *puVar5;
  uint uVar6;
  undefined *puVar7;
  uint local_44;
  uint local_40;
  uint **local_3c;
  undefined1 local_35;
  uint *local_34;
  undefined *local_30;
  uint *local_2c;
  uint local_28;
  uint *local_24;
  
  uVar1 = 1;
  if ((int)*param_1 < 0) {
    uVar1 = *param_1 ^ 0x80000000;
  }
  if (uVar1 == 0) {
    uVar1 = *param_2;
    uVar6 = param_2[1];
    pcVar4 = *(code **)(uVar6 + 0xc);
    iVar2 = (*pcVar4)(uVar1,&DAT_00534240,2);
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar4)(uVar1,"(",1);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_019a6b74(param_1 + 1,param_2);
      goto LAB_0121ef14;
    }
    iVar2 = (*pcVar4)(uVar1,"(\n",2);
    if (iVar2 != 0) {
      return 1;
    }
    local_3c = &local_24;
    local_30 = &DAT_01ce45f8;
    local_34 = &local_44;
    local_2c = (uint *)param_2[2];
    local_28 = param_2[3];
    local_24 = (uint *)CONCAT31(local_24._1_3_,1);
    local_44 = uVar1;
    local_40 = uVar6;
    iVar2 = FUN_019a6b74(param_1 + 1,&local_34);
  }
  else {
    if (uVar1 != 1) {
      puVar5 = (uint *)*param_2;
      puVar7 = (undefined *)param_2[1];
      pcVar4 = *(code **)(puVar7 + 0xc);
      iVar2 = (*pcVar4)(puVar5,
                        "CmdInvalid upgrade imageUpgrade is not supportedSystem upgrade was not successfulSynchronization with script was not successfulSynchronization with script timed out"
                        ,3);
      if (iVar2 != 0) {
        return 1;
      }
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar2 = (*pcVar4)(puVar5,"(",1);
        if (iVar2 != 0) {
          return 1;
        }
        iVar2 = FUN_012fb170(param_1[2],param_1[3],*param_2,param_2[1]);
      }
      else {
        iVar2 = (*pcVar4)(puVar5,"(\n",2);
        if (iVar2 != 0) {
          return 1;
        }
        local_2c = &local_44;
        local_44 = CONCAT31(local_44._1_3_,1);
        local_34 = puVar5;
        local_30 = puVar7;
        iVar2 = FUN_012fb170(param_1[2],param_1[3],&local_34,&DAT_01ce45f8);
        if (iVar2 != 0) {
          return 1;
        }
        iVar2 = FUN_01302620(&local_34,&DAT_005312e2,2);
      }
      goto LAB_0121ef14;
    }
    uVar1 = *param_2;
    uVar6 = param_2[1];
    pcVar4 = *(code **)(uVar6 + 0xc);
    iVar2 = (*pcVar4)(uVar1,"FromUtf8Error",0xd);
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar4)(uVar1,"(",1);
      if (iVar2 != 0) {
        return 1;
      }
      local_34 = param_1 + 3;
      iVar2 = FUN_01303d90(param_2,"FromUtf8Error",0xd,"bytes",5,param_1,&LAB_019eb6a8,&DAT_0053268a
                           ,5,&local_34,FUN_019d8154);
      goto LAB_0121ef14;
    }
    iVar2 = (*pcVar4)(uVar1,"(\n",2);
    if (iVar2 != 0) {
      return 1;
    }
    local_3c = (uint **)&local_35;
    local_35 = 1;
    local_2c = (uint *)param_2[2];
    local_28 = param_2[3];
    local_24 = param_1 + 3;
    local_30 = &DAT_01ce45f8;
    local_34 = &local_44;
    local_44 = uVar1;
    local_40 = uVar6;
    iVar2 = FUN_01303d90(&local_34,"FromUtf8Error",0xd,"bytes",5,param_1,&LAB_019eb6a8,&DAT_0053268a
                         ,5,&local_24,FUN_019d8154);
  }
  if (iVar2 != 0) {
    return 1;
  }
  iVar2 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
LAB_0121ef14:
  uVar3 = 1;
  if (iVar2 == 0) {
    uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0053341b,1);
  }
  return uVar3;
}

