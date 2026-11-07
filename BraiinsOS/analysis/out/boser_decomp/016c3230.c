// FUN_016c3230 @ 016c3230 size=1592 calls_out=8 calls_in=3
// strings: cannot build lazy DFAs for regexes with Unicode word boundaries; switch to ASCII word boundaries; or heuristically enable Unicode word boundaries or use a different regex engine

void FUN_016c3230(uint *param_1,uint *param_2,int *param_3)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int *piVar22;
  bool bVar23;
  undefined8 uVar24;
  uint local_38c;
  uint local_388;
  uint local_340 [4];
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  uint local_310 [12];
  uint local_2e0;
  uint uStack_2dc;
  uint uStack_2d8;
  uint local_2d4;
  uint uStack_2d0;
  uint uStack_2cc;
  uint uStack_2c8;
  uint local_2c0;
  uint uStack_2bc;
  uint uStack_2b8;
  uint local_2b4;
  uint local_2b0;
  uint uStack_2ac;
  uint uStack_2a8;
  int iStack_2a4;
  uint local_288;
  uint uStack_284;
  uint uStack_280;
  uint uStack_27c;
  uint local_278;
  uint uStack_274;
  uint uStack_270;
  uint uStack_26c;
  uint local_268 [7];
  uint local_24c;
  uint local_248 [8];
  byte local_228 [256];
  undefined1 auStack_128 [10];
  undefined1 local_11e;
  undefined1 local_11b;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined2 local_f0;
  undefined1 auStack_e7 [30];
  undefined1 local_c9;
  undefined1 auStack_c7 [163];
  
  FUN_01bed93e(local_248,0,0x20);
  puVar15 = local_248;
  if ((*param_2 & 1) != 0) {
    puVar15 = param_2 + 2;
  }
  local_268[0] = *puVar15;
  local_268[1] = puVar15[1];
  local_268[2] = puVar15[2];
  local_268[3] = puVar15[3];
  local_268[4] = puVar15[4];
  local_268[5] = puVar15[5];
  local_268[6] = puVar15[6];
  local_24c = puVar15[7];
  if ((*(ushort *)((int)param_3 + 0x131) & 0x333) == 0) {
LAB_016c33d8:
    uVar18 = local_268[0];
    puVar15 = (uint *)((uint)local_268 | 4);
    local_2e0 = *puVar15;
    uStack_2dc = puVar15[1];
    uStack_2d8 = puVar15[2];
    local_2d4 = puVar15[3];
    uStack_2d0 = puVar15[4];
    uStack_2cc = puVar15[5];
    uStack_2c8 = puVar15[6];
    puVar15 = (uint *)((uint)(local_310 + 4) | 4);
    local_310[4] = local_268[0];
    *puVar15 = local_2e0;
    puVar15[1] = uStack_2dc;
    puVar15[2] = uStack_2d8;
    puVar15[3] = local_2d4;
    puVar15[4] = uStack_2d0;
    puVar15[5] = uStack_2cc;
    puVar15[6] = uStack_2c8;
    if ((*(byte *)((int)param_2 + 0x52) == 2) || ((*(byte *)((int)param_2 + 0x52) & 1) != 0)) {
      local_2c0 = param_3[0x42];
      uStack_2bc = param_3[0x43];
      uStack_2b8 = param_3[0x44];
      local_2b4 = param_3[0x45];
      local_2b0 = param_3[0x46];
      uStack_2ac = param_3[0x47];
      uStack_2a8 = param_3[0x48];
      iStack_2a4 = param_3[0x49];
      iVar7 = thunk_FUN_01bed842(local_310 + 4,"",0x20);
      if (iVar7 != 0) {
        FUN_016c2f9c(&local_2c0,local_310 + 4);
      }
      FUN_016c2edc(local_228,&local_2c0);
    }
    else {
      iVar7 = 0;
      local_2c0 = local_2e0;
      uStack_2bc = uStack_2dc;
      uStack_2b8 = uStack_2d8;
      local_2b4 = local_2d4;
      local_2b0 = uStack_2d0;
      uStack_2ac = uStack_2cc;
      uStack_2a8 = uStack_2c8;
      FUN_01bed93e(local_228,0,0x100);
      do {
        local_228[iVar7] = (byte)iVar7;
        iVar7 = iVar7 + 1;
      } while (iVar7 != 0x100);
    }
    iVar7 = 0x18;
    if ((*(byte *)((int)param_2 + 0x51) & 1) != 0) {
      iVar7 = param_3[0x55] * 0x18 + 0x18;
    }
    piVar22 = (int *)(uint)local_228[0xff];
    iVar21 = param_3[0x52];
    uVar24 = FUN_01689fcc();
    iVar16 = (int)((ulonglong)uVar24 >> 0x20);
    piVar6 = (int *)uVar24;
    DataMemoryBarrier(0xb);
    do {
      iVar17 = *piVar6;
      bVar23 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar23);
    *piVar6 = iVar17 + -1;
    if (iVar17 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(piVar6,iVar16);
    }
    uVar14 = param_2[0xb];
    if (param_2[10] == 0) {
      uVar14 = 0x200000;
    }
    uVar19 = iVar21 * 0x1b + (0x14 << (0x20U - LZCOUNT((int)piVar22 + 1) & 0xff)) + iVar7 +
             iVar16 * 3 + param_3[0x55] * 0xc + 0x7f;
    if (uVar14 < uVar19) {
      if ((*(byte *)((int)param_2 + 0x55) & 1) == 0) {
        param_1[2] = 0x2a;
        param_1[3] = uVar19;
        iVar7 = 0x10;
        goto LAB_016c3668;
      }
      uVar14 = uVar19;
    }
    uVar19 = (uint)*(byte *)(param_3 + 0x56);
    FUN_01bed93e(auStack_128,0,0x100);
    local_c9 = 1;
    local_11b = 4;
    local_11e = 3;
    local_f8 = 0x1010101;
    local_f4 = 0x1010101;
    local_f0 = 0x101;
    FUN_01bed93e(auStack_e7,1,0x1a);
    FUN_01bed93e(auStack_c7,1,0x1a);
    cVar2 = (char)param_2[0x13];
    if (uVar19 != 10 && uVar19 != 0xd) {
      auStack_128[uVar19] = 5;
    }
    uVar19 = param_2[0x14];
    if (cVar2 != '\x03' && cVar2 != '\x02') {
      piVar22 = (int *)param_2[0x10];
      do {
        iVar7 = *piVar22;
        bVar23 = (bool)hasExclusiveAccess(piVar22);
      } while (!bVar23);
      *piVar22 = iVar7 + 1;
      if (iVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x16c3864);
        (*pcVar1)();
      }
      local_388 = param_2[0x11];
      local_38c = param_2[0x12];
    }
    uVar3 = *(undefined1 *)((int)param_2 + 0x51);
    uVar4 = *(undefined1 *)((int)param_2 + 0x53);
    uVar5 = *(undefined1 *)((int)param_2 + 0x52);
    bVar23 = (*param_2 & 1) != 0;
    if (bVar23) {
      local_288 = param_2[2];
      uStack_284 = param_2[3];
      uStack_280 = param_2[4];
      uStack_27c = param_2[5];
      local_278 = param_2[6];
      uStack_274 = param_2[7];
      uStack_270 = param_2[8];
      uStack_26c = param_2[9];
    }
    uVar8 = param_2[10];
    uVar9 = param_2[0xb];
    uVar10 = param_2[0xc];
    uVar11 = param_2[0xd];
    uVar12 = param_2[0xe];
    uVar13 = param_2[0xf];
    uVar20 = param_2[0x15];
    FUN_01bed4e2(param_1 + 0x16,auStack_128,0x100);
    FUN_01bed4e2(param_1 + 0x56,local_228,0x100);
    param_1[0x96] = uVar18;
    param_1[0x97] = local_2e0;
    param_1[0x98] = uStack_2dc;
    param_1[0x99] = uStack_2d8;
    param_1[0x9a] = local_2d4;
    param_1[0x9b] = uStack_2d0;
    param_1[0x9c] = uStack_2cc;
    param_1[0x9d] = uStack_2c8;
    *param_1 = (uint)bVar23;
    param_1[1] = 0;
    param_1[2] = local_288;
    param_1[3] = uStack_284;
    param_1[4] = uStack_280;
    param_1[5] = uStack_27c;
    param_1[6] = local_278;
    param_1[7] = uStack_274;
    param_1[8] = uStack_270;
    param_1[9] = uStack_26c;
    param_1[0x9f] = 0x20 - LZCOUNT(local_228[0xff] + 1);
    *(undefined1 *)((int)param_1 + 0x53) = uVar4;
    *(undefined1 *)((int)param_1 + 0x52) = uVar5;
    *(undefined1 *)((int)param_1 + 0x51) = uVar3;
    *(char *)(param_1 + 0x14) = (char)uVar19;
    *(char *)(param_1 + 0x13) = cVar2;
    param_1[0x12] = local_38c;
    param_1[10] = uVar8;
    param_1[0xb] = uVar9;
    param_1[0xc] = uVar10;
    param_1[0xd] = uVar11;
    param_1[0xe] = uVar12;
    param_1[0xf] = uVar13;
    param_1[0x9e] = (uint)param_3;
    param_1[0xa0] = uVar14;
    *(short *)(param_1 + 0x15) = (short)uVar20;
    param_1[0x10] = (uint)piVar22;
    param_1[0x11] = local_388;
  }
  else {
    if ((*(byte *)((int)param_2 + 0x53) & 1) != 0) {
      uVar18 = 0x80;
      do {
        local_310[0] = 1;
        uVar8 = uVar18 >> 3 & 0xfffffff0;
        local_310[3] = 0;
        local_310[2] = 0;
        local_310[1] = 0;
        uVar9 = uVar18 & 0x1f;
        local_314 = 0;
        uVar10 = uVar9 ^ 0x1f;
        local_318 = 0;
        local_31c = 0;
        local_320 = 0;
        iVar7 = -((uVar18 & 0x60) >> 3);
        uVar19 = *(uint *)((int)local_310 + iVar7);
        *(uint *)((int)local_268 + uVar8) = *(uint *)((int)local_268 + uVar8) | uVar19 << uVar9;
        uVar20 = *(uint *)((int)local_310 + iVar7 + 4);
        uVar14 = *(uint *)((int)local_310 + iVar7 + 8);
        bVar23 = uVar18 != 0xff;
        *(uint *)((int)local_268 + uVar8 + 0xc) =
             *(uint *)((int)local_268 + uVar8 + 0xc) |
             *(int *)((int)local_310 + iVar7 + 0xc) << uVar9 | (uVar14 >> 1) >> uVar10;
        uVar18 = uVar18 + 1;
        *(uint *)((int)local_268 + uVar8 + 4) =
             *(uint *)((int)local_268 + uVar8 + 4) | uVar20 << uVar9 | (uVar19 >> 1) >> uVar10;
        *(uint *)((int)local_268 + uVar8 + 8) =
             *(uint *)((int)local_268 + uVar8 + 8) | uVar14 << uVar9 | (uVar20 >> 1) >> uVar10;
      } while (bVar23);
      goto LAB_016c33d8;
    }
    uVar18 = 0x80;
    do {
      if (uVar18 == 0xff) {
        if ((int)puVar15[7] < 0) goto LAB_016c33d8;
        break;
      }
      uVar20 = uVar18 >> 3 & 0xfffffff0;
      local_340[0] = *(uint *)((int)local_268 + uVar20);
      uVar14 = uVar18 & 0x60;
      local_340[3] = *(undefined4 *)((int)local_268 + uVar20 + 0xc);
      local_324 = 0;
      uVar19 = uVar18 & 0x1f;
      local_328 = 0;
      local_32c = 0;
      local_330 = 0;
      local_340[2] = *(undefined4 *)((int)local_268 + uVar20 + 8);
      local_340[1] = *(undefined4 *)((int)local_268 + uVar20 + 4);
      uVar18 = uVar18 + 1;
    } while ((*(uint *)((int)local_340 + (uVar14 >> 3)) >> uVar19 & 1) != 0);
    uVar14 = 0x2c;
    param_1[3] = (uint)
                 "cannot build lazy DFAs for regexes with Unicode word boundaries; switch to ASCII word boundaries, or heuristically enable Unicode word boundaries or use a different regex engine"
    ;
    param_1[4] = 0xb1;
    iVar7 = 8;
LAB_016c3668:
    *(uint *)((int)param_1 + iVar7) = uVar14;
    *param_1 = 2;
    param_1[1] = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *param_3;
      bVar23 = (bool)hasExclusiveAccess(param_3);
    } while (!bVar23);
    *param_3 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_016b9744(param_3);
    }
  }
  return;
}

