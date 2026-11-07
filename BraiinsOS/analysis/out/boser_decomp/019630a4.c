// FUN_019630a4 @ 019630a4 size=340 calls_out=2 calls_in=0
// strings: one of byte arrayunit valueOption valuenewtype struct | explicit panic

undefined4 FUN_019630a4(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int *local_38;
  undefined1 *local_34;
  int *local_30;
  undefined1 *local_2c;
  int local_28;
  
  iVar5 = param_1[1];
  if (iVar5 == 1) {
    local_38 = (int *)*param_1;
    uVar7 = *param_2;
    uVar4 = param_2[1];
    puVar3 = &DAT_00578c6d;
  }
  else {
    if (iVar5 != 2) {
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("explicit panic",0xe,&DAT_01d271b4);
      }
      uVar7 = *param_2;
      iVar8 = param_2[1];
      pcVar6 = *(code **)(iVar8 + 0xc);
      iVar1 = (*pcVar6)(uVar7,"one of byte arrayunit valueOption valuenewtype struct",7);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = *param_1;
      iVar5 = iVar5 << 3;
      iVar9 = 0;
      do {
        local_28 = iVar1;
        if ((iVar9 != 0) && (iVar2 = (*pcVar6)(uVar7,&DAT_00533bc1,2), iVar2 != 0)) {
          return 1;
        }
        local_38 = &local_28;
        local_34 = &LAB_01963050;
        iVar2 = FUN_012fa178(uVar7,iVar8,&DAT_00578c6d,&local_38);
        if (iVar2 != 0) {
          return 1;
        }
        iVar1 = iVar1 + 8;
        iVar9 = iVar9 + -1;
        iVar5 = iVar5 + -8;
      } while (iVar5 != 0);
      return 0;
    }
    local_38 = (int *)*param_1;
    uVar7 = *param_2;
    uVar4 = param_2[1];
    local_30 = local_38 + 2;
    local_2c = &LAB_018a13b8;
    puVar3 = &DAT_005803d2;
  }
  local_34 = &LAB_018a13b8;
  uVar7 = FUN_012fa178(uVar7,uVar4,puVar3,&local_38);
  return uVar7;
}

