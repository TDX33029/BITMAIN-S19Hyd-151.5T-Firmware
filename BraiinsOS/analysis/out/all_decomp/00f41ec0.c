// FUN_00f41ec0 @ 00f41ec0 size=1204 calls_out=14 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00f41ec0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined1 *puVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int local_3a0;
  int local_388;
  int local_384;
  undefined1 auStack_370 [72];
  int local_328 [28];
  int *local_2b8;
  int *local_2b4;
  undefined4 local_2b0;
  int *local_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  int local_294;
  int local_290;
  int local_28c;
  int local_288;
  int iStack_284;
  int iStack_280;
  int local_278;
  int iStack_274;
  int iStack_270;
  undefined1 *local_268;
  int iStack_264;
  int iStack_260;
  uint local_25c;
  int local_258;
  int local_254;
  undefined1 *local_220;
  int iStack_21c;
  int iStack_218;
  uint uStack_214;
  int local_210;
  int iStack_20c;
  int iStack_208;
  int iStack_204;
  int iStack_200;
  undefined4 local_1b0;
  undefined1 *local_1a8;
  int local_1a4;
  int iStack_1a0;
  int iStack_19c;
  undefined1 *local_180;
  int local_17c;
  int local_178;
  uint uStack_174;
  int local_170;
  int local_16c;
  int iStack_168;
  int iStack_164;
  int local_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
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
  
  iVar2 = *(int *)(param_2 + 0x20);
  uVar9 = *(undefined4 *)(param_2 + 0x10);
  piVar10 = *(int **)(param_2 + 0x14);
  iVar12 = *(int *)(param_2 + 0x18);
  if ((iVar2 != 0) && (iVar5 = iVar2 * 4 + 4, iVar2 + iVar5 != -5)) {
    thunk_FUN_016d3fb4(*(int *)(param_2 + 0x1c) - iVar5);
  }
  local_2a8 = *(undefined4 *)(param_2 + 0x30);
  uStack_2a4 = *(undefined4 *)(param_2 + 0x34);
  uStack_2a0 = *(undefined4 *)(param_2 + 0x38);
  local_328[0] = 4;
  local_2ac = piVar10 + iVar12 * 0x30;
  iVar2 = 8;
  piVar3 = (int *)((uint)&local_220 | 4);
  local_290 = 8;
  local_28c = 0;
  local_294 = 0;
  local_2b8 = piVar10;
  local_2b0 = uVar9;
  if (iVar12 != 0) {
    piVar13 = (int *)((uint)&local_128 | 4);
    piVar6 = (int *)((uint)&local_268 | 4);
    local_2b4 = piVar10;
    do {
      iVar12 = local_28c;
      piVar1 = local_2b4;
      puVar8 = (undefined1 *)*local_2b4;
      piVar10 = local_2b4 + 0x30;
      if (puVar8 == (undefined1 *)0x4) break;
      piVar10 = local_2b4 + 0x1c;
      local_2b4 = local_2b4 + 0x30;
      FUN_016dd1aa(&local_268,piVar10,0x48);
      FUN_016dd1aa(piVar3,piVar1 + 1,0x6c);
      puVar11 = (undefined1 *)0x0;
      if ((local_25c != 0x80000003) && (0x80000001 < local_25c)) {
        puVar11 = (undefined1 *)0x1;
        local_388 = local_258;
        local_384 = local_254;
      }
      local_220 = puVar8;
      FUN_01676758(&local_128,&local_268);
      local_178 = local_384;
      local_17c = local_388;
      local_180 = puVar11;
      FUN_016dd1aa(&uStack_174,&local_128,0x48);
      iVar7 = local_16c;
      iVar5 = local_170;
      uVar9 = 0;
      if (local_16c < 0) {
LAB_00f4236c:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar9,local_3a0);
      }
      if (local_16c == 0) {
        local_3a0 = 1;
        iVar14 = 0;
      }
      else {
        local_3a0 = thunk_FUN_016d4a50(local_16c);
        if (local_3a0 == 0) {
          uVar9 = 1;
          local_3a0 = iVar7;
          goto LAB_00f4236c;
        }
        iVar14 = iVar7;
      }
      FUN_016dd1aa(local_3a0,iVar5,iVar7);
      FUN_00f4b664(&uStack_174);
      iStack_19c = iVar7;
      local_1a8 = &DAT_8000000c;
      local_1b0 = 2;
      local_1a4 = iVar14;
      iStack_1a0 = local_3a0;
      FUN_016dd1aa(local_e0,&local_268,0x48);
      FUN_016dd1aa(auStack_98,&local_220,0x70);
      if (local_328[0] != 4) {
        FUN_00f4125c(auStack_370);
        FUN_00f4130c(local_328);
      }
      FUN_016dd1aa(auStack_370,local_e0,0xb8);
      local_288 = local_1a4;
      iStack_284 = iStack_1a0;
      iStack_280 = iStack_19c;
      *piVar6 = local_1a4;
      piVar6[1] = iStack_1a0;
      piVar6[2] = iStack_19c;
      local_268 = &DAT_8000000c;
      local_278 = local_288;
      iStack_274 = iStack_284;
      iStack_270 = iStack_280;
      FUN_00f41a04(local_e0,auStack_370);
      if (local_e0[0] != 2) {
        piVar10 = (int *)((uint)local_e0 | 4);
        local_128 = *piVar10;
        iStack_124 = piVar10[1];
        iStack_120 = piVar10[2];
        iStack_11c = piVar10[3];
        iStack_118 = piVar10[4];
        param_1[6] = local_c8;
        param_1[7] = iStack_c4;
        param_1[8] = iStack_c0;
        param_1[9] = iStack_bc;
        param_1[10] = local_b8;
        param_1[0xb] = local_b4;
        param_1[1] = local_128;
        param_1[2] = iStack_124;
        param_1[3] = iStack_120;
        param_1[4] = iStack_11c;
        param_1[5] = iStack_118;
        *param_1 = local_e0[0];
        FUN_00f41754(&local_268);
        goto LAB_00f422d0;
      }
      *piVar13 = local_d8;
      piVar13[1] = iStack_d4;
      piVar13[2] = iStack_d0;
      piVar13[3] = iStack_cc;
      local_210 = *piVar13;
      iStack_20c = piVar13[1];
      iStack_208 = piVar13[2];
      iStack_204 = piVar13[3];
      local_220 = local_268;
      iStack_21c = iStack_264;
      iStack_218 = iStack_260;
      uStack_214 = local_25c;
      local_180 = local_268;
      local_17c = iStack_264;
      local_178 = iStack_260;
      uStack_174 = local_25c;
      local_170 = local_210;
      local_16c = iStack_20c;
      iStack_168 = iStack_208;
      iStack_164 = iStack_204;
      if (iVar12 == local_294) {
        FUN_009f4b90(&local_294);
        iVar2 = local_290;
      }
      puVar4 = (undefined4 *)(iVar2 + iVar12 * 0x20);
      local_28c = iVar12 + 1;
      *puVar4 = local_180;
      puVar4[1] = local_17c;
      puVar4[2] = local_178;
      puVar4[3] = uStack_174;
      puVar4[4] = local_170;
      puVar4[5] = local_16c;
      puVar4[6] = iStack_168;
      puVar4[7] = iStack_164;
      piVar10 = local_2b4;
    } while (local_2b4 != local_2ac);
  }
  local_2b4 = piVar10;
  iVar12 = local_28c;
  FUN_00f4c044(local_e0,iVar2,local_28c);
  if (local_e0[0] == 2) {
    *piVar3 = local_d8;
    piVar3[1] = iStack_d4;
    piVar3[2] = iStack_d0;
    piVar3[3] = iStack_cc;
    piVar3[4] = local_c8;
    piVar3[5] = iStack_c4;
    piVar3[6] = iStack_c0;
    piVar3[7] = iStack_bc;
    iVar5 = piVar3[1];
    iVar7 = piVar3[2];
    iVar14 = piVar3[3];
    param_1[2] = *piVar3;
    param_1[3] = iVar5;
    param_1[4] = iVar7;
    param_1[5] = iVar14;
    iVar5 = piVar3[5];
    iVar7 = piVar3[6];
    iVar14 = piVar3[7];
    param_1[6] = piVar3[4];
    param_1[7] = iVar5;
    param_1[8] = iVar7;
    param_1[9] = iVar14;
    *param_1 = 2;
    FUN_00f3c520(iVar2,iVar12);
    if (local_294 != 0) {
      thunk_FUN_016d3fb4(iVar2);
    }
    FUN_00f3cd94(&local_2b8);
  }
  else {
    puVar4 = (undefined4 *)((uint)local_e0 | 4);
    local_220 = (undefined1 *)*puVar4;
    iStack_21c = puVar4[1];
    iStack_218 = puVar4[2];
    uStack_214 = puVar4[3];
    local_210 = puVar4[4];
    iStack_20c = puVar4[5];
    iStack_208 = puVar4[6];
    iStack_204 = puVar4[7];
    iStack_200 = puVar4[8];
    param_1[1] = (int)local_220;
    param_1[2] = iStack_21c;
    param_1[3] = iStack_218;
    param_1[4] = uStack_214;
    param_1[5] = local_210;
    param_1[6] = iStack_20c;
    param_1[7] = iStack_208;
    param_1[8] = iStack_204;
    param_1[9] = iStack_200;
    param_1[10] = local_b8;
    param_1[0xb] = local_b4;
    *param_1 = local_e0[0];
LAB_00f422d0:
    FUN_00f3c520(iVar2,iVar12);
    if (local_294 != 0) {
      thunk_FUN_016d3fb4(iVar2);
    }
    FUN_00f3cd94(&local_2b8);
  }
  if (local_328[0] != 4) {
    FUN_00f4125c(auStack_370);
    FUN_00f4130c(local_328);
  }
  return;
}

