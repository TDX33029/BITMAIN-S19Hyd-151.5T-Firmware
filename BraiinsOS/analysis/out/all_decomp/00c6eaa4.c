// FUN_00c6eaa4 @ 00c6eaa4 size=672 calls_out=13 calls_in=1
// strings: 

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00c6ed0c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00c6eaa4(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  undefined4 extraout_r3;
  uint uVar6;
  uint uVar7;
  uint unaff_r5;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_ec [12];
  uint local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  uint local_d0;
  int local_cc;
  undefined4 uStack_c8;
  uint local_c0;
  int local_bc;
  uint uStack_b8;
  uint local_b0;
  undefined4 uStack_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  undefined4 uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint local_90;
  uint local_88 [4];
  uint local_78;
  undefined4 local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  
  FUN_00c6ed74(auStack_ec);
  uVar12 = param_4[0x20];
  if (uVar12 == 0) {
    local_68 = 0;
  }
  else {
    local_88[3] = param_4[0x21];
    local_68 = param_4[0x22];
    local_74 = 0;
    local_88[1] = 0;
    local_88[2] = uVar12;
    local_70 = uVar12;
    local_6c = local_88[3];
  }
  local_88[0] = (uint)(uVar12 != 0);
  local_78 = local_88[0];
  uVar15 = FUN_00c38db8(local_88);
  iVar5 = (int)((ulonglong)uVar15 >> 0x20);
  uVar6 = extraout_r3;
  if ((int)uVar15 != 0) {
    uVar6 = *(uint *)(iVar5 + 0x48);
    uVar8 = *(undefined4 *)(iVar5 + 0x4c);
    uVar9 = *(undefined4 *)(iVar5 + 0x50);
    FUN_015f3b0c(&local_b0,0);
    local_e0 = local_b0;
    uStack_dc = uStack_ac;
    uStack_d8 = local_a8;
    local_d0 = uVar6;
    local_cc = uVar8;
    uStack_c8 = uVar9;
    FUN_015f3c24(&local_b0,&local_e0,&local_d0);
    uVar6 = local_a8;
    unaff_r5 = local_a4;
  }
  uVar7 = param_4[0x22];
  if (uVar12 == 0) {
    uVar7 = 0;
  }
  uVar10 = (uint)(uVar12 != 0);
  iVar5 = uVar7 * 0x50;
  if (0x1999999 < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  uVar15 = *(undefined8 *)(param_4 + 0x14);
  uVar11 = 0;
  uVar13 = param_4[0x21];
  uVar14 = *(undefined8 *)(param_4 + 2);
  uVar1 = *param_4;
  if (iVar5 == 0) {
    iVar2 = 8;
    uVar3 = 0;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(iVar5);
    uVar3 = uVar7;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,iVar5);
    }
  }
  uStack_9c = 0;
  uStack_ac = 0;
  local_d0 = uVar3;
  local_cc = iVar2;
  local_b0 = uVar10;
  local_a8 = uVar12;
  local_a4 = uVar13;
  local_a0 = uVar10;
  uStack_98 = uVar12;
  uStack_94 = uVar13;
  local_90 = uVar7;
  while (puVar4 = (uint *)FUN_00c38db8(&local_b0), puVar4 != (uint *)0x0) {
    uVar12 = *puVar4;
    FUN_00c6f248(local_88 + 2);
    local_88[0] = uVar12;
    FUN_016dd1aa(iVar2,local_88,0x50);
    iVar2 = iVar2 + 0x50;
    uVar11 = uVar11 + 1;
  }
  local_c0 = local_d0;
  local_bc = local_cc;
  uStack_b8 = uVar11;
  if (uVar11 == 0) {
    local_88[2] = 0;
    local_88[0] = 0;
    if (local_d0 != 0) {
      thunk_FUN_016d3fb4(local_cc);
    }
  }
  else {
    if (uVar11 != 1) {
      if (uVar11 < 0x15) {
        FUN_00b5e300(local_cc,uVar11);
      }
      else {
        FUN_00cdb5a8(local_cc,uVar11);
      }
    }
    FUN_00c3d788(local_88,&local_c0);
  }
  uVar8 = (int)uVar15;
  if ((uVar1 & 1) != 0) {
    uVar8 = (int)uVar14;
  }
  FUN_00d507b8(uVar8,param_2,(int)uVar15,param_3,local_88,uVar6,unaff_r5);
  return;
}

