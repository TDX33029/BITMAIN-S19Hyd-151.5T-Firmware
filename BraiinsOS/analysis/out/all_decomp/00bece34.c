// FUN_00bece34 @ 00bece34 size=620 calls_out=4 calls_in=0
// strings: 

undefined4 FUN_00bece34(int *param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  undefined4 local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  uint local_2c;
  uint local_28;
  
  if (*param_1 != 1) {
                    /* WARNING: Could not recover jumptable at 0x00becea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0040d566,7);
    return uVar3;
  }
  uVar3 = *param_2;
  iVar4 = param_2[1];
  pcVar2 = *(code **)(iVar4 + 0xc);
  iVar1 = (*pcVar2)(uVar3,&DAT_00410e37,2);
  if (iVar1 == 0) {
    uVar5 = param_2[2];
    if ((uVar5 & 0x800000) == 0) {
      iVar1 = (*pcVar2)(uVar3,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      if ((uVar5 & 0x10000000) == 0) {
        fVar6 = ABS((float)param_1[1]);
        if ((1e+16 <= fVar6) || ((float)param_1[1] != 0.0 && fVar6 < 0.0001)) {
          iVar1 = FUN_00fb1078(param_2,(uVar5 & 0x3fffff) >> 0x15);
        }
        else {
          iVar1 = FUN_00fb0db0(param_2,(uVar5 & 0x3fffff) >> 0x15,1);
        }
      }
      else {
        iVar1 = FUN_00fb0a04(param_2,(uVar5 & 0x3fffff) >> 0x15,*(undefined2 *)((int)param_2 + 0xe))
        ;
      }
    }
    else {
      iVar1 = (*pcVar2)(uVar3,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_3c = &local_35;
      local_35 = 1;
      local_2c = param_2[2];
      local_28 = param_2[3];
      local_30 = &DAT_01880dc4;
      local_34 = &local_44;
      local_44 = uVar3;
      local_40 = iVar4;
      if ((local_2c & 0x10000000) == 0) {
        fVar6 = ABS((float)param_1[1]);
        if ((1e+16 <= fVar6) || ((float)param_1[1] != 0.0 && fVar6 < 0.0001)) {
          iVar1 = FUN_00fb1078(&local_34,(local_2c & 0x3fffff) >> 0x15);
        }
        else {
          iVar1 = FUN_00fb0db0(&local_34,(local_2c & 0x3fffff) >> 0x15,1);
        }
      }
      else {
        iVar1 = FUN_00fb0a04(&local_34,(local_2c & 0x3fffff) >> 0x15,local_28 >> 0x10);
      }
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
    }
    if (iVar1 == 0) {
      uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
      return uVar3;
    }
  }
  return 1;
}

