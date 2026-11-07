// FUN_013bc948 @ 013bc948 size=928 calls_out=5 calls_in=0
// strings: GoAway | Reset

undefined4 FUN_013bc948(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  char *pcVar4;
  undefined1 local_45;
  undefined4 local_44;
  undefined4 local_40;
  char **local_3c;
  char *local_38;
  undefined *local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  char *local_28;
  
  pcVar4 = (char *)*param_1;
  if (*pcVar4 == '\0') {
    uVar1 = *param_2;
    pcVar3 = *(code **)(param_2[1] + 0xc);
    iVar2 = (*pcVar3)(uVar1,"Reset",5);
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar3)(uVar1,"(",1);
      if (iVar2 != 0) {
        return 1;
      }
      local_38 = pcVar4 + 4;
      iVar2 = FUN_013032f4(param_2,&DAT_00570cc8,8,&local_38,FUN_015fc038);
    }
    else {
      iVar2 = (*pcVar3)(uVar1,"(\n",2);
      if (iVar2 != 0) {
        return 1;
      }
      local_3c = (char **)&local_45;
      local_40 = param_2[1];
      local_38 = (char *)&local_44;
      local_30 = (undefined4 *)param_2[2];
      local_2c = param_2[3];
      local_44 = *param_2;
      local_34 = &DAT_01ce45f8;
      local_45 = 1;
      local_28 = pcVar4 + 4;
      iVar2 = FUN_013032f4(&local_38,&DAT_00570cc8,8,&local_28,FUN_015fc038);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = (**(code **)(local_34 + 0xc))(local_38,&DAT_005312e2,2);
    }
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00533bc1,2);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_013b240c(pcVar4 + 8,param_2);
      if (iVar2 != 0) {
        return 1;
      }
    }
    else {
      local_3c = &local_28;
      local_2c = param_2[3];
      local_44 = *param_2;
      local_40 = param_2[1];
      local_38 = (char *)&local_44;
      local_30 = (undefined4 *)param_2[2];
      local_28 = (char *)CONCAT31(local_28._1_3_,1);
      local_34 = &DAT_01ce45f8;
      iVar2 = FUN_013b240c(pcVar4 + 8,&local_38);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = (**(code **)(local_34 + 0xc))(local_38,&DAT_005312e2,2);
      if (iVar2 != 0) {
        return 1;
      }
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00533bc1,2);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = (**(code **)(param_2[1] + 0xc))
                        (*param_2,*(undefined4 *)(&DAT_01d32144 + (uint)(byte)pcVar4[1] * 4),
                         *(undefined4 *)(&DAT_00536a5c + (uint)(byte)pcVar4[1] * 4));
    }
    else {
      local_30 = &local_44;
      local_38 = (char *)*param_2;
      local_34 = (undefined *)param_2[1];
      local_44 = CONCAT31(local_44._1_3_,1);
      iVar2 = FUN_01302620(&local_38,*(undefined4 *)(&DAT_01d32150 + (uint)(byte)pcVar4[1] * 4),
                           *(undefined4 *)(&DAT_00536a68 + (uint)(byte)pcVar4[1] * 4));
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_01302620(&local_38,&DAT_005312e2,2);
    }
    if (iVar2 != 0) {
      return 1;
    }
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0053341b,1);
  }
  else if (*pcVar4 == '\x01') {
    local_38 = pcVar4 + 1;
    uVar1 = FUN_01303644(param_2,"GoAway",6,pcVar4 + 8,&LAB_012833c0,pcVar4 + 4,FUN_013b240c,
                         &local_38,FUN_013bcd8c);
  }
  else {
    local_38 = pcVar4 + 4;
    uVar1 = FUN_0130343c(param_2,&DAT_00534240,2,pcVar4 + 1,FUN_013bcd50,&local_38,FUN_0137e03c);
  }
  return uVar1;
}

