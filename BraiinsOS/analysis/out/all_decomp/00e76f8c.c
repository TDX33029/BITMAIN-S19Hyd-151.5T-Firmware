// FUN_00e76f8c @ 00e76f8c size=448 calls_out=6 calls_in=1
// strings: 

void FUN_00e76f8c(undefined4 *param_1,int param_2,int param_3,undefined1 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 *local_40;
  undefined4 **local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  iVar13 = 1;
  FUN_015f3b0c(&local_38,1);
  uVar5 = local_30;
  uVar4 = local_34;
  uVar1 = local_38;
  iVar7 = *(int *)(param_2 + 0x17c);
  iVar12 = 1;
  uVar9 = *(undefined4 *)(param_2 + 0x178);
  if ((iVar7 != 0) && (iVar12 = thunk_FUN_016d4a50(iVar7), iVar12 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar7);
  }
  FUN_016dd1aa(iVar12,uVar9,iVar7);
  uVar9 = *(undefined4 *)(param_2 + 0x154);
  iVar8 = *(int *)(param_2 + 0x158);
  if ((iVar8 != 0) && (iVar13 = thunk_FUN_016d4a50(iVar8), iVar13 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar8);
  }
  FUN_016dd1aa(iVar13,uVar9,iVar8);
  FUN_016bda2c(&local_38);
  DataMemoryBarrier(0xb);
  if (DAT_018d7c78 != 0) {
    local_3c = &local_40;
    local_40 = &DAT_018d7c68;
    FUN_015eedc4(&DAT_018d7c78,1,&local_3c,&DAT_0187aa4c,&DAT_018ac9b8);
  }
  *param_1 = uVar1;
  uVar1 = DAT_018d7c68;
  *(undefined1 *)((int)param_1 + 0x69) = param_4;
  param_1[0x10] = iVar7;
  param_1[0x15] = iVar8;
  puVar6 = *(uint **)(param_3 + 8);
  param_1[0x12] = iVar7;
  param_1[0x13] = iVar8;
  param_1[0x14] = iVar13;
  uVar3 = DAT_018d7c74;
  uVar2 = DAT_018d7c70;
  uVar9 = DAT_018d7c6c;
  uVar10 = *puVar6;
  uVar11 = puVar6[1];
  param_1[0x11] = iVar12;
  param_1[2] = uVar5;
  *puVar6 = uVar10 + 1;
  puVar6[1] = uVar11 + (0xfffffffe < uVar10);
  param_1[1] = uVar4;
  param_1[4] = local_38;
  param_1[5] = local_34;
  param_1[6] = local_30;
  param_1[7] = uStack_2c;
  param_1[8] = uVar1;
  param_1[9] = uVar9;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  FUN_016dd1aa(param_1 + 0x16,param_5,0x11);
  param_1[0xe] = param_7;
  param_1[0xc] = uVar10;
  param_1[0xd] = uVar11;
  param_1[0xf] = param_8;
  return;
}

