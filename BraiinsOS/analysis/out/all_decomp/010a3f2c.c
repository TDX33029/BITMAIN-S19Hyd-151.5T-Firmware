// FUN_010a3f2c @ 010a3f2c size=360 calls_out=1 calls_in=2
// strings: 

void FUN_010a3f2c(byte *param_1,byte *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined3 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar4 = *(int *)(param_2 + 0x20);
  bVar1 = *param_2;
  bVar9 = true;
  uVar6 = 0;
  bVar3 = 3;
  if (iVar4 == 0 && bVar1 == 0) {
    uVar8 = 0;
    iVar7 = *(int *)(param_2 + 0x10);
    uVar2 = local_38;
  }
  else {
    local_48 = *(undefined4 *)(param_2 + 0x1c);
    uVar8 = *(undefined4 *)(param_2 + 0x18);
    bVar9 = bVar1 == 0;
    local_44 = *(undefined4 *)(param_2 + 0x20);
    local_40 = *(undefined4 *)(param_2 + 0x24);
    local_3c = *(undefined4 *)(param_2 + 0x28);
    bVar3 = 3;
    if (!bVar9) {
      local_38 = *(undefined4 *)(param_2 + 1);
      uStack_34 = (undefined3)((uint)*(undefined4 *)(param_2 + 4) >> 8);
      bVar3 = bVar1;
    }
    iVar7 = *(int *)(param_2 + 0x10);
    uVar2 = local_38;
  }
  if (iVar7 != 0) {
    uVar6 = *(undefined4 *)(param_2 + 8);
    local_30 = *(undefined4 *)(param_2 + 0xc);
    uStack_2c = *(undefined4 *)(param_2 + 0x10);
    uStack_28 = *(undefined4 *)(param_2 + 0x14);
  }
  local_38._3_1_ = (undefined1)((uint)uVar2 >> 0x18);
  *(undefined4 *)(param_1 + 1) = uVar2;
  *param_1 = bVar3;
  *(uint *)(param_1 + 4) = CONCAT31(uStack_34,local_38._3_1_);
  *(undefined4 *)(param_1 + 8) = uVar6;
  *(undefined4 *)(param_1 + 0xc) = local_30;
  *(undefined4 *)(param_1 + 0x10) = uStack_2c;
  *(undefined4 *)(param_1 + 0x14) = uStack_28;
  *(undefined4 *)(param_1 + 0x18) = uVar8;
  *(undefined4 *)(param_1 + 0x1c) = local_48;
  *(undefined4 *)(param_1 + 0x20) = local_44;
  *(undefined4 *)(param_1 + 0x24) = local_40;
  *(undefined4 *)(param_1 + 0x28) = local_3c;
  if ((bVar9) && (1 < bVar1)) {
    piVar5 = *(int **)(param_2 + 4);
    (**(code **)(*piVar5 + 0x10))(piVar5 + 3,piVar5[1],piVar5[2]);
    thunk_FUN_016d3fb4(piVar5);
  }
  if (iVar7 == 0) {
    (**(code **)(*(int *)(param_2 + 8) + 0x10))
              (param_2 + 0x14,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10));
  }
  if (iVar4 == 0 && bVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x010a4088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_2 + 0x18) + 0x10))
              (param_2 + 0x24,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20));
    return;
  }
  return;
}

