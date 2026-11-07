// FUN_00d507b8 @ 00d507b8 size=752 calls_out=10 calls_in=1
// strings: 

void FUN_00d507b8(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 *param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 uVar12;
  uint local_15c [3];
  int iStack_150;
  uint local_14c;
  undefined4 local_148;
  int iStack_144;
  int iStack_140;
  uint local_13c;
  uint local_138;
  int local_134;
  uint uStack_130;
  uint local_128;
  int local_124;
  uint local_11c [3];
  int local_110;
  uint local_10c;
  undefined4 local_108;
  int local_104;
  int local_100;
  uint local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined1 auStack_70 [16];
  
  iVar4 = *param_2;
  iVar11 = param_2[1];
  uVar8 = param_2[2];
  uVar10 = (uint)(iVar4 != 0);
  local_148 = 0;
  if (iVar4 == 0) {
    uVar8 = 0;
  }
  local_15c[1] = 0;
  local_15c[0] = uVar10;
  local_15c[2] = iVar4;
  iStack_150 = iVar11;
  local_14c = uVar10;
  iStack_144 = iVar4;
  iStack_140 = iVar11;
  local_13c = uVar8;
  uVar12 = FUN_00c38908(local_15c);
  piVar2 = (int *)((ulonglong)uVar12 >> 0x20);
  if ((int)uVar12 != 0 && piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d50848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00d5084c + *(int *)(&DAT_00d5084c + *piVar2 * 4)))
              (piVar2 + 2,*(int *)(&DAT_00d5084c + *piVar2 * 4),piVar2[2],piVar2[3]);
    return;
  }
  iVar5 = uVar8 * 0x50;
  uVar1 = 0;
  if (0x1999999 < uVar8) {
LAB_00d508f0:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar1,iVar5);
  }
  uVar6 = 0;
  if (iVar5 == 0) {
    local_124 = 8;
    local_128 = 0;
  }
  else {
    local_124 = thunk_FUN_016d4a50(iVar5);
    local_128 = uVar8;
    if (local_124 == 0) {
      uVar1 = 8;
      goto LAB_00d508f0;
    }
  }
  iVar5 = local_124 + 4;
  local_108 = 0;
  local_11c[1] = 0;
  local_11c[0] = uVar10;
  local_11c[2] = iVar4;
  local_110 = iVar11;
  local_10c = uVar10;
  local_104 = iVar4;
  local_100 = iVar11;
  local_fc = uVar8;
  while( true ) {
    uVar12 = FUN_00c38908(local_11c);
    puVar3 = (undefined4 *)((ulonglong)uVar12 >> 0x20);
    if ((undefined4 *)uVar12 == (undefined4 *)0x0) break;
    uVar1 = *(undefined4 *)uVar12;
    FUN_00cce358(auStack_70,puVar3[0xf],puVar3[0x10]);
    local_78 = *(undefined8 *)(puVar3 + 0xc);
    local_88 = puVar3[8];
    local_90 = puVar3[6];
    local_8c = puVar3[7];
    local_80 = puVar3[10];
    local_7c = *(undefined1 *)(puVar3 + 0xb);
    local_a8 = *puVar3;
    uStack_a4 = puVar3[1];
    uStack_a0 = puVar3[2];
    uStack_9c = puVar3[3];
    uStack_98 = puVar3[4];
    uStack_94 = puVar3[5];
    FUN_016dd1aa((uint)&local_f8 | 4,&local_a8,0x48);
    *(undefined4 *)(iVar5 + -4) = uVar1;
    FUN_016dd1aa(iVar5,&local_f8,0x4c);
    iVar5 = iVar5 + 0x50;
    uVar6 = uVar6 + 1;
  }
  local_138 = local_128;
  local_134 = local_124;
  uStack_130 = uVar6;
  if (uVar6 == 0) {
    local_f0 = 0;
    local_f8 = 0;
    if (local_128 != 0) {
      thunk_FUN_016d3fb4(local_124);
    }
  }
  else {
    if (uVar6 != 1) {
      if (uVar6 < 0x15) {
        FUN_00b5e300(local_124,uVar6);
      }
      else {
        FUN_00cd8a08(local_124,uVar6);
      }
    }
    FUN_00c3d788(&local_f8,&local_138);
  }
  uVar9 = *param_6;
  uVar7 = param_6[1];
  uVar1 = param_6[2];
  *param_1 = 3;
  param_1[1] = 0;
  param_1[0x11] = local_f8;
  param_1[0x12] = uStack_f4;
  param_1[0x13] = local_f0;
  param_1[0x14] = param_7;
  param_1[6] = param_3;
  param_1[7] = param_4;
  *(undefined8 *)(param_1 + 10) = in_d0;
  *(undefined8 *)(param_1 + 0xc) = in_d1;
  *(undefined8 *)(param_1 + 2) = 0x8000000000000000;
  param_1[8] = param_5;
  param_1[0xe] = uVar9;
  param_1[0xf] = uVar7;
  param_1[0x10] = uVar1;
  FUN_00c48708(param_2);
  return;
}

