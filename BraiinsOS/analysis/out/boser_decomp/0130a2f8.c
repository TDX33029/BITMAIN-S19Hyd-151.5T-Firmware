// FUN_0130a2f8 @ 0130a2f8 size=856 calls_out=4 calls_in=1
// strings: 

void FUN_0130a2f8(short *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  short ***local_7c;
  undefined *local_78;
  short **local_74;
  code *local_70;
  code **local_6c;
  code *local_68;
  undefined *local_50;
  short ***local_48;
  undefined1 *local_44;
  short **local_40;
  code *local_3c;
  short **local_38;
  short local_32;
  short **local_30;
  short **local_2c;
  undefined4 local_28;
  short **local_24;
  short *local_20;
  undefined4 local_1c;
  
  if (*param_1 != 1) {
    local_24 = (short **)(param_1 + 1);
    if ((*(byte *)((int)param_2 + 0xb) & 0x18) == 0) {
      local_2c = (short **)CONCAT22(local_2c._2_2_,param_1[3]);
      local_3c = FUN_012fcf18;
      local_40 = (short **)&local_2c;
      local_48 = &local_24;
      local_44 = &LAB_01309ff4;
      FUN_012fa178(*param_2,param_2[1],&DAT_005bc69d,&local_48);
      return;
    }
    local_48 = (short ***)0x0;
    local_28 = (code **)CONCAT22(param_1[3],(undefined2)local_28);
    local_1c = (code *)((int)&local_28 + 2);
    local_20 = (short *)&LAB_01309ff4;
    local_2c = local_24;
    local_24 = (short **)&local_2c;
    iVar2 = FUN_012fa178(&local_48,&DAT_01ce4b70,&DAT_005bc69d,&local_24);
    if (iVar2 != 0) {
      local_50 = &DAT_01ce4ba0;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,(int)register0x00000054 + -0x11,&DAT_01ce4a30);
    }
    if ((short **)0x15 < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,local_48,0x15,&DAT_01ce4b28);
    }
    FUN_012fb940(param_2,&local_44);
    return;
  }
  local_30 = (short **)(param_1 + 2);
  if ((*(byte *)((int)param_2 + 0xb) & 0x18) == 0) {
    if (*(short **)(param_1 + 0xc) == (short *)0x0) {
      local_38 = (short **)CONCAT22(local_38._2_2_,param_1[0xe]);
      uVar1 = *param_2;
      uVar4 = param_2[1];
      local_70 = FUN_012fcf18;
      puVar3 = &DAT_005ab4c1;
    }
    else {
      local_3c = (code *)CONCAT22(local_3c._2_2_,param_1[0xe]);
      uVar1 = *param_2;
      uVar4 = param_2[1];
      local_68 = FUN_012fcf18;
      local_6c = &local_3c;
      local_70 = FUN_012fd02c;
      puVar3 = &DAT_00585a28;
      local_38 = (short **)*(short **)(param_1 + 0xc);
    }
    local_74 = (short **)&local_38;
    local_78 = &DAT_01309900;
    local_7c = &local_30;
    FUN_012fa178(uVar1,uVar4,puVar3,&local_7c);
    return;
  }
  local_7c = (short ***)0x0;
  if (*(code **)(param_1 + 0xc) == (code *)0x0) {
    local_3c = (code *)CONCAT22(local_3c._2_2_,param_1[0xe]);
    puVar3 = &DAT_005ab4c1;
    local_24 = (short **)FUN_012fcf18;
  }
  else {
    local_32 = param_1[0xe];
    puVar3 = &DAT_00585a28;
    local_20 = &local_32;
    local_1c = FUN_012fcf18;
    local_24 = (short **)FUN_012fd02c;
    local_3c = *(code **)(param_1 + 0xc);
  }
  local_28 = &local_3c;
  local_2c = (short **)&DAT_01309900;
  local_38 = local_30;
  local_30 = (short **)&local_38;
  iVar2 = FUN_012fa178(&local_7c,&DAT_01ce4b88,puVar3,&local_30);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_30,&DAT_01ce4a30,&DAT_01ce4bb0);
  }
  if ((short **)0x3a < local_7c) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,local_7c,0x3a,&DAT_01ce4b28);
  }
  FUN_012fb940(param_2,&local_78);
  return;
}

