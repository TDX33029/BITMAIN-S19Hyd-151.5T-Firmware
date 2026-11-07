// FUN_00c0d3dc @ 00c0d3dc size=848 calls_out=4 calls_in=4
// strings: 

void FUN_00c0d3dc(int *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_cc;
  int local_70;
  int local_6c;
  int local_68;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  
  iVar27 = param_2[0x29];
  iVar29 = param_2[0x2a];
  iVar25 = 1;
  iVar23 = 1;
  if ((iVar29 != 0) && (iVar23 = thunk_FUN_016d4a50(iVar29), iVar23 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar29);
  }
  FUN_016dd1aa(iVar23,iVar27,iVar29);
  iVar27 = param_2[0x2c];
  iVar4 = param_2[0x2d];
  iVar5 = param_2[0x2e];
  iVar6 = param_2[0x2f];
  iVar7 = param_2[0x30];
  iVar30 = param_2[0xf];
  iVar32 = param_2[0x10];
  iVar28 = param_2[0x2b];
  iVar8 = param_2[0x31];
  iVar9 = param_2[0x32];
  if ((iVar32 != 0) && (iVar25 = thunk_FUN_016d4a50(iVar32), iVar25 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar32);
  }
  FUN_016dd1aa(iVar25,iVar30,iVar32);
  iVar30 = param_2[0x13];
  iVar17 = param_2[0x12];
  iVar10 = param_2[6];
  iVar18 = param_2[0x19];
  iVar11 = param_2[7];
  iVar19 = param_2[0x1a];
  iVar20 = param_2[0x1b];
  uVar33 = *(undefined8 *)(param_2 + 0xc);
  iVar2 = param_2[0x1d];
  iVar22 = param_2[0x11];
  iVar21 = param_2[0x1c];
  if (param_2[8] == -0x80000000) {
    local_cc = -0x80000000;
  }
  else {
    FUN_00cdfedc(&local_70,param_2[9],param_2[10]);
    local_cc = local_70;
    local_ec = local_6c;
    local_e4 = local_68;
    local_e8 = param_2[0xb];
  }
  FUN_016dd1aa((uint)&local_70 | 3,param_2 + 0x14,0x14);
  iVar31 = param_2[0x25];
  iVar26 = *param_2;
  uVar34 = *(undefined8 *)(param_2 + 0x1e);
  uVar35 = *(undefined8 *)(param_2 + 0x20);
  uVar36 = *(undefined8 *)(param_2 + 0x22);
  iVar12 = param_2[0x24];
  iVar13 = param_2[0x26];
  iVar14 = param_2[0x33];
  iVar15 = param_2[0x34];
  iVar16 = param_2[0x35];
  iVar3 = param_2[0x36];
  iVar24 = param_2[1];
  uVar1 = *(undefined1 *)((int)param_2 + 0xd9);
  if (iVar26 != 5 || iVar24 != 0) {
    local_58 = param_2[2];
    iStack_54 = param_2[3];
    iStack_50 = param_2[4];
    iStack_4c = param_2[5];
  }
  param_1[9] = local_ec;
  param_1[0x30] = iVar7;
  param_1[0x31] = iVar8;
  param_1[0x32] = iVar9;
  param_1[0x29] = iVar23;
  param_1[0x2b] = iVar28;
  param_1[0x2c] = iVar27;
  param_1[0x2d] = iVar4;
  param_1[0x2e] = iVar5;
  param_1[0x2f] = iVar6;
  param_1[6] = iVar10;
  param_1[7] = iVar11;
  param_1[8] = local_cc;
  *(char *)(param_1 + 0x13) = (char)iVar30;
  param_1[0xf] = iVar25;
  param_1[0x11] = iVar22;
  param_1[0x12] = iVar17;
  param_1[0xb] = local_e8;
  param_1[10] = local_e4;
  param_1[0x28] = iVar29;
  param_1[0x2a] = iVar29;
  param_1[0xe] = iVar32;
  param_1[0x10] = iVar32;
  *(undefined8 *)(param_1 + 0xc) = uVar33;
  FUN_016dd1aa((int)param_1 + 0x4d,&local_70,0x17);
  param_1[0x24] = iVar12;
  param_1[0x33] = iVar14;
  *(char *)(param_1 + 0x1d) = (char)iVar2;
  param_1[0x19] = iVar18;
  param_1[0x1a] = iVar19;
  param_1[0x1b] = iVar20;
  param_1[0x1c] = iVar21;
  *(char *)(param_1 + 0x36) = (char)iVar3;
  param_1[0x26] = iVar13;
  *(undefined1 *)((int)param_1 + 0xd9) = uVar1;
  *(undefined8 *)(param_1 + 0x1e) = uVar34;
  *(undefined8 *)(param_1 + 0x20) = uVar35;
  *(undefined8 *)(param_1 + 0x22) = uVar36;
  param_1[0x35] = iVar16;
  param_1[0x25] = iVar31;
  param_1[1] = iVar24;
  *param_1 = iVar26;
  param_1[0x34] = iVar15;
  param_1[2] = local_58;
  param_1[3] = iStack_54;
  param_1[4] = iStack_50;
  param_1[5] = iStack_4c;
  return;
}

