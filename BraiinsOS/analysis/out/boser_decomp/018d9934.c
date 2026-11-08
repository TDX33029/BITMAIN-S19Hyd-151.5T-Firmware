// FUN_018d9934 @ 018d9934 size=916 calls_out=14 calls_in=0
// strings: 

void FUN_018d9934(undefined4 param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 extraout_r1;
  int iVar10;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  bool bVar16;
  undefined1 local_150 [4];
  undefined1 auStack_14c [16];
  undefined2 local_13c;
  undefined1 local_13a;
  undefined2 local_133;
  undefined1 local_131;
  uint local_130;
  undefined4 local_12c;
  undefined4 local_128;
  uint local_b8;
  uint local_b4;
  undefined4 local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint uStack_98;
  uint uStack_94;
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  
  FUN_01933ff0(&local_b8,param_1);
  uVar2 = local_b4;
  if (local_b8 != 0) {
    local_12c = CONCAT31(local_12c._1_3_,(char)local_b0);
    local_130 = local_b4;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_130,&DAT_01d23088,&DAT_01d23058);
  }
  cVar1 = *param_2;
  uVar15 = local_b0 & 0xff;
  if (cVar1 != '\x01') {
    FUN_006666fc(auStack_14c,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
  }
  else {
    FUN_01bed4e2((uint)local_150 | 1,param_2 + 1,0x11);
  }
  local_150[0] = cVar1 == '\x01';
  FUN_018c9b78(&local_b8,uVar2 + 0x18,local_150);
  uVar6 = local_9c;
  uVar5 = local_a0;
  uVar4 = local_a4;
  uVar3 = local_a8;
  uVar13 = local_ac;
  uVar9 = local_b4;
  uVar7 = local_b8;
  cVar1 = (char)local_b0;
  if ((char)local_b0 == '\x02') {
    puVar14 = (uint *)(local_b8 - 0x78);
    uVar7 = *(uint *)(local_b8 - 0x6c);
    if (uVar7 == *puVar14) {
      if (uVar7 == 0) {
        local_b0 = 0x80000000;
      }
      else {
        iVar10 = *(int *)(local_b8 - 0x74);
        iVar12 = *(int *)(local_b8 - 0x70);
        uVar13 = iVar12 + 1;
        uVar9 = uVar13 - uVar7;
        if (uVar13 < uVar7) {
          uVar9 = uVar13;
        }
        *(uint *)(local_b8 - 0x70) = uVar9;
        *(uint *)(local_b8 - 0x6c) = uVar7 - 1;
        puVar8 = (uint *)(iVar10 + iVar12 * 0x40);
        local_b8 = *puVar8;
        local_b4 = puVar8[1];
        local_b0 = puVar8[2];
        local_ac = puVar8[3];
        local_a8 = puVar8[4];
        local_a4 = puVar8[5];
        local_a0 = puVar8[6];
        local_9c = puVar8[7];
        uStack_98 = puVar8[8];
        uStack_94 = puVar8[9];
        local_90 = puVar8[10];
        uStack_8c = puVar8[0xb];
        uStack_88 = puVar8[0xc];
        uStack_84 = puVar8[0xd];
        uStack_80 = puVar8[0xe];
        uStack_7c = puVar8[0xf];
        if (local_b0 != 0x80000000) {
          FUN_018c4448(&local_b8);
        }
      }
    }
    FUN_018bb1ac(puVar14,param_3);
  }
  else {
    bVar16 = (local_b0 & 1) == 0;
    local_13c = local_b0._1_2_;
    local_13a = local_b0._3_1_;
    local_131 = local_b0._3_1_;
    local_133 = local_b0._1_2_;
    if (bVar16) {
      FUN_006666fc(&local_b4,local_a8,local_a4);
    }
    else {
      local_b8 = local_b0 & 0xffffff00;
      local_a8 = CONCAT22(local_a8._2_2_,(short)local_a0);
      local_ac = local_a4;
      local_b0 = uVar3;
      local_b4 = uVar13;
    }
    local_b8 = CONCAT31(local_b8._1_3_,!bVar16);
    FUN_018bb228(uVar2 + 8,&local_b8);
    FUN_018dae74(&local_130);
    local_b8 = CONCAT31(CONCAT12(local_131,local_133),cVar1);
    local_a8 = uVar5;
    local_ac = uVar4;
    local_b0 = uVar3;
    local_b4 = uVar13;
    FUN_01bed4e2(&local_a0,&local_130,0x78);
    iVar10 = FUN_018cad84(uVar6,extraout_r1,uVar7,uVar9,&local_b8);
    uVar7 = *(uint *)(iVar10 + -0x6c);
    if (uVar7 == *(uint *)(iVar10 + -0x78)) {
      if (uVar7 == 0) {
        local_b0 = 0x80000000;
      }
      else {
        iVar12 = *(int *)(iVar10 + -0x70);
        uVar13 = iVar12 + 1;
        uVar9 = uVar13 - uVar7;
        if (uVar13 < uVar7) {
          uVar9 = uVar13;
        }
        *(uint *)(iVar10 + -0x70) = uVar9;
        *(uint *)(iVar10 + -0x6c) = uVar7 - 1;
        puVar14 = (uint *)(*(int *)(iVar10 + -0x74) + iVar12 * 0x40);
        local_b8 = *puVar14;
        local_b4 = puVar14[1];
        local_b0 = puVar14[2];
        local_ac = puVar14[3];
        local_a8 = puVar14[4];
        local_a4 = puVar14[5];
        local_a0 = puVar14[6];
        local_9c = puVar14[7];
        uStack_98 = puVar14[8];
        uStack_94 = puVar14[9];
        local_90 = puVar14[10];
        uStack_8c = puVar14[0xb];
        uStack_88 = puVar14[0xc];
        uStack_84 = puVar14[0xd];
        uStack_80 = puVar14[0xe];
        uStack_7c = puVar14[0xf];
        if (local_b0 != 0x80000000) {
          FUN_018c4448(&local_b8);
        }
      }
    }
    FUN_018bb1ac((uint *)(iVar10 + -0x78),param_3);
    uVar7 = *(uint *)(uVar2 + 8);
    if ((uVar7 == *(uint *)(uVar2 + 0x14)) && (uVar7 != 0)) {
      *(uint *)(uVar2 + 0x14) = uVar7 - 1;
      uVar13 = *(int *)(uVar2 + 0x10) + 1;
      uVar9 = uVar13 - uVar7;
      if (uVar13 < uVar7) {
        uVar9 = uVar13;
      }
      pcVar11 = (char *)(*(int *)(uVar2 + 0xc) + *(int *)(uVar2 + 0x10) * 0x14);
      cVar1 = *pcVar11;
      *(uint *)(uVar2 + 0x10) = uVar9;
      if (cVar1 != '\x02') {
        local_130 = CONCAT31(local_130._1_3_,cVar1);
        FUN_01bed4e2((uint)&local_130 | 1,pcVar11 + 1,0x13);
        FUN_018cab8c(&local_b8,uVar2 + 0x18,&local_130);
        FUN_018c446c(&local_b8);
        if (cVar1 == '\0') {
          FUN_0134bd64(local_12c,local_128);
        }
      }
    }
  }
  FUN_00a97e8c(uVar2,uVar15);
  return;
}

