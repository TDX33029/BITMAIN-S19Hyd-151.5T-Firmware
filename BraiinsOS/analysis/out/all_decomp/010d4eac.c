// FUN_010d4eac @ 010d4eac size=9492 calls_out=29 calls_in=2
// strings: capacity overflow

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_010d4eac(int *param_1,int *param_2,int param_3,undefined4 param_4,byte *param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,uint param_9,int param_10,
                 int param_11,int param_12,uint *param_13,uint param_14)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  uint *puVar10;
  int *piVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uVar16;
  byte **ppbVar17;
  uint *puVar18;
  uint uVar19;
  byte **ppbVar20;
  int *piVar21;
  int iVar22;
  int *piVar23;
  int *piVar24;
  int *piVar25;
  int *piVar26;
  int *piVar27;
  uint *puVar28;
  uint *puVar29;
  uint *puVar30;
  undefined *puVar31;
  uint *puVar32;
  int iVar33;
  uint uVar34;
  uint uVar35;
  byte *pbVar36;
  int *piVar37;
  uint uVar38;
  undefined1 uVar39;
  uint uVar40;
  uint uVar41;
  byte *pbVar42;
  byte *pbVar43;
  uint *puVar44;
  uint uVar45;
  int iVar46;
  byte *pbVar47;
  bool bVar48;
  bool bVar49;
  bool bVar50;
  bool bVar51;
  undefined8 uVar52;
  ulonglong uVar53;
  undefined4 uVar54;
  char *pcVar55;
  uint *local_4b0;
  uint local_4ac;
  uint *local_45c;
  undefined4 local_444;
  undefined4 local_440;
  uint local_43c;
  uint local_434;
  uint local_430;
  uint *local_428;
  uint *local_424;
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
  uint auStack_3a8 [2];
  uint *local_3a0;
  uint local_360;
  byte *local_35c;
  byte *local_358;
  byte **ppbStack_354;
  uint local_324;
  byte *local_314;
  int local_310;
  int local_30c;
  int local_308;
  byte *local_304;
  byte **local_300;
  undefined4 local_2f8;
  uint local_2f4;
  uint *local_2f0;
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
  int iStack_27c;
  int iStack_278;
  undefined4 local_274;
  int *local_270;
  uint local_26c;
  byte local_268;
  undefined1 local_267;
  uint local_11c;
  byte *local_118;
  byte *local_114;
  byte **local_110;
  byte *local_28;
  
  local_3cc = param_8;
  local_3d8 = param_5;
  iVar22 = *param_2;
  local_3d0 = param_7;
  iVar46 = param_2[8];
  piVar37 = param_2 + 10;
  if (param_2[9] == 0) {
    piVar37 = (int *)param_2[10];
  }
  piVar23 = (int *)0x0;
  if (iVar46 != 2) {
    piVar23 = piVar37;
  }
  param_3 = param_3 - param_14;
  piVar24 = param_2 + 0x2d;
  if (param_2[0x2c] == 0) {
    piVar24 = (int *)param_2[0x2d];
  }
  local_3d4 = param_6;
  piVar25 = param_2 + 2;
  if (param_2[1] == 0) {
    piVar25 = (int *)param_2[2];
  }
  uVar3 = *(ushort *)(param_2 + 0x2b);
  piVar26 = param_2 + 0x25;
  if (param_2[0x24] == 0) {
    piVar26 = (int *)param_2[0x25];
  }
  bVar1 = *(byte *)((int)param_2 + 0xae);
  piVar27 = param_2 + 0x18;
  if (param_2[0x17] == 0) {
    piVar27 = (int *)param_2[0x18];
  }
  puVar28 = (uint *)((uint)&local_2f8 | 4);
  local_3c5 = '\0';
  puVar13 = (uint *)(param_12 + 4);
  puVar32 = (uint *)(param_12 + 100);
  local_424 = (uint *)(param_11 + 4);
  puVar44 = (uint *)(param_11 + 0x3f8);
  puVar29 = (uint *)((uint)auStack_3a8 | 4);
  bVar49 = true;
  iVar6 = 0;
  local_430 = param_14;
LAB_010d502c:
  local_45c = param_13;
  if (local_430 != 0) {
    uVar41 = 0;
    do {
      pbVar43 = (byte *)((int)param_13 + uVar41);
      bVar48 = *pbVar43 != 0x2e;
      if (!bVar48) {
        local_430 = local_430 - (uVar41 + 1);
        local_45c = (uint *)((int)param_13 + uVar41 + 1);
        uVar34 = uVar41;
        break;
      }
      uVar41 = uVar41 + 1;
      uVar34 = local_430;
    } while (local_430 != uVar41);
    if (!bVar49) goto LAB_010d50dc;
    if (3 < uVar34) {
      bVar2 = *(byte *)((int)param_13 + 2);
      bVar49 = bVar2 != 0x2d;
      if (!bVar49) {
        bVar2 = *(byte *)((int)param_13 + 3);
      }
      if (bVar49 || bVar2 != 0x2d) goto LAB_010d5138;
LAB_010d5194:
      param_3 = param_3 + iVar6;
      goto LAB_010d519c;
    }
    if (uVar34 != 0) {
LAB_010d5138:
      if ((byte)*param_13 - 0x61 < 0x1a) {
        uVar41 = 1;
        do {
          do {
            if (uVar34 == uVar41) {
              if (*(byte *)((int)param_13 + (uVar34 - 1)) != 0x2d) goto LAB_010d52c4;
              goto LAB_010d5194;
            }
            uVar45 = (uint)*(byte *)((int)param_13 + uVar41);
            uVar41 = uVar41 + 1;
          } while (uVar45 == 0x2d);
          bVar49 = uVar45 - 0x61 < 0x1a;
          if (!bVar49) {
            uVar45 = uVar45 - 0x30;
          }
        } while (bVar49 || uVar45 < 10);
      }
      goto LAB_010d5194;
    }
    uVar34 = 0;
LAB_010d52c4:
    bVar49 = true;
    param_3 = param_3 + iVar6 + uVar34;
    iVar6 = 1;
    param_13 = local_45c;
    if (*pbVar43 != 0x2e) goto LAB_010d6e50;
    goto LAB_010d502c;
  }
  if (bVar49) {
    param_3 = param_3 + iVar6;
    goto LAB_010d6e50;
  }
  uVar34 = 0;
  local_430 = 0;
  bVar48 = true;
LAB_010d50dc:
  if (iVar6 != 0) {
    uVar41 = *puVar44;
    if (uVar41 < 0xfe) {
      uVar12 = 0xfd;
      uVar45 = uVar41;
      puVar15 = local_424;
      puVar30 = puVar44;
    }
    else {
      uVar45 = *(uint *)(param_11 + 4);
      puVar15 = *(uint **)(param_11 + 8);
      puVar30 = local_424;
      uVar12 = uVar41;
    }
    if (uVar45 == uVar12) {
      FUN_010da1f8(param_11);
      uVar45 = *(uint *)(param_11 + 4);
      puVar15 = *(uint **)(param_11 + 8);
      puVar30 = local_424;
    }
    puVar15[uVar45] = 0x2e;
    *puVar30 = *puVar30 + 1;
  }
LAB_010d519c:
  local_434 = *puVar44;
  if (0xfd < local_434) {
    local_434 = *local_424;
  }
  if (uVar34 != 0) {
    uVar41 = 0;
    do {
      if ((char)*(byte *)((int)param_13 + uVar41) < '\0') {
        if (uVar41 == 0) {
          local_440 = 1;
          local_444 = 1;
          uVar45 = uVar34;
          local_428 = param_13;
          goto LAB_010d5594;
        }
        uVar41 = uVar41 - 1;
        uVar45 = uVar34 - uVar41;
        local_428 = (uint *)((int)param_13 + uVar41);
        if (uVar45 == 0) goto joined_r0x010d52f0;
        bVar49 = false;
        local_440 = 1;
        goto joined_r0x010d5260;
      }
      uVar41 = uVar41 + 1;
    } while (uVar34 != uVar41);
    local_428 = (uint *)&DAT_00000001;
    uVar41 = uVar34;
joined_r0x010d52f0:
    if (uVar41 < 4) {
      bVar49 = true;
      local_440 = 0;
      uVar45 = 0;
joined_r0x010d5260:
      if (uVar41 != 0) goto LAB_010d5480;
      local_444 = 1;
    }
    else {
      if ((*param_13 & 0xffffdfdf) == 0x2d2d4e58) {
        if ((((byte *)((int)param_13 + uVar41))[-1] != 0x2d) && (uVar41 - 4 < 0x7d1)) {
          FUN_016dd606(&local_2f8,0,0x1e0);
          FUN_010dae00(local_3c4,&local_2f8,param_13 + 1,uVar41 - 4);
          if (local_3c4[0] != 0) {
            local_118 = (byte *)0x0;
            local_28 = (byte *)0x0;
            FUN_010da284(&local_118,local_3c4);
            pbVar43 = local_28;
            pbVar47 = local_28;
            ppbVar17 = &local_114;
            if (&DAT_0000003b < local_28) {
              pbVar47 = local_114;
              ppbVar17 = local_110;
            }
            pcVar55 = &local_3c5;
            uVar16 = param_7;
            uVar54 = param_8;
            iVar6 = param_10;
            iVar33 = FUN_010d74fc(param_2,param_11,local_434,ppbVar17,pbVar47);
            if (iVar33 == 0) {
              uVar52 = FUN_010da8ec(param_11,local_434,&DAT_018856b8);
              iVar6 = FUN_010d8184(param_2,param_9,(int)uVar52,(int)((ulonglong)uVar52 >> 0x20),
                                   param_10,&local_3c5,1,1,uVar16,uVar54,iVar6,pcVar55);
              pbVar43 = local_28;
              if (iVar6 == 0) {
                if (&DAT_0000003b < local_28) {
                  thunk_FUN_016d3fb4(local_110);
                }
                goto LAB_010d6b58;
              }
            }
            *(undefined2 *)(param_1 + 1) = 0x100;
            *param_1 = 0;
            if (&DAT_0000003b < pbVar43) {
              thunk_FUN_016d3fb4(local_110);
            }
LAB_010d7314:
            if (local_11c < 0x3c) {
              return;
            }
            thunk_FUN_016d3fb4(local_2f0);
            return;
          }
          if (param_10 != 0) {
            *(undefined2 *)(param_1 + 1) = 0x100;
            *param_1 = 0;
            goto LAB_010d7314;
          }
          uVar45 = *puVar44;
          local_3c5 = '\x01';
          if (uVar45 < 0xfe) {
            uVar7 = 0xfd;
            uVar12 = uVar45;
            puVar15 = local_424;
            puVar30 = puVar44;
          }
          else {
            uVar12 = *(uint *)(param_11 + 4);
            puVar15 = *(uint **)(param_11 + 8);
            puVar30 = local_424;
            uVar7 = uVar45;
          }
          if (uVar12 == uVar7) {
            FUN_010da1f8(param_11);
            uVar12 = *(uint *)(param_11 + 4);
            puVar15 = *(uint **)(param_11 + 8);
            puVar30 = local_424;
          }
          puVar15[uVar12] = 0xfffd;
          *puVar30 = *puVar30 + 1;
          local_110 = &local_3d8;
          local_118 = (byte *)((int)param_13 + 1);
          local_114 = (byte *)((int)param_13 + uVar41);
          FUN_010d9db0(param_11,&local_118);
LAB_010d6b58:
          if (0x3b < local_11c) {
            thunk_FUN_016d3fb4(local_2f0);
          }
          uVar41 = *puVar32;
          if (uVar41 < 9) {
            uVar12 = 8;
            uVar45 = uVar41;
            puVar15 = puVar13;
            puVar30 = puVar32;
          }
          else {
            uVar45 = *(uint *)(param_12 + 4);
            puVar15 = *(uint **)(param_12 + 8);
            puVar30 = puVar13;
            uVar12 = uVar41;
          }
          if (uVar45 == uVar12) {
            FUN_010dab88(param_12);
            uVar45 = *(uint *)(param_12 + 4);
            puVar15 = *(uint **)(param_12 + 8);
            puVar30 = puVar13;
          }
          puVar15 = puVar15 + uVar45 * 3;
          *puVar15 = 1;
          puVar15[1] = (uint)param_13;
          puVar15[2] = uVar34;
          *puVar30 = *puVar30 + 1;
          goto joined_r0x010d6bdc;
        }
        bVar49 = false;
        uVar45 = 0;
        local_440 = 0;
        if (param_10 != 0) goto LAB_010d71f4;
      }
      else {
        uVar45 = 0;
        bVar49 = true;
        local_440 = 0;
      }
LAB_010d5480:
      puVar15 = param_13;
      do {
        uVar12 = (uint)(byte)*puVar15;
        local_3f8[2] = (byte *)local_3d0;
        local_3f8[1] = (byte *)local_3d4;
        local_3dc = 0;
        local_3e0 = 0;
        local_3e4 = 0;
        local_3e8 = 0;
        local_3f8[3] = (byte *)local_3cc;
        local_3f8[0] = local_3d8;
        if (((uint)local_3f8[(uVar12 & 0x7f) >> 5] >> (uVar12 & 0x1f) & 1) == 0) {
LAB_010d54e0:
          uVar14 = *puVar44;
          uVar7 = uVar14;
          if (0xfd < uVar14) goto LAB_010d54f0;
LAB_010d5528:
          uVar7 = 0xfd;
          puVar30 = local_424;
          puVar18 = puVar44;
        }
        else {
          if (uVar12 - 0x41 < 0x1a) {
            uVar12 = uVar12 | 0x20;
            goto LAB_010d54e0;
          }
          if (param_10 != 0) goto LAB_010d71f4;
          uVar12 = 0xfffd;
          local_3c5 = '\x01';
          uVar14 = *puVar44;
          uVar7 = uVar14;
          if (uVar14 < 0xfe) goto LAB_010d5528;
LAB_010d54f0:
          uVar14 = *(uint *)(param_11 + 4);
          puVar30 = *(uint **)(param_11 + 8);
          puVar18 = local_424;
        }
        if (uVar14 == uVar7) {
          FUN_010da1f8(param_11);
          uVar14 = *(uint *)(param_11 + 4);
          puVar30 = *(uint **)(param_11 + 8);
          puVar18 = local_424;
        }
        puVar30[uVar14] = uVar12;
        uVar41 = uVar41 - 1;
        *puVar18 = *puVar18 + 1;
        puVar15 = (uint *)((int)puVar15 + 1);
      } while (uVar41 != 0);
      local_444 = 0;
    }
    if (!bVar49) {
LAB_010d5594:
      uVar41 = *puVar32;
      if (uVar41 < 9) {
        uVar12 = 8;
        uVar34 = uVar41;
        puVar15 = puVar13;
        puVar30 = puVar32;
      }
      else {
        uVar34 = *(uint *)(param_12 + 4);
        puVar15 = *(uint **)(param_12 + 8);
        puVar30 = puVar13;
        uVar12 = uVar41;
      }
      if (uVar34 == uVar12) {
        FUN_010dab88(param_12);
        uVar34 = *(uint *)(param_12 + 4);
        puVar15 = *(uint **)(param_12 + 8);
        puVar30 = puVar13;
      }
      puVar15[uVar34 * 3] = 2;
      *puVar30 = *puVar30 + 1;
      if (iVar46 == 2) {
        local_268 = 0;
      }
      else {
        local_268 = *(byte *)((int)piVar37 + 0x32);
      }
      local_294 = *piVar26;
      local_290 = piVar26[1];
      local_28c = piVar26[3];
      iStack_288 = piVar26[4];
      if (iVar22 == 0) {
        iStack_27c = 1;
        iStack_278 = 0;
        local_280 = 0;
        iStack_284 = 1;
      }
      else {
        iStack_284 = *piVar25;
        local_280 = piVar25[1];
        iStack_27c = piVar25[3];
        iStack_278 = piVar25[4];
      }
      local_268 = local_268 & 1;
      local_2a8 = 0;
      local_267 = 1;
      local_2a0 = local_428;
      local_274 = 0;
      local_2b0 = 0;
      local_2f8 = 0;
      local_2a4 = 0;
      local_2ac = &DAT_00110000;
      local_29c = uVar45;
      local_298 = piVar27;
      local_270 = piVar23;
      local_26c = (uint)bVar1;
      FUN_010db1c4(&local_2f8,0xffff,0);
      FUN_016dd1aa(&local_118,&local_2f8,0x94);
      iVar6 = *piVar24;
      iVar33 = piVar24[1];
      FUN_016dd1aa(auStack_3a8,&local_118,0x94);
      local_300 = &local_3d8;
      local_30c = iVar33;
      local_304 = (byte *)(uint)uVar3;
      local_308 = 0;
      local_310 = iVar6;
      local_314 = &DAT_00110000;
      do {
        pbVar43 = local_35c;
        bVar49 = false;
        pbVar36 = (byte *)0x0;
        pbVar47 = (byte *)0x0;
        if (local_314 != &DAT_00110000) goto LAB_010d5818;
        uVar41 = local_360;
        puVar15 = puVar29;
        if (0x11 < local_360) {
          uVar41 = auStack_3a8[1];
          puVar15 = local_3a0;
        }
        if (local_324 < uVar41) {
          uVar41 = puVar15[local_324];
          local_324 = local_324 + 1;
          if (local_360 < 0x12) {
            uVar34 = local_360;
            puVar15 = &local_360;
            if (local_324 == local_360) goto LAB_010d57f4;
          }
          else if (local_324 == auStack_3a8[1]) {
            uVar34 = auStack_3a8[1];
            puVar15 = puVar29;
LAB_010d57f4:
            if (uVar34 != 0) {
              *puVar15 = 0;
            }
            local_324 = 0;
          }
          pbVar43 = (byte *)(uVar41 & 0xffffff);
          if (uVar41 < 0x1000000) {
            pbVar47 = (byte *)0x0;
            local_314 = pbVar43;
LAB_010d5818:
            pbVar42 = local_314;
            local_314 = &DAT_00110000;
            pbVar9 = (byte *)0x0;
            if (pbVar42 == &DAT_00110000) goto LAB_010d583c;
            do {
              local_314 = &DAT_00110000;
              iVar33 = local_30c;
              iVar6 = local_310;
              pbVar43 = pbVar42;
LAB_010d58c0:
              uVar45 = local_360;
              puVar15 = local_3a0;
              uVar34 = auStack_3a8[1];
              uVar41 = local_360;
              puVar30 = puVar29;
              if (0x11 < local_360) {
                uVar41 = auStack_3a8[1];
                puVar30 = local_3a0;
              }
              while (uVar12 = local_324, local_324 < uVar41) {
                uVar40 = puVar30[local_324];
                local_2f0 = (uint *)0x0;
                local_2f4 = 0;
                local_2f8 = 1;
                uVar7 = uVar40 & 0xffffff;
                local_2e4 = iVar33;
                uVar14 = uVar7 - 0x1161;
                local_2e8 = iVar6;
                if (0x9e < uVar14) {
                  if (uVar7 < 0x10000) {
                    iVar8 = FUN_010d2a9c(&local_2f8,uVar40);
                  }
                  else {
                    uVar7 = FUN_010d2a9c(&local_2f8,(uVar7 >> 10) - 0x2840);
                    if ((uVar7 | 2) != 3) goto LAB_010d5aa4;
                    iVar8 = FUN_010d2a9c(&local_2f8,uVar40 & 0x3ff | 0xffffdc00);
                  }
                  if (iVar8 == 1) {
                    if (&DAT_0000ffff < pbVar43) {
                      uVar7 = FUN_010d2a9c(&local_2f8,((uint)pbVar43 >> 10) - 0x2840);
                      if ((uVar7 | 2) != 3) goto LAB_010d5aa4;
                      uVar52 = FUN_010d2a9c(&local_2f8,(uint)pbVar43 & 0x3ff | 0xffffdc00);
                    }
                    else {
                      uVar52 = FUN_010d2a9c(&local_2f8,pbVar43);
                    }
                    pbVar47 = (byte *)((ulonglong)uVar52 >> 0x20);
                    if ((((int)uVar52 == 2) && (0xffef07ff < ((uint)pbVar47 ^ 0xd800) - 0x110000))
                       && (pbVar47 != &DAT_00110000)) goto LAB_010d58f8;
                  }
LAB_010d5aa4:
                  if (uVar45 < 0x12) {
                    uVar34 = uVar45;
                  }
                  if (uVar34 < uVar12) {
                    /* WARNING: Subroutine does not return */
                    FUN_00faa464(&DAT_00387c07,0x1c,&DAT_018857d8);
                  }
                  iVar6 = 0x48;
                  if (0x11 < uVar45) {
                    iVar6 = 4;
                  }
                  iVar33 = uVar34 - uVar12;
                  *(undefined4 *)((int)auStack_3a8 + iVar6) = 0;
                  if (iVar33 != 0) {
                    puVar30 = &local_360;
                    if (local_360 < 0x12) {
                      puVar15 = puVar29;
                      uVar41 = local_360;
                      if (uVar12 != local_360) goto LAB_010d5b48;
                    }
                    else {
                      uVar41 = auStack_3a8[1];
                      if (uVar12 == auStack_3a8[1]) {
                        puVar30 = puVar29;
                      }
                      else {
LAB_010d5b48:
                        FUN_016dd52c(puVar15 + uVar41,puVar15 + uVar12,iVar33 * 4);
                        uVar34 = uVar41 + iVar33;
                        if (0x11 < local_360) {
                          puVar30 = puVar29;
                        }
                      }
                    }
                    *puVar30 = uVar34;
                  }
                  local_324 = 0;
                  if (uVar40 >> 0x18 == 0) goto LAB_010d5e44;
                  uVar34 = 1;
                  uVar41 = uVar40 >> 0x18;
                  goto LAB_010d5b8c;
                }
                if (uVar14 < 0x15) {
                  if (&DAT_00000012 < pbVar43 + -0x1100) goto LAB_010d5aa4;
                  pbVar47 = (byte *)((int)(pbVar43 + -0x1100) * 0x24c + uVar14 * 0x1c + 0xac00);
                }
                else {
                  if (((0x1a < uVar7 - 0x11a8) || ((byte *)0x2ba3 < pbVar43 + -0xac00)) ||
                     ((uint)(pbVar43 + -0xac00) % 0x1c != 0)) goto LAB_010d5aa4;
                  pbVar47 = pbVar43 + (uVar7 - 0x11a7);
                }
LAB_010d58f8:
                pbVar43 = pbVar47;
                local_324 = uVar12 + 1;
              }
              if (uVar45 < 0x12) {
                uVar34 = uVar45;
              }
              if (uVar34 != 0) {
                iVar6 = 0x48;
                if (0x11 < uVar45) {
                  iVar6 = 4;
                }
                *(undefined4 *)((int)auStack_3a8 + iVar6) = 0;
                uVar45 = local_360;
              }
              local_324 = 0;
              pbVar47 = local_35c;
              pbVar36 = local_358;
              pbVar42 = local_314;
              if (0x11 < uVar45) {
                uVar45 = auStack_3a8[1];
              }
joined_r0x010d5d20:
              local_35c = pbVar47;
              local_358 = pbVar36;
              local_314 = pbVar42;
              if (((uVar45 != 0) || (pbVar47 == &DAT_00110000)) || (pbVar47 < local_304))
              goto LAB_010d5e44;
              if (&DAT_00000061 < pbVar36 + -0x1161) {
                uVar41 = (uint)pbVar36 & 0xffffff00;
                bVar49 = 0xd7ff < uVar41;
                pbVar9 = pbVar36;
                if (uVar41 != 0xd800) {
                  pbVar9 = pbVar36 + -1;
                  bVar49 = pbVar9 != (byte *)0x0;
                }
                if (bVar49 && (uVar41 != 0xd800 && pbVar9 != &DAT_00000001)) goto LAB_010d5e44;
              }
              local_35c = &DAT_00110000;
              bVar49 = true;
              local_314 = &DAT_00110000;
              pbVar9 = pbVar43;
            } while (pbVar42 != &DAT_00110000);
LAB_010d583c:
            local_314 = &DAT_00110000;
            pbVar47 = (byte *)FUN_010db1c4(auStack_3a8,pbVar47,pbVar36);
            iVar33 = local_30c;
            iVar6 = local_310;
            if (bVar49) {
              local_2e4 = local_30c;
              local_2f0 = (uint *)0x0;
              local_2f4 = 0;
              local_2f8 = 1;
              pbVar43 = pbVar47 + -0x1161;
              local_2e8 = local_310;
              if (pbVar43 < (byte *)0x9f) {
                if (&DAT_00000014 < pbVar43) {
                  if (((&DAT_0000001a < pbVar47 + -0x11a8) || ((byte *)0x2ba3 < pbVar9 + -0xac00))
                     || ((uint)(pbVar9 + -0xac00) % 0x1c != 0)) goto LAB_010d63f8;
                  pbVar43 = pbVar9 + (int)pbVar47 + -0x11a7;
                }
                else {
                  if (&DAT_00000012 < pbVar9 + -0x1100) goto LAB_010d63f8;
                  pbVar43 = (byte *)((int)(pbVar9 + -0x1100) * 0x24c + (int)pbVar43 * 0x1c + 0xac00)
                  ;
                }
              }
              else {
                pbVar43 = (byte *)FUN_010d3134(&local_2f8,pbVar9,pbVar47);
                if (pbVar43 == &DAT_00110000) {
LAB_010d63f8:
                  local_314 = pbVar47;
                  pbVar43 = pbVar9;
                  goto LAB_010d5e44;
                }
              }
            }
            else {
              pbVar43 = pbVar47;
            }
            goto LAB_010d58c0;
          }
          if (pbVar43 < (byte *)0x80) {
LAB_010d5eb8:
            local_3fc = 0;
            local_400 = 0;
            local_404 = 0;
            local_408 = 0;
            local_418[0] = *local_300;
            local_418[1] = local_300[1];
            local_418[2] = local_300[2];
            local_418[3] = local_300[3];
            if (((uint)local_418[((uint)pbVar43 & 0x7f) >> 5] >> ((uint)pbVar43 & 0x1f) & 1) == 0)
            goto LAB_010d5f04;
LAB_010d5f18:
            if (param_10 != 0) goto LAB_010d6dd4;
            pbVar43 = (byte *)0xfffd;
            local_3c5 = '\x01';
          }
          else {
LAB_010d5f04:
            if (pbVar43 == &DAT_0000002e) {
              bVar49 = false;
              goto LAB_010d5f70;
            }
            if (pbVar43 == (byte *)0xfffd) goto LAB_010d5f18;
          }
          uVar41 = *puVar44;
          if (uVar41 < 0xfe) {
            uVar34 = 0xfd;
            puVar15 = puVar44;
            puVar30 = local_424;
          }
          else {
            puVar15 = local_424;
            uVar34 = uVar41;
            uVar41 = *(uint *)(param_11 + 4);
            puVar30 = *(uint **)(param_11 + 8);
          }
          if (uVar41 == uVar34) {
            FUN_010da1f8(param_11);
            uVar41 = *(uint *)(param_11 + 4);
            puVar30 = *(uint **)(param_11 + 8);
            puVar15 = local_424;
          }
          puVar30[uVar41] = (uint)pbVar43;
        }
        else {
          bVar50 = local_35c == &DAT_00110000;
          local_35c = &DAT_00110000;
          if (bVar50) {
            bVar49 = true;
          }
          else {
            pbVar36 = local_358;
            pbVar47 = pbVar43;
            if (local_304 <= pbVar43 && &DAT_00000001 < local_358) {
              if ((((uint)ppbStack_354 & 1) != 0) || (local_358 < (byte *)0x10000))
              goto LAB_010d5818;
              if (((uint)local_358 & 0xffff) != 0) {
                if (((uint)local_358 & 0xffff) == 1) goto LAB_010d5818;
                bVar51 = (byte *)0xffffff73 < pbVar43 + -0x1ffc;
                bVar50 = pbVar43 == (byte *)0x1f70;
                if (!bVar51 || bVar50) {
                  bVar51 = (byte *)0xffffffcc < pbVar43 + -0xfb4f;
                  bVar50 = pbVar43 + -0xfb4f == (byte *)0xffffffcd;
                }
                if ((bVar51 && !bVar50) ||
                   (((uint)local_358 >> 0x10 & 0x7f) == 0x3c &&
                    0xfffffcff < ((uint)local_358 >> 0x10) - 0xc00)) goto LAB_010d5818;
              }
            }
            FUN_010dba18(&local_118,auStack_3a8);
            if (local_118 != &DAT_00110000) {
              if (local_118 < local_304) {
                local_35c = local_118;
                local_358 = local_114;
                ppbStack_354 = local_110;
              }
              else {
                if ((((uint)local_114 & 0xffffff00) == 0xd800) || (local_114 + -1 < &SUB_00000002))
                {
                  local_35c = local_118;
                  local_358 = local_114;
                  ppbStack_354 = local_110;
                  goto LAB_010d5818;
                }
                local_35c = local_118;
                local_358 = local_114;
                ppbStack_354 = local_110;
                if ((byte *)0xffffff9d < local_114 + -0x11c3) goto LAB_010d5818;
              }
            }
LAB_010d5e44:
            bVar49 = true;
            if (pbVar43 != &DAT_00110000) {
              if (pbVar43 < &DAT_00000080) goto LAB_010d5eb8;
              goto LAB_010d5f04;
            }
          }
LAB_010d5f70:
          uVar34 = *puVar44;
          puVar15 = local_424;
          uVar41 = uVar34;
          if (0xfd < uVar34) {
            uVar41 = *(uint *)(param_11 + 4);
            puVar15 = *(uint **)(param_11 + 8);
          }
          if (uVar41 < local_434) {
            puVar31 = &DAT_018856c8;
            goto LAB_010d7270;
          }
          if ((3 < uVar41 - local_434) &&
             (iVar6 = thunk_FUN_016dd50a("x",puVar15 + local_434,0x10), iVar6 == 0)) {
            puVar15 = local_424;
            uVar41 = uVar34;
            if (0xfd < uVar34) {
              uVar41 = *(uint *)(param_11 + 4);
              puVar15 = *(uint **)(param_11 + 8);
            }
            uVar45 = local_434 + 4;
            if (uVar41 < uVar45) {
              puVar31 = &DAT_018856d8;
              local_434 = uVar45;
              goto LAB_010d7270;
            }
            bVar50 = false;
            if (uVar41 != uVar45) {
              puVar15 = puVar15 + uVar45;
              if (param_10 == 0) {
                iVar6 = uVar41 * 4 + local_434 * -4 + -0x10;
                bVar50 = false;
                do {
                  if (0x7f < *puVar15) {
                    local_3c5 = '\x01';
                    *puVar15 = 0xfffd;
                    bVar50 = true;
                  }
                  iVar6 = iVar6 + -4;
                  puVar15 = puVar15 + 1;
                } while (iVar6 != 0);
                uVar34 = *puVar44;
              }
              else {
                iVar6 = uVar41 * 4 + local_434 * -4 + -0x10;
                do {
                  if (0x7f < *puVar15) goto LAB_010d6dd4;
                  puVar15 = puVar15 + 1;
                  iVar6 = iVar6 + -4;
                } while (iVar6 != 0);
              }
            }
            puVar30 = local_424;
            puVar15 = puVar44;
            if (0xfd < uVar34) {
              puVar30 = *(uint **)(param_11 + 8);
              puVar15 = local_424;
            }
            uVar41 = *puVar15;
            if (uVar41 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa464(&DAT_00419463,0x28,&DAT_018856e8);
            }
            if (puVar30[uVar41 - 1] == 0x2d) {
              if (param_10 != 0) goto LAB_010d6dd4;
              puVar30[uVar41 - 1] = 0xfffd;
              bVar50 = true;
              local_3c5 = '\x01';
            }
            uVar34 = *puVar44;
            uVar41 = uVar34;
            if (0xfd < uVar34) {
              uVar41 = *local_424;
            }
            if ((uVar41 - local_434) - 0x7d5 < 0xfffff82f) {
              if (param_10 != 0) goto LAB_010d6dd4;
              local_3c5 = '\x01';
              puVar15 = local_424;
              if (0xfd < uVar34) {
                uVar34 = *(uint *)(param_11 + 4);
                puVar15 = *(uint **)(param_11 + 8);
              }
              uVar41 = local_434 + 0x7d4;
              if (uVar34 <= uVar41) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(uVar41,uVar34,&DAT_01885718);
              }
              puVar15[uVar41] = 0xfffd;
              local_440 = 0;
              local_444 = 0;
            }
            else {
              local_440 = 0;
              local_444 = 0;
              if (!bVar50) {
                FUN_016dd606(&local_2f8,0,0x1e0);
                puVar15 = local_424;
                if (0xfd < uVar34) {
                  uVar34 = *(uint *)(param_11 + 4);
                  puVar15 = *(uint **)(param_11 + 8);
                }
                if (uVar34 < uVar45) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa36c(uVar45,uVar34,uVar34,&DAT_018856f8);
                }
                uVar41 = uVar34 - uVar45;
                puVar30 = puVar15 + uVar45;
                iVar6 = local_434 * 4 + uVar34 * -4 + 0x10;
                puVar15 = puVar15 + uVar34;
                uVar34 = uVar41;
                do {
                  uVar45 = uVar34;
                  puVar15 = puVar15 + -1;
                  puVar18 = puVar30;
                  if (iVar6 == 0) {
                    uVar34 = 0;
                    goto joined_r0x010d6428;
                  }
                  iVar6 = iVar6 + 4;
                  uVar34 = uVar45 - 1;
                } while (*puVar15 != 0x2d);
                if (uVar34 == 0) {
                  local_428 = puVar30 + uVar41;
                  uVar34 = 0;
LAB_010d6448:
                  uVar12 = 0;
                  uVar45 = 0x48;
                  local_43c = 0x80;
                  uVar41 = uVar34;
                  do {
                    uVar14 = *puVar18;
                    uVar40 = uVar14 - 0x30;
                    uVar7 = uVar14 - 0x61;
                    bVar50 = uVar40 == 10;
                    if (9 < uVar40) {
                      bVar50 = uVar7 == 0x19;
                    }
                    if ((9 < uVar40 && 0x18 < uVar7) && !bVar50) {
LAB_010d66a8:
                      if (param_10 != 0) {
                        *(undefined2 *)(param_1 + 1) = 0x100;
                        *param_1 = 0;
                        goto LAB_010d7244;
                      }
                      local_3c5 = '\x01';
                      uVar41 = *puVar44;
                      puVar15 = local_424;
                      if (0xfd < uVar41) {
                        uVar41 = *(uint *)(param_11 + 4);
                        puVar15 = *(uint **)(param_11 + 8);
                      }
                      if (uVar41 <= local_434) {
                    /* WARNING: Subroutine does not return */
                        FUN_00faa4a4(local_434,uVar41,&DAT_01885708);
                      }
                      puVar15[local_434] = 0xfffd;
                      local_440 = 0;
                      local_444 = local_440;
                      goto joined_r0x010d66fc;
                    }
                    if (uVar40 < 10) {
                      uVar7 = uVar14 - 0x16;
                    }
                    uVar35 = 1;
                    uVar40 = 0x24;
                    uVar14 = uVar12;
                    while( true ) {
                      puVar18 = puVar18 + 1;
                      uVar19 = (uint)((ulonglong)uVar35 * (ulonglong)uVar7);
                      if (((int)((ulonglong)uVar35 * (ulonglong)uVar7 >> 0x20) != 0) ||
                         (bVar50 = CARRY4(uVar19,uVar14), uVar14 = uVar19 + uVar14, bVar50))
                      goto LAB_010d66a8;
                      uVar19 = 0x1a;
                      if (uVar40 < uVar45 + 0x1a) {
                        uVar19 = uVar40 - uVar45;
                      }
                      if (uVar40 <= uVar45) {
                        uVar19 = 1;
                      }
                      if (uVar7 < uVar19) break;
                      lVar4 = (ulonglong)(0x24 - uVar19) * (ulonglong)uVar35;
                      uVar35 = (uint)lVar4;
                      if (((int)((ulonglong)lVar4 >> 0x20) != 0) || (puVar18 == local_428))
                      goto LAB_010d66a8;
                      uVar7 = *puVar18;
                      uVar40 = uVar40 + 0x24;
                      uVar19 = uVar7 - 0x61;
                      uVar38 = uVar7 - 0x30;
                      bVar50 = uVar38 == 10;
                      if (uVar38 < 10) {
                        uVar7 = uVar7 - 0x16;
                      }
                      else {
                        bVar50 = uVar19 == 0x19;
                        uVar7 = uVar19;
                      }
                      if ((uVar38 >= 10 && 0x18 < uVar19) && !bVar50) goto LAB_010d66a8;
                    }
                    bVar50 = 0xfffffffe < uVar41;
                    uVar41 = uVar41 + 1;
                    if (bVar50) {
                    /* WARNING: Subroutine does not return */
                      FUN_00faf2a4(&DAT_0188a318);
                    }
                    uVar16 = 2;
                    if (uVar12 == 0) {
                      uVar16 = 700;
                    }
                    iVar6 = FUN_018462e8(uVar14 - uVar12,uVar16);
                    iVar33 = FUN_018462e8(iVar6,uVar41);
                    uVar45 = iVar33 + iVar6;
                    iVar6 = 0;
                    if (uVar45 < 0x1c8) {
                      uVar12 = uVar45;
                    }
                    else {
                      do {
                        iVar6 = iVar6 + 0x24;
                        uVar12 = uVar45 / 0x23;
                        bVar50 = 0x3e57 < uVar45;
                        uVar45 = uVar12;
                      } while (bVar50);
                    }
                    iVar33 = FUN_018462e8(uVar12 * 0x24 & 0xffff,uVar12 + 0x26 & 0xffff);
                    uVar45 = FUN_018462e8(uVar14,uVar41);
                    bVar50 = CARRY4(uVar45,local_43c);
                    local_43c = uVar45 + local_43c;
                    if ((bVar50) || ((local_43c ^ 0xd800) - 0x110000 < 0xffef0800))
                    goto LAB_010d66a8;
                    uVar14 = uVar14 - uVar45 * uVar41;
                    puVar15 = puVar28;
                    uVar45 = local_11c;
                    if (0x3b < local_11c) {
                      puVar15 = local_2f0;
                      uVar45 = local_2f4;
                    }
                    if (uVar45 != 0) {
                      iVar8 = uVar45 << 3;
                      do {
                        if (uVar14 <= *puVar15) {
                          *puVar15 = *puVar15 + 1;
                        }
                        iVar8 = iVar8 + -8;
                        puVar15 = puVar15 + 2;
                      } while (iVar8 != 0);
                    }
                    if (local_11c < 0x3c) {
                      uVar45 = 0x3b;
                      puVar15 = &local_11c;
                      puVar10 = puVar28;
                      uVar7 = local_11c;
                    }
                    else {
                      uVar45 = local_11c;
                      puVar15 = puVar28;
                      puVar10 = local_2f0;
                      uVar7 = local_2f4;
                    }
                    if (uVar7 == uVar45) {
                      FUN_010da924(&local_2f8);
                      puVar15 = puVar28;
                      puVar10 = local_2f0;
                      uVar7 = local_2f4;
                    }
                    puVar10[uVar7 * 2] = uVar14;
                    uVar45 = iVar6 + iVar33;
                    uVar12 = uVar14 + 1;
                    (puVar10 + uVar7 * 2)[1] = local_43c;
                    *puVar15 = *puVar15 + 1;
                  } while (puVar18 != local_428);
                  if (local_11c < 0x3c) {
                    puVar15 = puVar28;
                    uVar41 = local_11c;
                  }
                  else {
                    puVar15 = local_2f0;
                    uVar41 = local_2f4;
                  }
                  if (1 < uVar41) {
                    if (uVar41 < 0x15) {
                      FUN_010dcef0();
                    }
                    else {
                      FUN_010e050c(puVar15);
                    }
                  }
                }
                else {
                  puVar18 = puVar30 + uVar45;
                  uVar41 = uVar41 - uVar45;
joined_r0x010d6428:
                  if (uVar41 != 0) {
                    local_428 = puVar18 + uVar41;
                    goto LAB_010d6448;
                  }
                }
                uVar45 = 0;
                puVar15 = local_2f0;
                uVar41 = local_2f4;
                if (local_11c < 0x3c) {
                  puVar15 = puVar28;
                  uVar41 = local_11c;
                }
                pbVar43 = &DAT_0000003b;
                local_118 = (byte *)0x0;
                local_28 = (byte *)0x0;
                ppbVar17 = &local_114;
                puVar18 = puVar30;
                ppbVar20 = &local_28;
                if (uVar41 + uVar34 < 0x3c) {
                  pbVar47 = (byte *)0x0;
                  goto LAB_010d672c;
                }
                iVar6 = LZCOUNT((uVar41 + uVar34) - 1);
                if (iVar6 == 0) {
LAB_010d7398:
                    /* WARNING: Subroutine does not return */
                  FUN_00faa464("capacity overflow",0x11,&DAT_0188b950);
                }
                iVar6 = FUN_010d974c(&local_118,(0xffffffffU >> iVar6) + 1);
                if (iVar6 != -0x7fffffff) {
                  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00600874();
                  }
                  goto LAB_010d7398;
                }
                if (local_28 < &DAT_0000003c) {
                  pbVar43 = &DAT_0000003b;
                  pbVar47 = local_28;
                  if (local_28 < &DAT_0000003b) goto LAB_010d672c;
                }
                else {
                  ppbVar17 = local_110;
                  pbVar43 = local_28;
                  ppbVar20 = &local_114;
                  pbVar47 = local_114;
                  if (local_114 < local_28) {
LAB_010d672c:
                    uVar7 = (int)pbVar43 - (int)pbVar47;
                    uVar45 = 0;
                    uVar12 = 0;
                    do {
                      if (uVar41 <= uVar45) {
                        if (puVar18 != puVar30 + uVar34) goto LAB_010d6790;
                        *ppbVar20 = pbVar47 + uVar12;
LAB_010d68ec:
                        pbVar43 = local_28;
                        uVar41 = *puVar44;
                        puVar15 = puVar44;
                        if (0xfd < uVar41) {
                          uVar41 = *local_424;
                          puVar15 = local_424;
                        }
                        if (local_434 < uVar41) {
                          *puVar15 = local_434;
                        }
                        ppbVar17 = &local_114;
                        pbVar47 = local_28;
                        if (&DAT_0000003b < local_28) {
                          ppbVar17 = local_110;
                          pbVar47 = local_114;
                        }
                        iVar6 = FUN_010d74fc(param_2,param_11,local_434,ppbVar17,pbVar47);
                        if (iVar6 != 0) {
                          *(undefined2 *)(param_1 + 1) = 0x100;
                          *param_1 = 0;
                          if (&DAT_0000003b < pbVar43) {
                            thunk_FUN_016d3fb4(local_110);
                          }
LAB_010d7244:
                          if (0x3b < local_11c) {
                            thunk_FUN_016d3fb4(local_2f0);
                          }
                          goto LAB_010d6de8;
                        }
                        if (&DAT_0000003b < pbVar43) {
                          thunk_FUN_016d3fb4(local_110);
                        }
                        local_440 = 1;
                        local_444 = local_440;
joined_r0x010d66fc:
                        if (0x3b < local_11c) {
                          thunk_FUN_016d3fb4(local_2f0);
                        }
                        local_440 = local_444;
                        goto LAB_010d5fbc;
                      }
                      if (uVar12 == puVar15[uVar45 * 2]) {
                        puVar10 = puVar15 + uVar45 * 2 + 1;
                        uVar45 = uVar45 + 1;
                      }
                      else {
                        if (puVar18 == puVar30 + uVar34) {
                          do {
                    /* WARNING: Do nothing block with infinite loop */
                          } while( true );
                        }
LAB_010d6790:
                        puVar10 = puVar18;
                        puVar18 = puVar18 + 1;
                      }
                      ppbVar17[(int)(pbVar47 + uVar12)] = (byte *)*puVar10;
                      uVar12 = uVar12 + 1;
                    } while (pbVar47 + (uVar12 - (int)pbVar43) != (byte *)0x0);
                    *ppbVar20 = pbVar43;
                    if (uVar41 <= uVar45) goto LAB_010d67b8;
                    goto LAB_010d67c4;
                  }
                }
                uVar7 = 0;
                *ppbVar20 = pbVar47;
                if (uVar41 == 0) goto LAB_010d67b8;
LAB_010d67c4:
                if (uVar7 != puVar15[uVar45 * 2]) {
                  puVar10 = puVar18;
                  if (puVar18 != puVar30 + uVar34) goto LAB_010d680c;
                  do {
                    /* WARNING: Do nothing block with infinite loop */
                  } while( true );
                }
                puVar10 = puVar15 + uVar45 * 2 + 1;
                uVar45 = uVar45 + 1;
                if (&DAT_0000003b < local_28) goto LAB_010d681c;
                do {
                  pbVar43 = local_28;
                  ppbVar17 = &local_114;
                  ppbVar20 = &local_28;
                  pbVar47 = &DAT_0000003b;
                  while( true ) {
                    pbVar36 = (byte *)*puVar10;
                    if (pbVar43 == pbVar47) {
                      FUN_010d990c(&local_118);
                      pbVar43 = local_114;
                      ppbVar17 = local_110;
                      ppbVar20 = &local_114;
                    }
                    ppbVar17[(int)pbVar43] = pbVar36;
                    uVar7 = uVar7 + 1;
                    *ppbVar20 = *ppbVar20 + 1;
                    if (uVar45 < uVar41) goto LAB_010d67c4;
LAB_010d67b8:
                    puVar10 = puVar18;
                    if (puVar18 == puVar30 + uVar34) goto LAB_010d68ec;
LAB_010d680c:
                    puVar18 = puVar10 + 1;
                    if (local_28 < &DAT_0000003c) break;
LAB_010d681c:
                    pbVar43 = local_114;
                    ppbVar17 = local_110;
                    ppbVar20 = &local_114;
                    pbVar47 = local_28;
                  }
                } while( true );
              }
            }
          }
LAB_010d5fbc:
          uVar41 = *puVar44;
          puVar15 = local_424;
          if (0xfd < uVar41) {
            uVar41 = *(uint *)(param_11 + 4);
            puVar15 = *(uint **)(param_11 + 8);
          }
          if (uVar41 < local_434) {
            puVar31 = &DAT_01885728;
LAB_010d7270:
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(local_434,uVar41,uVar41,puVar31);
          }
          iVar6 = FUN_010d8184(param_2,param_9,puVar15 + local_434,uVar41 - local_434,param_10,
                               &local_3c5,local_444,local_440);
          if (iVar6 != 0) {
LAB_010d6dd4:
            *(undefined2 *)(param_1 + 1) = 0x100;
            *param_1 = 0;
LAB_010d6de8:
            if (0x11 < local_360) {
              thunk_FUN_016d3fb4(local_3a0);
            }
            if (local_308 == 0) {
              return;
            }
            thunk_FUN_016d3fb4(local_310);
            return;
          }
          if (bVar49) goto LAB_010d6a10;
          uVar41 = *puVar44;
          if (uVar41 < 0xfe) {
            uVar45 = 0xfd;
            uVar34 = uVar41;
            puVar15 = local_424;
            puVar30 = puVar44;
          }
          else {
            uVar34 = *(uint *)(param_11 + 4);
            puVar15 = *(uint **)(param_11 + 8);
            puVar30 = local_424;
            uVar45 = uVar41;
          }
          if (uVar34 == uVar45) {
            FUN_010da1f8(param_11);
            uVar34 = *(uint *)(param_11 + 4);
            puVar15 = *(uint **)(param_11 + 8);
            puVar30 = local_424;
          }
          puVar15[uVar34] = 0x2e;
          *puVar30 = *puVar30 + 1;
          local_434 = *puVar44;
          if (0xfd < local_434) {
            local_434 = *local_424;
          }
          uVar41 = *puVar32;
          if (uVar41 < 9) {
            puVar15 = puVar32;
            puVar30 = puVar13;
            if (uVar41 == 8) goto LAB_010d60ac;
          }
          else {
            bVar49 = *(uint *)(param_12 + 4) == uVar41;
            puVar15 = puVar13;
            uVar41 = *(uint *)(param_12 + 4);
            puVar30 = *(uint **)(param_12 + 8);
            if (bVar49) {
LAB_010d60ac:
              FUN_010dab88(param_12);
              uVar41 = *(uint *)(param_12 + 4);
              puVar15 = puVar13;
              puVar30 = *(uint **)(param_12 + 8);
            }
          }
          puVar30[uVar41 * 3] = 2;
          local_440 = 1;
          local_444 = 1;
        }
        *puVar15 = *puVar15 + 1;
      } while( true );
    }
    if ((param_9 & 0xff) != 0) {
      uVar53 = FUN_010da8ec(param_11,local_434,&DAT_01885738);
      iVar6 = (int)(uVar53 >> 0x20);
      piVar11 = (int *)uVar53;
      if (iVar6 != 0) {
        if (*piVar11 == 0x2d) {
          if (param_10 != 0) goto LAB_010d71f4;
          *piVar11 = 0xfffd;
          local_3c5 = '\x01';
          piVar21 = piVar11 + iVar6 + -1;
          if (*piVar21 == 0x2d) goto LAB_010d6c00;
        }
        else {
          piVar21 = piVar11 + iVar6 + -1;
          if (*piVar21 == 0x2d) {
            if (param_10 != 0) goto LAB_010d71f4;
LAB_010d6c00:
            *piVar21 = 0xfffd;
            local_3c5 = '\x01';
          }
        }
        if ((((param_9 & 0xff) != 1) && (0x3ffffffff < uVar53)) && (piVar11[2] == 0x2d)) {
          if (param_10 == 0 && piVar11[3] == 0x2d) {
            piVar11[2] = 0xfffd;
            piVar11[3] = 0xfffd;
            local_3c5 = '\x01';
          }
          else if (piVar11[3] == 0x2d) goto LAB_010d71f4;
        }
      }
    }
    uVar41 = *puVar32;
    if (local_3c5 == '\0') {
      uVar45 = 0;
    }
    else {
      uVar45 = 2;
      param_13 = local_4b0;
      uVar34 = local_4ac;
    }
    if (uVar41 < 9) {
      uVar7 = 8;
      uVar12 = uVar41;
      puVar15 = puVar13;
      puVar30 = puVar32;
    }
    else {
      uVar12 = *(uint *)(param_12 + 4);
      puVar15 = *(uint **)(param_12 + 8);
      puVar30 = puVar13;
      uVar7 = uVar41;
    }
    if (uVar12 == uVar7) {
      FUN_010dab88(param_12);
      uVar12 = *(uint *)(param_12 + 4);
      puVar15 = *(uint **)(param_12 + 8);
      puVar30 = puVar13;
    }
    puVar15 = puVar15 + uVar12 * 3;
    *puVar15 = uVar45;
    puVar15[1] = (uint)param_13;
    puVar15[2] = uVar34;
    *puVar30 = *puVar30 + 1;
    local_4b0 = param_13;
    local_4ac = uVar34;
    goto joined_r0x010d6bdc;
  }
  uVar41 = *puVar32;
  if (uVar41 < 9) {
    uVar45 = 8;
    uVar34 = uVar41;
    puVar15 = puVar13;
    puVar30 = puVar32;
  }
  else {
    uVar34 = *(uint *)(param_12 + 4);
    puVar15 = *(uint **)(param_12 + 8);
    puVar30 = puVar13;
    uVar45 = uVar41;
  }
  if (uVar34 == uVar45) {
    FUN_010dab88(param_12);
    uVar34 = *(uint *)(param_12 + 4);
    puVar15 = *(uint **)(param_12 + 8);
    puVar30 = puVar13;
  }
  puVar15 = puVar15 + uVar34 * 3;
  *puVar15 = 0;
  puVar15[1] = (uint)param_13;
  puVar15[2] = 0;
  *puVar30 = *puVar30 + 1;
joined_r0x010d6bdc:
  bVar49 = false;
  iVar6 = 1;
  param_13 = local_45c;
  if (bVar48) goto LAB_010d6e50;
  goto LAB_010d502c;
LAB_010d5b8c:
  do {
    uVar45 = local_360;
    uVar12 = local_360;
    puVar15 = puVar29;
    if (0x11 < local_360) {
      uVar12 = auStack_3a8[1];
      puVar15 = local_3a0;
    }
    if (uVar12 <= uVar34) {
      pbVar47 = local_35c;
      pbVar36 = local_358;
      pbVar42 = local_314;
      if (0x11 < local_360) {
        uVar45 = auStack_3a8[1];
      }
      goto joined_r0x010d5d20;
    }
    uVar7 = puVar15[uVar34];
    uVar12 = uVar7 >> 0x18;
    if (uVar12 == 0) goto LAB_010d5e44;
    if (uVar41 == uVar12) {
      uVar34 = uVar34 + 1;
      goto LAB_010d5b8c;
    }
    local_2e8 = local_310;
    local_2f0 = (uint *)0x0;
    local_2f4 = 0;
    local_2e4 = local_30c;
    local_2f8 = 1;
    if (0xffff < (uVar7 & 0xffffff)) {
      uVar14 = FUN_010d2a9c(&local_2f8,((uVar7 & 0xffffff) >> 10) - 0x2840);
      if ((uVar14 | 2) != 3) break;
      uVar7 = uVar7 & 0x3ff | 0xffffdc00;
    }
    iVar6 = FUN_010d2a9c(&local_2f8,uVar7);
    if (iVar6 != 1) break;
    if (&DAT_0000ffff < pbVar43) {
      uVar7 = FUN_010d2a9c(&local_2f8,((uint)pbVar43 >> 10) - 0x2840);
      if ((uVar7 | 2) != 3) break;
      uVar52 = FUN_010d2a9c(&local_2f8,(uint)pbVar43 & 0x3ff | 0xffffdc00);
    }
    else {
      uVar52 = FUN_010d2a9c(&local_2f8,pbVar43);
    }
    pbVar47 = (byte *)((ulonglong)uVar52 >> 0x20);
    if ((((int)uVar52 != 2) || (((uint)pbVar47 ^ 0xd800) - 0x110000 < 0xffef0800)) ||
       (pbVar47 == &DAT_00110000)) break;
    puVar30 = &local_360;
    puVar15 = puVar29;
    if (0x11 < uVar45) {
      puVar30 = puVar29;
      puVar15 = local_3a0;
      uVar45 = auStack_3a8[1];
    }
    if (uVar45 <= uVar34) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00387c23,0x1d,&DAT_018857e8);
    }
    *puVar30 = uVar45 - 1;
    FUN_016dd52c(puVar15 + uVar34,puVar15 + uVar34 + 1,(uVar45 + ~uVar34) * 4);
    pbVar43 = pbVar47;
  } while( true );
  uVar34 = uVar34 + 1;
  uVar41 = uVar12;
  goto LAB_010d5b8c;
LAB_010d6a10:
  if (0x11 < local_360) {
    thunk_FUN_016d3fb4(local_3a0);
  }
  if (local_308 != 0) {
    thunk_FUN_016d3fb4(local_310);
  }
  goto joined_r0x010d6bdc;
LAB_010d6e50:
  uVar41 = *puVar44;
  uVar39 = 0;
  puVar13 = local_424;
  if (0xfd < uVar41) {
    uVar41 = *(uint *)(param_11 + 4);
    puVar13 = *(uint **)(param_11 + 8);
  }
  if (uVar41 != 0) {
    iVar22 = uVar41 << 2;
    iVar46 = param_2[0x31];
    do {
      uVar41 = *puVar13;
      if (0x58f < uVar41) {
        uVar34 = uVar41 - 0x11000;
        bVar49 = 0xd7ff < uVar34;
        if (bVar49) {
          uVar34 = uVar41 - 0xff00;
        }
        if (bVar49 && 0x8ff < uVar34) {
          uVar34 = uVar41 - 0x900;
          bVar49 = 0xf21c < uVar34;
          if (bVar49) {
            uVar34 = uVar41 - 0x1f000;
          }
          if ((bVar49 && 0x20fff < uVar34) &&
             (uVar41 = FUN_010dcd04(iVar46), (1 << (uVar41 & 0x1f) & 0x2022U) != 0)) {
            uVar41 = *puVar44;
            if (0xfd < uVar41) {
              uVar41 = *(uint *)(param_11 + 4);
              local_424 = *(uint **)(param_11 + 8);
            }
            cVar5 = local_3c5;
            goto LAB_010d6f20;
          }
        }
      }
      iVar22 = iVar22 + -4;
      puVar13 = puVar13 + 1;
    } while (iVar22 != 0);
  }
  goto LAB_010d72e0;
LAB_010d6f20:
  do {
    puVar13 = local_424;
    if (uVar41 == 0) break;
    iVar22 = uVar41 << 2;
    uVar34 = 0;
    do {
      uVar45 = local_424[uVar34];
      if (uVar45 == 0x2e) {
        uVar12 = uVar41 - (uVar34 + 1);
        local_424 = local_424 + uVar34 + 1;
        goto LAB_010d6f74;
      }
      uVar34 = uVar34 + 1;
      iVar22 = iVar22 + -4;
    } while (iVar22 != 0);
    uVar12 = 0;
    local_424 = (uint *)&DAT_00000004;
    uVar34 = uVar41;
LAB_010d6f74:
    if (uVar34 != 0) {
      uVar41 = FUN_010dcd04(iVar46,*puVar13);
      if ((1 << (uVar41 & 0x1f) & 0x2003U) == 0) {
        if (param_10 != 0) goto LAB_010d71f4;
        *puVar13 = 0xfffd;
        cVar5 = '\x01';
      }
      else {
        puVar28 = puVar13 + 1;
        iVar22 = uVar34 * 4 + -8;
        do {
          iVar6 = iVar22;
          uVar7 = uVar34 - 1;
          if (uVar7 == 0) goto joined_r0x010d7044;
          uVar14 = FUN_010dcd04(iVar46,puVar13[uVar34 - 1]);
          uVar40 = uVar14 & 0xff;
          iVar22 = iVar6 + -4;
          uVar34 = uVar7;
        } while (uVar40 == 0x11);
        uVar34 = 1 << (uVar14 & 0x1f);
        if ((uVar41 & 0xff) == 0) {
          if ((uVar34 & 5) == 0) {
            if (param_10 != 0) {
LAB_010d71f4:
              *(undefined2 *)(param_1 + 1) = 0x100;
              *param_1 = 0;
              return;
            }
            puVar13[uVar7] = 0xfffd;
            cVar5 = '\x01';
          }
          if (uVar7 * 4 != 4) {
            iVar22 = 0;
            do {
              uVar41 = FUN_010dcd04(iVar46,*(undefined4 *)((int)puVar28 + iVar22));
              if ((1 << (uVar41 & 0x1f) & 0x6045dU) == 0) {
                if (param_10 != 0) goto LAB_010d71f4;
                *(undefined4 *)((int)puVar28 + iVar22) = 0xfffd;
                cVar5 = '\x01';
              }
              iVar22 = iVar22 + 4;
            } while (iVar6 != iVar22);
          }
        }
        else {
          if ((uVar34 & 0x2026) == 0) {
            if (param_10 != 0) goto LAB_010d71f4;
            puVar13[uVar7] = 0xfffd;
            cVar5 = '\x01';
          }
          if (uVar7 * 4 != 4) {
            iVar22 = 0;
            do {
              uVar41 = FUN_010dcd04(iVar46,*puVar28);
              if ((1 << (uVar41 & 0x1f) & 0x6247eU) == 0) goto LAB_010d7190;
              uVar41 = uVar41 & 0xff;
              if (iVar22 == 0) {
                iVar22 = 0;
                if (uVar41 == 5) {
                  iVar22 = 2;
                }
                if (uVar41 == 2) {
                  iVar22 = 1;
                }
              }
              else if (iVar22 == 1) {
                iVar22 = 1;
                if (uVar41 == 5) goto LAB_010d7190;
              }
              else {
                iVar22 = 2;
                if (uVar41 == 2) {
LAB_010d7190:
                  if (param_10 != 0) goto LAB_010d71f4;
                  *puVar28 = 0xfffd;
                  cVar5 = '\x01';
                }
              }
              iVar6 = iVar6 + -4;
              puVar28 = puVar28 + 1;
            } while (iVar6 != 0);
            if ((uVar40 == 5 && iVar22 == 1) || (uVar40 == 2 && iVar22 == 2)) {
              if (param_10 != 0) goto LAB_010d71f4;
              puVar13[uVar7] = 0xfffd;
              cVar5 = '\x01';
            }
          }
        }
      }
    }
joined_r0x010d7044:
    uVar41 = uVar12;
  } while (uVar45 == 0x2e);
  local_3c5 = cVar5;
  uVar39 = 1;
LAB_010d72e0:
  *(char *)((int)param_1 + 5) = local_3c5;
  *(undefined1 *)(param_1 + 1) = uVar39;
  *param_1 = param_3;
  return;
}

