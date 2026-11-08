// FUN_0080b254 @ 0080b254 size=1196 calls_out=3 calls_in=0
// strings: minimumMissingGroupsFirstMustBeUnnamed | InvalidChecksum | NotImplementedInstanceRequiredForSizeMoreThanOneDynamicTypeBufferSizeMismatchBufferModMismatchactual_sizemodulo_requiredSliceIndexingErrorslice_len

uint FUN_0080b254(undefined1 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined1 *local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined1 **local_14;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    local_20 = param_1 + 8;
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00344c76,0x11);
    local_18 = CONCAT31((int3)(local_18 >> 8),uVar1) & 0xffff00ff;
    local_1c = param_2;
    uVar4 = FUN_00fb2258(&local_1c,&DAT_00569b58,8,param_1 + 4,FUN_007883b8);
    pcVar5 = &DAT_0041461c;
    pcVar6 = FUN_00d47d08;
    break;
  case 1:
    local_20 = param_1 + 2;
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00344c87,0xf);
    local_18 = CONCAT31((int3)(local_18 >> 8),uVar1) & 0xffff00ff;
    local_1c = param_2;
    uVar4 = FUN_00fb2258(&local_1c,&DAT_00344c96,5,param_1 + 1,FUN_0078955c);
    pcVar5 = &DAT_00414809;
    pcVar6 = FUN_01135a50;
    break;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x0080b37c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_004119b3,0xb);
    return uVar3;
  case 3:
    local_20 = param_1 + 8;
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00344c9b,0x12);
    local_18 = CONCAT31((int3)(local_18 >> 8),uVar1) & 0xffff00ff;
    local_1c = param_2;
    uVar4 = FUN_00fb2258(&local_1c,&DAT_0041461c,6,param_1 + 4,FUN_007883b8);
    pcVar5 = "minimumMissingGroupsFirstMustBeUnnamed";
    pcVar6 = FUN_00d47d08;
    uVar7 = 7;
    goto LAB_0080b4d8;
  case 4:
    local_20 = param_1 + 2;
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00344cad,10);
    local_18 = CONCAT31((int3)(local_18 >> 8),uVar1) & 0xffff00ff;
    local_1c = param_2;
    uVar4 = FUN_00fb2258(&local_1c,&DAT_0041461c,6,param_1 + 1,FUN_0078955c);
    pcVar6 = FUN_01135a50;
    goto LAB_0080b4cc;
  case 5:
    local_20 = param_1 + 4;
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,"InvalidChecksum",0xf);
    local_18 = CONCAT31((int3)(local_18 >> 8),uVar1) & 0xffff00ff;
    local_1c = param_2;
    uVar4 = FUN_00fb2258(&local_1c,&DAT_0041461c,6,param_1 + 2,FUN_00786d00);
    pcVar6 = FUN_01090210;
LAB_0080b4cc:
    pcVar5 = &DAT_00569b58;
    uVar7 = 8;
    goto LAB_0080b4d8;
  case 6:
    iVar2 = (**(code **)(param_2[1] + 0xc))
                      (*param_2,
                       "NotImplementedInstanceRequiredForSizeMoreThanOneDynamicTypeBufferSizeMismatchBufferModMismatchactual_sizemodulo_requiredSliceIndexingErrorslice_len"
                       ,0xe);
    uVar3 = 1;
    if (iVar2 != 0) goto LAB_0080b4f4;
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a79,3);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00568d68,4);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_00faa4e8(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),*param_2,
                           param_2[1]);
    }
    else {
      iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7e,3);
      uVar3 = 1;
      if (iVar2 != 0) goto LAB_0080b4f4;
      local_14 = &local_20;
      local_1c = (undefined4 *)*param_2;
      local_18 = param_2[1];
      local_20 = (undefined1 *)CONCAT31(local_20._1_3_,1);
      iVar2 = FUN_00fb1f64(&local_1c,&DAT_00568d68,4);
      if (((iVar2 != 0) || (iVar2 = FUN_00fb1f64(&local_1c,&DAT_00414a7c,2), iVar2 != 0)) ||
         (iVar2 = FUN_00faa4e8(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),&local_1c,
                               &DAT_01880dc4), iVar2 != 0)) {
        return 1;
      }
      iVar2 = FUN_00fb1f64(&local_1c,&DAT_00414a81,2);
    }
    uVar3 = 1;
    if (iVar2 != 0) goto LAB_0080b4f4;
    if ((*(byte *)((int)param_2 + 10) & 0x80) != 0) {
      uVar4 = *param_2;
      iVar2 = param_2[1];
      goto LAB_0080b59c;
    }
    uVar4 = *param_2;
    iVar2 = param_2[1];
    goto LAB_0080b514;
  }
  uVar7 = 6;
LAB_0080b4d8:
  FUN_00fb2258(uVar4,pcVar5,uVar7,&local_20,pcVar6);
  uVar3 = (uint)(local_18._1_1_ | (byte)local_18);
  if (local_18._1_1_ != 1 || (local_18 & 1) != 0) {
LAB_0080b4f4:
    return uVar3 & 1;
  }
  if ((*(byte *)((int)local_1c + 10) & 0x80) != 0) {
    uVar4 = *local_1c;
    iVar2 = local_1c[1];
LAB_0080b59c:
    uVar3 = (**(code **)(iVar2 + 0xc))(uVar4,"}",1);
    return uVar3 & 1;
  }
  uVar4 = *local_1c;
  iVar2 = local_1c[1];
LAB_0080b514:
  uVar3 = (**(code **)(iVar2 + 0xc))(uVar4," }",2);
  return uVar3 & 1;
}

