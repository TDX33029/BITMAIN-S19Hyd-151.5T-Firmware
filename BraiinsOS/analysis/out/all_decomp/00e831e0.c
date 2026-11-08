// FUN_00e831e0 @ 00e831e0 size=340 calls_out=6 calls_in=2
// strings: 

void FUN_00e831e0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 unaff_r4;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 3)) {
  case 0:
    param_2[1] = *param_2;
    param_2[2] = 0xffffffff;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187af30);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187af30);
  }
  iVar1 = FUN_00e43b0c(param_2 + 1,param_3);
  if (iVar1 == 0) {
    param_1[10] = 0x3b9aca01;
    *(undefined1 *)(param_2 + 3) = 3;
    return;
  }
  iVar2 = param_2[1];
  if (iVar2 != 0) {
    FUN_00e43e74(iVar2,param_2[2],1);
  }
  puVar10 = *(undefined1 **)(iVar1 + 0x38);
  if (puVar10 != &DAT_3b9aca00) {
    uVar3 = *(undefined4 *)(iVar1 + 0x20);
    uVar5 = *(undefined4 *)(iVar1 + 0x24);
    uVar6 = *(undefined4 *)(iVar1 + 0x28);
    uVar7 = *(undefined4 *)(iVar1 + 0x2c);
    uVar8 = *(undefined4 *)(iVar1 + 0x30);
    uVar9 = *(undefined4 *)(iVar1 + 0x34);
    unaff_r4 = *(undefined4 *)(iVar1 + 0x3c);
    FUN_015f3b0c(&local_38,1);
    local_78 = local_38;
    local_7c = local_34;
    local_74 = local_30;
    puVar4 = (undefined4 *)((uint)&local_58 | 4);
    *puVar4 = uVar3;
    puVar4[1] = uVar5;
    puVar4[2] = uVar6;
    puVar4[3] = uVar7;
    puVar4[4] = uVar8;
    puVar4[5] = uVar9;
  }
  FUN_00e44114(iVar1);
  *param_1 = local_78;
  param_1[1] = local_7c;
  param_1[2] = local_74;
  param_1[3] = local_58;
  param_1[4] = uStack_54;
  param_1[5] = uStack_50;
  param_1[6] = local_4c;
  param_1[7] = uStack_48;
  param_1[8] = uStack_44;
  param_1[9] = uStack_40;
  param_1[10] = puVar10;
  param_1[0xb] = unaff_r4;
  *(undefined1 *)(param_2 + 3) = 1;
  return;
}

