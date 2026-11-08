// FUN_0144a160 @ 0144a160 size=8284 calls_out=31 calls_in=2
// strings: internal error: entered unreachable code | assertion failed: end <= len

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0144a160(int *param_1,int *param_2,int param_3,undefined4 param_4,byte *param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,uint param_9,int param_10,
                 int param_11,int param_12,uint *param_13,uint param_14)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  uint **ppuVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  undefined4 uVar18;
  uint **ppuVar19;
  byte **ppbVar20;
  uint *puVar21;
  char cVar22;
  byte **ppbVar23;
  int iVar24;
  int *piVar25;
  int *piVar26;
  int *piVar27;
  int *piVar28;
  int *piVar29;
  uint *puVar30;
  uint **ppuVar31;
  uint *puVar32;
  int *piVar33;
  uint uVar34;
  uint uVar35;
  uint *puVar36;
  uint uVar37;
  int iVar38;
  uint uVar39;
  byte *pbVar40;
  uint uVar41;
  uint uVar42;
  uint *puVar43;
  undefined1 uVar44;
  uint **ppuVar45;
  uint *puVar46;
  int iVar47;
  bool bVar48;
  bool bVar49;
  bool bVar50;
  bool bVar51;
  ulonglong uVar52;
  undefined8 uVar53;
  undefined4 uVar54;
  char *pcVar55;
  uint *local_4ac;
  uint local_4a8;
  int local_45c;
  uint *local_450;
  undefined4 local_438;
  undefined4 local_434;
  int local_42c;
  uint *local_428;
  uint *local_424;
  uint **local_420;
  uint *local_41c;
  byte *local_418 [4];
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_3fc;
  byte *local_3f8 [4];
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined4 local_3e0;
  undefined4 local_3dc;
  byte *local_3d8;
  undefined4 local_3d4;
  undefined4 local_3d0;
  undefined4 local_3cc;
  char local_3c5;
  int local_3c4 [7];
  uint *puStack_3a8;
  uint local_3a4;
  uint *local_3a0;
  uint local_360;
  byte *local_35c;
  byte *local_358;
  byte local_354;
  uint local_324;
  byte *local_314;
  int local_310;
  int local_30c;
  undefined4 uStack_308;
  byte *local_304;
  byte **local_300;
  uint *local_2f8;
  uint *local_2f4;
  uint **local_2f0;
  uint local_2ec;
  int local_2e8;
  int local_2e4;
  undefined4 local_2b0;
  undefined1 *local_2ac;
  undefined4 local_2a8;
  undefined1 local_2a4;
  uint *local_2a0;
  uint local_29c;
  int *local_298;
  int local_294;
  int local_290;
  int local_28c;
  int iStack_288;
  int iStack_284;
  int local_280;
  int local_27c;
  int local_278;
  undefined4 local_274;
  int *local_270;
  uint local_26c;
  byte local_268;
  undefined1 local_267;
  uint *local_11c;
  byte *local_118;
  byte *local_114;
  byte **local_110;
  byte *local_28;
  
  local_3cc = param_8;
  iVar24 = *param_2;
  local_3d0 = param_7;
  iVar47 = param_2[8];
  piVar33 = param_2 + 10;
  if (param_2[9] == 0) {
    piVar33 = (int *)param_2[10];
  }
  local_45c = param_3 - param_14;
  piVar25 = (int *)0x0;
  if (iVar47 != 2) {
    piVar25 = piVar33;
  }
  piVar26 = param_2 + 0x2d;
  if (param_2[0x2c] == 0) {
    piVar26 = (int *)param_2[0x2d];
  }
  local_3d4 = param_6;
  piVar27 = param_2 + 2;
  if (param_2[1] == 0) {
    piVar27 = (int *)param_2[2];
  }
  uVar3 = *(ushort *)(param_2 + 0x2b);
  piVar28 = param_2 + 0x25;
  if (param_2[0x24] == 0) {
    piVar28 = (int *)param_2[0x25];
  }
  bVar1 = *(byte *)((int)param_2 + 0xae);
  piVar29 = param_2 + 0x18;
  if (param_2[0x17] == 0) {
    piVar29 = (int *)param_2[0x18];
  }
  local_3c5 = '\0';
  puVar16 = (uint *)(param_12 + 4);
  puVar5 = (uint *)(param_12 + 100);
  puVar46 = (uint *)(param_11 + 0x3f8);
  puVar30 = (uint *)((uint)&puStack_3a8 | 4);
  local_428 = (uint *)(param_11 + 4);
  bVar49 = true;
  iVar6 = 0;
  local_3d8 = param_5;
LAB_0144a2dc:
  do {
    puVar21 = param_13;
    local_450 = puVar21;
    if (param_14 != 0) {
      uVar37 = 0;
      do {
        pbVar40 = (byte *)((int)puVar21 + uVar37);
        bVar48 = *pbVar40 != 0x2e;
        if (!bVar48) {
          param_14 = param_14 - (uVar37 + 1);
          local_450 = (uint *)((int)puVar21 + uVar37 + 1);
          goto LAB_0144a340;
        }
        uVar37 = uVar37 + 1;
      } while (param_14 != uVar37);
      uVar37 = param_14;
LAB_0144a340:
      if (!bVar49) {
        goto LAB_0144a36c;
      }
      if (3 < uVar37) {
        bVar2 = *(byte *)((int)puVar21 + 2);
        bVar49 = bVar2 != 0x2d;
        if (!bVar49) {
          bVar2 = *(byte *)((int)puVar21 + 3);
        }
        if (bVar49 || bVar2 != 0x2d) goto LAB_0144a3d4;
LAB_0144a434:
        local_45c = local_45c + iVar6;
        goto LAB_0144a44c;
      }
      if (uVar37 != 0) {
LAB_0144a3d4:
        puVar32 = puVar21;
        uVar34 = uVar37;
        if ((byte)*puVar21 - 0x61 < 0x1a) {
          do {
            do {
              uVar34 = uVar34 - 1;
              if (uVar34 == 0) {
                pbVar9 = (byte *)((int)puVar21 + (uVar37 - 1));
                if ((pbVar9 == (byte *)0x0) || (*pbVar9 != 0x2d)) goto LAB_0144a70c;
                goto LAB_0144a434;
              }
              puVar32 = (uint *)((int)puVar32 + 1);
              uVar7 = (uint)*(byte *)puVar32;
            } while (uVar7 - 0x61 < 0x1a);
            bVar49 = 0x2c < uVar7;
            bVar50 = uVar7 != 0x2d;
            if (bVar50) {
              uVar7 = uVar7 - 0x30;
              bVar49 = 8 < uVar7;
            }
          } while (!bVar49 || (!bVar50 || uVar7 == 9));
        }
        goto LAB_0144a434;
      }
      uVar37 = 0;
LAB_0144a70c:
      bVar48 = *pbVar40 == 0x2e;
      bVar49 = true;
      local_45c = local_45c + iVar6 + uVar37;
      goto LAB_0144a72c;
    }
    if (bVar49) {
      local_45c = local_45c + iVar6;
      break;
    }
    param_14 = 0;
    bVar48 = true;
    uVar37 = 0;
LAB_0144a36c:
    if (iVar6 != 0) {
      uVar34 = *puVar46;
      if (uVar34 < 0xfe) {
        uVar14 = 0xfd;
        uVar7 = uVar34;
        puVar32 = local_428;
        puVar36 = puVar46;
      }
      else {
        uVar7 = *(uint *)(param_11 + 4);
        puVar32 = *(uint **)(param_11 + 8);
        puVar36 = local_428;
        uVar14 = uVar34;
      }
      if (uVar7 == uVar14) {
        FUN_0144e898(param_11);
        uVar7 = *(uint *)(param_11 + 4);
        puVar32 = *(uint **)(param_11 + 8);
        puVar36 = local_428;
      }
      puVar32[uVar7] = 0x2e;
      *puVar36 = *puVar36 + 1;
    }
LAB_0144a44c:
    uVar34 = *puVar46;
    if (0xfd < uVar34) {
      uVar34 = *local_428;
    }
    if (uVar37 == 0) {
      uVar37 = *puVar5;
      if (uVar37 < 9) {
        uVar7 = 8;
        uVar34 = uVar37;
        puVar32 = puVar16;
        puVar36 = puVar5;
      }
      else {
        uVar34 = *(uint *)(param_12 + 4);
        puVar32 = *(uint **)(param_12 + 8);
        puVar36 = puVar16;
        uVar7 = uVar37;
      }
      if (uVar34 == uVar7) {
        FUN_0144ee64(param_12);
        uVar34 = *(uint *)(param_12 + 4);
        puVar32 = *(uint **)(param_12 + 8);
        puVar36 = puVar16;
      }
      puVar32 = puVar32 + uVar34 * 3;
      *puVar32 = 0;
      puVar32[1] = (uint)puVar21;
      puVar32[2] = 0;
      *puVar36 = *puVar36 + 1;
      goto LAB_0144a6bc;
    }
    uVar7 = 0;
    do {
      if ((char)*(byte *)((int)puVar21 + uVar7) < '\0') {
        if (uVar7 == 0) {
          local_434 = 1;
          local_438 = 1;
          local_424 = puVar21;
          local_420 = (uint **)uVar37;
          goto LAB_0144a860;
        }
        uVar7 = uVar7 - 1;
        local_424 = (uint *)((int)puVar21 + uVar7);
        local_420 = (uint **)(uVar37 - uVar7);
        if (local_420 == (uint **)0x0) goto LAB_0144a4a0;
        local_434 = 1;
        bVar49 = false;
        goto LAB_0144a508;
      }
      uVar7 = uVar7 + 1;
    } while (uVar37 != uVar7);
    local_424 = (uint *)&DAT_00000001;
    uVar7 = uVar37;
LAB_0144a4a0:
    if (uVar7 < 4) {
      bVar49 = true;
      local_434 = 0;
      local_420 = (uint **)0x0;
LAB_0144a508:
      if (uVar7 != 0) goto LAB_0144a754;
      local_438 = 1;
    }
    else {
      if ((*puVar21 & 0xffffdfdf) == 0x2d2d4e58) {
        pbVar40 = (byte *)((int)puVar21 + uVar7) + -1;
        if (((pbVar40 == (byte *)0x0) || (*pbVar40 != 0x2d)) && (uVar7 - 4 < 0x7d1)) {
          local_11c = (uint *)0x0;
          local_2f8 = (uint *)0x0;
          FUN_0144e224(local_3c4,&local_2f8,puVar21 + 1);
          if (local_3c4[0] != 0) {
            local_118 = (byte *)0x0;
            local_28 = (byte *)0x0;
            FUN_0144eaa0(&local_118,local_3c4);
            pbVar40 = local_28;
            pbVar9 = local_28;
            ppbVar20 = &local_114;
            if ((byte *)0x3b < local_28) {
              pbVar9 = local_114;
              ppbVar20 = local_110;
            }
            pcVar55 = &local_3c5;
            uVar18 = param_7;
            uVar54 = param_8;
            iVar6 = param_10;
            iVar38 = FUN_0144c324(param_2,param_11,uVar34,ppbVar20,pbVar9);
            if (iVar38 == 0) {
              uVar53 = FUN_0144ee2c(param_11,uVar34,&DAT_01cf920c);
              iVar6 = FUN_0144cd00(param_2,param_9,(int)uVar53,(int)((ulonglong)uVar53 >> 0x20),
                                   param_10,&local_3c5,1,1,uVar18,uVar54,iVar6,pcVar55);
              pbVar40 = local_28;
              if (iVar6 == 0) {
                if ((byte *)0x3b < local_28) {
                  FUN_01af7af8(local_28,local_110,4,4);
                }
                goto LAB_0144baf8;
              }
            }
            *(undefined2 *)(param_1 + 1) = 0x100;
            *param_1 = 0;
            if ((byte *)0x3b < pbVar40) {
              FUN_01af7af8(pbVar40,local_110,4,4);
            }
LAB_0144c144:
            if (local_11c < (uint *)0x3c) {
              return;
            }
            FUN_01af7af8(local_11c,local_2f0,4,8);
            return;
          }
          if (param_10 != 0) {
            *(undefined2 *)(param_1 + 1) = 0x100;
            *param_1 = 0;
            goto LAB_0144c144;
          }
          uVar34 = *puVar46;
          local_3c5 = '\x01';
          if (uVar34 < 0xfe) {
            uVar39 = 0xfd;
            uVar14 = uVar34;
            puVar32 = local_428;
            puVar36 = puVar46;
          }
          else {
            uVar14 = *(uint *)(param_11 + 4);
            puVar32 = *(uint **)(param_11 + 8);
            puVar36 = local_428;
            uVar39 = uVar34;
          }
          if (uVar14 == uVar39) {
            FUN_0144e898(param_11);
            uVar14 = *(uint *)(param_11 + 4);
            puVar32 = *(uint **)(param_11 + 8);
            puVar36 = local_428;
          }
          puVar32[uVar14] = 0xfffd;
          *puVar36 = *puVar36 + 1;
          local_110 = &local_3d8;
          local_118 = (byte *)((int)puVar21 + 1);
          local_114 = (byte *)((int)puVar21 + uVar7);
          FUN_0144e664(param_11,&local_118);
LAB_0144baf8:
          if ((uint *)0x3b < local_11c) {
            FUN_01af7af8(local_11c,local_2f0,4,8);
          }
          uVar34 = *puVar5;
          if (uVar34 < 9) {
            uVar14 = 8;
            uVar7 = uVar34;
            puVar32 = puVar16;
            puVar36 = puVar5;
          }
          else {
            uVar7 = *(uint *)(param_12 + 4);
            puVar32 = *(uint **)(param_12 + 8);
            puVar36 = puVar16;
            uVar14 = uVar34;
          }
          if (uVar7 == uVar14) {
            FUN_0144ee64(param_12);
            uVar7 = *(uint *)(param_12 + 4);
            puVar32 = *(uint **)(param_12 + 8);
            puVar36 = puVar16;
          }
          puVar32 = puVar32 + uVar7 * 3;
          *puVar32 = 1;
          puVar32[1] = (uint)puVar21;
          puVar32[2] = uVar37;
          *puVar36 = *puVar36 + 1;
          goto LAB_0144a6bc;
        }
        bVar49 = false;
        local_420 = (uint **)0x0;
        local_434 = 0;
        if (param_10 != 0) goto LAB_0144c078;
      }
      else {
        bVar49 = true;
        local_420 = (uint **)0x0;
        local_434 = 0;
      }
LAB_0144a754:
      puVar32 = puVar21;
      do {
        uVar14 = (uint)(byte)*puVar32;
        local_3f8[2] = (byte *)local_3d0;
        local_3f8[1] = (byte *)local_3d4;
        local_3dc = 0;
        local_3e0 = 0;
        local_3e4 = 0;
        local_3e8 = 0;
        local_3f8[3] = (byte *)local_3cc;
        local_3f8[0] = local_3d8;
        if (((uint)local_3f8[(uVar14 & 0x7f) >> 5] >> (uVar14 & 0x1f) & 1) != 0) {
          if (uVar14 - 0x41 < 0x1a) {
            uVar14 = uVar14 | 0x20;
          }
          else {
            if (param_10 != 0) goto LAB_0144c078;
            uVar14 = 0xfffd;
            local_3c5 = '\x01';
          }
        }
        uVar39 = *puVar46;
        if (uVar39 < 0xfe) {
          uVar41 = 0xfd;
          uVar15 = uVar39;
          puVar36 = local_428;
          puVar43 = puVar46;
        }
        else {
          uVar15 = *(uint *)(param_11 + 4);
          puVar36 = *(uint **)(param_11 + 8);
          puVar43 = local_428;
          uVar41 = uVar39;
        }
        if (uVar15 == uVar41) {
          FUN_0144e898(param_11);
          uVar15 = *(uint *)(param_11 + 4);
          puVar36 = *(uint **)(param_11 + 8);
          puVar43 = local_428;
        }
        puVar36[uVar15] = uVar14;
        uVar7 = uVar7 - 1;
        *puVar43 = *puVar43 + 1;
        puVar32 = (uint *)((int)puVar32 + 1);
      } while (uVar7 != 0);
      local_438 = 0;
    }
    if (!bVar49) {
LAB_0144a860:
      uVar37 = *puVar5;
      if (uVar37 < 9) {
        uVar14 = 8;
        uVar7 = uVar37;
        puVar21 = puVar16;
        puVar32 = puVar5;
      }
      else {
        uVar7 = *(uint *)(param_12 + 4);
        puVar21 = *(uint **)(param_12 + 8);
        puVar32 = puVar16;
        uVar14 = uVar37;
      }
      if (uVar7 == uVar14) {
        FUN_0144ee64(param_12);
        uVar7 = *(uint *)(param_12 + 4);
        puVar21 = *(uint **)(param_12 + 8);
        puVar32 = puVar16;
      }
      puVar21[uVar7 * 3] = 2;
      local_278 = 0;
      uVar37 = *puVar32;
      *puVar32 = uVar37 + 1;
      piVar8 = (int *)(uVar37 + 1);
      if (iVar47 != 2) {
        piVar8 = piVar33;
      }
      local_268 = 0;
      if (iVar47 != 2) {
        local_268 = *(byte *)((int)piVar8 + 0x32) & 1;
      }
      local_28c = piVar28[3];
      iStack_288 = piVar28[4];
      local_294 = *piVar28;
      local_290 = piVar28[1];
      if (iVar24 == 0) {
        local_27c = 1;
        local_280 = 0;
        iStack_284 = 1;
      }
      else {
        iStack_284 = *piVar27;
        local_280 = piVar27[1];
        local_27c = piVar27[3];
        local_278 = piVar27[4];
      }
      local_29c = (uint)local_420;
      local_2ac = &DAT_00110000;
      local_267 = 1;
      local_2a8 = 0;
      local_274 = 0;
      local_2b0 = 0;
      local_2f8 = (uint *)0x0;
      local_2a4 = 0;
      local_2a0 = local_424;
      local_298 = piVar29;
      local_270 = piVar25;
      local_26c = (uint)bVar1;
      FUN_01447670(&local_2f8,0xffff,0);
      FUN_01bed4e2(&local_118,&local_2f8,0x94);
      iVar6 = *piVar26;
      iVar38 = piVar26[1];
      FUN_01bed4e2(&puStack_3a8,&local_118,0x94);
      local_300 = &local_3d8;
      local_304 = (byte *)(uint)uVar3;
      local_310 = iVar6;
      local_30c = iVar38;
      uStack_308 = 0;
      local_314 = &DAT_00110000;
LAB_0144a9e0:
      pbVar40 = local_35c;
      bVar49 = false;
      pbVar10 = (byte *)0x0;
      pbVar9 = (byte *)0x0;
      if (local_314 != &DAT_00110000) goto LAB_0144aa98;
      uVar37 = local_360;
      puVar21 = puVar30;
      if (0x11 < local_360) {
        uVar37 = local_3a4;
        puVar21 = local_3a0;
      }
      if (uVar37 <= local_324) {
        bVar50 = local_35c == &DAT_00110000;
        local_35c = &DAT_00110000;
        if (bVar50) {
          pbVar9 = &DAT_00110000;
        }
        else {
          pbVar9 = pbVar40;
          pbVar10 = local_358;
          if (local_304 <= pbVar40 && &DAT_00000001 < local_358) {
            if (((local_354 & 1) != 0) || (uVar37 = (uint)local_358 >> 0x10, uVar37 == 0))
            goto LAB_0144aa98;
            if (((uint)local_358 & 0xffff) != 0) {
              if (((uint)local_358 & 0xffff) == 1) goto LAB_0144aa98;
              bVar51 = (byte *)0xffffff73 < pbVar40 + -0x1ffc;
              bVar50 = pbVar40 == (byte *)0x1f70;
              if (!bVar51 || bVar50) {
                bVar51 = (byte *)0xffffffcc < pbVar40 + -0xfb4f;
                bVar50 = pbVar40 + -0xfb4f == (byte *)0xffffffcd;
              }
              if ((bVar51 && !bVar50) || ((uVar37 & 0x7f) == 0x3c && 0xfffffcff < uVar37 - 0xc00))
              goto LAB_0144aa98;
            }
          }
          FUN_01447fc0(&local_118,&puStack_3a8);
          if (local_118 != &DAT_00110000) {
            local_354 = (byte)local_110;
            if (local_118 < local_304) {
              local_35c = local_118;
              local_358 = local_114;
            }
            else {
              if ((local_114 + -1 < (byte *)0x2) || (((uint)local_114 & 0xffffff00) == 0xd800)) {
                local_35c = local_118;
                local_358 = local_114;
                goto LAB_0144aa98;
              }
              local_35c = local_118;
              local_358 = local_114;
              if (local_114 + -0x1161 < &DAT_00000062) goto LAB_0144aa98;
            }
          }
LAB_0144aea0:
          pbVar9 = &DAT_00110000;
          if (pbVar40 != &DAT_00110000) goto LAB_0144af68;
        }
LAB_0144aeac:
        uVar52 = FUN_0144edf4(param_11,uVar34,&DAT_01cf918c);
        if ((0x3ffffffff < uVar52) && (iVar6 = thunk_FUN_01bed842("x",(int)uVar52,0x10), iVar6 == 0)
           ) {
          uVar53 = FUN_0144ee2c(param_11,uVar34 + 4,&DAT_01cf919c);
          iVar6 = (int)((ulonglong)uVar53 >> 0x20);
          cVar22 = local_3c5;
          if (iVar6 == 0) {
            bVar49 = false;
          }
          else {
            iVar6 = iVar6 << 2;
            bVar49 = false;
            puVar21 = (uint *)uVar53;
            do {
              if (0x7f < *puVar21) {
                if (param_10 != 0) goto LAB_0144bc74;
                cVar22 = '\x01';
                *puVar21 = 0xfffd;
                bVar49 = true;
              }
              iVar6 = iVar6 + -4;
              puVar21 = puVar21 + 1;
            } while (iVar6 != 0);
          }
          uVar7 = *puVar46;
          uVar37 = uVar7;
          puVar21 = local_428;
          if (0xfd < uVar7) {
            puVar21 = *(uint **)(param_11 + 8);
            uVar37 = *(uint *)(param_11 + 4);
          }
          bVar50 = uVar37 == 0;
          puVar32 = (uint *)0x0;
          if (!bVar50) {
            puVar32 = puVar21 + (uVar37 - 1);
            bVar50 = puVar32 == (uint *)0x0;
          }
          local_3c5 = cVar22;
          if (bVar50) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf91ec);
          }
          if (*puVar32 == 0x2d) {
            if (param_10 != 0) goto LAB_0144bc74;
            *puVar32 = 0xfffd;
            bVar49 = true;
            uVar7 = *puVar46;
            local_3c5 = '\x01';
          }
          uVar37 = uVar7;
          if (0xfd < uVar7) {
            uVar37 = *local_428;
          }
          if (0xfffff82e < (uVar37 - uVar34) - 0x7d5) {
            local_434 = 0;
            local_438 = 0;
            if (bVar49) goto LAB_0144aee8;
            local_11c = (uint *)0x0;
            local_2f8 = (uint *)0x0;
            uVar53 = FUN_0144edf4(param_11,uVar34 + 4,&DAT_01cf91ac);
            uVar37 = (uint)((ulonglong)uVar53 >> 0x20);
            ppuVar45 = (uint **)uVar53;
            ppuVar13 = &local_11c;
            puVar21 = local_11c;
            if ((uint *)0x3b < local_11c) {
              ppuVar13 = &local_2f4;
              puVar21 = local_2f4;
            }
            if (puVar21 != (uint *)0x0) {
              *ppuVar13 = (uint *)0x0;
            }
            iVar6 = uVar37 * -4;
            uVar7 = uVar37;
            do {
              uVar14 = uVar7;
              iVar6 = iVar6 + 4;
              if (iVar6 == 4) {
                uVar7 = 0;
                goto LAB_0144b3e8;
              }
              uVar7 = uVar14 - 1;
            } while (*(int *)((int)ppuVar45 - iVar6) != 0x2d);
            if (uVar7 == 0) {
              local_420 = ppuVar45 + uVar37;
              uVar7 = 0;
              ppuVar13 = ppuVar45;
LAB_0144b40c:
              uVar14 = 0;
              uVar39 = 0x48;
              local_424 = (uint *)0x80;
              uVar37 = uVar7;
              do {
                puVar21 = *ppuVar13;
                puVar32 = puVar21 + -0xc;
                uVar15 = (int)puVar21 - 0x61;
                bVar49 = puVar32 == (uint *)0xa;
                if ((uint *)0x9 < puVar32) {
                  bVar49 = uVar15 == 0x19;
                }
                if (((uint *)0x9 < puVar32 && 0x18 < uVar15) && !bVar49) goto LAB_0144b6e8;
                if (puVar32 < (uint *)0xa) {
                  uVar15 = (int)puVar21 - 0x16;
                }
                uVar35 = 1;
                uVar17 = 0x24;
                uVar41 = uVar14;
                while( true ) {
                  ppuVar13 = ppuVar13 + 1;
                  uVar42 = (uint)((ulonglong)uVar35 * (ulonglong)uVar15);
                  if (((int)((ulonglong)uVar35 * (ulonglong)uVar15 >> 0x20) != 0) ||
                     (bVar49 = CARRY4(uVar42,uVar41), uVar41 = uVar42 + uVar41, bVar49))
                  goto LAB_0144b6e8;
                  uVar42 = 0x1a;
                  if (uVar17 < uVar39 + 0x1a) {
                    uVar42 = uVar17 - uVar39;
                  }
                  if (uVar17 <= uVar39) {
                    uVar42 = 1;
                  }
                  if (uVar15 < uVar42) break;
                  lVar4 = (ulonglong)(0x24 - uVar42) * (ulonglong)uVar35;
                  uVar35 = (uint)lVar4;
                  if (((int)((ulonglong)lVar4 >> 0x20) != 0) || (ppuVar13 == local_420))
                  goto LAB_0144b6e8;
                  puVar32 = *ppuVar13;
                  uVar17 = uVar17 + 0x24;
                  uVar42 = (int)puVar32 - 0x61;
                  puVar21 = puVar32 + -0xc;
                  bVar49 = puVar21 == (uint *)0xa;
                  if (puVar21 < (uint *)0xa) {
                    uVar15 = (int)puVar32 - 0x16;
                  }
                  else {
                    bVar49 = uVar42 == 0x19;
                    uVar15 = uVar42;
                  }
                  if ((puVar21 >= (uint *)0xa && 0x18 < uVar42) && !bVar49) goto LAB_0144b6e8;
                }
                bVar49 = 0xfffffffe < uVar37;
                uVar37 = uVar37 + 1;
                if (bVar49) {
                    /* WARNING: Subroutine does not return */
                  FUN_012ffdf4(&DAT_01cf92cc);
                }
                uVar18 = 2;
                if (uVar14 == 0) {
                  uVar18 = 700;
                }
                iVar6 = FUN_01bf1250(uVar41 - uVar14,uVar18);
                iVar38 = FUN_01bf1250(iVar6,uVar37);
                uVar14 = iVar38 + iVar6;
                iVar6 = 0;
                if (uVar14 < 0x1c8) {
                  uVar39 = uVar14;
                }
                else {
                  do {
                    iVar6 = iVar6 + 0x24;
                    uVar39 = uVar14 / 0x23;
                    bVar49 = 0x3e57 < uVar14;
                    uVar14 = uVar39;
                  } while (bVar49);
                }
                iVar38 = FUN_01bf1250(uVar39 * 0x24 & 0xffff,uVar39 + 0x26 & 0xffff);
                uVar14 = FUN_01bf1250(uVar41,uVar37);
                bVar49 = CARRY4(uVar14,(uint)local_424);
                local_424 = (uint *)(uVar14 + (int)local_424);
                if ((bVar49) || (((uint)local_424 ^ 0xd800) - 0x110000 < 0xffef0800))
                goto LAB_0144b6e8;
                puVar32 = (uint *)(uVar41 - uVar14 * uVar37);
                ppuVar19 = &local_2f4;
                puVar21 = local_11c;
                if ((uint *)0x3b < local_11c) {
                  ppuVar19 = local_2f0;
                  puVar21 = local_2f4;
                }
                if (puVar21 != (uint *)0x0) {
                  iVar12 = (int)puVar21 << 3;
                  do {
                    if (puVar32 <= *ppuVar19) {
                      *ppuVar19 = (uint *)((int)*ppuVar19 + 1);
                    }
                    iVar12 = iVar12 + -8;
                    ppuVar19 = ppuVar19 + 2;
                  } while (iVar12 != 0);
                }
                if (local_11c < &DAT_0000003c) {
                  puVar36 = (uint *)0x3b;
                  puVar21 = local_11c;
                  ppuVar19 = &local_2f4;
                  ppuVar31 = &local_11c;
                }
                else {
                  puVar21 = local_2f4;
                  puVar36 = local_11c;
                  ppuVar19 = local_2f0;
                  ppuVar31 = &local_2f4;
                }
                if (puVar21 == puVar36) {
                  FUN_0144f06c(&local_2f8);
                  puVar21 = local_2f4;
                  ppuVar19 = local_2f0;
                  ppuVar31 = &local_2f4;
                }
                ppuVar19[(int)puVar21 * 2] = puVar32;
                uVar39 = iVar6 + iVar38;
                uVar14 = (int)puVar32 + 1;
                (ppuVar19 + (int)puVar21 * 2)[1] = local_424;
                *ppuVar31 = (uint *)((int)*ppuVar31 + 1);
              } while (ppuVar13 != local_420);
            }
            else {
              if (uVar37 < uVar14) {
                    /* WARNING: Subroutine does not return */
                FUN_012faff4(uVar14,uVar37,uVar37,&DAT_01cf92dc);
              }
              uVar53 = CONCAT44(uVar37 - uVar14,ppuVar45 + uVar14);
LAB_0144b3e8:
              iVar6 = (int)((ulonglong)uVar53 >> 0x20);
              if (iVar6 != 0) {
                local_420 = (uint **)uVar53 + iVar6;
                ppuVar13 = (uint **)uVar53;
                goto LAB_0144b40c;
              }
            }
            ppuVar13 = &local_2f4;
            puVar21 = local_11c;
            if ((uint *)0x3b < local_11c) {
              ppuVar13 = local_2f0;
              puVar21 = local_2f4;
            }
            if (&DAT_00000001 < puVar21) {
              if (&DAT_00000014 < puVar21) {
                FUN_01452948(ppuVar13);
              }
              else {
                FUN_01451640();
              }
            }
            puVar21 = local_11c;
            local_420 = &local_2f4;
            if ((uint *)0x3b < local_11c) {
              local_420 = local_2f0;
              puVar21 = local_2f4;
            }
            if (ppuVar45 != (uint **)0x0) {
              local_118 = (byte *)0x0;
              local_28 = (byte *)0x0;
              FUN_0144ebd8(&local_118,(int)puVar21 + uVar7);
              FUN_01ab1588();
              if (local_28 < &DAT_0000003c) {
                pbVar10 = (byte *)0x3b;
                pbVar40 = local_28;
                ppbVar20 = &local_114;
                ppbVar23 = &local_28;
              }
              else {
                pbVar40 = local_114;
                pbVar10 = local_28;
                ppbVar20 = local_110;
                ppbVar23 = &local_114;
              }
              ppuVar13 = ppuVar45 + uVar7;
              puVar32 = (uint *)0x0;
              if (pbVar40 < pbVar10) {
                puVar36 = (uint *)(pbVar10 + -(int)pbVar40);
                puVar43 = (uint *)0x0;
                do {
                  if (puVar32 < puVar21) {
                    do {
                      if (local_420[(int)puVar32 * 2] == puVar43) {
                        ppuVar19 = local_420 + (int)puVar32 * 2 + 1;
                        puVar32 = (uint *)((int)puVar32 + 1);
                        goto LAB_0144b7d4;
                      }
                    } while (ppuVar45 == ppuVar13);
                  }
                  else if (ppuVar45 == ppuVar13) {
                    *ppbVar23 = pbVar40;
                    goto LAB_0144b8b8;
                  }
                  ppuVar19 = ppuVar45;
                  ppuVar45 = ppuVar45 + 1;
LAB_0144b7d4:
                  puVar43 = (uint *)((int)puVar43 + 1);
                  ppbVar20[(int)pbVar40] = (byte *)*ppuVar19;
                  pbVar40 = pbVar40 + 1;
                } while (pbVar40 != pbVar10);
                pbVar40 = pbVar10;
              }
              else {
                puVar36 = (uint *)0x0;
              }
              *ppbVar23 = pbVar40;
              do {
                if (puVar32 < puVar21) {
                  do {
                    if (local_420[(int)puVar32 * 2] == puVar36) {
                      ppuVar31 = local_420 + (int)puVar32 * 2 + 1;
                      puVar32 = (uint *)((int)puVar32 + 1);
                      ppuVar19 = ppuVar45;
                      goto LAB_0144b848;
                    }
                  } while (ppuVar45 == ppuVar13);
                }
                else if (ppuVar45 == ppuVar13) goto LAB_0144b8b8;
                ppuVar19 = ppuVar45 + 1;
                ppuVar31 = ppuVar45;
LAB_0144b848:
                puVar43 = *ppuVar31;
                if (local_28 < &DAT_0000003c) {
                  pbVar10 = (byte *)0x3b;
                  pbVar40 = local_28;
                  ppbVar20 = &local_114;
                  ppbVar23 = &local_28;
                }
                else {
                  pbVar40 = local_114;
                  ppbVar20 = local_110;
                  ppbVar23 = &local_114;
                  pbVar10 = local_28;
                }
                if (pbVar40 == pbVar10) {
                  FUN_0144ec48(&local_118);
                  pbVar40 = local_114;
                  ppbVar20 = local_110;
                  ppbVar23 = &local_114;
                }
                ppbVar20[(int)pbVar40] = (byte *)puVar43;
                puVar36 = (uint *)((int)puVar36 + 1);
                *ppbVar23 = *ppbVar23 + 1;
                ppuVar45 = ppuVar19;
              } while( true );
            }
LAB_0144b6e8:
            if (param_10 != 0) {
              *(undefined2 *)(param_1 + 1) = 0x100;
              *param_1 = 0;
              goto LAB_0144c110;
            }
            local_3c5 = '\x01';
            uVar37 = *puVar46;
            puVar21 = local_428;
            if (0xfd < uVar37) {
              uVar37 = *(uint *)(param_11 + 4);
              puVar21 = *(uint **)(param_11 + 8);
            }
            if (uVar37 <= uVar34) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar34,uVar37,&DAT_01cf91bc);
            }
            puVar21[uVar34] = 0xfffd;
            local_434 = 0;
            goto LAB_0144b734;
          }
          if (param_10 != 0) goto LAB_0144bc74;
          local_3c5 = '\x01';
          puVar21 = local_428;
          if (0xfd < uVar7) {
            uVar7 = *(uint *)(param_11 + 4);
            puVar21 = *(uint **)(param_11 + 8);
          }
          uVar37 = uVar34 + 0x7d4;
          if (uVar7 <= uVar37) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar37,uVar7,&DAT_01cf91cc);
          }
          puVar21[uVar37] = 0xfffd;
          local_434 = 0;
          goto LAB_0144b758;
        }
        goto LAB_0144aee8;
      }
      uVar37 = puVar21[local_324];
      local_324 = local_324 + 1;
      if (local_360 < 0x12) {
        uVar7 = local_360;
        puVar21 = &local_360;
        if (local_324 == local_360) goto LAB_0144aa74;
      }
      else if (local_324 == local_3a4) {
        uVar7 = local_3a4;
        puVar21 = puVar30;
LAB_0144aa74:
        if (uVar7 != 0) {
          *puVar21 = 0;
        }
        local_324 = 0;
      }
      pbVar40 = (byte *)(uVar37 & 0xffffff);
      if (uVar37 < 0x1000000) {
        pbVar9 = (byte *)0x0;
        local_314 = pbVar40;
LAB_0144aa98:
        pbVar40 = (byte *)0x0;
        do {
          pbVar11 = local_314;
          local_314 = &DAT_00110000;
          if (pbVar11 == &DAT_00110000) {
            pbVar9 = (byte *)FUN_01447670(&puStack_3a8,pbVar9,pbVar10);
            iVar38 = local_30c;
            iVar6 = local_310;
            if (bVar49) {
              local_2e4 = local_30c;
              local_2f0 = (uint **)0x0;
              local_2f4 = (uint *)0x0;
              local_2f8 = (uint *)&DAT_00000001;
              pbVar10 = pbVar9 + -0x1161;
              local_2e8 = local_310;
              if (pbVar10 < &DAT_0000009f) {
                if (&DAT_00000014 < pbVar10) {
                  if (((&DAT_0000001a < pbVar9 + -0x11a8) || ((byte *)0x2ba3 < pbVar40 + -0xac00))
                     || ((uint)(pbVar40 + -0xac00) % 0x1c != 0)) goto LAB_0144b3bc;
                  pbVar11 = pbVar40 + (int)pbVar9 + -0x11a7;
                }
                else {
                  if (&DAT_00000012 < pbVar40 + -0x1100) {
LAB_0144b3bc:
                    local_314 = pbVar9;
                    goto LAB_0144aea0;
                  }
                  pbVar11 = (byte *)((int)(pbVar40 + -0x1100) * 0x24c + (int)pbVar10 * 0x1c + 0xac00
                                    );
                }
              }
              else {
                pbVar11 = (byte *)FUN_01447618(&local_2f8,pbVar40,pbVar9);
                if (pbVar11 == &DAT_00110000) goto LAB_0144b3bc;
              }
            }
            else {
              pbVar11 = pbVar9;
            }
          }
          else {
            iVar6 = local_310;
            iVar38 = local_30c;
          }
          uVar7 = local_360;
          puVar21 = local_3a0;
          uVar14 = local_3a4;
          pbVar40 = pbVar11;
          uVar37 = local_360;
          puVar32 = puVar30;
          if (0x11 < local_360) {
            uVar37 = local_3a4;
            puVar32 = local_3a0;
          }
          while (uVar39 = local_324, local_324 < uVar37) {
            uVar17 = puVar32[local_324];
            local_2f0 = (uint **)0x0;
            local_2f4 = (uint *)0x0;
            local_2f8 = (uint *)&DAT_00000001;
            uVar41 = uVar17 & 0xffffff;
            local_2e4 = iVar38;
            uVar15 = uVar41 - 0x1161;
            local_2e8 = iVar6;
            if (uVar15 < 0x9f) {
              if (uVar15 < 0x15) {
                if (&DAT_00000012 < pbVar40 + -0x1100) goto LAB_0144ac3c;
                pbVar9 = (byte *)((int)(pbVar40 + -0x1100) * 0x24c + uVar15 * 0x1c + 0xac00);
              }
              else {
                if (((0x1a < uVar41 - 0x11a8) || ((byte *)0x2ba3 < pbVar40 + -0xac00)) ||
                   ((uint)(pbVar40 + -0xac00) % 0x1c != 0)) {
LAB_0144ac3c:
                  puVar32 = &local_360;
                  if (0x11 < uVar7) {
                    puVar32 = puVar30;
                    uVar7 = uVar14;
                  }
                  if (uVar7 < uVar39) {
                    /* WARNING: Subroutine does not return */
                    FUN_012fb0ec("assertion failed: end <= len",0x1c,&DAT_01cf90c4);
                  }
                  *puVar32 = 0;
                  local_2f0 = &puStack_3a8;
                  local_2f8 = puVar21;
                  if (local_360 < 0x12) {
                    local_2f8 = puVar30;
                  }
                  local_2f4 = local_2f8 + uVar39;
                  local_2ec = uVar39;
                  local_2e8 = uVar7 - uVar39;
                  FUN_01448eec(&local_2f8);
                  local_324 = 0;
                  if (uVar17 < 0x1000000) goto LAB_0144aea0;
                  uVar14 = 1;
                  uVar37 = uVar17 >> 0x18;
                  goto LAB_0144ad10;
                }
                pbVar9 = pbVar40 + (uVar41 - 0x11a7);
              }
            }
            else {
              pbVar9 = (byte *)FUN_01447618(&local_2f8,pbVar40);
              if (pbVar9 == &DAT_00110000) goto LAB_0144ac3c;
            }
            pbVar40 = pbVar9;
            local_324 = uVar39 + 1;
          }
          if (uVar7 < 0x12) {
            uVar14 = uVar7;
          }
          if (uVar14 != 0) {
            iVar6 = 0x48;
            if (0x11 < uVar7) {
              iVar6 = 4;
            }
            *(undefined4 *)((int)&puStack_3a8 + iVar6) = 0;
            uVar7 = local_360;
          }
          local_324 = 0;
LAB_0144adb8:
          pbVar9 = local_35c;
          if (0x11 < uVar7) {
            uVar7 = local_3a4;
          }
          if (((uVar7 != 0) || (local_35c == &DAT_00110000)) || (local_35c < local_304))
          goto LAB_0144aea0;
          if (&DAT_00000001 < local_358 + -1) {
            pbVar10 = (byte *)((uint)local_358 & 0xffffff00);
            bVar49 = (byte *)0xd7ff < pbVar10;
            bVar50 = pbVar10 != (byte *)0xd800;
            if (bVar50) {
              pbVar10 = local_358 + -0x1161;
              bVar49 = &DAT_00000060 < pbVar10;
            }
            if (bVar49 && (bVar50 && pbVar10 != &DAT_00000061)) goto LAB_0144aea0;
          }
          bVar49 = true;
          local_35c = &DAT_00110000;
          pbVar10 = local_358;
        } while( true );
      }
LAB_0144af68:
      if ((byte *)0x7f < pbVar40) {
LAB_0144afb8:
        pbVar9 = pbVar40;
        if (pbVar40 == &DAT_00110000) goto LAB_0144aeac;
        if (pbVar40 == (byte *)0xfffd) goto LAB_0144b068;
        if (pbVar40 == &DAT_0000002e) goto LAB_0144aeac;
LAB_0144b080:
        uVar37 = *puVar46;
        if (uVar37 < 0xfe) {
          uVar7 = 0xfd;
          puVar21 = puVar46;
          puVar32 = local_428;
        }
        else {
          puVar21 = local_428;
          uVar7 = uVar37;
          uVar37 = *(uint *)(param_11 + 4);
          puVar32 = *(uint **)(param_11 + 8);
        }
        if (uVar37 == uVar7) {
          FUN_0144e898(param_11);
          uVar37 = *(uint *)(param_11 + 4);
          puVar32 = *(uint **)(param_11 + 8);
          puVar21 = local_428;
        }
        puVar32[uVar37] = (uint)pbVar40;
        goto LAB_0144b0b8;
      }
      local_418[3] = local_300[3];
      local_418[0] = *local_300;
      local_418[1] = local_300[1];
      local_418[2] = local_300[2];
      local_3fc = 0;
      local_400 = 0;
      local_404 = 0;
      local_408 = 0;
      if (((uint)local_418[((uint)pbVar40 & 0x7f) >> 5] >> ((uint)pbVar40 & 0x1f) & 1) == 0)
      goto LAB_0144afb8;
LAB_0144b068:
      if (param_10 == 0) {
        pbVar40 = (byte *)0xfffd;
        local_3c5 = '\x01';
        goto LAB_0144b080;
      }
      goto LAB_0144bc74;
    }
    if ((param_9 & 0xff) != 0) {
      uVar53 = FUN_0144ee2c(param_11,uVar34,&DAT_01cf91fc);
      iVar6 = FUN_0144d1a8((int)uVar53,(int)((ulonglong)uVar53 >> 0x20),(param_9 & 0xff) == 1,
                           param_10,&local_3c5);
      if (iVar6 != 0) goto LAB_0144c078;
    }
    uVar34 = *puVar5;
    if (local_3c5 == '\0') {
      uVar7 = 0;
      local_4a8 = uVar37;
    }
    else {
      uVar7 = 2;
      puVar21 = local_4ac;
    }
    if (uVar34 < 9) {
      uVar14 = 8;
      uVar37 = uVar34;
      puVar32 = puVar16;
      puVar36 = puVar5;
    }
    else {
      uVar37 = *(uint *)(param_12 + 4);
      puVar32 = *(uint **)(param_12 + 8);
      puVar36 = puVar16;
      uVar14 = uVar34;
    }
    if (uVar37 == uVar14) {
      FUN_0144ee64(param_12);
      uVar37 = *(uint *)(param_12 + 4);
      puVar32 = *(uint **)(param_12 + 8);
      puVar36 = puVar16;
    }
    puVar32 = puVar32 + uVar37 * 3;
    *puVar32 = uVar7;
    puVar32[1] = (uint)puVar21;
    puVar32[2] = local_4a8;
    *puVar36 = *puVar36 + 1;
    bVar49 = false;
    iVar6 = 1;
    param_13 = local_450;
    local_4ac = puVar21;
  } while (!bVar48);
  goto LAB_0144bcc0;
LAB_0144ad10:
  uVar39 = local_360;
  puVar21 = puVar30;
  if (0x11 < local_360) {
    uVar39 = local_3a4;
    puVar21 = local_3a0;
  }
  uVar7 = local_360;
  if (uVar39 <= uVar14) goto LAB_0144adb8;
  uVar7 = puVar21[uVar14] >> 0x18;
  if (uVar7 == 0) goto LAB_0144aea0;
  if (uVar37 == uVar7) {
    uVar7 = uVar37;
  }
  else {
    local_2e8 = local_310;
    local_2f0 = (uint **)0x0;
    local_2f4 = (uint *)0x0;
    local_2e4 = local_30c;
    local_2f8 = (uint *)&DAT_00000001;
    pbVar9 = (byte *)FUN_01447618(&local_2f8,pbVar40,puVar21[uVar14] & 0xffffff);
    if (pbVar9 != &DAT_00110000) {
      FUN_01448fcc(&puStack_3a8,uVar14);
      pbVar40 = pbVar9;
      goto LAB_0144ad10;
    }
  }
  uVar14 = uVar14 + 1;
  uVar37 = uVar7;
  goto LAB_0144ad10;
LAB_0144b9d0:
  FUN_0144c2f4(&puStack_3a8);
LAB_0144a6bc:
  bVar49 = false;
  bVar48 = !bVar48;
LAB_0144a72c:
  iVar6 = 1;
  param_13 = local_450;
  if (!bVar48) goto LAB_0144bcc0;
  goto LAB_0144a2dc;
LAB_0144bcc0:
  uVar37 = *puVar46;
  uVar44 = 0;
  puVar5 = local_428;
  if (0xfd < uVar37) {
    uVar37 = *(uint *)(param_11 + 4);
    puVar5 = *(uint **)(param_11 + 8);
  }
  if (uVar37 != 0) {
    iVar24 = uVar37 << 2;
    iVar47 = param_2[0x31];
    do {
      uVar37 = *puVar5;
      if (0x58f < uVar37) {
        uVar34 = uVar37 - 0x900;
        bVar49 = 0xf21c < uVar34;
        if (bVar49) {
          uVar34 = uVar37 - 0x1f000;
        }
        if (bVar49 && 0x20fff < uVar34) {
          uVar34 = uVar37 - 0xff00;
          bVar49 = 0x8ff < uVar34;
          if (bVar49) {
            uVar34 = uVar37 - 0x11000;
          }
          if ((bVar49 && 0xd7ff < uVar34) &&
             (uVar37 = FUN_014526d4(iVar47), (1 << (uVar37 & 0x1f) & 0x2022U) != 0)) {
            uVar37 = *puVar46;
            if (0xfd < uVar37) {
              uVar37 = *(uint *)(param_11 + 4);
              local_428 = *(uint **)(param_11 + 8);
            }
            cVar22 = local_3c5;
            goto LAB_0144bd84;
          }
        }
      }
      iVar24 = iVar24 + -4;
      puVar5 = puVar5 + 1;
    } while (iVar24 != 0);
  }
  goto LAB_0144bd48;
LAB_0144b8b8:
  pbVar40 = local_28;
  uVar37 = *puVar46;
  puVar21 = puVar46;
  if (0xfd < uVar37) {
    uVar37 = *local_428;
    puVar21 = local_428;
  }
  if (uVar34 < uVar37) {
    *puVar21 = uVar34;
  }
  ppbVar20 = &local_114;
  pbVar10 = local_28;
  if ((byte *)0x3b < local_28) {
    ppbVar20 = local_110;
    pbVar10 = local_114;
  }
  iVar6 = FUN_0144c324(param_2,param_11,uVar34,ppbVar20,pbVar10);
  if (iVar6 == 0) {
    if ((byte *)0x3b < pbVar40) {
      FUN_01af7af8(pbVar40,local_110,4,4);
    }
    local_434 = 1;
LAB_0144b734:
    if ((uint *)0x3b < local_11c) {
      FUN_01af7af8(local_11c,local_2f0,4,8);
    }
LAB_0144b758:
    local_438 = local_434;
LAB_0144aee8:
    uVar53 = FUN_0144ee2c(param_11,uVar34,&DAT_01cf91dc);
    iVar6 = FUN_0144cd00(param_2,param_9,(int)uVar53,(int)((ulonglong)uVar53 >> 0x20),param_10,
                         &local_3c5,local_438,local_434);
    if (iVar6 == 0) {
      if (pbVar9 == &DAT_00110000) goto LAB_0144b9d0;
      uVar37 = *puVar46;
      if (uVar37 < 0xfe) {
        uVar7 = 0xfd;
        uVar34 = uVar37;
        puVar21 = local_428;
        puVar32 = puVar46;
      }
      else {
        uVar34 = *(uint *)(param_11 + 4);
        puVar21 = *(uint **)(param_11 + 8);
        puVar32 = local_428;
        uVar7 = uVar37;
      }
      if (uVar34 == uVar7) {
        FUN_0144e898(param_11);
        uVar34 = *(uint *)(param_11 + 4);
        puVar21 = *(uint **)(param_11 + 8);
        puVar32 = local_428;
      }
      puVar21[uVar34] = 0x2e;
      *puVar32 = *puVar32 + 1;
      uVar34 = *puVar46;
      if (0xfd < uVar34) {
        uVar34 = *local_428;
      }
      uVar37 = *puVar5;
      if (uVar37 < 9) {
        uVar7 = 8;
        puVar21 = puVar5;
        puVar32 = puVar16;
      }
      else {
        puVar21 = puVar16;
        uVar7 = uVar37;
        uVar37 = *(uint *)(param_12 + 4);
        puVar32 = *(uint **)(param_12 + 8);
      }
      if (uVar37 == uVar7) {
        FUN_0144ee64(param_12);
        uVar37 = *(uint *)(param_12 + 4);
        puVar32 = *(uint **)(param_12 + 8);
        puVar21 = puVar16;
      }
      puVar32[uVar37 * 3] = 2;
      local_434 = 1;
      local_438 = 1;
LAB_0144b0b8:
      *puVar21 = *puVar21 + 1;
      goto LAB_0144a9e0;
    }
LAB_0144bc74:
    *(undefined2 *)(param_1 + 1) = 0x100;
    *param_1 = 0;
  }
  else {
    *(undefined2 *)(param_1 + 1) = 0x100;
    *param_1 = 0;
    if ((byte *)0x3b < pbVar40) {
      FUN_01af7af8(pbVar40,local_110,4,4);
    }
LAB_0144c110:
    if ((uint *)0x3b < local_11c) {
      FUN_01af7af8(local_11c,local_2f0,4,8);
    }
  }
  FUN_0144c2f4(&puStack_3a8);
  return;
LAB_0144bd84:
  do {
    puVar5 = local_428;
    if (uVar37 == 0) break;
    iVar24 = uVar37 << 2;
    uVar34 = 0;
    do {
      uVar7 = local_428[uVar34];
      if (uVar7 == 0x2e) {
        uVar14 = uVar37 - (uVar34 + 1);
        local_428 = local_428 + uVar34 + 1;
        goto LAB_0144bdd4;
      }
      uVar34 = uVar34 + 1;
      iVar24 = iVar24 + -4;
    } while (iVar24 != 0);
    uVar14 = 0;
    local_428 = (uint *)&SUB_00000004;
    uVar34 = uVar37;
LAB_0144bdd4:
    uVar37 = uVar14;
    if (uVar34 != 0) {
      local_41c = puVar5 + 1;
      uVar14 = FUN_014526d4(iVar47,*puVar5);
      if ((1 << (uVar14 & 0x1f) & 0x2003U) == 0) {
        if (param_10 != 0) goto LAB_0144c078;
        *puVar5 = 0xfffd;
LAB_0144bebc:
        cVar22 = '\x01';
      }
      else {
        iVar24 = uVar34 * 4 + -8;
        do {
          iVar6 = iVar24;
          uVar39 = uVar34 - 1;
          if (uVar39 == 0) goto LAB_0144c048;
          uVar15 = FUN_014526d4(iVar47,puVar5[uVar34 - 1]);
          uVar41 = uVar15 & 0xff;
          iVar24 = iVar6 + -4;
          uVar34 = uVar39;
        } while (uVar41 == 0x11);
        uVar34 = 1 << (uVar15 & 0x1f);
        if ((uVar14 & 0xff) == 0) {
          if ((uVar34 & 5) == 0) {
            if (param_10 != 0) goto LAB_0144c078;
            puVar5[uVar39] = 0xfffd;
            cVar22 = '\x01';
          }
          if (uVar39 * -4 != -4) {
            iVar24 = 0;
            do {
              uVar34 = FUN_014526d4(iVar47,*(undefined4 *)((int)local_41c + iVar24));
              if ((1 << (uVar34 & 0x1f) & 0x6045dU) == 0) {
                if (param_10 != 0) goto LAB_0144c078;
                *(undefined4 *)((int)local_41c + iVar24) = 0xfffd;
                cVar22 = '\x01';
              }
              iVar24 = iVar24 + 4;
            } while (iVar6 != iVar24);
          }
        }
        else {
          if ((uVar34 & 0x2026) == 0) {
            if (param_10 != 0) {
LAB_0144c078:
              *(undefined2 *)(param_1 + 1) = 0x100;
              *param_1 = 0;
              return;
            }
            puVar5[uVar39] = 0xfffd;
            cVar22 = '\x01';
          }
          if (uVar39 * -4 == -4) {
            if (uVar7 != 0x2e) break;
            goto LAB_0144bd84;
          }
          iVar24 = 0;
          local_42c = 0;
          do {
            uVar34 = FUN_014526d4(iVar47,*local_41c);
            if ((1 << (uVar34 & 0x1f) & 0x6247eU) == 0) goto LAB_0144bfe4;
            if (iVar24 == 0) {
              iVar24 = 1;
              if ((uVar34 & 0xff) == 2) {
                local_42c = 1;
              }
              else {
                iVar24 = 0;
                if ((uVar34 & 0xff) == 5) {
                  iVar24 = 2;
                  local_42c = 2;
                }
              }
            }
            else if (iVar24 == 1) {
              iVar24 = 1;
              if ((uVar34 & 0xff) == 5) goto LAB_0144bfe4;
            }
            else {
              iVar24 = 2;
              if ((uVar34 & 0xff) == 2) {
LAB_0144bfe4:
                if (param_10 != 0) goto LAB_0144c078;
                *local_41c = 0xfffd;
                cVar22 = '\x01';
              }
            }
            iVar6 = iVar6 + -4;
            local_41c = local_41c + 1;
          } while (iVar6 != 0);
          if (local_42c == 2) {
            bVar49 = uVar41 == 2;
          }
          else {
            if (local_42c != 1) goto LAB_0144c048;
            bVar49 = uVar41 == 5;
          }
          if (bVar49) {
            if (param_10 == 0) {
              puVar5[uVar39] = 0xfffd;
              goto LAB_0144bebc;
            }
            goto LAB_0144c078;
          }
        }
      }
    }
LAB_0144c048:
  } while (uVar7 == 0x2e);
  local_3c5 = cVar22;
  uVar44 = 1;
LAB_0144bd48:
  *(char *)((int)param_1 + 5) = local_3c5;
  *(undefined1 *)(param_1 + 1) = uVar44;
  *param_1 = local_45c;
  return;
}

