// FUN_016884dc @ 016884dc size=1232 calls_out=5 calls_in=0
// strings: 

byte FUN_016884dc(int param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  uint *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *local_3c;
  byte local_38;
  byte local_37;
  undefined1 local_31;
  undefined4 local_30;
  undefined4 local_2c;
  uint ***local_28;
  uint *local_24;
  uint **local_20;
  code *local_1c;
  
  uVar6 = *param_2;
  pcVar4 = *(code **)(param_2[1] + 0xc);
  iVar2 = (*pcVar4)(uVar6,&DAT_0041471c,9);
  iVar7 = 1;
  local_37 = 0;
  local_38 = (byte)iVar2;
  local_3c = param_2;
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar4)(uVar6,&DAT_00414a79,3);
      if (((iVar2 == 0) &&
          (iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414725,5), iVar2 == 0)) &&
         (iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2), iVar2 == 0)) {
        iVar7 = FUN_00faa4e8(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),*param_2,
                             param_2[1]);
      }
    }
    else {
      iVar2 = (*pcVar4)(uVar6,&DAT_00414a7e,3);
      if (iVar2 == 0) {
        local_30 = *param_2;
        local_2c = param_2[1];
        local_28 = &local_20;
        iVar7 = 1;
        local_20 = (uint **)CONCAT31(local_20._1_3_,1);
        iVar2 = FUN_00fb1f64(&local_30,&DAT_00414725,5);
        if ((iVar2 == 0) && (iVar2 = FUN_00fb1f64(&local_30,&DAT_00414a7c,2), iVar2 == 0)) {
          iVar2 = FUN_00faa4e8(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),&local_30,
                               &DAT_01880dc4);
          if (iVar2 == 0) {
            iVar7 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
          }
          else {
            iVar7 = 1;
          }
        }
      }
    }
  }
  bVar1 = 1;
  puVar5 = (uint *)(param_1 + 0xc);
  if (*puVar5 == 0x80000003) {
    if (iVar7 != 0) goto LAB_01688648;
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
      if (((iVar2 == 0) &&
          (iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0056783c,4), iVar2 == 0)) &&
         (iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2), iVar2 == 0)) {
        bVar1 = FUN_00faa4e8(&DAT_004146ad,7,*param_2,param_2[1]);
      }
      goto LAB_01688648;
    }
    local_30 = *param_2;
    local_2c = param_2[1];
    local_28 = &local_20;
    local_20 = (uint **)CONCAT31(local_20._1_3_,1);
    iVar2 = FUN_00fb1f64(&local_30,&DAT_0056783c,4);
    if ((iVar2 != 0) || (iVar2 = FUN_00fb1f64(&local_30,&DAT_00414a7c,2), iVar2 != 0))
    goto LAB_01688648;
    iVar2 = FUN_00faa4e8(&DAT_004146ad,7,&local_30,&DAT_01880dc4);
  }
  else {
    if (iVar7 != 0) goto LAB_01688648;
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
      if (((iVar2 == 0) &&
          (iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0056783c,4), iVar2 == 0)) &&
         (iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2), iVar2 == 0)) {
        bVar1 = FUN_01687fd0(puVar5,*param_2,param_2[1]);
      }
      goto LAB_01688648;
    }
    local_30 = *param_2;
    local_2c = param_2[1];
    local_28 = (uint ***)&local_31;
    local_31 = 1;
    iVar2 = FUN_00fb1f64(&local_30,&DAT_0056783c,4);
    if ((iVar2 != 0) || (iVar2 = FUN_00fb1f64(&local_30,&DAT_00414a7c,2), iVar2 != 0))
    goto LAB_01688648;
    uVar3 = 1;
    if ((int)*puVar5 < 0) {
      uVar3 = *puVar5 ^ 0x80000000;
    }
    if (uVar3 == 0) {
      iVar2 = FUN_00fb1f64(&local_30,&DAT_00414711,5);
    }
    else {
      if (uVar3 == 1) {
        local_1c = (code *)&LAB_0157d350;
        local_24 = puVar5;
      }
      else {
        local_24 = (uint *)(param_1 + 0x10);
        local_1c = FUN_00932f04;
      }
      local_20 = &local_24;
      iVar2 = FUN_00fa948c(&local_30,&DAT_01880dc4,&DAT_00590e71,&local_20);
    }
  }
  if (iVar2 == 0) {
    bVar1 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
  }
  else {
    bVar1 = 1;
  }
LAB_01688648:
  local_37 = 1;
  local_38 = bVar1;
  FUN_00fb2258(&local_3c,&DAT_004146d3,5,param_1 + 0x18,FUN_016743dc);
  if (local_37 != 1 || (local_38 & 1) != 0) {
    return (local_37 | local_38) & 1;
  }
  if ((*(byte *)((int)local_3c + 10) & 0x80) == 0) {
    bVar1 = (**(code **)(local_3c[1] + 0xc))(*local_3c," }",2);
    return bVar1 & 1;
  }
  bVar1 = (**(code **)(local_3c[1] + 0xc))(*local_3c,"}",1);
  return bVar1 & 1;
}

