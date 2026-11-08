// FUN_0108913c @ 0108913c size=1388 calls_out=20 calls_in=1
// strings: BUG: randomized schedule for the default frequency must be constructible

void FUN_0108913c(undefined4 *param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint uVar11;
  int local_3d4;
  undefined4 local_3b8;
  uint local_3b4;
  undefined1 auStack_3a8 [152];
  int local_310 [47];
  undefined2 local_254;
  undefined1 local_252;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 local_198;
  uint local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  uint local_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined1 auStack_13c [8];
  undefined2 local_134;
  uint local_130;
  int local_12c;
  undefined4 local_128;
  int iStack_124;
  undefined4 local_120;
  uint local_118;
  short local_114;
  undefined4 local_110;
  uint local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  uint local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined1 local_e4;
  undefined1 auStack_e0 [64];
  undefined4 local_a0;
  undefined2 local_77;
  undefined1 local_75;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x154)) {
  case 0:
    *(undefined2 *)(param_2 + 0x155) = 0;
    *(undefined4 *)(param_2 + 0x94) = *(undefined4 *)(param_2 + 0x90);
    *(undefined1 *)(param_2 + 0x157) = 0;
    FUN_01bed4e2(param_2 + 0x48,param_2,0x48);
    FUN_00a2b4fc(*(undefined4 *)(param_2 + 0x88));
    iVar8 = *(int *)(*(int *)(param_2 + 0x94) + 4);
    *(undefined1 *)(param_2 + 0x194) = 0;
    *(int *)(param_2 + 0x158) = iVar8 + 8;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1d80c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1d80c);
  case 4:
    goto switchD_01089168_caseD_4;
  }
  iVar8 = param_2 + 0x158;
  FUN_010861ec(local_310,iVar8,param_3);
  if (local_310[0] == -0x7fffffff) {
    uVar6 = 3;
    *param_1 = 3;
    param_1[1] = 0;
  }
  else {
    *(undefined1 *)(param_2 + 0x155) = 1;
    FUN_01bed4e2(param_2 + 0x98,local_310,0xbc);
    FUN_00bba254(iVar8);
    if (*(char *)(param_2 + 0x150) == '\x01') {
      *(undefined2 *)(param_2 + 0x155) = 0x100;
      FUN_01bed4e2(iVar8,param_2 + 0x98,0xbc);
    }
    else {
      piVar10 = *(int **)(**(int **)(param_2 + 0x94) + 8);
      do {
        iVar7 = *piVar10;
        bVar3 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar3);
      *piVar10 = iVar7 + 1;
      if (iVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x10896b0);
        (*pcVar1)();
      }
      FUN_014bef88(auStack_13c);
      FUN_0128e808(&local_130);
      FUN_01298334(&local_150,local_134,&local_130);
      FUN_00a57aec(&local_70);
      if (local_70 == 2) {
        local_12c = local_6c;
        local_130 = 0x80000001;
LAB_01089684:
        local_58 = local_12c;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("BUG: randomized schedule for the default frequency must be constructible",0x48
                     ,&local_58,&DAT_01c0e9a0,&DAT_01c0eae8);
      }
      local_50 = local_68;
      uStack_4c = uStack_64;
      uStack_48 = uStack_60;
      uStack_44 = uStack_5c;
      local_54 = local_6c;
      local_58 = local_70;
      local_40 = local_150;
      uStack_3c = uStack_14c;
      uStack_38 = uStack_148;
      uStack_34 = uStack_144;
      uStack_30 = uStack_140;
      FUN_00a57b38(&local_130,1);
      if (local_130 == 0x80000001) goto LAB_01089684;
      FUN_01bed4e2(&local_250,&local_130,0xb8);
      local_252 = local_75;
      local_254 = local_77;
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar10;
        bVar3 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar3);
      *piVar10 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00b8ec5c(piVar10);
      }
      *(undefined1 *)(param_2 + 0x156) = 1;
      FUN_01bed4e2(iVar8,&local_250,0xb8);
      *(undefined2 *)(param_2 + 0x211) = local_254;
      *(undefined1 *)(param_2 + 0x210) = 0;
      *(undefined1 *)(param_2 + 0x213) = local_252;
    }
    iVar8 = *(int *)(*(int *)(param_2 + 0x94) + 4);
    *(undefined1 *)(param_2 + 0x3b4) = 0;
    *(int *)(param_2 + 0x214) = iVar8 + 8;
switchD_01089168_caseD_4:
    FUN_01085658(&local_130,param_2 + 0x214,param_3);
    uVar5 = local_128;
    uVar4 = local_130;
    if (local_114 == 0x256) {
      *param_1 = 3;
      param_1[1] = 0;
      uVar6 = 4;
    }
    else {
      local_178 = local_104;
      uStack_174 = local_100;
      uStack_170 = local_fc;
      uStack_16c = uStack_f8;
      if (*(char *)(param_2 + 0x3b4) == '\x03') {
        FUN_010855e4(param_2 + 0x21c);
      }
      local_190 = local_108;
      local_194 = local_10c;
      local_198 = local_110;
      uVar11 = local_f4 & 0xffff;
      local_18c = local_178;
      uStack_188 = uStack_174;
      uStack_184 = uStack_170;
      uStack_180 = uStack_16c;
      *(undefined1 *)(param_2 + 0x156) = 0;
      local_17c = local_f4;
      local_3b8 = 4;
      if (*(uint *)(param_2 + 0x158) != 0x80000000) {
        local_130 = *(uint *)(param_2 + 0x158);
        FUN_01bed4e2(&local_12c,param_2 + 0x15c,0xb4);
        puVar9 = (undefined4 *)0x0;
        if (uVar11 != 0x255) {
          puVar9 = &local_198;
        }
        FUN_00ab5ffc(&local_250,local_12c,local_128,puVar9);
        FUN_0193f164(&local_130);
        local_3b8 = local_250;
        local_168 = local_24c;
        uStack_164 = uStack_248;
        uStack_160 = uStack_244;
        uStack_15c = uStack_240;
        uStack_158 = uStack_23c;
        uStack_154 = uStack_238;
      }
      uVar6 = *(undefined1 *)(param_2 + 0x210);
      if (uVar11 != 0x255) {
        iVar8 = FUN_012920c0(local_110);
        lVar2 = (longlong)iVar8 * 0x15180 + (ulonglong)local_10c;
        local_3d4 = (int)((ulonglong)lVar2 >> 0x20) - (((uint)lVar2 < 0x77934880) + 0xe);
      }
      local_3b4 = (uint)(uVar11 != 0x255);
      if (local_114 != 0x255) {
        FUN_012920c0(uVar4);
      }
      FUN_0160aaa4(auStack_e0,0);
      iStack_124 = local_3d4;
      local_130 = local_3b4;
      local_120 = local_108;
      local_100 = local_3b8;
      local_108 = uVar5;
      local_12c = 0;
      local_fc = local_168;
      uStack_f8 = uStack_164;
      local_f4 = uStack_160;
      uStack_f0 = uStack_15c;
      uStack_ec = uStack_158;
      uStack_e8 = uStack_154;
      local_a0 = 0;
      local_e4 = uVar6;
      local_118 = (uint)(local_114 != 0x255);
      FUN_01bed4e2(auStack_3a8,&local_130,0x98);
      *(undefined1 *)(param_2 + 0x156) = 0;
      if ((*(char *)(param_2 + 0x155) != '\0') && (*(int *)(param_2 + 0x98) != -0x80000000)) {
        FUN_0193f164();
      }
      *(undefined1 *)(param_2 + 0x155) = 0;
      FUN_00f9604c(param_2 + 0x48);
      FUN_01bed4e2(param_1,auStack_3a8,0x98);
      uVar6 = 1;
    }
  }
  *(undefined1 *)(param_2 + 0x154) = uVar6;
  return;
}

