// FUN_00d635b0 @ 00d635b0 size=244 calls_out=3 calls_in=3
// strings: 

void FUN_00d635b0(undefined8 *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 in_d0;
  int local_58;
  int local_54;
  int local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  iVar2 = *param_3;
  iVar7 = 0;
  iVar5 = 4;
  iVar3 = param_3[1];
  local_50 = 0;
  local_54 = 4;
  local_58 = 0;
  if (param_3[2] != 0) {
    iVar6 = param_3[2] << 2;
    do {
      iVar1 = local_50;
      FUN_009d415c(&local_48,param_2,*(undefined4 *)(iVar3 + local_50 * 4));
      if (iVar1 == local_58) {
        FUN_009b6c80(&local_58);
        iVar5 = local_54;
      }
      puVar4 = (undefined4 *)(iVar5 + iVar7);
      local_50 = iVar1 + 1;
      iVar7 = iVar7 + 0x18;
      iVar6 = iVar6 + -4;
      *puVar4 = local_48;
      puVar4[1] = uStack_44;
      puVar4[2] = uStack_40;
      puVar4[3] = uStack_3c;
      puVar4[4] = uStack_38;
      puVar4[5] = uStack_34;
    } while (iVar6 != 0);
  }
  if (iVar2 != 0) {
    thunk_FUN_016d3fb4(iVar3);
  }
  *param_1 = in_d0;
  *(int *)(param_1 + 1) = local_58;
  *(int *)((int)param_1 + 0xc) = local_54;
  *(int *)(param_1 + 2) = local_50;
  return;
}

