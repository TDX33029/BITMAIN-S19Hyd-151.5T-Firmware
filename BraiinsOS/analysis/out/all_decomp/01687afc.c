// FUN_01687afc @ 01687afc size=1108 calls_out=5 calls_in=0
// strings: 

byte FUN_01687afc(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint *puVar7;
  undefined4 *local_44;
  byte local_40;
  byte local_3f;
  undefined1 local_39;
  undefined4 local_38;
  undefined4 local_34;
  uint ***local_30;
  uint *local_2c;
  uint **local_28;
  code *local_24;
  
  local_40 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041471c,9);
  local_3f = '\0';
  local_44 = param_2;
  FUN_00fb2258(&local_44,&DAT_00414725,5,param_1,FUN_01688084);
  puVar1 = local_44;
  puVar7 = (uint *)(param_1 + 0x18);
  if (*puVar7 == 0x80000003) {
    bVar2 = 1;
    if (local_40 != '\0') goto LAB_01687c28;
    if ((*(byte *)((int)local_44 + 10) & 0x80) == 0) {
      puVar5 = &DAT_0041950f;
      if (local_3f == '\0') {
        puVar5 = &DAT_00414a79;
      }
      uVar6 = 3;
      if (local_3f != '\0') {
        uVar6 = 2;
      }
      iVar3 = (**(code **)(local_44[1] + 0xc))(*local_44,puVar5,uVar6);
      if (((iVar3 == 0) &&
          (iVar3 = (**(code **)(puVar1[1] + 0xc))(*puVar1,&DAT_0056783c,4), iVar3 == 0)) &&
         (iVar3 = (**(code **)(puVar1[1] + 0xc))(*puVar1,&DAT_00414a7c,2), iVar3 == 0)) {
        bVar2 = FUN_00faa4e8(&DAT_004146ad,7,*puVar1,puVar1[1]);
      }
      goto LAB_01687c28;
    }
    if ((local_3f == '\0') &&
       (iVar3 = (**(code **)(local_44[1] + 0xc))(*local_44,&DAT_00414a7e,3), iVar3 != 0))
    goto LAB_01687c28;
    local_30 = &local_28;
    local_38 = *puVar1;
    local_34 = puVar1[1];
    bVar2 = 1;
    local_28 = (uint **)CONCAT31(local_28._1_3_,1);
    iVar3 = FUN_00fb1f64(&local_38,&DAT_0056783c,4);
    if ((iVar3 != 0) || (iVar3 = FUN_00fb1f64(&local_38,&DAT_00414a7c,2), iVar3 != 0))
    goto LAB_01687c28;
    iVar3 = FUN_00faa4e8(&DAT_004146ad,7,&local_38,&DAT_01880dc4);
  }
  else {
    bVar2 = 1;
    if (local_40 != '\0') goto LAB_01687c28;
    if ((*(byte *)((int)local_44 + 10) & 0x80) == 0) {
      puVar5 = &DAT_0041950f;
      if (local_3f == '\0') {
        puVar5 = &DAT_00414a79;
      }
      uVar6 = 3;
      if (local_3f != '\0') {
        uVar6 = 2;
      }
      iVar3 = (**(code **)(local_44[1] + 0xc))(*local_44,puVar5,uVar6);
      if (((iVar3 == 0) &&
          (iVar3 = (**(code **)(puVar1[1] + 0xc))(*puVar1,&DAT_0056783c,4), iVar3 == 0)) &&
         (iVar3 = (**(code **)(puVar1[1] + 0xc))(*puVar1,&DAT_00414a7c,2), iVar3 == 0)) {
        bVar2 = FUN_01687fd0(puVar7,*puVar1,puVar1[1]);
      }
      goto LAB_01687c28;
    }
    if ((local_3f == '\0') &&
       (iVar3 = (**(code **)(local_44[1] + 0xc))(*local_44,&DAT_00414a7e,3), iVar3 != 0))
    goto LAB_01687c28;
    local_30 = (uint ***)&local_39;
    local_38 = *puVar1;
    local_34 = puVar1[1];
    bVar2 = 1;
    local_39 = 1;
    iVar3 = FUN_00fb1f64(&local_38,&DAT_0056783c,4);
    if ((iVar3 != 0) || (iVar3 = FUN_00fb1f64(&local_38,&DAT_00414a7c,2), iVar3 != 0))
    goto LAB_01687c28;
    uVar4 = 1;
    if ((int)*puVar7 < 0) {
      uVar4 = *puVar7 ^ 0x80000000;
    }
    if (uVar4 == 0) {
      iVar3 = FUN_00fb1f64(&local_38,&DAT_00414711,5);
    }
    else {
      if (uVar4 == 1) {
        local_24 = (code *)&LAB_0157d350;
        local_2c = puVar7;
      }
      else {
        local_2c = (uint *)(param_1 + 0x1c);
        local_24 = FUN_00932f04;
      }
      local_28 = &local_2c;
      iVar3 = FUN_00fa948c(&local_38,&DAT_01880dc4,&DAT_00590e71,&local_28);
    }
  }
  if (iVar3 == 0) {
    bVar2 = FUN_00fb1f64(&local_38,&DAT_00414a81,2);
  }
  else {
    bVar2 = 1;
  }
LAB_01687c28:
  local_3f = 1;
  local_40 = bVar2;
  FUN_00fb2258(&local_44,&DAT_004146d3,5,param_1 + 0x24,FUN_016743dc);
  if (local_3f != 1 || (local_40 & 1) != 0) {
    return (local_3f | local_40) & 1;
  }
  if ((*(byte *)((int)local_44 + 10) & 0x80) == 0) {
    bVar2 = (**(code **)(local_44[1] + 0xc))(*local_44," }",2);
    return bVar2 & 1;
  }
  bVar2 = (**(code **)(local_44[1] + 0xc))(*local_44,"}",1);
  return bVar2 & 1;
}

