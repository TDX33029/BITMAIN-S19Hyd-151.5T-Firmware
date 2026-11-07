// FUN_01579bec @ 01579bec size=404 calls_out=2 calls_in=0
// strings: one of byte arrayunit valueOption valuenewtype structmapunit variantnewtype varianttuple variantstruct varianta boolean | explicit panic

undefined4 FUN_01579bec(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined4 uVar7;
  int iVar8;
  int *local_38;
  undefined4 *local_34;
  int *local_30;
  undefined4 *local_2c;
  int local_28;
  
  iVar4 = param_1[1];
  if (iVar4 == 1) {
    local_38 = (int *)*param_1;
    uVar7 = *param_2;
    uVar5 = param_2[1];
    puVar3 = &DAT_00574fbe;
  }
  else {
    if (iVar4 != 2) {
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("explicit panic",0xe,&DAT_018a92ec);
      }
      uVar7 = *param_2;
      iVar8 = param_2[1];
      pcVar6 = *(code **)(iVar8 + 0xc);
      iVar1 = (*pcVar6)(uVar7,
                        "one of byte arrayunit valueOption valuenewtype structmapunit variantnewtype varianttuple variantstruct varianta boolean"
                        ,7);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = *param_1;
      local_34 = (undefined4 *)&LAB_008b9b38;
      local_38 = &local_28;
      local_28 = iVar1;
      iVar2 = FUN_00fa948c(uVar7,iVar8,&DAT_00574fbe,&local_38);
      if (iVar2 != 0) {
        return 1;
      }
      iVar4 = iVar4 * 8 + -8;
      while( true ) {
        iVar1 = iVar1 + 8;
        local_28 = iVar1;
        iVar2 = (*pcVar6)(uVar7,&DAT_0041950f,2);
        if (iVar2 != 0) {
          return 1;
        }
        local_38 = &local_28;
        local_34 = (undefined4 *)&LAB_008b9b38;
        iVar2 = FUN_00fa948c(uVar7,iVar8,&DAT_00574fbe,&local_38);
        if (iVar2 != 0) break;
        iVar4 = iVar4 + -8;
        if (iVar4 == 0) {
          return 0;
        }
      }
      return 1;
    }
    local_38 = (int *)*param_1;
    uVar7 = *param_2;
    uVar5 = param_2[1];
    local_30 = local_38 + 2;
    local_2c = &DAT_0157d360;
    puVar3 = &DAT_0057e423;
  }
  local_34 = &DAT_0157d360;
  uVar7 = FUN_00fa948c(uVar7,uVar5,puVar3,&local_38);
  return uVar7;
}

