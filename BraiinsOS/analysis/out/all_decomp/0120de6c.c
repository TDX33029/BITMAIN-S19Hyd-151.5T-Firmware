// FUN_0120de6c @ 0120de6c size=908 calls_out=3 calls_in=1
// strings: 

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0120de6c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int ****ppppiVar5;
  int iVar6;
  int ****local_4c;
  undefined4 *local_48;
  undefined1 *local_44;
  undefined1 local_3d;
  int *****local_3c;
  undefined4 *local_38;
  undefined1 *local_34;
  undefined4 local_30;
  int ***local_2c;
  undefined4 local_28;
  
  ppppiVar5 = (int ****)*param_2;
  iVar6 = param_2[1];
  pcVar4 = *(code **)(iVar6 + 0xc);
  iVar1 = (*pcVar4)(ppppiVar5,1,0);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar4)(ppppiVar5,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = 0x18;
    iVar2 = 0x14;
    if (*param_1 == 2) {
      iVar1 = 0x1c;
      iVar2 = 0x18;
    }
    local_48 = *(undefined4 **)((int)param_1 + iVar1);
    local_4c = *(int *****)((int)param_1 + iVar2);
    local_3c = &local_4c;
    local_38 = &DAT_0157d360;
    iVar1 = FUN_00fa948c(ppppiVar5,iVar6,&DAT_00590e71,&local_3c);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (*pcVar4)(ppppiVar5,&DAT_0041950f,2);
    if (iVar1 != 0) {
      return 1;
    }
    local_3c = (int *****)(param_1 + 0x17);
    iVar1 = FUN_00fb34b0(param_2,&DAT_0038bde8,10,&DAT_0038bdf2,10,param_1 + 0x14,&LAB_011dd55c,
                         &DAT_0056a088,8,param_1 + 0x15,FUN_011cadf8,&DAT_0038bdfc,0xd,
                         param_1 + 0x18,FUN_011cac74,&DAT_0038be09,0x19,&local_3c,FUN_011dca7c);
  }
  else {
    iVar1 = (*pcVar4)(ppppiVar5,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_34 = &local_3d;
    iVar1 = 0x18;
    iVar2 = 0x14;
    if (*param_1 == 2) {
      iVar1 = 0x1c;
      iVar2 = 0x18;
    }
    local_3d = 1;
    local_28 = *(undefined4 *)((int)param_1 + iVar1);
    local_2c = *(int ****)((int)param_1 + iVar2);
    local_4c = &local_2c;
    local_48 = &DAT_0157d360;
    local_3c = (int *****)ppppiVar5;
    local_38 = (undefined4 *)iVar6;
    iVar1 = FUN_00fa948c(&local_3c,&DAT_01880dc4,&DAT_00590e71,&local_4c);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_00fb1f64(&local_3c,&DAT_00414a81,2);
    if (iVar1 != 0) {
      return 1;
    }
    local_44 = &local_3d;
    local_3d = 1;
    local_34 = (undefined1 *)param_2[2];
    local_30 = param_2[3];
    local_38 = (undefined4 *)&DAT_01880dc4;
    local_2c = (int ***)(param_1 + 0x17);
    local_4c = ppppiVar5;
    local_48 = (undefined4 *)iVar6;
    local_3c = &local_4c;
    iVar1 = FUN_00fb34b0(&local_3c,&DAT_0038bde8,10,&DAT_0038bdf2,10,param_1 + 0x14,&LAB_011dd55c,
                         &DAT_0056a088,8,param_1 + 0x15,FUN_011cadf8,&DAT_0038bdfc,0xd,
                         param_1 + 0x18,FUN_011cac74,&DAT_0038be09,0x19,&local_2c,FUN_011dca7c);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (*(code *)local_38[3])(local_3c,&DAT_00414a81,2);
  }
  if (iVar1 == 0) {
    uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
    return uVar3;
  }
  return 1;
}

