// FUN_00a88e38 @ 00a88e38 size=1276 calls_out=3 calls_in=1
// strings: 

void FUN_00a88e38(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5,int param_6)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  int iVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  int iVar33;
  int iVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  undefined4 uVar42;
  int iVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  int local_dc;
  int local_94;
  int local_90;
  int local_3c;
  
  iVar37 = 1;
  iVar14 = 1;
  iVar43 = *(int *)(param_6 + 0x154);
  uVar32 = *(undefined4 *)(param_6 + 0x150);
  if ((iVar43 != 0) && (iVar14 = thunk_FUN_016d4a50(iVar43), iVar14 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar43);
  }
  FUN_016dd1aa(iVar14,uVar32,iVar43);
  iVar38 = *(int *)(param_6 + 0x160);
  uVar32 = *(undefined4 *)(param_6 + 0x15c);
  if ((iVar38 != 0) && (iVar37 = thunk_FUN_016d4a50(iVar38), iVar37 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar38);
  }
  FUN_016dd1aa(iVar37,uVar32,iVar38);
  iVar33 = *(int *)(param_6 + 400);
  iVar15 = 1;
  uVar32 = *(undefined4 *)(param_6 + 0x18c);
  local_3c = 1;
  if ((iVar33 != 0) && (iVar15 = thunk_FUN_016d4a50(iVar33), iVar15 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar33);
  }
  FUN_016dd1aa(iVar15,uVar32,iVar33);
  iVar34 = *(int *)(param_6 + 0xac);
  uVar32 = *(undefined4 *)(param_6 + 0xa8);
  if ((iVar34 != 0) && (local_3c = thunk_FUN_016d4a50(iVar34), local_3c == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar34);
  }
  FUN_016dd1aa(local_3c,uVar32,iVar34);
  iVar41 = -0x80000000;
  if (*(int *)(param_6 + 0xbc) == -0x80000000) {
    iVar39 = -0x80000000;
  }
  else {
    uVar32 = *(undefined4 *)(param_6 + 0xc0);
    iVar39 = *(int *)(param_6 + 0xc4);
    if (iVar39 == 0) {
      local_90 = 1;
    }
    else {
      local_90 = thunk_FUN_016d4a50(iVar39);
      if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar39);
      }
    }
    FUN_016dd1aa(local_90,uVar32,iVar39);
  }
  uVar35 = param_5[0x1c];
  uVar26 = param_5[2];
  uVar31 = param_5[3];
  uVar27 = param_5[0x17];
  uVar42 = param_5[0x16];
  uVar32 = param_5[0x1a];
  uVar28 = param_5[0x1b];
  uVar16 = *param_5;
  uVar29 = param_5[1];
  uVar17 = param_5[5];
  uVar18 = param_5[0x18];
  uVar30 = param_5[4];
  if (param_5[0x21] != -0x80000000) {
    uVar19 = param_5[0x22];
    iVar41 = param_5[0x23];
    if (iVar41 == 0) {
      local_94 = 1;
    }
    else {
      local_94 = thunk_FUN_016d4a50(iVar41);
      if (local_94 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar41);
      }
    }
    FUN_016dd1aa(local_94,uVar19,iVar41);
  }
  iVar40 = param_5[0x20];
  uVar19 = 0;
  uVar1 = iVar40 * 2;
  if ((iVar40 < 0) || (0x7ffffffe < uVar1)) {
LAB_00a89124:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar19,uVar1);
  }
  uVar4 = *(undefined2 *)((int)param_5 + 0xa2);
  uVar5 = *(undefined2 *)(param_5 + 0x28);
  uVar19 = param_5[0xc];
  uVar20 = param_5[6];
  uVar21 = param_5[7];
  uVar22 = param_5[8];
  uVar23 = param_5[9];
  uVar24 = param_5[10];
  uVar6 = *(undefined2 *)((int)param_5 + 0x9e);
  uVar7 = *(undefined2 *)(param_5 + 0x27);
  uVar8 = *(undefined2 *)((int)param_5 + 0x9a);
  uVar9 = *(undefined2 *)(param_5 + 0x26);
  uVar2 = *(undefined1 *)(param_5 + 0x29);
  uVar10 = *(undefined2 *)((int)param_5 + 0x96);
  uVar11 = *(undefined2 *)(param_5 + 0x25);
  uVar36 = param_5[0x1f];
  uVar12 = *(undefined2 *)((int)param_5 + 0x92);
  uVar44 = param_5[0xb];
  uVar45 = param_5[0xd];
  uVar13 = *(undefined2 *)(param_5 + 0x24);
  if (uVar1 == 0) {
    iVar25 = 2;
    local_dc = 0;
  }
  else {
    iVar25 = thunk_FUN_016d4a50(uVar1);
    local_dc = iVar40;
    if (iVar25 == 0) {
      uVar19 = 2;
      goto LAB_00a89124;
    }
  }
  FUN_016dd1aa(iVar25,uVar36,uVar1);
  *param_1 = 1;
  param_1[1] = 0;
  param_1[3] = param_4;
  param_1[2] = param_3;
  param_1[0x26] = local_94;
  param_1[0x38] = local_3c;
  param_1[0x39] = iVar34;
  param_1[0x3a] = iVar39;
  param_1[0x3c] = iVar39;
  uVar36 = param_5[0x12];
  param_1[0x27] = iVar41;
  param_1[0x25] = iVar41;
  uVar3 = *(undefined1 *)((int)param_5 + 0xa5);
  param_1[7] = uVar31;
  param_1[6] = uVar26;
  param_1[5] = uVar29;
  param_1[4] = uVar16;
  param_1[0x10] = uVar19;
  param_1[8] = uVar30;
  param_1[0x3b] = local_90;
  param_1[9] = uVar17;
  param_1[0x37] = iVar34;
  param_1[10] = uVar20;
  param_1[0x2e] = iVar43;
  param_1[0x30] = iVar43;
  param_1[0x2f] = iVar14;
  param_1[0xb] = uVar21;
  param_1[0x32] = iVar37;
  param_1[0x33] = iVar38;
  param_1[0x34] = iVar33;
  param_1[0xc] = uVar22;
  param_1[0x36] = iVar33;
  param_1[0x31] = iVar38;
  uVar17 = param_5[0xe];
  uVar26 = param_5[0xf];
  uVar29 = param_5[0x10];
  uVar30 = param_5[0x11];
  param_1[0x35] = iVar15;
  param_1[0xd] = uVar23;
  uVar16 = param_5[0x13];
  uVar31 = param_5[0x14];
  uVar19 = param_5[0x15];
  param_1[0xe] = uVar24;
  param_1[0x12] = uVar17;
  param_1[0x13] = uVar26;
  param_1[0x14] = uVar29;
  param_1[0x15] = uVar30;
  param_1[0x17] = uVar16;
  param_1[0x18] = uVar31;
  param_1[0x19] = uVar19;
  param_1[0x11] = uVar45;
  param_1[0x1a] = uVar42;
  param_1[0x1b] = uVar27;
  param_1[0xf] = uVar44;
  param_1[0x1e] = uVar32;
  param_1[0x1f] = uVar28;
  param_1[0x1c] = uVar18;
  *(undefined1 *)(param_1 + 0x2d) = uVar2;
  *(undefined2 *)((int)param_1 + 0xb2) = uVar4;
  *(undefined2 *)(param_1 + 0x2c) = uVar5;
  *(undefined2 *)((int)param_1 + 0xae) = uVar6;
  *(undefined2 *)(param_1 + 0x2b) = uVar7;
  *(undefined2 *)((int)param_1 + 0xaa) = uVar8;
  *(undefined2 *)(param_1 + 0x2a) = uVar9;
  *(undefined2 *)((int)param_1 + 0xa6) = uVar10;
  *(undefined2 *)(param_1 + 0x29) = uVar11;
  *(undefined2 *)((int)param_1 + 0xa2) = uVar12;
  *(undefined2 *)(param_1 + 0x28) = uVar13;
  param_1[0x23] = iVar25;
  param_1[0x22] = local_dc;
  param_1[0x16] = uVar36;
  param_1[0x24] = iVar40;
  param_1[0x20] = uVar35;
  *(undefined1 *)((int)param_1 + 0xb5) = uVar3;
  return;
}

