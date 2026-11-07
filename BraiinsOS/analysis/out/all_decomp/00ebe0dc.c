// FUN_00ebe0dc @ 00ebe0dc size=428 calls_out=3 calls_in=2
// strings: 

void FUN_00ebe0dc(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (param_2 == (undefined4 *)0x0) {
    *param_1 = 3;
    return;
  }
  iVar13 = param_2[0x12];
  if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar13);
  }
  uVar9 = param_2[0x11];
  if (iVar13 == 0) {
    iVar2 = 1;
    iVar12 = 0;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(iVar13);
    iVar12 = iVar13;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar13);
    }
  }
  FUN_016dd1aa(iVar2,uVar9,iVar13);
  uVar9 = param_2[0xc];
  uVar5 = param_2[0xd];
  puVar3 = (undefined1 *)param_2[4];
  uVar6 = param_2[0xe];
  uVar1 = *(undefined2 *)(param_2 + 0x16);
  if (puVar3 != &DAT_00110000) {
    local_40 = param_2[5];
    uStack_3c = param_2[6];
    uStack_38 = param_2[7];
    local_34 = param_2[8];
    uStack_30 = param_2[9];
    uStack_2c = param_2[10];
    uStack_28 = param_2[0xb];
  }
  iVar8 = param_2[3];
  uVar11 = param_2[2];
  uVar10 = *param_2;
  if (iVar8 == 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = thunk_FUN_016d4a50(iVar8);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar8);
    }
  }
  FUN_016dd1aa(iVar4,uVar11,iVar8);
  uVar11 = param_2[0x14];
  uVar7 = param_2[0x15];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = uVar11;
  param_1[0x15] = uVar7;
  param_1[5] = local_40;
  param_1[6] = uStack_3c;
  param_1[7] = uStack_38;
  param_1[8] = local_34;
  param_1[9] = uStack_30;
  param_1[10] = uStack_2c;
  param_1[0xb] = uStack_28;
  *(undefined2 *)(param_1 + 0x16) = uVar1;
  param_1[0x10] = iVar12;
  param_1[0xc] = uVar9;
  param_1[0xd] = uVar5;
  param_1[0xe] = uVar6;
  param_1[0x12] = iVar13;
  *param_1 = uVar10;
  param_1[1] = iVar8;
  param_1[2] = iVar4;
  param_1[0x11] = iVar2;
  param_1[3] = iVar8;
  param_1[4] = puVar3;
  return;
}

