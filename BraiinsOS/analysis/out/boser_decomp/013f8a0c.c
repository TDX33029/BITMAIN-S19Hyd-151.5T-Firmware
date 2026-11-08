// FUN_013f8a0c @ 013f8a0c size=1012 calls_out=12 calls_in=4
// strings: 

void FUN_013f8a0c(int param_1,undefined4 param_2)

{
  ushort uVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  byte bVar6;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined8 uVar14;
  uint local_bc;
  int local_a8;
  undefined1 local_a4;
  undefined1 local_a3;
  undefined4 local_a0;
  byte *pbStack_9c;
  uint uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined4 local_80;
  byte *pbStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined2 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  byte *local_58;
  uint local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_40;
  undefined4 local_3c;
  byte *local_38;
  uint local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_40 = CONCAT31(local_40._1_3_,*(undefined1 *)(param_1 + 0x40));
  FUN_013f8e80(param_2,&local_40,1);
  uVar10 = (uint)&local_40 | 2;
  if (*(short *)(param_1 + 0x24) == 1) {
    local_a3 = (undefined1)*(undefined4 *)(param_1 + 0x30);
  }
  else {
    local_a3 = (undefined1)*(undefined2 *)(param_1 + 0x26);
  }
  local_a4 = 0;
  pbVar2 = (byte *)((uint)&local_60 | 4);
  uVar9 = extraout_r1;
  local_a8 = param_1;
  do {
    uVar14 = FUN_013c7a64(&local_a8,uVar9);
    if ((int)uVar14 == 0) {
      return;
    }
    FUN_013d9ca0(&local_40,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
    if ((short)local_40 == 2) {
      local_80 = local_3c;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_80,&DAT_01cf35e0,&DAT_01cf3620);
    }
    local_60 = local_40;
    uVar8 = local_60;
    local_5c = local_3c;
    local_58 = local_38;
    local_54 = local_34;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    uStack_48 = uStack_28;
    uVar3 = local_40 & 0xffff;
    local_60._2_2_ = (ushort)(local_40 >> 0x10);
    uVar1 = local_60._2_2_;
    local_60 = uVar8;
    if ((local_40 & 1) == 0) {
      uVar8 = (uint)local_60._2_2_;
      pbVar4 = pbVar2;
      if (0x18 < uVar8) goto LAB_013f8dac;
    }
    else {
      pbVar4 = local_38;
      uVar8 = local_34;
    }
    uVar12 = 0;
    do {
      uVar11 = uVar12;
      if (uVar8 == uVar11) {
        bVar13 = (local_40 & 1) == 0;
        if (bVar13) {
          local_3c = *(undefined4 *)pbVar2;
          local_38 = *(byte **)(pbVar2 + 4);
          local_34 = *(uint *)(pbVar2 + 8);
          uStack_30 = *(undefined4 *)(pbVar2 + 0xc);
          uStack_2c = *(undefined4 *)(pbVar2 + 0x10);
          uStack_28 = *(undefined4 *)(pbVar2 + 0x14);
        }
        else {
          FUN_015e8ad4(&local_3c,local_38,local_34);
        }
        FUN_01bed4e2(&local_80,uVar10,0x1a);
        goto LAB_013f8cbc;
      }
      uVar12 = uVar11 + 1;
      uVar7 = 0xff;
      if (pbVar4[uVar11] - 0x41 < 0x1a) {
        uVar7 = 0xdf;
      }
    } while ((uVar7 | pbVar4[uVar11]) == 0xff);
    if ((local_40 & 1) == 0) {
      uVar8 = (uint)local_60._2_2_;
      pbVar4 = pbVar2;
      if (0x18 < uVar8) {
LAB_013f8dac:
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar1,0x18,&DAT_01cf2da0);
      }
    }
    else {
      uVar9 = 0;
      if ((int)local_34 < 0) goto LAB_013f8e00;
      pbVar4 = local_38;
      uVar8 = local_34;
    }
    if (uVar8 == 0) {
      uVar7 = 0;
      local_bc = 1;
    }
    else {
      uVar9 = 1;
      local_bc = FUN_01298504(uVar8,1);
      if (local_bc == 0) {
        local_bc = uVar8;
LAB_013f8e00:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar9,local_bc);
      }
      uVar7 = uVar8;
    }
    FUN_01bed4e2(local_bc,pbVar4,uVar7);
    if (uVar7 < uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar11,uVar7,uVar7,&DAT_01cf2d28);
    }
    if (uVar7 != uVar11) {
      iVar5 = local_bc - 1;
      do {
        bVar6 = *(byte *)(iVar5 + uVar12);
        uVar8 = uVar8 - 1;
        if (bVar6 - 0x41 < 0x1a) {
          bVar6 = bVar6 | 0x20;
        }
        *(byte *)(iVar5 + uVar12) = bVar6;
        iVar5 = iVar5 + 1;
      } while (uVar11 != uVar8);
    }
    bVar13 = uVar7 < 0x19;
    if (bVar13) {
      FUN_01bed93e(&local_80,0,0x18);
      FUN_01bed4e2(&local_80,local_bc,uVar7);
      local_40 = CONCAT22((short)uVar7,(short)local_40);
      local_3c = local_80;
      local_38 = pbStack_7c;
      local_34 = uStack_78;
      uStack_30 = uStack_74;
      uStack_2c = uStack_70;
      uStack_28 = uStack_6c;
    }
    else {
      FUN_01447508(&local_3c,local_bc,uVar7);
    }
    FUN_01bed4e2(&local_80,uVar10,0x1a);
    FUN_019bb7e0(uVar7,local_bc);
LAB_013f8cbc:
    bVar13 = !bVar13;
    if (uVar3 != 0) {
      FUN_019bb7e0(local_5c,local_58);
    }
    local_a0 = local_80;
    pbStack_9c = pbStack_7c;
    uStack_98 = uStack_78;
    uStack_94 = uStack_74;
    uStack_90 = uStack_70;
    uStack_8c = uStack_6c;
    local_88 = local_68;
    local_40 = CONCAT22(local_40._2_2_,(ushort)bVar13);
    FUN_01bed4e2(uVar10,&local_a0,0x1a);
    uVar9 = extraout_r1_00;
    uVar8 = local_34;
    pbVar4 = local_38;
    if ((!bVar13) && (uVar8 = local_40 >> 0x10, pbVar4 = (byte *)&local_3c, 0x18 < uVar8)) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar8,0x18,&DAT_01cf2da0);
    }
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      bVar6 = *pbVar4;
      if (bVar6 - 0x41 < 0x1a) {
        bVar6 = bVar6 | 0x20;
      }
      uVar3 = local_60 >> 8;
      local_60 = CONCAT31((int3)uVar3,bVar6);
      FUN_013f8e80(param_2,&local_60,1);
      uVar9 = extraout_r1_01;
      pbVar4 = pbVar4 + 1;
    }
    if (bVar13) {
      FUN_019bb7e0(local_3c);
      uVar9 = extraout_r1_02;
    }
  } while( true );
}

