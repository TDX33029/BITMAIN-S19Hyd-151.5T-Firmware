// FUN_0171f84c @ 0171f84c size=400 calls_out=5 calls_in=1
// strings: 

undefined4 FUN_0171f84c(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 uVar8;
  uint uVar9;
  uint local_28;
  int local_24;
  
  local_24 = DAT_018ddaf8;
  FUN_017185b4(param_4,param_2,&PTR_018bc3f4,0);
  piVar1 = (int *)FUN_017186b0(param_4);
  if ((piVar1 == (int *)0x0) ||
     (iVar2 = FUN_0171f374(piVar1,&local_28,param_2,param_3,param_4), iVar2 == 0)) {
    uVar8 = 0;
    goto LAB_0171f8e4;
  }
  iVar2 = piVar1[1];
  uVar9 = 0;
  if (iVar2 != 0) {
    puVar3 = (uint *)*piVar1;
    local_28 = *puVar3 ^ 1 | local_28;
    if (1 < iVar2) {
      if (iVar2 - 2U < 2) {
        uVar9 = 1;
      }
      else {
        uVar9 = iVar2 - 1;
        uVar5 = 0;
        uVar4 = 0;
        puVar6 = puVar3 + 1;
        do {
          puVar7 = puVar6 + 2;
          uVar5 = *puVar6 | uVar5;
          uVar4 = puVar6[1] | uVar4;
          puVar6 = puVar7;
        } while (puVar7 != puVar3 + 1 + (uVar9 & 0xfffffffe));
        local_28 = local_28 | uVar5 | uVar4;
        if ((uVar9 & 1) == 0) goto LAB_0171f9c4;
        uVar9 = uVar9 | 1;
      }
      local_28 = local_28 | puVar3[uVar9];
      if ((int)(uVar9 + 1) < iVar2) {
        local_28 = local_28 | puVar3[uVar9 + 1];
      }
    }
LAB_0171f9c4:
    uVar9 = (uint)(local_28 == 0);
  }
  uVar8 = 1;
  *param_1 = uVar9;
LAB_0171f8e4:
  FUN_01718904(param_4);
  if (local_24 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar8;
}

