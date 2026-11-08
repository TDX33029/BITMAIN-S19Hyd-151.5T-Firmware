// FUN_0075c6a0 @ 0075c6a0 size=456 calls_out=6 calls_in=1
// strings: assertion failed: cnt <= self.limit

void FUN_0075c6a0(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *local_50;
  code *local_4c;
  uint *local_48;
  code *local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_28;
  uint local_24;
  
  if ((char)param_1[9] != '\0') {
    iVar4 = param_2[1];
    iVar7 = param_2[2];
    iVar8 = param_2[3];
    iVar9 = param_2[4];
    piVar1 = (int *)((uint)&local_50 | 4);
    *piVar1 = *param_2;
    piVar1[1] = iVar4;
    piVar1[2] = iVar7;
    piVar1[3] = iVar8;
    piVar1[4] = iVar9;
    uVar3 = param_1[4];
    local_50 = (uint *)0x1;
    uVar5 = param_1[7];
    if (uVar5 == uVar3) {
      FUN_014ef894();
      uVar3 = param_1[4];
      uVar5 = param_1[7];
    }
    uVar6 = param_1[6] + uVar5;
    param_1[7] = uVar5 + 1;
    uVar5 = uVar6 - uVar3;
    if (uVar6 < uVar3) {
      uVar5 = uVar6;
    }
    puVar2 = (undefined4 *)(param_1[5] + uVar5 * 0x28);
    *puVar2 = local_50;
    puVar2[1] = local_4c;
    puVar2[2] = local_48;
    puVar2[3] = local_44;
    puVar2[4] = uStack_40;
    puVar2[5] = local_3c;
    puVar2[6] = uStack_38;
    puVar2[7] = uStack_34;
    puVar2[8] = uStack_30;
    puVar2[9] = uStack_2c;
    return;
  }
  uVar5 = param_2[2];
  uVar3 = param_2[4];
  if (uVar5 <= (uint)param_2[4]) {
    uVar3 = uVar5;
  }
  FUN_010bbdc4(param_1,uVar3);
  iVar4 = param_2[1];
  if (uVar3 != 0) {
    iVar7 = param_1[2];
    do {
      uVar6 = uVar3;
      if ((uint)(*param_1 - iVar7) < uVar6) {
        FUN_006bca64(param_1,iVar7,uVar6,1,1);
        iVar7 = param_1[2];
      }
      FUN_016dd1aa(param_1[1] + iVar7,iVar4,uVar6);
      uVar3 = param_2[4];
      iVar7 = iVar7 + uVar6;
      param_1[2] = iVar7;
      if (uVar3 < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("assertion failed: cnt <= self.limit",0x23,&DAT_018a49b8);
      }
      local_24 = param_2[2];
      local_28 = uVar6;
      if (local_24 < uVar6) {
        local_48 = &local_24;
        local_50 = &local_28;
        local_44 = FUN_007883b8;
        local_4c = FUN_007883b8;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00584155,&local_50,&DAT_018a6700);
      }
      uVar5 = local_24 - uVar6;
      iVar4 = param_2[1] + uVar6;
      uVar3 = uVar3 - uVar6;
      param_2[4] = uVar3;
      if (uVar5 <= uVar3) {
        uVar3 = uVar5;
      }
      param_2[1] = iVar4;
      param_2[2] = uVar5;
    } while (uVar3 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x0075c810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2 + 3,iVar4,uVar5);
  return;
}

