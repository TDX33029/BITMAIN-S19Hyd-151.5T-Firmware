// FUN_0138d6f0 @ 0138d6f0 size=2604 calls_out=7 calls_in=2
// strings: cannot build lazy DFAs for regexes with Unicode word boundaries; switch to ASCII word boundaries; or heuristically enable Unicode word boundaries or use a different regex engine

void FUN_0138d6f0(uint *param_1,uint *param_2,int *param_3)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  uint *puVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  char *pcVar23;
  int *piVar24;
  bool bVar25;
  undefined8 uVar26;
  uint local_42c;
  uint local_428;
  uint local_3e0 [4];
  undefined4 uStack_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  undefined4 local_3b4;
  uint local_3b0 [16];
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined4 local_364;
  uint local_360 [4];
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  uint local_340 [4];
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  uint local_320 [4];
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  uint local_2f0 [12];
  uint local_2c0 [7];
  int local_2a4;
  uint local_288;
  uint uStack_284;
  uint uStack_280;
  uint local_27c;
  uint uStack_278;
  uint uStack_274;
  uint uStack_270;
  byte local_268 [256];
  uint local_168 [8];
  undefined1 auStack_148 [10];
  undefined1 local_13e;
  undefined1 local_13b;
  undefined4 local_118;
  undefined4 local_114;
  undefined2 local_110 [4];
  undefined4 local_107;
  undefined4 local_103;
  undefined4 local_ff;
  undefined4 local_fb;
  undefined4 local_f7;
  undefined4 local_f3;
  undefined2 local_ef;
  undefined1 local_e9;
  undefined4 local_e7;
  undefined4 local_e3;
  undefined4 local_df;
  undefined4 local_db;
  undefined4 local_d7;
  undefined4 local_d3;
  undefined2 local_cf;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  if ((*param_2 & 1) == 0) {
    local_168[7] = 0;
    local_168[6] = 0;
    local_168[5] = 0;
    local_168[4] = 0;
    local_168[3] = 0;
    local_168[2] = 0;
    local_168[1] = 0;
    local_168[0] = 0;
  }
  else {
    local_168[0] = param_2[2];
    local_168[1] = param_2[3];
    local_168[2] = param_2[4];
    local_168[3] = param_2[5];
    local_168[4] = param_2[6];
    local_168[5] = param_2[7];
    local_168[6] = param_2[8];
    local_168[7] = param_2[9];
  }
  if ((*(ushort *)((int)param_3 + 0x131) & 0x333) == 0) {
LAB_0138d8b4:
    uVar19 = local_168[0];
    puVar7 = (uint *)((uint)local_168 | 4);
    local_288 = *puVar7;
    uStack_284 = puVar7[1];
    uStack_280 = puVar7[2];
    local_27c = puVar7[3];
    uStack_278 = puVar7[4];
    uStack_274 = puVar7[5];
    uStack_270 = puVar7[6];
    puVar7 = (uint *)((uint)(local_2f0 + 4) | 4);
    local_2f0[4] = local_168[0];
    *puVar7 = local_288;
    puVar7[1] = uStack_284;
    puVar7[2] = uStack_280;
    puVar7[3] = local_27c;
    puVar7[4] = uStack_278;
    puVar7[5] = uStack_274;
    puVar7[6] = uStack_270;
    if ((*(byte *)((int)param_2 + 0x52) == 2) || ((*(byte *)((int)param_2 + 0x52) & 1) != 0)) {
      puVar7 = local_2f0 + 4;
      local_2c0[0] = param_3[0x42];
      local_2c0[1] = param_3[0x43];
      local_2c0[2] = param_3[0x44];
      local_2c0[3] = param_3[0x45];
      local_2c0[4] = param_3[0x46];
      local_2c0[5] = param_3[0x47];
      local_2c0[6] = param_3[0x48];
      local_2a4 = param_3[0x49];
      iVar10 = thunk_FUN_016dd50a(puVar7,"",0x20);
      if (iVar10 != 0) {
        uVar11 = 0;
        do {
          uVar20 = uVar11;
          if (uVar11 < 0x101) {
            uVar20 = 0x100;
          }
          do {
            uVar21 = uVar11;
            if (uVar20 == uVar21) goto LAB_0138dd6c;
            uVar14 = uVar21 >> 3 & 0xfffffff0;
            local_340[1] = *(undefined4 *)((int)local_2f0 + uVar14 + 0x14);
            local_340[0] = *(uint *)((int)puVar7 + uVar14);
            uVar11 = uVar21 + 1;
            local_324 = 0;
            local_328 = 0;
            local_32c = 0;
            local_330 = 0;
            local_340[3] = *(undefined4 *)((int)local_2f0 + uVar14 + 0x1c);
            local_340[2] = *(undefined4 *)((int)local_2f0 + uVar14 + 0x18);
          } while ((*(uint *)((int)local_340 + ((uVar21 & 0x60) >> 3)) >> (uVar21 & 0x1f) & 1) == 0)
          ;
          uVar20 = uVar21;
          if (uVar21 < 0xff) {
            uVar14 = uVar11 >> 3 & 0xfffffff0;
            local_360[3] = *(undefined4 *)((int)local_2f0 + uVar14 + 0x1c);
            local_360[0] = *(uint *)((int)puVar7 + uVar14);
            local_360[1] = *(undefined4 *)((int)local_2f0 + uVar14 + 0x14);
            local_360[2] = *(undefined4 *)((int)local_2f0 + uVar14 + 0x18);
            local_344 = 0;
            local_348 = 0;
            local_34c = 0;
            local_350 = 0;
            if ((*(uint *)((int)local_360 + ((uVar11 & 0x60) >> 3)) >> (uVar11 & 0x1f) & 1) != 0) {
              uVar14 = uVar21 + 2;
              uVar20 = uVar11;
              if (uVar21 + 2 == 0x100) {
                uVar11 = 0x100;
                uVar20 = 0xff;
              }
              else {
                do {
                  uVar11 = uVar14;
                  uVar14 = uVar11 >> 3 & 0xfffffff0;
                  local_3b0[0xf] = *(undefined4 *)((int)local_2f0 + uVar14 + 0x1c);
                  local_3b0[0xc] = *(undefined4 *)((int)puVar7 + uVar14);
                  local_3b0[0xd] = *(undefined4 *)((int)local_2f0 + uVar14 + 0x14);
                  local_3b0[0xe] = *(undefined4 *)((int)local_2f0 + uVar14 + 0x18);
                  local_364 = 0;
                  local_368 = 0;
                  local_36c = 0;
                  local_370 = 0;
                  if ((*(uint *)((int)local_3b0 + ((uVar11 & 0x60) >> 3) + 0x30) >> (uVar11 & 0x1f)
                      & 1) == 0) goto joined_r0x0138dd64;
                  uVar14 = uVar11 + 1;
                  uVar20 = uVar11;
                } while (uVar11 + 1 != 0x100);
                uVar11 = 0x100;
                uVar20 = 0xff;
                if (uVar21 == 0) goto LAB_0138dc9c;
              }
              goto LAB_0138dbdc;
            }
joined_r0x0138dd64:
            if (uVar21 != 0) goto LAB_0138dbdc;
          }
          else {
LAB_0138dbdc:
            uVar21 = uVar21 - 1;
            local_3b0[0xb] = 0;
            uVar14 = uVar21 & 0x80;
            local_3b0[10] = 0;
            local_3b0[9] = 0;
            uVar15 = uVar21 & 0x1f;
            local_3b0[8] = 1;
            local_3b0[7] = 0;
            local_3b0[6] = 0;
            local_3b0[5] = 0;
            local_3b0[4] = 0;
            iVar10 = -((uVar21 & 0x60) >> 3);
            uVar16 = *(uint *)((int)local_3b0 + iVar10 + 0x20);
            uVar17 = *(uint *)((int)local_3b0 + iVar10 + 0x24);
            uVar18 = *(uint *)((int)local_3b0 + iVar10 + 0x28);
            iVar10 = *(int *)((int)local_3b0 + iVar10 + 0x2c);
            *(uint *)((int)local_2c0 + (uVar14 >> 3)) =
                 *(uint *)((int)local_2c0 + (uVar14 >> 3)) | uVar16 << uVar15;
            uVar14 = uVar14 >> 3;
            uVar21 = uVar15 ^ 0x1f;
            *(uint *)((int)local_2c0 + uVar14 + 8) =
                 *(uint *)((int)local_2c0 + uVar14 + 8) | uVar18 << uVar15 | (uVar17 >> 1) >> uVar21
            ;
            *(uint *)((int)local_2c0 + uVar14 + 4) =
                 *(uint *)((int)local_2c0 + uVar14 + 4) | uVar17 << uVar15 | (uVar16 >> 1) >> uVar21
            ;
            *(uint *)((int)local_2c0 + uVar14 + 0xc) =
                 *(uint *)((int)local_2c0 + uVar14 + 0xc) |
                 iVar10 << uVar15 | (uVar18 >> 1) >> uVar21;
          }
LAB_0138dc9c:
          local_3b0[3] = 0;
          local_3b0[2] = 0;
          uVar21 = uVar20 & 0x80;
          local_3b0[1] = 0;
          uVar15 = uVar20 & 0x1f;
          local_3b0[0] = 1;
          uVar17 = uVar15 ^ 0x1f;
          local_3b4 = 0;
          local_3b8 = 0;
          local_3bc = 0;
          local_3c0 = 0;
          iVar10 = -((uVar20 & 0x60) >> 3);
          uVar20 = *(uint *)((int)local_3b0 + iVar10);
          uVar14 = *(uint *)((int)local_3b0 + iVar10 + 4);
          uVar16 = *(uint *)((int)local_3b0 + iVar10 + 8);
          iVar10 = *(int *)((int)local_3b0 + iVar10 + 0xc);
          *(uint *)((int)local_2c0 + (uVar21 >> 3)) =
               *(uint *)((int)local_2c0 + (uVar21 >> 3)) | uVar20 << uVar15;
          uVar21 = uVar21 >> 3;
          *(uint *)((int)local_2c0 + uVar21 + 4) =
               uVar14 << uVar15 | (uVar20 >> 1) >> uVar17 | *(uint *)((int)local_2c0 + uVar21 + 4);
          *(uint *)((int)local_2c0 + uVar21 + 8) =
               uVar16 << uVar15 | (uVar14 >> 1) >> uVar17 | *(uint *)((int)local_2c0 + uVar21 + 8);
          *(uint *)((int)local_2c0 + uVar21 + 0xc) =
               iVar10 << uVar15 | (uVar16 >> 1) >> uVar17 | *(uint *)((int)local_2c0 + uVar21 + 0xc)
          ;
        } while( true );
      }
LAB_0138dd6c:
      FUN_016dd606(local_268,0,0x100);
      uVar11 = 0;
      iVar10 = 0;
      do {
        uVar20 = uVar11 >> 3 & 0x10;
        local_3e0[2] = *(undefined4 *)((int)local_2c0 + uVar20 + 8);
        local_3e0[3] = *(undefined4 *)((int)local_2c0 + uVar20 + 0xc);
        uStack_3d0 = 0;
        local_3c4 = 0;
        local_3c8 = 0;
        local_3cc = 0;
        local_3e0[1] = *(undefined4 *)((int)local_2c0 + uVar20 + 4);
        local_3e0[0] = *(uint *)((int)local_2c0 + uVar20);
        if ((*(uint *)((int)local_3e0 + ((uVar11 & 0x60) >> 3)) >> (uVar11 & 0x1f) & 1) != 0) {
          if (iVar10 == 0xff) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_01892ed0);
          }
          iVar10 = iVar10 + 1;
        }
        *(char *)(((uint)local_268 | 1) + uVar11) = (char)iVar10;
        uVar11 = uVar11 + 1;
      } while (uVar11 != 0xff);
      bVar2 = *(byte *)((int)param_2 + 0x51);
    }
    else {
      iVar10 = 0;
      local_2c0[0] = local_288;
      local_2c0[1] = uStack_284;
      local_2c0[2] = uStack_280;
      local_2c0[3] = local_27c;
      local_2c0[4] = uStack_278;
      local_2c0[5] = uStack_274;
      local_2c0[6] = uStack_270;
      FUN_016dd606(local_268,0,0x100);
      do {
        local_268[iVar10] = (byte)iVar10;
        iVar10 = iVar10 + 1;
      } while (iVar10 != 0x100);
      bVar2 = *(byte *)((int)param_2 + 0x51);
    }
    iVar10 = 0x18;
    if ((bVar2 & 1) != 0) {
      iVar10 = param_3[0x55] * 0x18 + 0x18;
    }
    uVar11 = (uint)local_268[0xff];
    iVar22 = param_3[0x52];
    uVar26 = FUN_013c70f4();
    iVar12 = (int)((ulonglong)uVar26 >> 0x20);
    piVar8 = (int *)uVar26;
    piVar24 = (int *)local_110;
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar8;
      bVar25 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar25);
    *piVar8 = iVar13 + -1;
    if (iVar13 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0143daec(piVar8,iVar12);
    }
    uVar20 = param_2[10];
    pcVar23 = (char *)(iVar22 * 0x1b + (0x14 << (0x20U - LZCOUNT(uVar11 + 1) & 0xff)) + iVar10 +
                       iVar12 * 3 + param_3[0x55] * 0xc + 0x7f);
    pcVar9 = "\x7fELF\x01\x01\x01";
    if (uVar20 == 1) {
      pcVar9 = (char *)param_2[0xb];
    }
    if (pcVar9 < pcVar23) {
      uVar11 = 0x2a;
      if ((*(byte *)((int)param_2 + 0x55) & 1) == 0) goto LAB_0138def8;
    }
    else {
      pcVar23 = pcVar9;
    }
    uVar11 = (uint)*(byte *)(param_3 + 0x56);
    FUN_016dd606(auStack_148,0,0x100);
    local_e9 = 1;
    local_13b = 4;
    local_13e = 3;
    uVar6 = 1;
    local_118 = 0x1010101;
    local_114 = 0x1010101;
    local_107 = 0x1010101;
    local_103 = 0x1010101;
    local_ff = 0x1010101;
    local_fb = 0x1010101;
    local_f7 = 0x1010101;
    local_f3 = 0x1010101;
    local_e7 = 0x1010101;
    local_e3 = 0x1010101;
    local_df = 0x1010101;
    local_db = 0x1010101;
    local_d7 = 0x1010101;
    local_d3 = 0x1010101;
    if (uVar11 != 10 && uVar11 != 0xd) {
      uVar6 = 5;
    }
    local_110[0] = 0x101;
    local_ef = 0x101;
    local_cf = 0x101;
    if (uVar11 != 10 && uVar11 != 0xd) {
      auStack_148[uVar11] = uVar6;
    }
    cVar3 = (char)param_2[0x13];
    uVar11 = param_2[0x14];
    if (cVar3 != '\x03' && cVar3 != '\x02') {
      piVar24 = (int *)param_2[0x10];
      do {
        iVar10 = *piVar24;
        bVar25 = (bool)hasExclusiveAccess(piVar24);
      } while (!bVar25);
      *piVar24 = iVar10 + 1;
      if (iVar10 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x138e11c);
        (*pcVar1)();
      }
      local_428 = param_2[0x11];
      local_42c = param_2[0x12];
    }
    uVar6 = *(undefined1 *)((int)param_2 + 0x53);
    bVar25 = (*param_2 & 1) == 0;
    uVar4 = *(undefined1 *)((int)param_2 + 0x52);
    uVar5 = *(undefined1 *)((int)param_2 + 0x51);
    if (!bVar25) {
      local_48 = param_2[2];
      uStack_44 = param_2[3];
      uStack_40 = param_2[4];
      uStack_3c = param_2[5];
      local_38 = param_2[6];
      uStack_34 = param_2[7];
      uStack_30 = param_2[8];
      uStack_2c = param_2[9];
    }
    uVar14 = param_2[0xb];
    uVar15 = param_2[0xc];
    uVar16 = param_2[0xd];
    uVar17 = param_2[0xe];
    uVar18 = param_2[0xf];
    uVar21 = param_2[0x15];
    FUN_016dd1aa(param_1 + 0x16,auStack_148,0x100);
    FUN_016dd1aa(param_1 + 0x56,local_268,0x100);
    param_1[0x97] = local_288;
    param_1[0x98] = uStack_284;
    param_1[0x99] = uStack_280;
    param_1[0x9a] = local_27c;
    param_1[0x9b] = uStack_278;
    param_1[0x9c] = uStack_274;
    param_1[0x9d] = uStack_270;
    *param_1 = (uint)!bVar25;
    param_1[1] = 0;
    param_1[2] = local_48;
    param_1[3] = uStack_44;
    param_1[4] = uStack_40;
    param_1[5] = uStack_3c;
    param_1[6] = local_38;
    param_1[7] = uStack_34;
    param_1[8] = uStack_30;
    param_1[9] = uStack_2c;
    param_1[0x9f] = 0x20 - LZCOUNT(local_268[0xff] + 1);
    param_1[0xa0] = (uint)pcVar23;
    param_1[0x96] = uVar19;
    *(undefined1 *)((int)param_1 + 0x53) = uVar6;
    *(undefined1 *)((int)param_1 + 0x52) = uVar4;
    *(undefined1 *)((int)param_1 + 0x51) = uVar5;
    *(char *)(param_1 + 0x14) = (char)uVar11;
    *(char *)(param_1 + 0x13) = cVar3;
    param_1[0x12] = local_42c;
    param_1[10] = uVar20;
    param_1[0xb] = uVar14;
    param_1[0xc] = uVar15;
    param_1[0xd] = uVar16;
    param_1[0xe] = uVar17;
    param_1[0xf] = uVar18;
    param_1[0x9e] = (uint)param_3;
    *(short *)(param_1 + 0x15) = (short)uVar21;
    param_1[0x10] = (uint)piVar24;
    param_1[0x11] = local_428;
  }
  else {
    if ((*(byte *)((int)param_2 + 0x53) & 1) != 0) {
      uVar19 = 0x80;
      do {
        local_2f0[3] = 0;
        local_2f0[0] = 1;
        local_2f0[2] = 0;
        uVar21 = uVar19 >> 3 & 0xfffffff0;
        local_2f0[1] = 0;
        local_2f4 = 0;
        uVar11 = uVar19 & 0x1f;
        local_2f8 = 0;
        uVar16 = uVar11 ^ 0x1f;
        local_2fc = 0;
        local_300 = 0;
        iVar10 = -((uVar19 & 0x60) >> 3);
        uVar20 = *(uint *)((int)local_2f0 + iVar10);
        *(uint *)((int)local_168 + uVar21) = *(uint *)((int)local_168 + uVar21) | uVar20 << uVar11;
        uVar14 = *(uint *)((int)local_2f0 + iVar10 + 4);
        uVar15 = *(uint *)((int)local_2f0 + iVar10 + 8);
        bVar25 = uVar19 != 0xff;
        *(uint *)((int)local_168 + uVar21 + 0xc) =
             *(int *)((int)local_2f0 + iVar10 + 0xc) << uVar11 | (uVar15 >> 1) >> uVar16 |
             *(uint *)((int)local_168 + uVar21 + 0xc);
        uVar19 = uVar19 + 1;
        *(uint *)((int)local_168 + uVar21 + 4) =
             uVar14 << uVar11 | (uVar20 >> 1) >> uVar16 | *(uint *)((int)local_168 + uVar21 + 4);
        *(uint *)((int)local_168 + uVar21 + 8) =
             uVar15 << uVar11 | (uVar14 >> 1) >> uVar16 | *(uint *)((int)local_168 + uVar21 + 8);
      } while (bVar25);
      goto LAB_0138d8b4;
    }
    uVar19 = 0x80;
    do {
      if (uVar19 == 0xff) {
        if ((int)local_168[7] < 0) goto LAB_0138d8b4;
        break;
      }
      uVar21 = uVar19 >> 3 & 0xfffffff0;
      local_320[0] = *(uint *)((int)local_168 + uVar21);
      uVar11 = uVar19 & 0x60;
      local_320[3] = *(undefined4 *)((int)local_168 + uVar21 + 0xc);
      local_304 = 0;
      uVar20 = uVar19 & 0x1f;
      local_308 = 0;
      local_30c = 0;
      local_310 = 0;
      local_320[2] = *(undefined4 *)((int)local_168 + uVar21 + 8);
      local_320[1] = *(undefined4 *)((int)local_168 + uVar21 + 4);
      uVar19 = uVar19 + 1;
    } while ((*(uint *)((int)local_320 + (uVar11 >> 3)) >> uVar20 & 1) != 0);
    pcVar9 = (char *)0xb1;
    uVar11 = 0x2c;
    pcVar23 = 
    "cannot build lazy DFAs for regexes with Unicode word boundaries; switch to ASCII word boundaries, or heuristically enable Unicode word boundaries or use a different regex engine"
    ;
LAB_0138def8:
    *param_1 = 2;
    param_1[1] = 0;
    param_1[2] = uVar11;
    param_1[3] = (uint)pcVar23;
    param_1[4] = (uint)pcVar9;
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *param_3;
      bVar25 = (bool)hasExclusiveAccess(param_3);
    } while (!bVar25);
    *param_3 = iVar10 + -1;
    if (iVar10 == 1) {
      DataMemoryBarrier(0xb);
      FUN_013c182c(param_3);
      return;
    }
  }
  return;
}

