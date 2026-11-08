// FUN_014ea010 @ 014ea010 size=844 calls_out=3 calls_in=1
// strings: contents | maximum_name_length | EchConfigContents | key_config | extensions | public_name

byte FUN_014ea010(int *param_1,int **param_2)

{
  undefined1 uVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  code *pcVar7;
  int *piVar8;
  int *local_48;
  int *local_44;
  undefined1 *local_40;
  undefined1 local_39;
  int **local_38;
  undefined4 local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  
  if (*param_1 == -0x80000000) {
    local_48 = param_1 + 1;
    uVar1 = (*(code *)param_2[1][3])(*param_2,&DAT_0040d566,7);
    local_34 = (undefined *)(CONCAT31((int3)((uint)local_34 >> 8),uVar1) & 0xffff00ff);
    local_38 = param_2;
    uVar3 = FUN_00fb2258(&local_38,&DAT_00410ff9,7,param_1 + 4,&LAB_01525c28);
    FUN_00fb2258(uVar3,"contents",8,&local_48,FUN_014be1f8);
    bVar2 = local_34._1_1_ | (byte)local_34;
    if (local_34._1_1_ != 1 || ((uint)local_34 & 1) != 0) goto LAB_014ea0b8;
    if ((*(byte *)((int)local_38 + 10) & 0x80) == 0) {
      piVar5 = *local_38;
      uVar3 = 2;
      pcVar7 = (code *)local_38[1][3];
      pcVar6 = " }";
      goto LAB_014ea348;
    }
    piVar5 = *local_38;
    pcVar7 = (code *)local_38[1][3];
    pcVar6 = "}";
  }
  else {
    piVar5 = *param_2;
    piVar8 = param_2[1];
    pcVar7 = (code *)piVar8[3];
    iVar4 = (*pcVar7)(piVar5,&DAT_0040b94c,3);
    bVar2 = 1;
    if (iVar4 != 0) goto LAB_014ea0b8;
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar4 = (*pcVar7)(piVar5,"(",1);
      if (iVar4 != 0) goto LAB_014ea0b8;
      local_38 = (int **)(param_1 + 8);
      iVar4 = FUN_00fb34b0(param_2,"EchConfigContents",0x11,"key_config",10,param_1,FUN_014ea5d8,
                           "maximum_name_length",0x13,param_1 + 0xe,FUN_0078955c,"public_name",0xb,
                           param_1 + 0xb,FUN_014ea3d8,"extensions",10,&local_38,FUN_01494ffc);
    }
    else {
      iVar4 = (*pcVar7)(piVar5,"(\n",2);
      if (iVar4 != 0) goto LAB_014ea0b8;
      bVar2 = 1;
      local_40 = &local_39;
      local_39 = 1;
      local_30 = param_2[2];
      local_2c = param_2[3];
      local_34 = &DAT_01880dc4;
      local_38 = &local_48;
      local_28 = param_1 + 8;
      local_48 = piVar5;
      local_44 = piVar8;
      iVar4 = FUN_00fb34b0(&local_38,"EchConfigContents",0x11,"key_config",10,param_1,FUN_014ea5d8,
                           "maximum_name_length",0x13,param_1 + 0xe,FUN_0078955c,"public_name",0xb,
                           param_1 + 0xb,FUN_014ea3d8,"extensions",10,&local_28,FUN_01494ffc);
      if (iVar4 != 0) goto LAB_014ea0b8;
      iVar4 = (**(code **)(local_34 + 0xc))(local_38,&DAT_00414a81,2);
    }
    bVar2 = 1;
    if (iVar4 != 0) {
LAB_014ea0b8:
      return bVar2 & 1;
    }
    piVar5 = *param_2;
    pcVar7 = (code *)param_2[1][3];
    pcVar6 = &DAT_00418e07;
  }
  uVar3 = 1;
LAB_014ea348:
  bVar2 = (*pcVar7)(piVar5,pcVar6,uVar3);
  return bVar2 & 1;
}

