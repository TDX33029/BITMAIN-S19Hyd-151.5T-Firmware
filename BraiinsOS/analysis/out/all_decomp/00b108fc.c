// FUN_00b108fc @ 00b108fc size=1156 calls_out=5 calls_in=2
// strings: 

void FUN_00b108fc(int param_1,int *param_2)

{
  int iVar1;
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
  undefined8 uVar25;
  undefined4 local_1d8;
  int local_1d4;
  undefined4 local_1b8;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int iStack_140;
  int iStack_13c;
  int local_138;
  int local_134;
  undefined4 local_130;
  int local_12c;
  undefined4 local_128;
  int local_124;
  undefined8 local_120;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  undefined1 local_104;
  undefined1 auStack_103 [23];
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  undefined1 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  int local_c0;
  int iStack_bc;
  int local_b8;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  undefined1 local_78;
  undefined1 local_77;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  int local_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  
  iVar21 = param_2[0x4e];
  iVar18 = param_2[0x4d];
  iVar22 = 1;
  iVar24 = 1;
  if ((iVar21 != 0) && (iVar24 = thunk_FUN_016d4a50(iVar21), iVar24 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar21);
  }
  FUN_016dd1aa(iVar24,iVar18,iVar21);
  iVar18 = param_2[0x29];
  iVar20 = param_2[0x2a];
  if ((iVar20 != 0) && (iVar22 = thunk_FUN_016d4a50(iVar20), iVar22 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar20);
  }
  FUN_016dd1aa(iVar22,iVar18,iVar20);
  iVar18 = param_2[0x2b];
  iVar2 = param_2[0x2c];
  iVar3 = param_2[0x2d];
  iVar4 = param_2[0x2e];
  iVar5 = param_2[0x2f];
  iVar6 = param_2[0x30];
  iVar23 = param_2[0x10];
  iVar19 = param_2[0xf];
  iVar7 = param_2[0x31];
  iVar8 = param_2[0x32];
  if (iVar23 == 0) {
    iVar9 = 1;
  }
  else {
    iVar9 = thunk_FUN_016d4a50(iVar23);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar23);
    }
  }
  FUN_016dd1aa(iVar9,iVar19,iVar23);
  iVar19 = param_2[0x13];
  iVar12 = param_2[0x11];
  iVar10 = param_2[6];
  iVar13 = param_2[0x19];
  iVar11 = param_2[7];
  iVar14 = param_2[0x1a];
  iVar15 = param_2[0x1b];
  uVar25 = *(undefined8 *)(param_2 + 0xc);
  iVar1 = param_2[0x1d];
  iVar17 = param_2[0x12];
  iVar16 = param_2[0x1c];
  if (param_2[8] == -0x80000000) {
    local_1b8 = 0x80000000;
    local_12c = iVar20;
  }
  else {
    FUN_00cdfedc(&local_70,param_2[9],param_2[10]);
    local_1b8 = local_70;
    local_1d8 = local_68;
    local_1d4 = param_2[0xb];
    local_12c = local_6c;
  }
  FUN_016dd1aa((uint)&local_70 | 3,param_2 + 0x14,0x14);
  local_150 = *param_2;
  local_14c = param_2[1];
  local_d8 = *(undefined8 *)(param_2 + 0x1e);
  uStack_d0 = *(undefined8 *)(param_2 + 0x20);
  uStack_c8 = *(undefined8 *)(param_2 + 0x22);
  local_c0 = param_2[0x24];
  iStack_bc = param_2[0x25];
  local_84 = param_2[0x33];
  local_80 = param_2[0x34];
  local_7c = param_2[0x35];
  local_b8 = param_2[0x26];
  local_78 = (undefined1)param_2[0x36];
  local_77 = *(undefined1 *)((int)param_2 + 0xd9);
  if (local_150 != 5 || local_14c != 0) {
    local_58 = param_2[2];
    local_54 = param_2[3];
    iStack_50 = param_2[4];
    iStack_4c = param_2[5];
  }
  local_128 = local_1d8;
  local_130 = local_1b8;
  local_124 = local_1d4;
  local_138 = iVar10;
  local_134 = iVar11;
  local_120 = uVar25;
  local_118 = iVar23;
  local_114 = iVar9;
  local_110 = iVar23;
  local_10c = iVar12;
  local_108 = iVar17;
  local_104 = (char)iVar19;
  local_b0 = iVar20;
  local_ac = iVar22;
  local_a8 = iVar20;
  local_a4 = iVar18;
  local_a0 = iVar2;
  local_9c = iVar3;
  local_98 = iVar4;
  local_94 = iVar5;
  local_90 = iVar6;
  local_8c = iVar7;
  local_88 = iVar8;
  FUN_016dd1aa(auStack_103,&local_70,0x17);
  local_144 = local_54;
  iStack_140 = iStack_50;
  iStack_13c = iStack_4c;
  iVar22 = param_2[0x44];
  iVar5 = param_2[0x45];
  iVar18 = param_2[0x3a];
  iVar20 = param_2[0x3e];
  iVar2 = param_2[0x42];
  iVar3 = param_2[0x46];
  iVar4 = param_2[0x4b];
  iVar23 = param_2[0x40];
  iVar9 = param_2[0x41];
  iVar6 = param_2[0x38];
  iVar7 = param_2[0x39];
  iVar8 = param_2[0x3c];
  iVar19 = param_2[0x3d];
  local_148 = local_58;
  local_ec = iVar13;
  local_e8 = iVar14;
  local_e4 = iVar15;
  local_e0 = iVar16;
  local_dc = (char)iVar1;
  FUN_00ccd934(&local_58,param_2[0x49],param_2[0x4a]);
  FUN_016dd1aa(param_1,&local_150,0xe0);
  *(int *)(param_1 + 0xe0) = iVar6;
  *(int *)(param_1 + 0xe4) = iVar7;
  *(int *)(param_1 + 0xf0) = iVar8;
  *(int *)(param_1 + 0xf4) = iVar19;
  *(int *)(param_1 + 0x110) = iVar22;
  *(int *)(param_1 + 0x114) = iVar5;
  *(int *)(param_1 + 0xe8) = iVar18;
  *(int *)(param_1 + 0xf8) = iVar20;
  *(int *)(param_1 + 0x108) = iVar2;
  *(int *)(param_1 + 0x100) = iVar23;
  *(int *)(param_1 + 0x104) = iVar9;
  *(undefined4 *)(param_1 + 0x11c) = local_70;
  *(int *)(param_1 + 0x120) = local_58;
  *(int *)(param_1 + 0x124) = local_54;
  *(int *)(param_1 + 0x128) = iStack_50;
  *(int *)(param_1 + 300) = iVar4;
  *(int *)(param_1 + 0x138) = iVar21;
  *(int *)(param_1 + 0x118) = iVar3;
  *(int *)(param_1 + 0x130) = iVar21;
  *(int *)(param_1 + 0x134) = iVar24;
  return;
}

