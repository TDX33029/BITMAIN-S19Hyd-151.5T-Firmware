// FUN_009235e0 @ 009235e0 size=1392 calls_out=11 calls_in=0
// strings: socketAlreadyExistsError | socketAlreadyExistsError | socketAlreadyExistsError

void FUN_009235e0(int *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int local_334;
  int local_330;
  int local_32c;
  int local_328;
  undefined4 local_318;
  undefined4 local_314;
  undefined1 auStack_310 [72];
  int local_2c8 [28];
  int *local_258;
  int *local_254;
  undefined4 local_250;
  int *local_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined1 auStack_238 [12];
  uint local_22c;
  undefined4 local_228;
  undefined4 local_224;
  int local_1f0 [29];
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined1 auStack_170 [4];
  undefined4 local_16c;
  int local_168;
  undefined1 auStack_128 [72];
  int local_e0;
  uint local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined1 auStack_98 [116];
  
  iVar4 = *(int *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x10);
  piVar6 = *(int **)(param_2 + 0x14);
  iVar8 = *(int *)(param_2 + 0x18);
  if ((iVar4 != 0) && (iVar5 = iVar4 * 4 + 4, iVar4 + iVar5 != -5)) {
    thunk_FUN_016d3fb4(*(int *)(param_2 + 0x1c) - iVar5);
  }
  local_248 = *(undefined4 *)(param_2 + 0x30);
  uStack_244 = *(undefined4 *)(param_2 + 0x34);
  uStack_240 = *(undefined4 *)(param_2 + 0x38);
  local_2c8[0] = 4;
  local_24c = piVar6 + iVar8 * 0x30;
  local_258 = piVar6;
  local_250 = uVar7;
  if (iVar8 == 0) {
    uVar10 = 0;
    bVar1 = true;
    uVar9 = 0x80000000;
    local_254 = piVar6;
LAB_009238dc:
    FUN_009243d8(&local_e0,"url",3);
    if (local_e0 == 2) {
      local_e0 = 2;
      local_32c = local_d4;
      uVar2 = local_dc;
      uVar3 = local_dc;
      iVar4 = local_d8;
      goto joined_r0x00923918;
    }
    uVar10 = 0;
    param_1[4] = local_d0;
    param_1[5] = iStack_cc;
    param_1[6] = local_c8;
    param_1[7] = iStack_c4;
    param_1[8] = local_c0;
    param_1[9] = iStack_bc;
    param_1[10] = iStack_b8;
    param_1[0xb] = iStack_b4;
    *param_1 = local_e0;
    param_1[1] = local_dc;
    param_1[2] = local_d8;
    param_1[3] = local_d4;
LAB_009239a8:
    bVar1 = true;
    if (uVar9 != 0x80000000) {
joined_r0x00923b48:
      bVar1 = true;
      if (uVar9 != 0) {
        bVar1 = true;
        thunk_FUN_016d3fb4(local_328);
      }
    }
LAB_00923aa4:
    if (bVar1 && (uVar10 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(local_330);
    }
    FUN_009248d4(&local_258);
  }
  else {
    uVar9 = 0x80000000;
    uVar10 = 0x80000000;
    do {
      local_254 = piVar6 + 0x30;
      iVar4 = *piVar6;
      if (iVar4 == 4) break;
      FUN_016dd1aa(auStack_238,piVar6 + 0x1c,0x48);
      FUN_016dd1aa((uint)local_1f0 | 4,piVar6 + 1,0x6c);
      uVar7 = 0;
      if ((local_22c != 0x80000003) && (0x80000001 < local_22c)) {
        uVar7 = 1;
        local_318 = local_228;
        local_314 = local_224;
      }
      local_1f0[0] = iVar4;
      FUN_01676758(auStack_128,auStack_238);
      local_174 = local_314;
      local_178 = local_318;
      local_17c = uVar7;
      FUN_016dd1aa(auStack_170,auStack_128,0x48);
      if (local_168 == 6) {
        iVar4 = thunk_FUN_016dd50a(local_16c,"socketAlreadyExistsError",6);
        if (iVar4 != 0) goto LAB_009237a0;
        iVar4 = 1;
      }
      else if ((local_168 == 3) && (iVar4 = thunk_FUN_016dd50a(local_16c,"url",3), iVar4 == 0)) {
        iVar4 = 0;
      }
      else {
LAB_009237a0:
        iVar4 = 2;
      }
      FUN_00919614(auStack_170);
      FUN_016dd1aa(&local_e0,auStack_238,0x48);
      FUN_016dd1aa(auStack_98,local_1f0,0x70);
      if (local_2c8[0] != 4) {
        FUN_00919614(auStack_310);
        FUN_008f91a8(local_2c8);
      }
      FUN_016dd1aa(auStack_310,&local_e0,0xb8);
      if (iVar4 == 0) {
        if (uVar10 != 0x80000000) {
          FUN_009244cc(&local_e0,"url",3);
LAB_00923a20:
          *param_1 = local_e0;
          param_1[1] = local_dc;
          param_1[2] = local_d8;
          param_1[3] = local_d4;
          param_1[4] = local_d0;
          param_1[5] = iStack_cc;
          param_1[6] = local_c8;
          param_1[7] = iStack_c4;
          param_1[8] = local_c0;
          param_1[9] = iStack_bc;
          param_1[10] = iStack_b8;
          param_1[0xb] = iStack_b4;
          goto LAB_009239a8;
        }
        FUN_0091bba4(&local_e0,auStack_310);
        local_32c = local_d4;
        if (local_e0 != 2) {
          uVar10 = 0;
          param_1[4] = local_d0;
          param_1[5] = iStack_cc;
          param_1[6] = local_c8;
          param_1[7] = iStack_c4;
          param_1[8] = local_c0;
          param_1[9] = iStack_bc;
          param_1[10] = iStack_b8;
          param_1[0xb] = iStack_b4;
          param_1[2] = local_d8;
          *param_1 = local_e0;
          param_1[1] = local_dc;
          param_1[3] = local_d4;
          goto LAB_009239a8;
        }
        local_330 = local_d8;
        uVar10 = local_dc;
      }
      else if (iVar4 == 1) {
        if (uVar9 != 0x80000000) {
          FUN_009244cc(&local_e0,"socketAlreadyExistsError",6);
          *param_1 = local_e0;
          param_1[1] = local_dc;
          param_1[2] = local_d8;
          param_1[3] = local_d4;
          param_1[4] = local_d0;
          param_1[5] = iStack_cc;
          param_1[6] = local_c8;
          param_1[7] = iStack_c4;
          param_1[8] = local_c0;
          param_1[9] = iStack_bc;
          param_1[10] = iStack_b8;
          param_1[0xb] = iStack_b4;
          goto joined_r0x00923b48;
        }
        FUN_0091bba4(&local_e0,auStack_310);
        local_328 = local_d8;
        local_334 = local_d4;
        uVar9 = local_dc;
        if (local_e0 != 2) {
          param_1[4] = local_d0;
          param_1[5] = iStack_cc;
          param_1[6] = local_c8;
          param_1[7] = iStack_c4;
          param_1[8] = local_c0;
          param_1[9] = iStack_bc;
          param_1[10] = iStack_b8;
          param_1[0xb] = iStack_b4;
          bVar1 = true;
          *param_1 = local_e0;
          param_1[1] = local_dc;
          param_1[2] = local_d8;
          param_1[3] = local_d4;
          goto LAB_00923aa4;
        }
      }
      else {
        FUN_0091a568(&local_e0,auStack_310);
        if (local_e0 != 2) goto LAB_00923a20;
      }
      piVar6 = local_254;
    } while (local_254 != local_24c);
    bVar1 = uVar10 == 0x80000000;
    uVar2 = uVar10;
    uVar3 = local_dc;
    iVar4 = local_330;
    if (uVar10 == 0x80000000) goto LAB_009238dc;
joined_r0x00923918:
    local_dc = uVar9;
    if (local_dc == 0x80000000) {
      local_dc = uVar3;
      FUN_009243d8(&local_e0,"socketAlreadyExistsError",6);
      if (local_e0 != 2) {
        param_1[4] = local_d0;
        param_1[5] = iStack_cc;
        param_1[6] = local_c8;
        param_1[7] = iStack_c4;
        param_1[8] = local_c0;
        param_1[9] = iStack_bc;
        param_1[10] = iStack_b8;
        param_1[0xb] = iStack_b4;
        *param_1 = local_e0;
        param_1[1] = local_dc;
        param_1[2] = local_d8;
        param_1[3] = local_d4;
        if (uVar2 != 0) {
          thunk_FUN_016d3fb4(iVar4);
        }
        goto LAB_00923aa4;
      }
      local_334 = local_d4;
      local_328 = local_d8;
    }
    *param_1 = 2;
    param_1[1] = uVar2;
    param_1[2] = iVar4;
    param_1[3] = local_32c;
    param_1[5] = local_328;
    param_1[4] = local_dc;
    param_1[6] = local_334;
    FUN_009248d4(&local_258);
  }
  if (local_2c8[0] != 4) {
    FUN_00919614(auStack_310);
    FUN_008f91a8(local_2c8);
  }
  return;
}

