// FUN_00631d44 @ 00631d44 size=592 calls_out=7 calls_in=2
// strings: 

int FUN_00631d44(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  ulonglong local_108;
  uint *local_100;
  undefined1 uStack_fc;
  undefined2 local_fb;
  undefined1 local_f9;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 **local_e0;
  code *local_dc;
  undefined *local_d8;
  uint *local_c8;
  undefined4 local_c4;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  uint *local_80;
  undefined4 local_7c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_28;
  
  uVar13 = FUN_019ef7f4(param_2);
  iVar11 = (int)(uVar13 >> 0x20);
  puVar12 = (undefined4 *)((uint)&local_e0 | 0x10);
  iVar5 = 0x218;
  if ((uVar13 & 1) != 0) {
    iVar5 = 0x148;
  }
  uVar6 = *(undefined4 *)(iVar11 + iVar5);
  do {
    do {
      iVar5 = DAT_01d50474;
      uVar4 = DAT_01d50470;
      uVar7 = DAT_01d50470 + 1;
      iVar9 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
      bVar2 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar2);
    bVar2 = DAT_01d50470 == 0;
    bVar3 = DAT_01d50474 == 0;
    DAT_01d50470 = uVar7;
    DAT_01d50474 = iVar9;
  } while (bVar2 && bVar3);
  iVar9 = 0x200;
  if ((uVar13 & 1) != 0) {
    iVar9 = 0x138;
  }
  iVar11 = iVar11 + iVar9;
  local_c8 = *(uint **)(iVar11 + 8);
  local_108 = uVar13;
  if (local_c8 == (uint *)0x0) {
    local_100 = (uint *)*param_1;
    uVar8 = param_1[1];
    uStack_f8 = param_1[2];
    uStack_fc = (undefined1)uVar8;
    local_fb = (undefined2)((uint)uVar8 >> 8);
    local_f9 = (undefined1)((uint)uVar8 >> 0x18);
    local_f4 = param_1[3];
    uStack_f0 = param_1[4];
    uStack_ec = param_1[5];
    local_c4 = param_1[6];
    uStack_e8 = local_c4;
LAB_00631e40:
    puVar10 = (undefined4 *)((uint)&local_48 | 4);
    *puVar10 = local_100;
    puVar10[1] = CONCAT13(local_f9,CONCAT21(local_fb,uStack_fc));
    puVar10[2] = uStack_f8;
    puVar10[3] = local_f4;
    puVar10[4] = uStack_f0;
    puVar10[5] = uStack_ec;
    puVar10[6] = uStack_e8;
    local_b8 = 0;
    local_b4 = local_48;
    uStack_b0 = uStack_44;
    uStack_ac = uStack_40;
    uStack_a8 = uStack_3c;
    local_a4 = local_38;
    uStack_a0 = uStack_34;
    uStack_9c = uStack_30;
    uStack_98 = uStack_2c;
    puVar12[4] = uVar4;
    puVar12[5] = iVar5;
    *puVar12 = 0;
    puVar12[1] = 0;
    local_dc = (code *)0x0;
    local_d8 = &DAT_01c1a42c;
    local_e0 = (undefined4 **)0xcc;
    local_88 = 0;
    local_8c = 0;
    local_90 = 0;
    local_28 = 0;
    local_80 = local_c8;
    local_7c = local_c4;
    iVar5 = FUN_01be5878(&local_28,0x20,0x80);
    iVar11 = local_28;
    if ((iVar5 != 0) || (local_28 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x80);
    }
    FUN_01bed4e2(local_28,&local_e0,0x80);
    FUN_019f02d4(&local_e0,uVar6,iVar11,1,uVar13);
    if (((uint)local_e0 & 0xfe) != 4) {
      uStack_fc = SUB41(local_dc,0);
      local_f9 = (undefined1)((uint)local_dc >> 0x18);
      local_fb = (undefined2)((uint)local_dc >> 8);
      local_100 = (uint *)local_e0;
      local_dc = FUN_019a7d7c;
      local_e0 = &local_100;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005ab28b,&local_e0,param_2);
    }
    FUN_00668d74(&local_108);
    return iVar11;
  }
  do {
    uVar7 = *local_c8;
    bVar2 = (bool)hasExclusiveAccess(local_c8);
  } while (!bVar2);
  *local_c8 = uVar7 + 1;
  if (-1 < (int)uVar7) {
    local_c4 = *(undefined4 *)(iVar11 + 0xc);
    local_100 = (uint *)*param_1;
    uVar8 = param_1[1];
    uStack_f8 = param_1[2];
    uStack_fc = (undefined1)uVar8;
    local_fb = (undefined2)((uint)uVar8 >> 8);
    local_f9 = (undefined1)((uint)uVar8 >> 0x18);
    local_f4 = param_1[3];
    uStack_f0 = param_1[4];
    uStack_ec = param_1[5];
    uStack_e8 = param_1[6];
    do {
      uVar7 = *local_c8;
      bVar2 = (bool)hasExclusiveAccess(local_c8);
    } while (!bVar2);
    *local_c8 = uVar7 + 1;
    if (uVar7 < 0x80000000) goto LAB_00631e40;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x631e28);
  (*pcVar1)();
}

