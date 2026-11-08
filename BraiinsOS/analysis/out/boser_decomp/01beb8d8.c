// FUN_01beb8d8 @ 01beb8d8 size=2906 calls_out=5 calls_in=1
// strings: -0x+0x 0x | -0x+0x 0x | -0x+0x 0x

/* WARNING: Removing unreachable block (ram,0x01beb93a) */
/* WARNING: Removing unreachable block (ram,0x01beb9c4) */
/* WARNING: Removing unreachable block (ram,0x01beb93e) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_01beb8d8(uint *param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  int extraout_r1;
  uint extraout_r2;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  uint *puVar10;
  byte *pbVar11;
  byte bVar12;
  byte *pbVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  bool bVar25;
  uint in_fpscr;
  undefined4 uVar26;
  undefined8 in_d0;
  undefined4 extraout_s1;
  double dVar27;
  double dVar28;
  undefined8 uVar29;
  uint local_27c;
  int local_268;
  int local_264;
  int local_258;
  char *local_254;
  uint local_250;
  byte *local_24c;
  uint local_248 [3];
  byte local_239 [9];
  byte local_230 [16];
  uint auStack_220 [72];
  uint local_100 [55];
  
  uVar5 = (uint)((ulonglong)in_d0 >> 0x20);
  local_248[0] = 0;
  local_264 = -((int)uVar5 >> 0x1f);
  if (local_264 == 0) {
    if ((int)(param_4 << 0x14) < 0) {
      local_254 = "+0X 0X-0x+0x 0x";
      local_264 = 1;
    }
    else if ((int)(param_4 << 0x1f) < 0) {
      local_254 = " 0X-0x+0x 0x";
      local_264 = 1;
    }
    else {
      local_254 = "0X+0X 0X-0x+0x 0x";
    }
  }
  else {
    local_254 = "-0X+0X 0X-0x+0x 0x";
  }
  if ((uVar5 & 0x7fffffff) < 0x7ff00000) {
    uVar26 = thunk_FUN_01be5e30((int)in_d0,local_248);
    dVar27 = (double)CONCAT44(extraout_s1,uVar26) + (double)CONCAT44(extraout_s1,uVar26);
    if (dVar27 != 0.0) {
      local_248[0] = local_248[0] - 1;
    }
    uVar5 = param_5 | 0x20;
    if (uVar5 != 0x61) {
      if ((int)param_3 < 0) {
        local_268 = 4;
        local_258 = 0x10;
        local_250 = 1;
        local_27c = 6;
      }
      else {
        local_250 = (uint)(param_3 != 0);
        local_268 = (param_3 + 0x19) / 9 + 1;
        local_258 = local_268 * 4;
        local_27c = param_3;
      }
      if (dVar27 != 0.0) {
        dVar27 = dVar27 * 268435456.0;
        local_248[0] = local_248[0] - 0x1c;
      }
      uVar21 = local_248[0];
      puVar6 = local_100;
      if ((int)local_248[0] < 0) {
        puVar6 = auStack_220;
      }
      puVar14 = puVar6;
      do {
        uVar20 = (uint)(0.0 < dVar27) * (int)(longlong)dVar27;
        dVar28 = (double)VectorUnsignedToFloat(uVar20,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
        *puVar14 = uVar20;
        puVar14 = puVar14 + 1;
        dVar27 = (dVar27 - dVar28) * 1000000000.0;
      } while (dVar27 != 0.0);
      bVar24 = false;
      puVar18 = puVar6;
      for (uVar20 = local_248[0]; 0 < (int)uVar20; uVar20 = uVar20 - uVar16) {
        uVar1 = 0;
        puVar4 = puVar14;
        uVar16 = uVar20;
        if (0x1c < (int)uVar20) {
          uVar16 = 0x1d;
        }
        while( true ) {
          puVar4 = puVar4 + -1;
          if (puVar4 < puVar18) break;
          uVar22 = *puVar4;
          uVar23 = uVar22 << (uVar16 & 0xff);
          uVar1 = FUN_01bf0ff0(uVar23 + uVar1,
                               (uVar22 << (uVar16 - 0x20 & 0xff) | uVar22 >> (0x20 - uVar16 & 0xff))
                               + (uint)CARRY4(uVar23,uVar1),&DAT_3b9aca00,0);
          *puVar4 = extraout_r2;
        }
        if (uVar1 != 0) {
          puVar18[-1] = uVar1;
          puVar18 = puVar18 + -1;
        }
        puVar4 = puVar14;
        do {
          puVar14 = puVar4;
          if (puVar14 <= puVar18) break;
          puVar4 = puVar14 + -1;
        } while (puVar14[-1] == 0);
        bVar24 = true;
      }
      if (bVar24) {
        uVar21 = uVar20;
        local_248[0] = uVar20;
      }
      bVar24 = false;
      while ((int)uVar21 < 0) {
        if ((int)uVar21 < -9) {
          uVar21 = uVar21 + 9;
          iVar15 = 0x1dcd65;
          uVar20 = 9;
          uVar16 = 0x1ff;
        }
        else {
          uVar20 = -uVar21;
          uVar21 = 0;
          uVar16 = (1 << (uVar20 & 0xff)) - 1;
          iVar15 = 1000000000 >> (uVar20 & 0xff);
        }
        uVar1 = 0;
        for (puVar4 = puVar18; puVar4 < puVar14; puVar4 = puVar4 + 1) {
          uVar22 = *puVar4;
          *puVar4 = (uVar22 >> (uVar20 & 0xff)) + uVar1;
          uVar1 = iVar15 * (uVar22 & uVar16);
        }
        if (*puVar18 == 0) {
          puVar18 = puVar18 + 1;
        }
        if (uVar1 != 0) {
          *puVar14 = uVar1;
          puVar14 = puVar14 + 1;
        }
        puVar4 = puVar6;
        if (uVar5 != 0x66) {
          puVar4 = puVar18;
        }
        if (local_268 < (int)puVar14 - (int)puVar4 >> 2) {
          puVar14 = (uint *)((int)puVar4 + local_258);
        }
        bVar24 = true;
      }
      if (bVar24) {
        local_248[0] = uVar21;
      }
      if (puVar18 < puVar14) {
        uVar20 = 10;
        uVar21 = ((int)puVar6 - (int)puVar18 >> 2) * 9;
        while (bVar24 = uVar20 <= *puVar18, uVar20 = uVar20 * 10, bVar24) {
          uVar21 = uVar21 + 1;
        }
        uVar20 = local_27c - uVar21 * (uVar5 != 0x66);
      }
      else {
        uVar21 = 0;
        uVar20 = local_27c;
      }
      if (uVar5 != 0x67) {
        local_250 = 0;
      }
      if ((((int)puVar14 - (int)puVar6 >> 2) + -1) * 9 <= (int)(uVar20 - local_250))
      goto LAB_01bebffa;
      iVar15 = (uVar20 - local_250) + 0x2400;
      puVar17 = (undefined1 *)0xa;
      iVar7 = iVar15 % 9;
      puVar4 = puVar6 + iVar15 / 9 + 0x3ffffc01;
      while (iVar7 = iVar7 + 1, iVar7 != 9) {
        puVar17 = (undefined1 *)((int)puVar17 * 10);
      }
      uVar16 = *puVar4;
      uVar29 = FUN_01bf0fd4(uVar16,puVar17);
      uVar20 = (uint)((ulonglong)uVar29 >> 0x20);
      if (uVar20 == 0) {
        puVar10 = puVar14;
        if (puVar14 != puVar4 + 1) {
          if ((int)uVar29 << 0x1f < 0) {
            dVar27 = 9007199254740994.0;
            goto LAB_01bebf78;
          }
          if (puVar17 == &DAT_3b9aca00 && puVar18 < puVar4) goto LAB_01bebf42;
          dVar27 = 9007199254740992.0;
          dVar28 = 0.5;
          goto LAB_01bebf7c;
        }
      }
      else {
        dVar27 = 9007199254740994.0;
        if ((-1 < (int)uVar29 << 0x1f) &&
           (dVar27 = 9007199254740992.0, puVar18 < puVar4 && puVar17 == &DAT_3b9aca00)) {
LAB_01bebf42:
          dVar27 = 9007199254740992.0;
          if ((puVar4[-1] & 1) != 0) {
            dVar27 = 9007199254740994.0;
          }
        }
        if (uVar20 < (uint)((int)puVar17 >> 1)) {
LAB_01bebf78:
          dVar28 = 0.5;
        }
        else {
          dVar28 = 1.5;
          if (((int)puVar17 >> 1 == uVar20) && (puVar14 == puVar4 + 1)) {
            dVar28 = 1.0;
          }
        }
LAB_01bebf7c:
        if ((local_264 != 0) && (*local_254 == '-')) {
          dVar27 = -dVar27;
          dVar28 = -dVar28;
        }
        uVar16 = uVar16 - uVar20;
        if (dVar27 + dVar28 == dVar27) {
          *puVar4 = uVar16;
          puVar10 = puVar4 + 1;
        }
        else {
          puVar17 = puVar17 + uVar16;
          *puVar4 = (uint)puVar17;
          while (&DAT_3b9ac9ff < puVar17) {
            puVar10 = puVar4 + -1;
            *puVar4 = 0;
            if (puVar10 < puVar18) {
              puVar18[-1] = 0;
              puVar18 = puVar18 + -1;
            }
            puVar17 = (undefined1 *)(*puVar10 + 1);
            *puVar10 = (uint)puVar17;
            puVar4 = puVar10;
          }
          uVar20 = 10;
          uVar21 = ((int)puVar6 - (int)puVar18 >> 2) * 9;
          while (bVar24 = uVar20 <= *puVar18, uVar20 = uVar20 * 10, bVar24) {
            uVar21 = uVar21 + 1;
          }
          puVar10 = puVar4 + 1;
        }
      }
      if (puVar10 <= puVar14) {
        puVar14 = puVar10;
      }
LAB_01bebffa:
      do {
        puVar4 = puVar14;
        if (puVar4 <= puVar18) break;
        puVar14 = puVar4 + -1;
      } while (puVar4[-1] == 0);
      if (uVar5 == 0x67) {
        if (local_27c == 0) {
          local_27c = 1;
        }
        bVar25 = SCARRY4(uVar21,4);
        iVar15 = uVar21 + 4;
        bVar24 = uVar21 == 0xfffffffc;
        if (-5 < (int)uVar21) {
          bVar25 = SBORROW4(local_27c,uVar21);
          iVar15 = local_27c - uVar21;
          bVar24 = local_27c == uVar21;
        }
        if (bVar24 || iVar15 < 0 != bVar25) {
          param_5 = param_5 - 2;
          local_27c = local_27c - 1;
        }
        else {
          param_5 = param_5 - 1;
          local_27c = local_27c - (uVar21 + 1);
        }
        if ((param_4 & 8) == 0) {
          if ((puVar18 < puVar4) && (uVar5 = puVar4[-1], uVar5 != 0)) {
            iVar7 = 10;
            iVar15 = 0;
            while (FUN_01bf0fd4(uVar5,iVar7), extraout_r1 == 0) {
              iVar7 = iVar7 * 10;
              iVar15 = iVar15 + 1;
            }
          }
          else {
            iVar15 = 9;
          }
          iVar7 = (((int)puVar4 - (int)puVar6 >> 2) + -1) * 9;
          if ((param_5 | 0x20) != 0x66) {
            iVar7 = iVar7 + uVar21;
          }
          uVar5 = iVar7 - iVar15 & ~(iVar7 - iVar15 >> 0x1f);
          if ((int)uVar5 <= (int)local_27c) {
            local_27c = uVar5;
          }
        }
      }
      if (local_27c == 0) {
        uVar5 = (param_4 & 0xf) >> 3;
        iVar15 = 1;
      }
      else {
        if (0x7ffffffd < (int)local_27c) {
          return -1;
        }
        uVar5 = 1;
        iVar15 = local_27c + 1;
      }
      iVar15 = uVar5 + iVar15;
      if ((param_5 | 0x20) == 0x66) {
        if (0x7fffffff - iVar15 < (int)uVar21) {
          return -1;
        }
        if (0 < (int)uVar21) {
          iVar15 = iVar15 + uVar21;
        }
      }
      else {
        pbVar3 = local_239 + 1;
        pbVar2 = pbVar3;
        for (uVar5 = (uVar21 ^ (int)uVar21 >> 0x1f) - ((int)uVar21 >> 0x1f); uVar5 != 0;
            uVar5 = uVar5 / 10) {
          pbVar2 = pbVar2 + -1;
          *pbVar2 = (char)uVar5 + (char)(uVar5 / 10) * -10 + 0x30;
        }
        while ((int)pbVar3 - (int)pbVar2 < 2) {
          pbVar2 = pbVar2 + -1;
          *pbVar2 = 0x30;
        }
        pbVar2[-2] = (byte)param_5;
        local_24c = pbVar2 + -2;
        if ((int)uVar21 < 0) {
          bVar12 = 0x2d;
        }
        else {
          bVar12 = 0x2b;
        }
        pbVar2[-1] = bVar12;
        if (0x7fffffff - iVar15 < (int)pbVar3 - (int)local_24c) {
          return -1;
        }
        iVar15 = iVar15 + ((int)pbVar3 - (int)local_24c);
      }
      iVar7 = 0x7ffffffe;
      if (local_264 == 0) {
        iVar7 = 0x7fffffff;
      }
      if (iVar7 < iVar15) {
        return -1;
      }
      iVar15 = iVar15 + local_264;
      bVar24 = iVar15 < param_2;
      if ((param_4 & 0x12000) == 0 && bVar24) {
        FUN_01beb87c(param_1,0x20,param_2,iVar15);
      }
      if (-1 < (int)(*param_1 << 0x1a)) {
        FUN_01beb506(local_254,local_264,param_1);
      }
      if (((param_4 ^ 0x10000) & 0x12000) == 0 && bVar24) {
        FUN_01beb87c(param_1,0x30,param_2,iVar15);
      }
      if ((param_5 | 0x20) == 0x66) {
        pbVar3 = local_230 + 1;
        if (puVar6 <= puVar18) {
          puVar18 = puVar6;
        }
        for (puVar14 = puVar18; puVar14 <= puVar6; puVar14 = puVar14 + 1) {
          pbVar2 = pbVar3;
          for (uVar5 = *puVar14; uVar5 != 0; uVar5 = uVar5 / 10) {
            pbVar2 = pbVar2 + -1;
            *pbVar2 = (char)uVar5 + (char)(uVar5 / 10) * -10 + 0x30;
          }
          if (puVar14 == puVar18) {
            pbVar11 = local_230;
            if (pbVar2 == pbVar3) {
              iVar7 = 1;
              local_230[0] = 0x30;
            }
            else {
              iVar7 = (int)pbVar3 - (int)pbVar2;
              pbVar11 = pbVar2;
            }
          }
          else {
            pbVar11 = local_239 + 1;
            pbVar13 = pbVar2;
            while (pbVar11 < pbVar13) {
              pbVar13 = pbVar13 + -1;
              *pbVar13 = 0x30;
            }
            iVar8 = (int)pbVar11 - (int)pbVar2;
            if (pbVar2 < pbVar11) {
              iVar8 = 0;
            }
            iVar7 = (int)pbVar3 - (int)(pbVar2 + iVar8);
            pbVar11 = pbVar2 + iVar8;
          }
          if (-1 < (int)(*param_1 << 0x1a)) {
            FUN_01beb506(pbVar11,iVar7,param_1);
          }
        }
        iVar7 = (int)puVar6 + (4 - (int)puVar18);
        if ((int)puVar6 + 1U < (int)puVar18 - 3U) {
          iVar7 = 0;
        }
        puVar18 = (uint *)((int)puVar18 + iVar7);
        if ((param_4 & 8) != 0 || local_27c != 0) {
          if (-1 < (int)(*param_1 << 0x1a)) {
            FUN_01beb506(&DAT_005be0ec,1,param_1);
          }
          for (; 0 < (int)local_27c && puVar18 < puVar4; local_27c = local_27c - 9) {
            pbVar3 = local_230 + 1;
            for (uVar5 = *puVar18; uVar5 != 0; uVar5 = uVar5 / 10) {
              pbVar3 = pbVar3 + -1;
              *pbVar3 = (char)uVar5 + (char)(uVar5 / 10) * -10 + 0x30;
            }
            pbVar2 = local_239 + 1;
            pbVar11 = pbVar3;
            while (pbVar2 < pbVar11) {
              pbVar11 = pbVar11 + -1;
              *pbVar11 = 0x30;
            }
            iVar7 = (int)pbVar2 - (int)pbVar3;
            if (pbVar3 < pbVar2) {
              iVar7 = 0;
            }
            if (-1 < (int)(*param_1 << 0x1a)) {
              uVar5 = local_27c;
              if (8 < (int)local_27c) {
                uVar5 = 9;
              }
              FUN_01beb506(pbVar3 + iVar7,uVar5,param_1);
            }
            puVar18 = puVar18 + 1;
          }
          if (9 < (int)(local_27c + 9)) {
            FUN_01beb87c(param_1,0x30,local_27c + 9,9);
          }
        }
      }
      else {
        if (puVar4 <= puVar18) {
          puVar4 = puVar18 + 1;
        }
        puVar6 = puVar18;
        while( true ) {
          uVar5 = ~local_27c >> 0x1f;
          if (puVar4 <= puVar6) {
            uVar5 = 0;
          }
          if (uVar5 == 0) break;
          pbVar2 = local_230 + 1;
          bVar12 = 10;
          pbVar3 = pbVar2;
          for (uVar5 = *puVar6; uVar5 != 0; uVar5 = uVar5 / 10) {
            pbVar3 = pbVar3 + -1;
            *pbVar3 = (char)uVar5 + (char)(uVar5 / 10) * -10 + 0x30;
          }
          pbVar11 = local_239 + 1;
          if (pbVar3 == pbVar2) {
            local_230[0] = 0x30;
            pbVar3 = local_230;
          }
          pbVar13 = (byte *)0x0;
          if (puVar6 != puVar18) {
            bVar12 = 0x30;
            pbVar13 = pbVar3;
          }
          uVar5 = *param_1 & 0x20;
          if (puVar6 != puVar18) {
            while (pbVar11 < pbVar13) {
              pbVar13 = pbVar13 + -1;
              *pbVar13 = bVar12;
            }
            iVar7 = (int)pbVar11 - (int)pbVar3;
            if (pbVar3 < pbVar11) {
              iVar7 = 0;
            }
            pbVar11 = pbVar3 + iVar7;
LAB_01bec394:
            uVar21 = (int)pbVar2 - (int)pbVar11;
            if (uVar5 == 0) {
              uVar5 = local_27c;
              if ((int)uVar21 <= (int)local_27c) {
                uVar5 = uVar21;
              }
              FUN_01beb506(pbVar11,uVar5,param_1);
            }
          }
          else {
            pbVar11 = pbVar3 + 1;
            if (uVar5 == 0) {
              FUN_01beb506(pbVar3,1,param_1);
              uVar5 = *param_1 & 0x20;
              if ((param_4 & 8) != 0 || local_27c != 0) {
                if (uVar5 != 0) goto LAB_01bec37c;
                FUN_01beb506(&DAT_005be0ec,1,param_1);
                uVar5 = *param_1 & 0x20;
              }
              goto LAB_01bec394;
            }
LAB_01bec37c:
            uVar21 = (int)pbVar2 - (int)pbVar11;
          }
          puVar6 = puVar6 + 1;
          local_27c = local_27c - uVar21;
        }
        if (0x12 < (int)(local_27c + 0x12)) {
          FUN_01beb87c(param_1,0x30,local_27c + 0x12,0x12);
        }
        if (-1 < (int)(*param_1 << 0x1a)) {
          FUN_01beb506(local_24c,local_239 + (1 - (int)local_24c),param_1);
        }
      }
      if (((param_4 ^ 0x2000) & 0x12000) == 0 && bVar24) {
        FUN_01beb87c(param_1,0x20,param_2,iVar15);
      }
      if (param_2 < iVar15) {
        return iVar15;
      }
      return param_2;
    }
    if ((param_5 & 0x20) != 0) {
      local_254 = local_254 + 9;
    }
    local_264 = local_264 + 2;
    if (param_3 < 0xc) {
      dVar28 = 16.0;
      iVar15 = 0xb - param_3;
      do {
        dVar28 = dVar28 * 16.0;
        bVar24 = iVar15 != 0;
        iVar15 = iVar15 + -1;
      } while (bVar24);
      if (*local_254 == '-') {
        dVar27 = -((-dVar27 - dVar28) + dVar28);
      }
      else {
        dVar27 = (dVar27 + dVar28) - dVar28;
      }
    }
    pbVar3 = local_239 + 1;
    pbVar2 = pbVar3;
    for (uVar5 = (local_248[0] ^ (int)local_248[0] >> 0x1f) - ((int)local_248[0] >> 0x1f);
        uVar5 != 0; uVar5 = uVar5 / 10) {
      pbVar2 = pbVar2 + -1;
      *pbVar2 = (char)uVar5 + (char)(uVar5 / 10) * -10 + 0x30;
    }
    if (pbVar2 == pbVar3) {
      pbVar2 = local_239;
      local_239[0] = 0x30;
    }
    uVar5 = param_4;
    if ((int)local_248[0] < 0) {
      uVar5 = 0x2d;
    }
    bVar12 = (byte)uVar5;
    if ((int)local_248[0] >= 0) {
      bVar12 = 0x2b;
    }
    pbVar2[-2] = (char)param_5 + 0xf;
    pbVar2[-1] = bVar12;
    pbVar11 = pbVar3;
    do {
      dVar28 = (double)VectorSignedToFloat((int)(longlong)dVar27,
                                           (byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
      pbVar13 = pbVar11 + 1;
      *pbVar11 = (&DAT_005675f8)[(int)(longlong)dVar27] | (byte)(param_5 & 0x20);
      dVar27 = (dVar27 - dVar28) * 16.0;
      if ((int)pbVar13 - (int)pbVar3 == 1) {
        if (((int)param_3 < 1 && dVar27 == 0.0) && ((param_4 & 8) == 0)) break;
        pbVar11[1] = 0x2e;
        pbVar13 = pbVar11 + 2;
      }
      pbVar11 = pbVar13;
    } while (dVar27 != 0.0);
    iVar7 = (int)pbVar3 - (int)(pbVar2 + -2);
    if ((0x7ffffffd - iVar7) - local_264 < (int)param_3) {
      return -1;
    }
    iVar8 = (int)pbVar13 - (int)pbVar3;
    if ((param_3 == 0) || ((int)param_3 < iVar8 + -1)) {
      iVar19 = 0;
      iVar15 = iVar8;
    }
    else {
      iVar19 = (param_3 + 2) - iVar8;
      iVar15 = param_3 + 2;
    }
    iVar15 = iVar7 + iVar15 + local_264;
    bVar24 = iVar15 < param_2;
    if ((param_4 & 0x12000) == 0 && bVar24) {
      FUN_01beb87c(param_1,0x20,param_2,iVar15);
    }
    if ((int)(*param_1 << 0x1a) < 0) {
      if (((param_4 ^ 0x10000) & 0x12000) == 0 && bVar24) goto LAB_01bebca8;
LAB_01bebc52:
      if (0 < iVar19) {
LAB_01bebccc:
        FUN_01beb87c(param_1,0x30,iVar19,0);
        goto LAB_01bebcd8;
      }
    }
    else {
      FUN_01beb506(local_254,local_264,param_1);
      if (((param_4 ^ 0x10000) & 0x12000) == 0 && bVar24) {
LAB_01bebca8:
        FUN_01beb87c(param_1,0x30,param_2,iVar15);
      }
      if ((int)(*param_1 << 0x1a) < 0) goto LAB_01bebc52;
      FUN_01beb506(pbVar3,iVar8,param_1);
      if (0 < iVar19) goto LAB_01bebccc;
LAB_01bebcd8:
      if (-1 < (int)(*param_1 << 0x1a)) {
        FUN_01beb506(pbVar2 + -2,iVar7,param_1);
      }
    }
    if (((param_4 ^ 0x2000) & 0x12000) != 0 || !bVar24) goto LAB_01beb978;
  }
  else {
    if ((param_5 & 0x20) == 0) {
      puVar9 = &UNK_005be39c;
    }
    else {
      puVar9 = &UNK_005bf46c;
    }
    iVar15 = local_264 + 3;
    if (-1 < (int)(param_4 << 0x12) && iVar15 < param_2) {
      FUN_01beb87c(param_1,0x20,param_2,iVar15);
    }
    if ((-1 < (int)(*param_1 << 0x1a)) &&
       (FUN_01beb506(local_254,local_264,param_1), -1 < (int)(*param_1 << 0x1a))) {
      FUN_01beb506(puVar9,3,param_1);
    }
    if (((param_4 ^ 0x2000) & 0x12000) != 0 || iVar15 >= param_2) goto LAB_01beb978;
  }
  FUN_01beb87c(param_1,0x20,param_2,iVar15);
LAB_01beb978:
  if (param_2 < iVar15) {
    return iVar15;
  }
  return param_2;
}

