// FUN_014106fc @ 014106fc size=416 calls_out=5 calls_in=2
// strings: 

void FUN_014106fc(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *local_50;
  code *local_4c;
  uint *local_48;
  code *local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_28;
  uint local_24;
  
  if ((char)param_1[9] != '\0') {
    local_4c = (code *)*param_2;
    uVar2 = param_1[4];
    local_48 = (uint *)param_2[1];
    uVar3 = param_1[7];
    local_44 = (code *)param_2[2];
    local_40 = param_2[3];
    local_50 = (uint *)0x0;
    if (uVar3 == uVar2) {
      FUN_014ef894();
      uVar2 = param_1[4];
      uVar3 = param_1[7];
    }
    uVar4 = param_1[6] + uVar3;
    param_1[7] = uVar3 + 1;
    uVar3 = uVar4 - uVar2;
    if (uVar4 < uVar2) {
      uVar3 = uVar4;
    }
    puVar1 = (undefined4 *)(param_1[5] + uVar3 * 0x28);
    *puVar1 = local_50;
    puVar1[1] = local_4c;
    puVar1[2] = local_48;
    puVar1[3] = local_44;
    puVar1[4] = local_40;
    puVar1[5] = local_3c;
    puVar1[6] = uStack_38;
    puVar1[7] = uStack_34;
    puVar1[8] = uStack_30;
    puVar1[9] = uStack_2c;
    return;
  }
  uVar2 = param_2[2];
  FUN_010bbdc4(param_1,uVar2);
  iVar6 = param_2[1];
  if (uVar2 != 0) {
    iVar5 = param_1[2];
    do {
      uVar3 = uVar2;
      if ((uint)(*param_1 - iVar5) < uVar3) {
        FUN_0148d72c(param_1,iVar5,uVar3,1,1);
        iVar5 = param_1[2];
      }
      FUN_016dd1aa(param_1[1] + iVar5,iVar6,uVar3);
      local_24 = param_2[2];
      iVar5 = iVar5 + uVar3;
      param_1[2] = iVar5;
      local_28 = uVar3;
      if (local_24 < uVar3) {
        local_48 = &local_24;
        local_50 = &local_28;
        local_44 = FUN_007883b8;
        local_4c = FUN_007883b8;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00584155,&local_50,&DAT_018a6700);
      }
      uVar2 = local_24 - uVar3;
      iVar6 = param_2[1] + uVar3;
      param_2[1] = iVar6;
      param_2[2] = uVar2;
    } while (uVar2 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x0141085c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2 + 3,iVar6,0);
  return;
}

