// FUN_015c3a60 @ 015c3a60 size=1432 calls_out=23 calls_in=1
// strings: 

void FUN_015c3a60(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int *piVar5;
  int iVar6;
  int **ppiVar7;
  undefined4 uVar8;
  int **ppiVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int **ppiVar17;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined1 local_13c;
  int *local_138;
  undefined4 local_134;
  byte *local_130;
  int local_12c;
  undefined1 auStack_128 [16];
  int *local_118;
  int *local_114;
  char *local_110;
  int *local_10c;
  undefined *local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 auStack_b0 [12];
  undefined4 local_a4;
  int local_a0;
  undefined4 local_9c;
  int *local_98;
  int local_94;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined *puStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined1 *local_34;
  int **local_30;
  
  ppiVar17 = *(int ***)(param_3 + 0x68);
  ppiVar9 = (int **)0x0;
  puVar13 = (undefined1 *)0x1;
  iVar10 = *(int *)(param_5 + 4);
  local_140 = 0x8400;
  local_174 = 0;
  local_178 = 0;
  local_13c = 1;
  local_144 = 0;
  local_148 = 4;
  local_14c = 0;
  local_150 = 0;
  local_154 = 4;
  local_158 = 0;
  local_15c = 0;
  local_160 = 8;
  local_164 = 0;
  local_168 = 0;
  local_16c = 4;
  local_170 = 0;
  ppiVar7 = ppiVar17;
  if ((int)ppiVar17 < 0) {
LAB_015c3c70:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(ppiVar9,ppiVar7);
  }
  uVar16 = *(undefined4 *)(param_3 + 0x58);
  uVar15 = *(undefined4 *)(param_3 + 0x5c);
  uVar11 = *(undefined4 *)(param_3 + 100);
  if (ppiVar17 != (int **)0x0) {
    ppiVar9 = (int **)&DAT_00000001;
    puVar13 = (undefined1 *)FUN_01298504(ppiVar17,1);
    if (puVar13 == (undefined1 *)0x0) goto LAB_015c3c70;
    ppiVar9 = ppiVar17;
  }
  FUN_01bed4e2(puVar13,uVar11,ppiVar17);
  local_38 = ppiVar9;
  local_34 = puVar13;
  local_30 = ppiVar17;
  FUN_015df948(&local_118,uVar16,uVar15,0xc,1,0,&local_38);
  FUN_015e539c(&local_178,&local_118);
  piVar5 = (int *)(param_3 + 0x48);
  if (*piVar5 != -0x80000000) {
    local_138 = piVar5;
    if (4 < DAT_01d51b00) {
      local_38 = &local_138;
      local_34 = &LAB_0193a90c;
      local_108 = &DAT_01cfcc88;
      local_10c = (int *)0x17;
      local_110 = "m";
      local_114 = (int *)0x17;
      local_118 = (int *)0x4b3d9f;
      FUN_015fb650(&DAT_00598b8c,&local_38,5,&local_118);
    }
    uVar16 = *(undefined4 *)(param_3 + 0x4c);
    uVar15 = *(undefined4 *)(param_3 + 0x50);
    puVar13 = (undefined1 *)0x1;
    ppiVar9 = (int **)0x0;
    if (ppiVar17 != (int **)0x0) {
      ppiVar9 = (int **)&DAT_00000001;
      puVar13 = (undefined1 *)FUN_01298504(ppiVar17,1);
      if (puVar13 == (undefined1 *)0x0) goto LAB_015c3c70;
      ppiVar9 = ppiVar17;
    }
    FUN_01bed4e2(puVar13,uVar11,ppiVar17);
    local_38 = ppiVar9;
    local_34 = puVar13;
    local_30 = ppiVar17;
    FUN_015df948(&local_118,uVar16,uVar15,0xc,1,0,&local_38);
    FUN_015e539c(&local_178,&local_118);
  }
  ppiVar7 = *(int ***)(param_3 + 0x74);
  if ((int)ppiVar7 < 0) {
    ppiVar9 = (int **)0x0;
    ppiVar7 = ppiVar17;
    goto LAB_015c3c70;
  }
  uVar2 = *(undefined2 *)(param_3 + 0x90);
  uVar3 = *(undefined2 *)(param_3 + 0x94);
  uVar4 = *(undefined2 *)(param_3 + 0x92);
  uVar15 = *(undefined4 *)(param_3 + 0x70);
  if (ppiVar7 == (int **)0x0) {
    iVar6 = 1;
    ppiVar9 = (int **)0x0;
  }
  else {
    ppiVar9 = (int **)&DAT_00000001;
    iVar6 = FUN_01298504(ppiVar7,1);
    if (iVar6 == 0) goto LAB_015c3c70;
    ppiVar9 = ppiVar7;
  }
  FUN_01bed4e2(iVar6,uVar15);
  local_38 = ppiVar9;
  local_34 = (undefined1 *)iVar6;
  local_30 = ppiVar7;
  FUN_015e1300(&local_118,uVar11,ppiVar17,0x8001,0,uVar4,uVar3,uVar2,&local_38);
  FUN_015e5874(&local_178,&local_118);
  FUN_015f1ac0(&local_38,*(undefined4 *)(param_3 + 0x7c),*(undefined4 *)(param_3 + 0x80));
  FUN_015e118c(&local_118,uVar11,ppiVar17,0x8001,0,&local_38);
  FUN_015e5608(&local_178,&local_118);
  if (iVar10 == 2) {
    FUN_015f2154(&local_134,param_3,param_4);
  }
  else {
    FUN_015f22cc(&local_134,param_3,param_4);
  }
  if (local_12c == 0) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    FUN_0134aee0(local_134,local_130,1,0x11);
    FUN_015c39bc(&local_178);
    return;
  }
  uVar16 = *(undefined4 *)(param_4 + 0x30);
  uVar12 = *(undefined4 *)(param_4 + 0x34);
  uVar11 = *(undefined4 *)(param_4 + 0x20);
  pbVar14 = local_130;
  do {
    bVar1 = *pbVar14;
    if (bVar1 == 2) break;
    FUN_01bed4e2(auStack_128,pbVar14 + 1,0x10);
    FUN_006666fc(auStack_b0,uVar16,uVar12);
    local_38 = (int **)CONCAT31(local_38._1_3_,bVar1);
    local_a4 = uVar11;
    FUN_01bed4e2((int)&local_38 + 1,auStack_128,0x10);
    uVar8 = 1;
    if ((bVar1 & 1) != 0) {
      uVar8 = 0x1c;
    }
    FUN_015df6e4(&local_118,uVar15,ppiVar7,uVar8,0x8001,0,&local_38,auStack_b0);
    FUN_015e512c(&local_178,&local_118);
    pbVar14 = pbVar14 + 0x11;
  } while (pbVar14 != local_130 + local_12c * 0x11);
  FUN_0134aee0(local_134,local_130,1,0x11);
  local_118 = (int *)CONCAT22(local_118._2_2_,2);
  FUN_015c507c(&local_a0,&local_178,param_4,param_5,*(undefined2 *)(param_2 + 0x254),0,&local_118);
  if (local_a0 != 2) {
    FUN_015fb400(&local_58,&local_a0);
    local_110 = (char *)local_58;
    local_10c = (int *)uStack_54;
    local_108 = puStack_50;
    uStack_104 = uStack_4c;
    local_100 = local_48;
    uStack_fc = uStack_44;
    uStack_f8 = uStack_40;
    uStack_f4 = uStack_3c;
    local_114 = (int *)0x0;
    local_118 = (int *)0x11;
    FUN_015c4db8(&local_38,param_2);
    if ((&SUB_00000004 < local_38) || ((1 << ((uint)local_38 & 0xff) & 0x13U) == 0)) {
      FUN_0134bd64(local_34,local_30);
    }
    local_98 = (int *)&SUB_00000004;
    local_9c = 0;
    local_94 = 0;
  }
  local_10c = local_98 + local_94 * 3;
  local_114 = local_98;
  if (local_94 != 0) {
    iVar10 = local_98[1];
    iVar6 = local_98[2];
    local_114 = local_98 + 3;
    if (*local_98 != -0x80000000) {
      *param_1 = *local_98;
      param_1[1] = iVar10;
      param_1[2] = iVar6;
      goto LAB_015c3fdc;
    }
  }
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
LAB_015c3fdc:
  local_118 = local_98;
  local_110 = (char *)local_9c;
  FUN_015c39bc(&local_178);
  FUN_015fb054(&local_118);
  return;
}

