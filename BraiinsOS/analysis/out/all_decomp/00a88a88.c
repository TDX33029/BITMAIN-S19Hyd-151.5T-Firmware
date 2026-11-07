// FUN_00a88a88 @ 00a88a88 size=944 calls_out=3 calls_in=1
// strings: 

void FUN_00a88a88(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
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
  undefined2 uVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  undefined2 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  int iVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  uint uVar45;
  uint uVar46;
  undefined4 uVar47;
  bool bVar48;
  bool bVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  
  uVar45 = param_5[0x24];
  bVar49 = 0x3ffffffe < uVar45;
  bVar48 = uVar45 == 0x3fffffff;
  uVar1 = uVar45 * 4;
  if (uVar45 < 0x40000000) {
    bVar49 = 0x7ffffffb < uVar1;
    bVar48 = uVar1 == 0x7ffffffc;
  }
  if (bVar49 && !bVar48) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar1);
  }
  uVar29 = param_5[0x1c];
  uVar30 = param_5[0x1a];
  uVar31 = param_5[0x18];
  uVar32 = param_5[0x16];
  uVar33 = param_5[0x14];
  uVar34 = param_5[0x12];
  uVar35 = param_5[0xe];
  uVar2 = *(undefined2 *)((int)param_5 + 0xb2);
  uVar36 = param_5[0xf];
  uVar3 = *(undefined2 *)(param_5 + 0x2c);
  uVar37 = param_5[0x10];
  uVar4 = *(undefined2 *)((int)param_5 + 0xae);
  uVar38 = param_5[0xc];
  uVar5 = *(undefined2 *)(param_5 + 0x2b);
  uVar39 = param_5[10];
  uVar22 = *param_5;
  uVar6 = *(undefined2 *)((int)param_5 + 0xaa);
  uVar7 = *(undefined2 *)((int)param_5 + 0x9a);
  uVar23 = param_5[1];
  uVar8 = *(undefined2 *)(param_5 + 0x2a);
  uVar9 = *(undefined2 *)(param_5 + 0x26);
  uVar24 = param_5[3];
  uVar10 = *(undefined2 *)((int)param_5 + 0xa6);
  uVar40 = param_5[8];
  uVar25 = param_5[2];
  uVar11 = *(undefined2 *)(param_5 + 0x29);
  uVar41 = param_5[6];
  uVar26 = param_5[0x1e];
  uVar12 = *(undefined2 *)((int)param_5 + 0xa2);
  uVar42 = param_5[5];
  uVar27 = param_5[0x23];
  uVar13 = *(undefined2 *)(param_5 + 0x28);
  uVar43 = param_5[4];
  uVar14 = *(undefined2 *)(param_5 + 0x2d);
  uVar44 = param_5[0x20];
  uVar15 = *(undefined2 *)((int)param_5 + 0x9e);
  uVar55 = param_5[0x1d];
  uVar53 = param_5[0x1b];
  uVar51 = param_5[0x19];
  uVar60 = param_5[0x17];
  uVar59 = param_5[0x15];
  uVar58 = param_5[0x13];
  uVar57 = param_5[0x11];
  uVar56 = param_5[0xd];
  uVar54 = param_5[0xb];
  uVar52 = param_5[9];
  uVar50 = param_5[7];
  uVar16 = *(undefined2 *)(param_5 + 0x2e);
  uVar17 = *(undefined2 *)((int)param_5 + 0xb6);
  uVar18 = *(undefined2 *)((int)param_5 + 0x96);
  uVar47 = param_5[0x1f];
  uVar19 = *(undefined2 *)((int)param_5 + 0xba);
  uVar20 = *(undefined2 *)(param_5 + 0x27);
  uVar21 = *(undefined2 *)(param_5 + 0x25);
  if (uVar1 == 0) {
    iVar28 = 4;
    uVar46 = 0;
  }
  else {
    iVar28 = thunk_FUN_016d4a50(uVar1);
    uVar46 = uVar45;
    if (iVar28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar1);
    }
  }
  FUN_016dd1aa(iVar28,uVar27,uVar1);
  *param_1 = 1;
  param_1[1] = 0;
  param_1[4] = uVar22;
  param_1[5] = uVar23;
  param_1[6] = uVar25;
  param_1[7] = uVar24;
  param_1[0x20] = uVar29;
  param_1[0x1e] = uVar30;
  param_1[0x1c] = uVar31;
  param_1[0x1a] = uVar32;
  param_1[0x18] = uVar33;
  param_1[0x16] = uVar34;
  param_1[0x12] = uVar35;
  param_1[0x13] = uVar36;
  param_1[0x14] = uVar37;
  param_1[0x10] = uVar38;
  param_1[0xe] = uVar39;
  param_1[0xc] = uVar40;
  param_1[8] = uVar43;
  param_1[9] = uVar42;
  param_1[10] = uVar41;
  param_1[0x22] = uVar26;
  param_1[0x23] = uVar47;
  param_1[0x24] = uVar44;
  *(undefined2 *)((int)param_1 + 0xca) = uVar19;
  *(undefined2 *)(param_1 + 0x32) = uVar16;
  *(undefined2 *)((int)param_1 + 0xc6) = uVar17;
  *(undefined2 *)(param_1 + 0x31) = uVar14;
  *(undefined2 *)((int)param_1 + 0xc2) = uVar2;
  *(undefined2 *)(param_1 + 0x30) = uVar3;
  *(undefined2 *)((int)param_1 + 0xbe) = uVar4;
  *(undefined2 *)(param_1 + 0x2f) = uVar5;
  *(undefined2 *)((int)param_1 + 0xba) = uVar6;
  *(undefined2 *)(param_1 + 0x2e) = uVar8;
  *(undefined2 *)((int)param_1 + 0xb6) = uVar10;
  *(undefined2 *)(param_1 + 0x2d) = uVar11;
  *(undefined2 *)((int)param_1 + 0xb2) = uVar12;
  *(undefined2 *)(param_1 + 0x2c) = uVar13;
  *(undefined2 *)((int)param_1 + 0xae) = uVar15;
  *(undefined2 *)(param_1 + 0x2b) = uVar20;
  *(undefined2 *)((int)param_1 + 0xaa) = uVar7;
  *(undefined2 *)(param_1 + 0x2a) = uVar9;
  *(undefined2 *)((int)param_1 + 0xa6) = uVar18;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[0x21] = uVar55;
  param_1[0x1f] = uVar53;
  param_1[0x1d] = uVar51;
  param_1[0x1b] = uVar60;
  param_1[0x19] = uVar59;
  param_1[0x17] = uVar58;
  param_1[0x15] = uVar57;
  param_1[0x11] = uVar56;
  param_1[0xf] = uVar54;
  param_1[0xd] = uVar52;
  param_1[0xb] = uVar50;
  param_1[0x26] = uVar46;
  param_1[0x27] = iVar28;
  param_1[0x28] = uVar45;
  *(undefined2 *)(param_1 + 0x29) = uVar21;
  return;
}

