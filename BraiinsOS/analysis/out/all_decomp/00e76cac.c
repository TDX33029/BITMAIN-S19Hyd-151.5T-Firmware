// FUN_00e76cac @ 00e76cac size=480 calls_out=6 calls_in=2
// strings: 

void FUN_00e76cac(undefined4 *param_1,int param_2,int param_3,undefined1 param_4,undefined4 *param_5
                 ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 *local_40;
  undefined4 **local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar11 = 1;
  FUN_015f3b0c(&local_38,1);
  uVar4 = local_30;
  uVar2 = local_34;
  uVar1 = local_38;
  iVar5 = *(int *)(param_2 + 0x17c);
  iVar10 = 1;
  uVar7 = *(undefined4 *)(param_2 + 0x178);
  if ((iVar5 != 0) && (iVar10 = thunk_FUN_016d4a50(iVar5), iVar10 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar5);
  }
  FUN_016dd1aa(iVar10,uVar7,iVar5);
  uVar7 = *(undefined4 *)(param_2 + 0x154);
  iVar6 = *(int *)(param_2 + 0x158);
  if ((iVar6 != 0) && (iVar11 = thunk_FUN_016d4a50(iVar6), iVar11 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar6);
  }
  FUN_016dd1aa(iVar11,uVar7,iVar6);
  FUN_016bda2c(&local_38);
  DataMemoryBarrier(0xb);
  if (DAT_018d7c78 != 0) {
    local_3c = &local_40;
    local_40 = &DAT_018d7c68;
    FUN_015eedc4(&DAT_018d7c78,1,&local_3c,&DAT_0187aa4c,&DAT_018ac9b8);
  }
  *param_1 = uVar1;
  param_1[8] = DAT_018d7c68;
  *(undefined1 *)((int)param_1 + 0x69) = param_4;
  param_1[2] = uVar4;
  param_1[0x12] = iVar5;
  param_1[0x13] = iVar6;
  param_1[0x14] = iVar11;
  puVar3 = *(uint **)(param_3 + 8);
  param_1[0x15] = iVar6;
  uVar1 = DAT_018d7c6c;
  uVar8 = *puVar3;
  uVar9 = puVar3[1];
  param_1[0x10] = iVar5;
  uVar7 = DAT_018d7c74;
  uVar4 = DAT_018d7c70;
  param_1[9] = uVar1;
  param_1[0xb] = uVar7;
  *puVar3 = uVar8 + 1;
  puVar3[1] = uVar9 + (0xfffffffe < uVar8);
  param_1[10] = uVar4;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 0x16) = 1;
  param_1[7] = local_2c;
  uVar4 = param_5[1];
  uVar7 = param_5[2];
  param_1[0xc] = uVar8;
  param_1[0xd] = uVar9;
  param_1[0xe] = param_7;
  param_1[0xf] = param_8;
  uVar2 = *param_5;
  uVar1 = param_5[3];
  param_1[0x11] = iVar10;
  param_1[6] = local_30;
  param_1[5] = local_34;
  param_1[4] = local_38;
  *(undefined4 *)((int)param_1 + 0x59) = uVar2;
  *(undefined4 *)((int)param_1 + 0x5d) = uVar4;
  *(undefined4 *)((int)param_1 + 0x61) = uVar7;
  *(undefined4 *)((int)param_1 + 0x65) = uVar1;
  return;
}

