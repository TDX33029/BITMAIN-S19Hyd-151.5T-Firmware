// FUN_0161c7c8 @ 0161c7c8 size=708 calls_out=5 calls_in=0
// strings: 

undefined4 FUN_0161c7c8(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  code *pcVar9;
  uint local_4c;
  int *local_48;
  code *local_44;
  uint *local_40;
  code *local_3c;
  uint *local_38;
  undefined1 *local_34;
  int local_30;
  int local_2c;
  uint *local_28;
  
  uVar7 = param_1[1];
  if (uVar7 < 0x20) {
    iVar4 = *param_2;
    iVar8 = param_2[1];
    pcVar5 = *(code **)(iVar8 + 0xc);
    iVar1 = (*pcVar5)(iVar4,&DAT_0056a328,8);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = *param_1;
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar4 = (*pcVar5)(iVar4,"(",1);
      if (iVar4 != 0) {
        return 1;
      }
      iVar1 = FUN_016207e4(iVar1,uVar7,param_2);
    }
    else {
      iVar2 = (*pcVar5)(iVar4,"(\n",2);
      if (iVar2 != 0) {
        return 1;
      }
      local_28 = &local_4c;
      local_40 = (uint *)param_2[2];
      local_3c = (code *)param_2[3];
      local_44 = (code *)&DAT_01880dc4;
      local_48 = &local_30;
      local_4c = CONCAT31(local_4c._1_3_,1);
      local_30 = iVar4;
      local_2c = iVar8;
      iVar1 = FUN_016207e4(iVar1,uVar7,&local_48);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (**(code **)(local_44 + 0xc))(local_48,&DAT_00414a81,2);
    }
    if (iVar1 == 0) {
      uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
      return uVar3;
    }
    return 1;
  }
  piVar6 = (int *)*param_2;
  pcVar9 = (code *)param_2[1];
  pcVar5 = *(code **)(pcVar9 + 0xc);
  iVar1 = (*pcVar5)(piVar6,&DAT_0056a328,8);
  local_48 = (int *)*param_1;
  local_34 = &LAB_00fac484;
  local_40 = (uint *)(local_48 + 8);
  local_3c = FUN_007237b4;
  local_44 = FUN_007237b4;
  local_4c = uVar7;
  local_38 = &local_4c;
  FUN_00600d2c(&local_30,&DAT_00570940,&local_48);
  uVar3 = 1;
  if (iVar1 != 0) goto LAB_0161c8d4;
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar5)(piVar6,"(",1);
    if (iVar1 != 0) goto LAB_0161c8d4;
    iVar1 = FUN_00faa4e8(local_2c,local_28,piVar6,pcVar9);
  }
  else {
    iVar1 = (*pcVar5)(piVar6,"(\n",2);
    if (iVar1 != 0) goto LAB_0161c8d4;
    local_4c = CONCAT31(local_4c._1_3_,1);
    local_48 = piVar6;
    local_44 = pcVar9;
    local_40 = &local_4c;
    iVar1 = FUN_00faa4e8(local_2c,local_28,&local_48,&DAT_01880dc4);
    if (iVar1 != 0) {
      uVar3 = 1;
      goto LAB_0161c8d4;
    }
    iVar1 = FUN_00fb1f64(&local_48,&DAT_00414a81,2);
  }
  uVar3 = 1;
  if (iVar1 == 0) {
    uVar3 = (*pcVar5)(piVar6,&DAT_00418e07,1);
  }
LAB_0161c8d4:
  if (local_30 == 0) {
    return uVar3;
  }
  thunk_FUN_016d3fb4(local_2c);
  return uVar3;
}

