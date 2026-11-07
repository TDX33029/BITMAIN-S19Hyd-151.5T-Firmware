// FUN_01272ed0 @ 01272ed0 size=1012 calls_out=13 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01272ed0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int *unaff_r4;
  uint uVar10;
  int iVar11;
  int *piVar12;
  bool bVar13;
  uint local_3f4;
  int local_3f0;
  int local_3ec;
  uint local_3e8;
  undefined1 auStack_3e0 [188];
  undefined4 *local_324;
  undefined4 *local_31c;
  int local_304;
  int local_300;
  int local_2fc;
  int local_2f8;
  int iStack_2f4;
  int iStack_2f0;
  int local_2e8;
  int iStack_2e4;
  int iStack_2e0;
  int *local_2d8;
  int iStack_2d4;
  int iStack_2d0;
  int iStack_2cc;
  int local_2c8;
  int iStack_2c4;
  int iStack_2c0;
  int iStack_2bc;
  undefined1 auStack_268 [12];
  uint local_25c;
  uint uStack_258;
  uint uStack_254;
  int *local_220;
  int iStack_21c;
  int iStack_218;
  int iStack_214;
  int local_210;
  int iStack_20c;
  int iStack_208;
  int iStack_204;
  int iStack_200;
  undefined4 local_1b0;
  undefined1 *local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  uint local_180;
  uint local_17c;
  uint local_178;
  uint uStack_174;
  uint local_170;
  int local_16c;
  int *local_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  int local_e0 [2];
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int local_b8;
  int local_b4;
  undefined1 auStack_98 [116];
  
  FUN_01a5c7c0(auStack_3e0);
  piVar12 = (int *)((uint)&local_220 | 4);
  piVar4 = (int *)((uint)&local_180 | 4);
  piVar5 = (int *)((uint)&local_128 | 4);
  local_300 = 8;
  local_3f0 = 8;
  local_2fc = 0;
  local_304 = 0;
  do {
    iVar8 = local_2fc;
    puVar6 = local_324;
    bVar13 = local_324 != local_31c;
    if (bVar13) {
      unaff_r4 = (int *)*local_324;
      local_324 = local_324 + 0x30;
    }
    if (!bVar13 || unaff_r4 == (int *)&SUB_00000004) {
      FUN_01276e78(local_e0,local_3f0,local_2fc);
      if (local_e0[0] == 2) {
        *piVar12 = local_d8;
        piVar12[1] = iStack_d4;
        piVar12[2] = iStack_d0;
        piVar12[3] = iStack_cc;
        piVar12[4] = local_c8;
        piVar12[5] = iStack_c4;
        piVar12[6] = iStack_c0;
        piVar12[7] = iStack_bc;
        iVar8 = piVar12[1];
        iVar9 = piVar12[2];
        iVar11 = piVar12[3];
        param_1[2] = *piVar12;
        param_1[3] = iVar8;
        param_1[4] = iVar9;
        param_1[5] = iVar11;
        iVar8 = piVar12[5];
        iVar9 = piVar12[6];
        iVar11 = piVar12[7];
        param_1[6] = piVar12[4];
        param_1[7] = iVar8;
        param_1[8] = iVar9;
        param_1[9] = iVar11;
        *param_1 = 2;
      }
      else {
        puVar6 = (undefined4 *)((uint)local_e0 | 4);
        local_220 = (int *)*puVar6;
        iStack_21c = puVar6[1];
        iStack_218 = puVar6[2];
        iStack_214 = puVar6[3];
        local_210 = puVar6[4];
        iStack_20c = puVar6[5];
        iStack_208 = puVar6[6];
        iStack_204 = puVar6[7];
        iStack_200 = puVar6[8];
        param_1[1] = (int)local_220;
        param_1[2] = iStack_21c;
        param_1[3] = iStack_218;
        param_1[4] = iStack_214;
        param_1[5] = local_210;
        param_1[6] = iStack_20c;
        param_1[7] = iStack_208;
        param_1[8] = iStack_204;
        param_1[9] = iStack_200;
        param_1[10] = local_b8;
        param_1[0xb] = local_b4;
        *param_1 = local_e0[0];
      }
      goto LAB_01273258;
    }
    FUN_01bed4e2(auStack_268,puVar6 + 0x1c,0x48);
    FUN_01bed4e2(&local_2d8,puVar6 + 1,0x6c);
    uVar3 = uStack_254;
    uVar2 = uStack_258;
    uVar1 = local_25c;
    local_220 = unaff_r4;
    FUN_01bed4e2(piVar12,&local_2d8,0x6c);
    uVar10 = 0;
    if (uVar1 == 0x80000003) {
    }
    else {
      uVar10 = (uint)(0x80000001 < uVar1);
      if (0x80000001 < uVar1) {
        local_3f4 = uVar2;
        local_3e8 = uVar3;
      }
    }
    FUN_01a60910(&local_128,auStack_268);
    local_17c = local_3f4;
    local_180 = uVar10;
    local_178 = local_3e8;
    FUN_01bed4e2(&uStack_174,&local_128,0x48);
    iVar9 = local_16c;
    uVar1 = local_170;
    iVar11 = 0;
    if (local_16c < 0) {
LAB_012732b8:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(iVar11,local_3ec);
    }
    if (local_16c == 0) {
      local_3ec = 1;
    }
    else {
      iVar11 = 1;
      local_3ec = FUN_01298504(local_16c,1);
      if (local_3ec == 0) {
        local_3ec = iVar9;
        goto LAB_012732b8;
      }
      iVar11 = iVar9;
    }
    FUN_01bed4e2(local_3ec,uVar1,iVar9);
    FUN_00a25e44(&local_180);
    local_19c = iVar9;
    local_1b0 = 2;
    local_1a8 = &DAT_8000000c;
    local_1a4 = iVar11;
    local_1a0 = local_3ec;
    FUN_01bed4e2(local_e0,auStack_268,0x48);
    FUN_01bed4e2(auStack_98,&local_220,0x70);
    FUN_01272a6c(auStack_3e0);
    FUN_01bed4e2(auStack_3e0,local_e0,0xb8);
    local_2f8 = local_1a4;
    iStack_2f4 = local_1a0;
    iStack_2f0 = local_19c;
    unaff_r4 = &local_2f8;
    *piVar5 = local_1a4;
    piVar5[1] = local_1a0;
    piVar5[2] = local_19c;
    local_128 = (int *)&DAT_8000000c;
    local_2e8 = local_2f8;
    iStack_2e4 = iStack_2f4;
    iStack_2e0 = iStack_2f0;
    FUN_012381e8(local_e0,auStack_3e0);
    if (local_e0[0] != 2) {
      puVar7 = (uint *)((uint)local_e0 | 4);
      local_180 = *puVar7;
      local_17c = puVar7[1];
      local_178 = puVar7[2];
      uStack_174 = puVar7[3];
      local_170 = puVar7[4];
      param_1[6] = local_c8;
      param_1[7] = iStack_c4;
      param_1[8] = iStack_c0;
      param_1[9] = iStack_bc;
      param_1[10] = local_b8;
      param_1[0xb] = local_b4;
      param_1[1] = local_180;
      param_1[2] = local_17c;
      param_1[3] = local_178;
      param_1[4] = uStack_174;
      param_1[5] = local_170;
      *param_1 = local_e0[0];
      FUN_01272c5c(&local_128);
LAB_01273258:
      FUN_0126cce4(&local_304);
      FUN_00b3926c(auStack_3e0);
      return;
    }
    *piVar4 = local_d8;
    piVar4[1] = iStack_d4;
    piVar4[2] = iStack_d0;
    piVar4[3] = iStack_cc;
    local_2c8 = *piVar4;
    iStack_2c4 = piVar4[1];
    iStack_2c0 = piVar4[2];
    iStack_2bc = piVar4[3];
    local_220 = local_128;
    iStack_21c = iStack_124;
    iStack_218 = iStack_120;
    iStack_214 = iStack_11c;
    local_2d8 = local_128;
    iStack_2d4 = iStack_124;
    iStack_2d0 = iStack_120;
    iStack_2cc = iStack_11c;
    local_210 = local_2c8;
    iStack_20c = iStack_2c4;
    iStack_208 = iStack_2c0;
    iStack_204 = iStack_2bc;
    if (iVar8 == local_304) {
      FUN_0126727c(&local_304);
      local_3f0 = local_300;
    }
    puVar6 = (undefined4 *)(local_3f0 + iVar8 * 0x20);
    local_2fc = iVar8 + 1;
    *puVar6 = local_2d8;
    puVar6[1] = iStack_2d4;
    puVar6[2] = iStack_2d0;
    puVar6[3] = iStack_2cc;
    puVar6[4] = local_2c8;
    puVar6[5] = iStack_2c4;
    puVar6[6] = iStack_2c0;
    puVar6[7] = iStack_2bc;
  } while( true );
}

