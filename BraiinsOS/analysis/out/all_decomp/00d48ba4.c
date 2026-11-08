// FUN_00d48ba4 @ 00d48ba4 size=1000 calls_out=4 calls_in=1
// strings: 

undefined4 FUN_00d48ba4(float *param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  float fVar7;
  undefined4 local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined1 *local_30;
  undefined *local_2c;
  uint local_28;
  uint local_24;
  
  uVar5 = *param_2;
  iVar6 = param_2[1];
  pcVar2 = *(code **)(iVar6 + 0xc);
  iVar1 = (*pcVar2)(uVar5,1,0);
  if (iVar1 != 0) {
    return 1;
  }
  puVar3 = param_2 + 2;
  uVar4 = *puVar3;
  if ((uVar4 & 0x800000) == 0) {
    iVar1 = (*pcVar2)(uVar5,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    if ((uVar4 & 0x10000000) == 0) {
      fVar7 = ABS(*param_1);
      if ((1e+16 <= fVar7) || (*param_1 != 0.0 && fVar7 < 0.0001)) {
        iVar1 = FUN_00fb1078(param_2,(uVar4 & 0x3fffff) >> 0x15);
      }
      else {
        iVar1 = FUN_00fb0db0(param_2,(uVar4 & 0x3fffff) >> 0x15,1);
      }
    }
    else {
      iVar1 = FUN_00fb0a04(param_2,(uVar4 & 0x3fffff) >> 0x15,*(undefined2 *)((int)param_2 + 0xe));
    }
  }
  else {
    iVar1 = (*pcVar2)(uVar5,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_38 = &local_31;
    local_31 = 1;
    local_28 = *puVar3;
    local_24 = param_2[3];
    local_2c = &DAT_01880dc4;
    local_40 = uVar5;
    local_3c = iVar6;
    if ((local_28 & 0x10000000) == 0) {
      fVar7 = ABS(*param_1);
      if ((1e+16 <= fVar7) || (*param_1 != 0.0 && fVar7 < 0.0001)) {
        local_30 = (undefined1 *)&local_40;
        iVar1 = FUN_00fb1078(&local_30,(local_28 & 0x3fffff) >> 0x15);
      }
      else {
        local_30 = (undefined1 *)&local_40;
        iVar1 = FUN_00fb0db0(&local_30,(local_28 & 0x3fffff) >> 0x15,1);
      }
    }
    else {
      local_30 = (undefined1 *)&local_40;
      iVar1 = FUN_00fb0a04(&local_30,(local_28 & 0x3fffff) >> 0x15,local_24 >> 0x10);
    }
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2);
  }
  if (iVar1 == 0) {
    uVar4 = *puVar3;
    if ((uVar4 & 0x800000) == 0) {
      iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
      if (iVar1 != 0) {
        return 1;
      }
      if ((uVar4 & 0x10000000) == 0) {
        fVar7 = ABS(param_1[1]);
        if ((1e+16 <= fVar7) || (param_1[1] != 0.0 && fVar7 < 0.0001)) {
          iVar1 = FUN_00fb1078(param_2,(uVar4 & 0x3fffff) >> 0x15);
        }
        else {
          iVar1 = FUN_00fb0db0(param_2,(uVar4 & 0x3fffff) >> 0x15,1);
        }
      }
      else {
        iVar1 = FUN_00fb0a04(param_2,(uVar4 & 0x3fffff) >> 0x15,*(undefined2 *)((int)param_2 + 0xe))
        ;
      }
    }
    else {
      local_3c = param_2[1];
      local_40 = *param_2;
      local_31 = 1;
      local_28 = *puVar3;
      local_24 = param_2[3];
      local_38 = &local_31;
      local_2c = &DAT_01880dc4;
      if ((local_28 & 0x10000000) == 0) {
        fVar7 = ABS(param_1[1]);
        if ((1e+16 <= fVar7) || (param_1[1] != 0.0 && fVar7 < 0.0001)) {
          local_30 = (undefined1 *)&local_40;
          iVar1 = FUN_00fb1078(&local_30,(local_28 & 0x3fffff) >> 0x15);
        }
        else {
          local_30 = (undefined1 *)&local_40;
          iVar1 = FUN_00fb0db0(&local_30,(local_28 & 0x3fffff) >> 0x15,1);
        }
      }
      else {
        local_30 = (undefined1 *)&local_40;
        iVar1 = FUN_00fb0a04(&local_30,(local_28 & 0x3fffff) >> 0x15,local_24 >> 0x10);
      }
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2);
    }
    if (iVar1 == 0) {
      uVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
      return uVar5;
    }
  }
  return 1;
}

