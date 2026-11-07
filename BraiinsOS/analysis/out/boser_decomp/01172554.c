// FUN_01172554 @ 01172554 size=1360 calls_out=8 calls_in=2
// strings: 

void FUN_01172554(uint *param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint unaff_r5;
  int iVar6;
  uint uVar7;
  uint *unaff_r7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint local_198;
  uint *local_194;
  undefined2 local_18c;
  undefined1 local_18a;
  uint local_188;
  uint local_184;
  undefined2 local_17c;
  undefined1 local_17a;
  uint local_15c;
  undefined1 local_158;
  undefined2 local_157;
  undefined1 local_155;
  uint local_154;
  uint *local_150;
  uint local_14c;
  undefined1 auStack_148 [80];
  undefined1 auStack_f8 [80];
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_48;
  uint local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint *local_30;
  undefined2 local_2c;
  
  uVar8 = param_2[2];
  uVar2 = *param_2;
  uVar9 = param_2[1];
  if (uVar8 < 0x1f) {
    if (uVar8 == 0) {
      uVar8 = 0;
      uVar3 = 8;
      uVar11 = 0;
    }
    else {
      uVar3 = FUN_01298504(uVar8 * 0x58,8);
      if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(8,uVar8 * 0x58);
      }
      iVar6 = uVar8 * 0x50;
      iVar5 = uVar3 + 4;
      unaff_r7 = &local_a8;
      uVar11 = (iVar6 - 0x50U) / 0x50 + 1;
      uVar7 = uVar9;
      do {
        FUN_01bed4e2(unaff_r7,uVar7,0x50);
        *(undefined4 *)(iVar5 + -4) = 0;
        FUN_01bed4e2(iVar5,unaff_r7,0x50);
        iVar5 = iVar5 + 0x58;
        uVar7 = uVar7 + 0x50;
        iVar6 = iVar6 + -0x50;
      } while (iVar6 != 0);
      unaff_r5 = 0;
    }
    puVar14 = (uint *)0x11729cc;
    FUN_0132b958(uVar2,uVar9,4,0x50);
    if (uVar11 < uVar8) {
      puVar14 = (uint *)0x11729f4;
      local_a8 = uVar8;
      local_a4 = uVar3;
      local_a0 = uVar11;
      iVar6 = FUN_0189bb64(&local_a8,uVar11,8,0x58);
      if (iVar6 != -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620();
      }
      local_198 = local_a0;
      uVar3 = local_a4;
    }
    else {
      local_198 = uVar11;
    }
    uVar13 = 0x80000000;
    uVar7 = uVar9;
  }
  else {
    local_2c = 1;
    local_30 = (uint *)&DAT_ffffffff;
    local_9c = 0;
    local_a0 = 0;
    local_40 = 0;
    local_a4 = 1;
    local_a8 = 1;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    uVar11 = thunk_FUN_01be5118(0x80);
    if (uVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x80);
    }
    FUN_01bed4e2(uVar11,&local_a8,0x80);
    local_90 = uVar11 + 8;
    local_94 = 0;
    local_9c = 0;
    local_a4 = 1;
    local_a8 = 1;
    local_a0 = uVar11;
    local_8c = local_90;
    puVar14 = (uint *)thunk_FUN_01be5118(0x20);
    if (puVar14 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x20);
    }
    iVar6 = uVar8 * 0x50;
    unaff_r5 = 0;
    *puVar14 = local_a8;
    puVar14[1] = local_a4;
    puVar14[2] = local_a0;
    puVar14[3] = local_9c;
    puVar14[4] = local_98;
    puVar14[5] = local_94;
    puVar14[6] = local_90;
    puVar14[7] = local_8c;
    local_194 = (uint *)&DAT_00000008;
    uVar11 = 0;
    uVar7 = 0;
    uVar13 = 0;
    uVar10 = uVar9;
    uVar12 = 0;
    do {
      FUN_01bed4e2(auStack_148,uVar10,0x50);
      local_150 = local_194;
      local_155 = local_17a;
      local_157 = local_17c;
      local_158 = 0;
      local_15c = unaff_r5;
      local_154 = uVar7;
      local_14c = uVar11;
      FUN_01bed4e2(auStack_f8,uVar10,0x50);
      uVar3 = uVar12 + 1;
      uVar8 = puVar14[2];
      local_198 = uVar13 + (0xfffffffe < uVar12);
      FUN_0117f4c4(puVar14);
      local_a0 = 1;
      local_9c = 0;
      local_a4 = 1;
      local_a8 = 1;
      FUN_01bed4e2(&local_98,auStack_f8,0x50);
      local_34 = 0;
      local_38 = 0;
      local_2c = 1;
      local_40 = uVar8 + 8;
      local_3c = 0;
      local_30 = puVar14;
      local_48 = uVar12;
      local_44 = uVar13;
      iVar5 = thunk_FUN_01be5118(0x80);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x80);
      }
      uVar10 = uVar10 + 0x50;
      FUN_01bed4e2(iVar5,&local_a8,0x80);
      uVar11 = local_14c;
      unaff_r7 = local_150;
      uVar7 = local_154;
      unaff_r5 = iVar5 + 8;
      local_158 = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(&local_15c);
      } while (!bVar1);
      DataMemoryBarrier(0xb);
      if (local_15c == 0) {
        *(undefined4 *)(iVar5 + 0x70) = 1;
        DataMemoryBarrier(0xb);
        *(undefined4 *)(iVar5 + 0x68) = 0;
      }
      else {
        do {
          DataMemoryBarrier(0xb);
        } while (*(int *)(local_15c + 0x60) == puVar14[2] + 8);
        *(int *)(iVar5 + 0x70) = *(int *)(local_15c + 0x68) + 1;
        DataMemoryBarrier(0xb);
        *(uint *)(iVar5 + 0x68) = local_15c;
        *(uint *)(local_15c + 100) = unaff_r5;
      }
      *(undefined4 *)(iVar5 + 0x74) = 0;
      puVar4 = puVar14 + 6;
      DataMemoryBarrier(0xb);
      do {
        uVar8 = *puVar4;
        bVar1 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar1);
      *puVar4 = unaff_r5;
      DataMemoryBarrier(0xb);
      *(uint *)(uVar8 + 0x6c) = unaff_r5;
      local_188 = 0;
      local_184 = 0;
      uVar8 = 0;
      local_194 = local_150;
      local_18c = local_157;
      local_18a = local_155;
      uVar13 = local_198;
      uVar12 = uVar3;
      local_17c = local_18c;
      local_17a = local_18a;
      local_15c = unaff_r5;
    } while (uVar10 != uVar9 + iVar6);
    FUN_0132b958(uVar2,uVar9,4,0x50);
    uVar13 = 0;
  }
  param_1[1] = local_198;
  param_1[2] = local_188;
  param_1[3] = local_184;
  param_1[4] = (uint)puVar14;
  *(undefined1 *)((int)param_1 + 0x1b) = local_18a;
  *(char *)(param_1 + 6) = (char)uVar8;
  *param_1 = uVar3;
  param_1[5] = unaff_r5;
  *(undefined2 *)((int)param_1 + 0x19) = local_18c;
  param_1[7] = uVar7;
  param_1[8] = (uint)unaff_r7;
  param_1[9] = uVar11;
  param_1[10] = uVar13;
  param_1[0xb] = 8;
  param_1[0xc] = 0;
  return;
}

