// FUN_0161c028 @ 0161c028 size=864 calls_out=5 calls_in=0
// strings: 

undefined4 FUN_0161c028(int *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int **ppiVar5;
  code *pcVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  code *pcVar10;
  int *local_54;
  code *local_50;
  int ***local_4c;
  code *local_48;
  int ***local_44;
  undefined1 *local_40;
  int local_3c;
  int local_38;
  undefined1 *local_34;
  undefined1 local_2d;
  int **local_2c;
  char local_28;
  undefined1 local_27;
  
  ppiVar5 = (int **)param_1[1];
  if (ppiVar5 < (int **)0x20) {
    iVar7 = *param_2;
    iVar9 = param_2[1];
    pcVar6 = *(code **)(iVar9 + 0xc);
    iVar2 = (*pcVar6)(iVar7,&DAT_0056a470,8);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = *param_1;
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar9 = (*pcVar6)(iVar7,"(",1);
      if (iVar9 != 0) {
        return 1;
      }
      bVar1 = (*pcVar6)(iVar7,&DAT_00418df9,1);
      local_50._0_2_ = (ushort)bVar1;
      local_54 = param_2;
      FUN_007b9178(&local_54,iVar2,iVar2 + (int)ppiVar5);
      if ((char)local_50 == '\x01') {
        return 1;
      }
      iVar2 = (**(code **)(local_54[1] + 0xc))(*local_54,&DAT_00418ec5,1);
    }
    else {
      iVar3 = (*pcVar6)(iVar7,"(\n",2);
      if (iVar3 != 0) {
        return 1;
      }
      local_34 = &local_2d;
      local_4c = (int ***)param_2[2];
      local_48 = (code *)param_2[3];
      local_54 = &local_3c;
      local_50 = (code *)&DAT_01880dc4;
      local_2d = 1;
      local_3c = iVar7;
      local_38 = iVar9;
      local_28 = FUN_00fb1f64(local_54,&DAT_00418df9,1);
      local_2c = &local_54;
      local_27 = 0;
      FUN_007b9178(&local_2c,iVar2,iVar2 + (int)ppiVar5);
      if ((local_28 == '\x01') ||
         (iVar2 = (*(code *)local_2c[1][3])(*local_2c,&DAT_00418ec5,1), iVar2 != 0)) {
        return 1;
      }
      iVar2 = (**(code **)(local_50 + 0xc))(local_54,&DAT_00414a81,2);
    }
    if (iVar2 == 0) {
      uVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
      return uVar4;
    }
    return 1;
  }
  piVar8 = (int *)*param_2;
  pcVar10 = (code *)param_2[1];
  pcVar6 = *(code **)(pcVar10 + 0xc);
  iVar2 = (*pcVar6)(piVar8,&DAT_0056a470,8);
  local_54 = (int *)*param_1;
  local_40 = &LAB_00fac484;
  local_4c = (int ***)((int)local_54 + 1);
  local_50 = FUN_0078955c;
  local_48 = FUN_0078955c;
  local_44 = &local_2c;
  local_2c = ppiVar5;
  FUN_00600d2c(&local_3c,&DAT_00570940,&local_54);
  uVar4 = 1;
  if (iVar2 != 0) goto LAB_0161c178;
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar2 = (*pcVar6)(piVar8,"(",1);
    if (iVar2 != 0) goto LAB_0161c178;
    iVar2 = FUN_00faa4e8(local_38,local_34,piVar8,pcVar10);
  }
  else {
    iVar2 = (*pcVar6)(piVar8,"(\n",2);
    if (iVar2 != 0) goto LAB_0161c178;
    local_2c = (int **)CONCAT31(local_2c._1_3_,1);
    local_54 = piVar8;
    local_50 = pcVar10;
    local_4c = &local_2c;
    iVar2 = FUN_00faa4e8(local_38,local_34,&local_54,&DAT_01880dc4);
    if (iVar2 != 0) {
      uVar4 = 1;
      goto LAB_0161c178;
    }
    iVar2 = FUN_00fb1f64(&local_54,&DAT_00414a81,2);
  }
  uVar4 = 1;
  if (iVar2 == 0) {
    uVar4 = (*pcVar6)(piVar8,&DAT_00418e07,1);
  }
LAB_0161c178:
  if (local_3c != 0) {
    thunk_FUN_016d3fb4(local_38);
  }
  return uVar4;
}

