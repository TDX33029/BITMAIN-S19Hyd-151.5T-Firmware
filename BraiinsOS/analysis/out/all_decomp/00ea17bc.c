// FUN_00ea17bc @ 00ea17bc size=272 calls_out=0 calls_in=0
// strings: 

undefined4 FUN_00ea17bc(uint *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  
  uVar5 = *param_1;
  if (*param_2 == 1) {
    uVar1 = param_2[3];
    uVar6 = 5;
    if (uVar1 < 0x10000) {
      uVar6 = 3;
    }
    if (uVar1 < 0xfb) {
      uVar6 = 1;
    }
    uVar2 = uVar5 + uVar1 + uVar6;
    *param_1 = uVar2 + 3;
    param_1[1] = param_1[1] + (uint)CARRY4(uVar5,uVar1) + (uint)CARRY4(uVar5 + uVar1,uVar6) +
                 (uint)(0xfffffffc < uVar2);
  }
  else {
    piVar8 = (int *)param_2[2];
    uVar6 = param_2[3];
    uVar1 = 6;
    if (uVar6 < 0x10000) {
      uVar1 = 4;
    }
    if (uVar6 < 0xfb) {
      uVar1 = 2;
    }
    uVar2 = uVar5 + uVar1;
    uVar3 = uVar2 + 1;
    uVar5 = param_1[1] + (uint)CARRY4(uVar5,uVar1) + (uint)(0xfffffffe < uVar2);
    *param_1 = uVar3;
    param_1[1] = uVar5;
    if (uVar6 * 0x68 != 0) {
      uVar1 = piVar8[6];
      iVar7 = 2;
      if ((uint)(uVar1 < 5) <= (uint)-piVar8[7]) {
        iVar7 = uVar1 - 5;
      }
      if (iVar7 == 0) {
        bVar9 = 0xfffffffe < uVar3;
        iVar7 = uVar2 + 2;
      }
      else {
        if (iVar7 != 1) {
                    /* WARNING: Could not recover jumptable at 0x00ea1908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (*(code *)(&DAT_00ea190c + *(int *)(&DAT_00ea190c + uVar1 * 4)))();
          return uVar4;
        }
        bVar9 = 0xfffffff6 < uVar3;
        iVar7 = uVar2 + 10;
      }
                    /* WARNING: Could not recover jumptable at 0x00ea19b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)(&DAT_00ea19b4 + *(int *)(&DAT_00ea19b4 + *piVar8 * 4)))
                        (iVar7,uVar5 + bVar9);
      return uVar4;
    }
  }
  return 0;
}

