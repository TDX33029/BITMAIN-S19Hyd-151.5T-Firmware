// FUN_0078d5b0 @ 0078d5b0 size=4848 calls_out=30 calls_in=2
// strings: not an arpa address | not an arpa address | invalid arpa address | unrecognized in-addr.arpa. | ip6bpfseg6_localrplioam6 | unrecognized arpa address

void FUN_0078d5b0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  code *pcVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  byte bVar18;
  char cVar19;
  uint uVar20;
  undefined4 *puVar21;
  byte *pbVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  undefined4 uVar27;
  undefined *puVar28;
  undefined1 *puVar29;
  undefined4 uVar30;
  uint uVar31;
  undefined4 *puVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  int iVar35;
  uint uVar36;
  undefined4 uVar37;
  undefined8 uVar38;
  uint local_734;
  uint local_730;
  uint local_72c;
  int local_718;
  uint local_6f0 [4];
  undefined1 auStack_6e0 [80];
  undefined4 local_690;
  undefined4 uStack_68c;
  undefined4 uStack_688;
  undefined1 auStack_680 [104];
  uint local_618;
  byte *pbStack_614;
  uint uStack_610;
  undefined4 uStack_60c;
  undefined4 local_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined4 uStack_5f8;
  undefined4 local_5f4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined1 local_5d8;
  undefined4 local_5d0;
  undefined4 uStack_5cc;
  undefined4 uStack_5c8;
  undefined1 local_5c4;
  undefined1 local_5c1;
  undefined4 local_5c0;
  undefined1 auStack_5bc [12];
  uint *local_5b0;
  uint local_5ac;
  uint *local_5a8;
  int local_5a4;
  undefined4 local_5a0;
  undefined1 *puStack_59c;
  uint *puStack_598;
  int local_594;
  int local_590;
  int local_58c;
  undefined4 local_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 local_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  uint *local_4a0;
  undefined4 local_49c;
  uint *puStack_498;
  int local_494;
  undefined4 uStack_490;
  undefined1 *puStack_48c;
  uint *puStack_488;
  undefined1 local_480;
  undefined1 uStack_47f;
  ushort uStack_47e;
  ushort local_47c;
  undefined1 uStack_47a;
  undefined1 uStack_479;
  ushort uStack_478;
  ushort uStack_476;
  ushort local_474;
  ushort uStack_472;
  ushort local_470;
  char cStack_46e;
  undefined1 uStack_46d;
  undefined4 local_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined1 local_440;
  undefined4 local_43c;
  undefined2 local_438;
  undefined2 local_436;
  undefined4 local_398;
  byte *local_394;
  uint local_390;
  undefined4 uStack_38c;
  undefined4 local_388;
  undefined4 local_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 local_374;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined1 auStack_1f4 [76];
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined2 uStack_c4;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x10d)) {
  case 0:
    *(undefined1 *)(param_2 + 0x43) = 1;
    iVar26 = param_2[0x2f];
    FUN_01bed4e2(param_2 + 0x1c,param_2 + 0x30,0x4c);
    iVar35 = *(int *)(iVar26 + 0xd4);
    if (*(int *)(iVar35 + 0x14) == 0) {
      param_2[2] = &DAT_3b9aca00;
    }
    else {
      uVar12 = *(undefined1 *)(param_2 + 0x2c);
      sVar2 = *(short *)(param_2 + 0x1c);
      if (sVar2 != 1) {
        puVar32 = (undefined4 *)((uint)&local_398 | 4);
        uVar33 = param_2[0x32];
        uVar34 = param_2[0x33];
        uVar37 = param_2[0x34];
        *puVar32 = param_2[0x31];
        puVar32[1] = uVar33;
        puVar32[2] = uVar34;
        puVar32[3] = uVar37;
        uVar33 = param_2[0x36];
        uVar34 = param_2[0x37];
        uVar37 = param_2[0x38];
        puVar32[4] = param_2[0x35];
        puVar32[5] = uVar33;
        puVar32[6] = uVar34;
        puVar32[7] = uVar37;
        local_398._2_2_ = *(undefined2 *)((int)param_2 + 0x72);
      }
      else {
        FUN_015e8ad4((uint)&local_398 | 4,param_2[0x1e],param_2[0x1f]);
      }
      sVar3 = *(short *)(param_2 + 0x25);
      local_398 = CONCAT22(local_398._2_2_,(ushort)(sVar2 == 1));
      if (sVar3 != 1) {
        puVar32 = (undefined4 *)((uint)&local_480 | 4);
        uVar33 = param_2[0x27];
        uVar34 = param_2[0x28];
        uVar37 = param_2[0x29];
        uVar27 = param_2[0x2a];
        uVar30 = param_2[0x2b];
        *puVar32 = param_2[0x26];
        puVar32[1] = uVar33;
        puVar32[2] = uVar34;
        puVar32[3] = uVar37;
        puVar32[4] = uVar27;
        puVar32[5] = uVar30;
        uStack_47e = *(ushort *)((int)param_2 + 0x96);
      }
      else {
        FUN_015e8ad4((uint)&local_480 | 4,param_2[0x27],param_2[0x28]);
      }
      local_480 = sVar3 == 1;
      uStack_47f = 0;
      local_618 = local_398;
      pbStack_614 = local_394;
      uStack_610 = local_390;
      uStack_60c = uStack_38c;
      local_608 = local_388;
      uStack_604 = local_384;
      uStack_600 = uStack_380;
      uStack_5fc = uStack_37c;
      uStack_5f8 = uStack_378;
      local_5f4 = CONCAT22(uStack_47e,(ushort)(byte)local_480);
      uStack_5e0 = local_46c;
      uStack_5dc = uStack_468;
      uVar4 = *(ushort *)(param_2 + 0x2e);
      uVar5 = *(undefined2 *)((int)param_2 + 0xba);
      local_5d8 = 1;
      if (uVar4 < 2) {
        uVar13 = FUN_013fc3fc(*(undefined4 *)(iVar35 + 0x18),*(undefined4 *)(iVar35 + 0x1c),
                              *(undefined4 *)(iVar35 + 0x20),*(undefined4 *)(iVar35 + 0x24),
                              &local_618);
        uVar24 = uVar13 >> 0x19;
        uVar36 = *(uint *)(iVar35 + 0xc);
        iVar35 = *(int *)(iVar35 + 8);
        local_718 = 0;
        while( true ) {
          uVar13 = uVar36 & uVar13;
          uVar23 = *(uint *)(iVar35 + uVar13);
          uVar25 = uVar23 ^ uVar24 * 0x1010101;
          uVar25 = ~uVar25 & 0x80808080 & uVar25 + 0xfefefeff;
          while (uVar25 != 0) {
            uVar20 = uVar13 + ((uint)LZCOUNT(uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 |
                                             (uVar25 >> 0x10 & 0xff) << 8 | uVar25 >> 0x18) >> 3) &
                     uVar36;
            iVar14 = FUN_013cad2c(&local_618,uVar20 * -0x118 + iVar35 + -0x118);
            uVar25 = uVar25 - 1 & uVar25;
            if (iVar14 != 0) {
              iVar35 = uVar20 * -0x118 + iVar35;
              if (uVar4 == 0) {
                puVar32 = (undefined4 *)(iVar35 + -0xd0);
              }
              else {
                if (uVar4 != 1) goto LAB_0078d8fc;
                puVar32 = (undefined4 *)(iVar35 + -0x68);
              }
              puVar29 = (undefined1 *)puVar32[2];
              if (puVar29 == &DAT_3b9aca00) {
                param_2[2] = &DAT_3b9aca00;
              }
              else {
                sVar2 = *(short *)(puVar32 + 6);
                uVar12 = *(undefined1 *)(puVar32 + 0x16);
                if (sVar2 != 1) {
                  puVar21 = (undefined4 *)((uint)&local_480 | 4);
                  uVar33 = puVar32[8];
                  uVar34 = puVar32[9];
                  uVar37 = puVar32[10];
                  *puVar21 = puVar32[7];
                  puVar21[1] = uVar33;
                  puVar21[2] = uVar34;
                  puVar21[3] = uVar37;
                  uVar33 = puVar32[0xc];
                  uVar34 = puVar32[0xd];
                  uVar37 = puVar32[0xe];
                  puVar21[4] = puVar32[0xb];
                  puVar21[5] = uVar33;
                  puVar21[6] = uVar34;
                  puVar21[7] = uVar37;
                  uStack_47e = *(ushort *)((int)puVar32 + 0x1a);
                }
                else {
                  FUN_015e8ad4((uint)&local_480 | 4,puVar32[8],puVar32[9]);
                }
                local_480 = sVar2 == 1;
                uStack_47f = 0;
                sVar2 = *(short *)(puVar32 + 0xf);
                if (sVar2 != 1) {
                  puVar21 = (undefined4 *)((uint)&local_588 | 4);
                  uVar33 = puVar32[0x11];
                  uVar34 = puVar32[0x12];
                  uVar37 = puVar32[0x13];
                  uVar27 = puVar32[0x14];
                  uVar30 = puVar32[0x15];
                  *puVar21 = puVar32[0x10];
                  puVar21[1] = uVar33;
                  puVar21[2] = uVar34;
                  puVar21[3] = uVar37;
                  puVar21[4] = uVar27;
                  puVar21[5] = uVar30;
                  local_588._2_2_ = *(undefined2 *)((int)puVar32 + 0x3e);
                }
                else {
                  FUN_015e8ad4((uint)&local_588 | 4,puVar32[0x11],puVar32[0x12]);
                }
                local_588 = CONCAT22(local_588._2_2_,(ushort)(sVar2 == 1));
                local_398 = CONCAT22(uStack_47e,CONCAT11(uStack_47f,local_480));
                local_394 = (byte *)CONCAT13(uStack_479,CONCAT12(uStack_47a,local_47c));
                local_390 = CONCAT22(uStack_476,uStack_478);
                uStack_38c = CONCAT22(uStack_472,local_474);
                local_388 = CONCAT13(uStack_46d,CONCAT12(cStack_46e,local_470));
                local_384 = local_46c;
                uStack_380 = uStack_468;
                uStack_37c = uStack_464;
                uStack_378 = uStack_460;
                local_374 = local_588;
                local_370 = uStack_584;
                uStack_36c = uStack_580;
                local_368 = local_57c;
                uStack_364 = uStack_578;
                uStack_360 = uStack_574;
                uStack_35c = uStack_570;
                uVar5 = *(undefined2 *)((int)puVar32 + 0x5e);
                piVar15 = (int *)puVar32[4];
                uVar6 = *(undefined2 *)(puVar32 + 0x17);
                uVar7 = *(undefined2 *)((int)puVar32 + 0x62);
                uVar8 = *(undefined2 *)(puVar32 + 0x18);
                do {
                  iVar35 = *piVar15;
                  bVar9 = (bool)hasExclusiveAccess(piVar15);
                } while (!bVar9);
                *piVar15 = iVar35 + 1;
                if (iVar35 < 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)software_udf(0xfdee,0x78e8b8);
                  (*pcVar1)();
                }
                uVar37 = *puVar32;
                uVar34 = puVar32[1];
                uVar33 = puVar32[5];
                param_2[6] = local_398;
                param_2[7] = local_394;
                param_2[8] = local_390;
                param_2[9] = uStack_38c;
                param_2[10] = local_388;
                param_2[0xb] = local_46c;
                param_2[0xc] = uStack_468;
                param_2[0xd] = uStack_464;
                param_2[0xe] = uStack_460;
                param_2[0xf] = local_588;
                param_2[0x10] = uStack_584;
                param_2[0x11] = uStack_580;
                param_2[0x12] = local_57c;
                param_2[0x13] = uStack_578;
                param_2[0x14] = uStack_574;
                param_2[0x15] = uStack_570;
                *(undefined2 *)((int)param_2 + 0x62) = uVar7;
                *(undefined2 *)(param_2 + 0x18) = uVar8;
                param_2[4] = piVar15;
                *(undefined2 *)((int)param_2 + 0x5e) = uVar5;
                *(undefined2 *)(param_2 + 0x17) = uVar6;
                *(undefined1 *)(param_2 + 0x16) = uVar12;
                param_2[5] = uVar33;
                *param_2 = uVar37;
                param_2[1] = uVar34;
                param_2[2] = puVar29;
              }
              goto LAB_0078db10;
            }
          }
          if ((uVar23 & 0x80808080 & uVar23 << 1) != 0) break;
          local_718 = local_718 + 4;
          uVar13 = uVar13 + local_718;
        }
        goto LAB_0078dba8;
      }
      if (uVar4 == 0x1a) {
        if ((byte)local_480 == 1) {
          uVar11 = (undefined1)local_474;
        }
        else {
          uVar11 = (undefined1)uStack_47e;
        }
        local_49c = (uint)CONCAT21(local_49c._2_2_,uVar11) << 8;
        local_4a0 = &local_618;
        uVar38 = FUN_013c884c(&local_4a0);
        if ((int)uVar38 == 0) {
          local_390 = 0x13;
          local_394 = (byte *)0x471f83;
          local_398 = CONCAT22(local_398._2_2_,0x10);
          uVar33 = FUN_013e649c(&local_398);
        }
        else {
          FUN_012fbd94(&local_398,(int)uVar38,(int)((ulonglong)uVar38 >> 0x20));
          if (local_398 == 1) {
            uVar33 = FUN_013e9378(local_394);
          }
          else {
            if (local_390 == 4) {
              iVar14 = 0;
LAB_0078db34:
              if (iVar14 != 4) goto code_r0x0078db3c;
              uVar38 = FUN_013c884c(&local_4a0);
              if ((int)uVar38 == 0) {
                local_390 = 0x14;
                local_394 = (byte *)0x47200c;
                local_398 = CONCAT22(local_398._2_2_,0x10);
                uVar33 = FUN_013e649c(&local_398);
                goto LAB_0078db94;
              }
              FUN_012fbd94(&local_398,(int)uVar38,(int)((ulonglong)uVar38 >> 0x20));
              uVar24 = local_390;
              pbVar22 = local_394;
              if (local_398 == 1) {
                uVar33 = FUN_013e9378(local_394,local_390);
                goto LAB_0078db94;
              }
              uVar33 = 0;
              if ((int)local_390 < 0) {
LAB_0078ddac:
                    /* WARNING: Subroutine does not return */
                FUN_00664620(uVar33,uVar24);
              }
              if (local_390 == 0) {
                iVar14 = 1;
                FUN_01bed4e2(1,local_394,0);
                uVar24 = 0;
                goto LAB_0078e030;
              }
              iVar14 = FUN_01298504(local_390,1);
              uVar33 = 1;
              if (iVar14 == 0) goto LAB_0078ddac;
              FUN_01bed4e2(iVar14,pbVar22,uVar24);
              uVar13 = 0;
              do {
                bVar18 = *(byte *)(iVar14 + uVar13);
                if (bVar18 - 0x41 < 0x1a) {
                  bVar18 = bVar18 | 0x20;
                }
                *(byte *)(iVar14 + uVar13) = bVar18;
                uVar13 = uVar13 + 1;
              } while (uVar24 != uVar13);
              if (uVar24 == 3) {
                iVar16 = thunk_FUN_01bed842(iVar14,"ip6bpfseg6_localrplioam6",3);
                if (iVar16 != 0) goto LAB_0078e030;
                uVar13 = 0;
                local_734 = 0;
                local_730 = 0;
                uVar36 = 0;
                local_72c = 0;
LAB_0078e0bc:
                cVar19 = (char)uVar13;
                uVar38 = FUN_013c884c(&local_4a0);
                if ((int)uVar38 == 0) {
LAB_0078e2a0:
                  iVar16 = FUN_013c884c(&local_4a0);
                  if (iVar16 == 0) {
                    bVar9 = true;
                    local_470 = (ushort)((local_734 << 0x18) >> 0x10) |
                                (ushort)(local_734 >> 8) & 0xff;
                    uStack_472 = (ushort)((local_734 >> 0x10 & 0xff) << 8) |
                                 (ushort)(byte)(local_734 >> 0x18);
                    uStack_47f = 1;
                    local_474 = (ushort)((local_72c << 0x18) >> 0x10) |
                                (ushort)(local_72c >> 8) & 0xff;
                    uStack_476 = (ushort)((local_72c >> 0x10 & 0xff) << 8) |
                                 (ushort)(byte)(local_72c >> 0x18);
                    uStack_478 = (ushort)((local_730 << 0x18) >> 0x10) |
                                 (ushort)(local_730 >> 8) & 0xff;
                    uStack_47a = (undefined1)(local_730 >> 0x18);
                    uStack_479 = (undefined1)(local_730 >> 0x10);
                    local_47c = (ushort)((uVar36 << 0x18) >> 0x10) | (ushort)(uVar36 >> 8) & 0xff;
                    uStack_47e = (ushort)((uVar36 >> 0x10 & 0xff) << 8) |
                                 (ushort)(byte)(uVar36 >> 0x18);
                    cStack_46e = cVar19;
                    goto LAB_0078e424;
                  }
                  local_390 = 0x16;
                  local_394 = (byte *)0x471faf;
                  local_398 = CONCAT22(local_398._2_2_,0x10);
                  uVar33 = FUN_013e649c(&local_398);
LAB_0078e05c:
                  local_47c = (ushort)uVar33;
                  uStack_47a = (undefined1)((uint)uVar33 >> 0x10);
                  uStack_479 = (undefined1)((uint)uVar33 >> 0x18);
                  goto LAB_0078e068;
                }
                if ((int)((ulonglong)uVar38 >> 0x20) != 1) {
                  local_390 = 0x21;
                  local_394 = (byte *)0x471fc5;
                  local_398 = CONCAT22(local_398._2_2_,0x10);
                  uVar33 = FUN_013e649c(&local_398);
                  goto LAB_0078e05c;
                }
                FUN_012fbd94(&local_398,(int)uVar38,1);
                if (local_398 != 0) {
                  uVar33 = FUN_013e9378(local_394);
                  goto LAB_0078e330;
                }
                if (local_390 == 1) goto LAB_0078e124;
                if (local_390 != 0) {
                  bVar18 = *local_394;
                  goto LAB_0078e140;
                }
                uVar33 = 0;
                goto LAB_0078e31c;
              }
              if ((uVar24 != 7) ||
                 (iVar16 = thunk_FUN_01bed842(iVar14,&DAT_00473f60,7), iVar16 != 0)) {
LAB_0078e030:
                local_390 = 0x19;
                local_394 = (byte *)0x471f96;
                local_398 = CONCAT22(local_398._2_2_,0x10);
                uVar33 = FUN_013e649c(&local_398);
                goto LAB_0078e05c;
              }
              uVar13 = 0;
              local_5b0 = (uint *)0x0;
              iVar16 = 0;
LAB_0078de58:
              uVar38 = FUN_013c884c(&local_4a0);
              if ((int)uVar38 == 0) {
LAB_0078df9c:
                iVar16 = FUN_013c884c(&local_4a0);
                if (iVar16 != 0) {
                  local_390 = 0x1a;
                  local_394 = (byte *)0x471ff2;
                  local_398 = CONCAT22(local_398._2_2_,0x10);
                  uVar33 = FUN_013e649c(&local_398);
                  goto LAB_0078e330;
                }
                if (0x20 < uVar13) {
                    /* WARNING: Subroutine does not return */
                  FUN_013073dc("Ipv4Net::new",0xc,&local_398,&DAT_01cf1f6c,&DAT_01cf1f4c);
                }
                uStack_47e = (ushort)local_5b0;
                local_47c = (ushort)((uint)local_5b0 >> 0x10);
                bVar9 = false;
                uStack_47a = (undefined1)uVar13;
                uStack_47f = 0;
LAB_0078e424:
                local_480 = 0;
                FUN_019bb7e0(uVar24,iVar14);
                uVar33 = CONCAT22(local_47c,uStack_47e);
                FUN_01bed4e2(&local_588,&uStack_47a,0xd);
                local_5d0 = local_588;
                uStack_5cc = uStack_584;
                uStack_5c8 = uStack_580;
                puStack_59c = &local_5c1;
                local_5c4 = (undefined1)local_57c;
                if (bVar9) {
                  FUN_01bed4e2(auStack_5bc,&local_5d0,0xc);
                }
                local_5b0 = *(uint **)(iVar35 + 8);
                local_5a0 = *(undefined4 *)(iVar35 + 0x14);
                local_5a4 = (int)local_5b0 + *(int *)(iVar35 + 0xc) + 1;
                local_5a8 = local_5b0 + 1;
                local_5ac = ~*local_5b0 & 0x80808080;
                local_5c1 = bVar9;
                local_5c0 = uVar33;
                puStack_598 = &local_618;
                FUN_014090dc(&local_588,&local_5b0);
                if ((short)local_588 == 2) {
                  iVar35 = 4;
                  iVar16 = 0;
                  iVar14 = 0;
                }
                else {
                  FUN_01bed4e2(&local_398,&local_588,0xe8);
                  iVar35 = thunk_FUN_01be5118(0x3a0);
                  if (iVar35 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00664620(4,0x3a0);
                  }
                  FUN_01bed4e2(iVar35,&local_588,0xe8);
                  local_594 = 4;
                  local_58c = 1;
                  local_4a0 = local_5b0;
                  local_49c = local_5ac;
                  puStack_498 = local_5a8;
                  local_494 = local_5a4;
                  uStack_490 = local_5a0;
                  puStack_48c = puStack_59c;
                  puStack_488 = puStack_598;
                  iVar14 = 0xe8;
                  local_590 = iVar35;
                  while (iVar16 = local_58c, FUN_014090dc(&local_480,&local_4a0),
                        CONCAT11(uStack_47f,local_480) != 2) {
                    FUN_01bed4e2(&local_398,&local_480,0xe8);
                    if (iVar16 == local_594) {
                      FUN_01af7b44(&local_594,iVar16,1,4,0xe8);
                      iVar35 = local_590;
                    }
                    FUN_01bed4e2(iVar35 + iVar14,&local_480,0xe8);
                    local_58c = iVar16 + 1;
                    iVar14 = iVar14 + 0xe8;
                  }
                  iVar14 = local_594;
                }
                uVar38 = FUN_013cf100(iVar16 * 0xe8,iVar16);
                iVar17 = (int)((ulonglong)uVar38 >> 0x20);
                piVar15 = (int *)uVar38;
                FUN_01bed4e2(piVar15 + 2,iVar35,iVar16 * 0xe8);
                FUN_013dd8c8(iVar35,0);
                FUN_013e6414(iVar14,iVar35,4,0xe8);
                if (iVar17 == 0) {
                  param_2[2] = &DAT_3b9aca00;
                  DataMemoryBarrier(0xb);
                  do {
                    iVar35 = *piVar15;
                    bVar9 = (bool)hasExclusiveAccess(piVar15);
                  } while (!bVar9);
                  *piVar15 = iVar35 + -1;
                  if (iVar35 == 1) {
                    DataMemoryBarrier(0xb);
                    FUN_013cdd5c(piVar15,0);
                  }
                  goto LAB_0078dbb4;
                }
                if (sVar2 == 0) {
                  puVar32 = (undefined4 *)((uint)&local_480 | 4);
                  uVar33 = param_2[0x1e];
                  uVar34 = param_2[0x1f];
                  uVar37 = param_2[0x20];
                  *puVar32 = param_2[0x1d];
                  puVar32[1] = uVar33;
                  puVar32[2] = uVar34;
                  puVar32[3] = uVar37;
                  uVar33 = param_2[0x22];
                  uVar34 = param_2[0x23];
                  uVar37 = param_2[0x24];
                  puVar32[4] = param_2[0x21];
                  puVar32[5] = uVar33;
                  puVar32[6] = uVar34;
                  puVar32[7] = uVar37;
                  uStack_47e = *(ushort *)((int)param_2 + 0x72);
                }
                else {
                  FUN_015e8ad4((uint)&local_480 | 4,param_2[0x1e],param_2[0x1f]);
                }
                local_480 = sVar2 != 0;
                uStack_47f = 0;
                if (sVar3 == 0) {
                  puVar32 = (undefined4 *)((uint)&local_588 | 4);
                  uVar33 = param_2[0x27];
                  uVar34 = param_2[0x28];
                  uVar37 = param_2[0x29];
                  uVar27 = param_2[0x2a];
                  uVar30 = param_2[0x2b];
                  *puVar32 = param_2[0x26];
                  puVar32[1] = uVar33;
                  puVar32[2] = uVar34;
                  puVar32[3] = uVar37;
                  puVar32[4] = uVar27;
                  puVar32[5] = uVar30;
                  local_588._2_2_ = *(undefined2 *)((int)param_2 + 0x96);
                }
                else {
                  FUN_015e8ad4((uint)&local_588 | 4,param_2[0x27],param_2[0x28]);
                }
                local_588 = CONCAT22(local_588._2_2_,(ushort)(sVar3 != 0));
                local_398 = CONCAT22(uStack_47e,CONCAT11(uStack_47f,local_480));
                local_394 = (byte *)CONCAT13(uStack_479,CONCAT12(uStack_47a,local_47c));
                local_390 = CONCAT22(uStack_476,uStack_478);
                uStack_38c = CONCAT22(uStack_472,local_474);
                local_388 = CONCAT13(uStack_46d,CONCAT12(cStack_46e,local_470));
                local_384 = local_46c;
                uStack_380 = uStack_468;
                uStack_37c = uStack_464;
                uStack_378 = uStack_460;
                local_374 = local_588;
                local_370 = uStack_584;
                uStack_36c = uStack_580;
                local_368 = local_57c;
                uStack_364 = uStack_578;
                uStack_360 = uStack_574;
                uStack_35c = uStack_570;
                local_43c = param_2[0x2d];
                uStack_45c = local_588;
                local_458 = uStack_584;
                uStack_454 = uStack_580;
                uStack_450 = local_57c;
                uStack_44c = uStack_578;
                uStack_448 = uStack_574;
                uStack_444 = uStack_570;
                local_438 = 0x1a;
                local_440 = uVar12;
                local_436 = uVar5;
                FUN_014059bc(&local_398,&local_480,piVar15,iVar17);
                FUN_01bed4e2(param_2,&local_398,0x68);
                goto LAB_0078db10;
              }
              FUN_012fbd94(&local_398,(int)uVar38,(int)((ulonglong)uVar38 >> 0x20));
              if (local_398 != 0) {
                uVar33 = FUN_013e9378(local_394);
                goto LAB_0078e330;
              }
              if (local_390 == 1) goto LAB_0078deb4;
              if (local_390 != 0) {
                bVar18 = *local_394;
                goto LAB_0078ded0;
              }
              uVar33 = 0;
              goto LAB_0078e300;
            }
LAB_0078db68:
            local_390 = 0x13;
            local_394 = (byte *)0x471f83;
            local_398 = CONCAT22(local_398._2_2_,0x10);
            uVar33 = FUN_013e649c(&local_398);
          }
        }
LAB_0078db94:
        local_47c = (ushort)uVar33;
        uStack_47a = (undefined1)((uint)uVar33 >> 0x10);
        uStack_479 = (undefined1)((uint)uVar33 >> 0x18);
        local_480 = 1;
        goto LAB_0078dba0;
      }
LAB_0078d8fc:
      param_2[2] = &DAT_3b9aca00;
LAB_0078db10:
      FUN_0079217c(&local_618);
    }
    goto LAB_0078dbc0;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c08f0c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c08f0c);
  case 3:
    iVar26 = param_2[0x1a];
    puVar28 = (undefined *)param_2[0x1b];
  }
LAB_0078dc90:
  (**(code **)(puVar28 + 0xc))(&local_398,iVar26,param_3);
  if (local_390 == 0x3b9aca01) {
    *(undefined4 *)(param_1 + 8) = 0x3b9aca01;
    uVar12 = 3;
    goto LAB_0078dd18;
  }
  FUN_01bed4e2(auStack_680,&local_398,0x68);
  FUN_00fe4378(param_2[0x1a],param_2[0x1b]);
  goto LAB_0078dce8;
code_r0x0078db3c:
  uVar24 = (uint)local_394[iVar14];
  uVar13 = (uint)(byte)(&DAT_0056cd10)[iVar14];
  iVar14 = iVar14 + 1;
  if (uVar24 - 0x41 < 0x1a) {
    uVar24 = uVar24 | 0x20;
  }
  if (uVar13 - 0x41 < 0x1a) {
    uVar13 = uVar13 | 0x20;
  }
  if (uVar13 != uVar24) goto LAB_0078db68;
  goto LAB_0078db34;
LAB_0078e124:
  bVar18 = *local_394;
  uVar33 = 1;
  if ((bVar18 == 0x2b) || (bVar18 == 0x2d)) goto LAB_0078e31c;
LAB_0078e140:
  uVar23 = local_390;
  pbVar22 = local_394;
  if (bVar18 == 0x2b) {
    pbVar22 = local_394 + 1;
    uVar23 = local_390 - 1;
  }
  if (uVar23 < 3) {
    if (uVar23 == 0) {
      uVar25 = 0;
    }
    else {
      bVar9 = uVar23 == 1;
      uVar25 = 0;
      do {
        uVar20 = (uint)*pbVar22;
        uVar23 = uVar20 - 0x30;
        if (0x39 < uVar20) {
          uVar23 = (uVar20 - 0x41 & 0xffffffdf) + 10;
        }
        if (0xf < uVar23) goto LAB_0078e318;
        uVar25 = uVar23 | uVar25 << 4;
        pbVar22 = pbVar22 + 1;
        bVar10 = !bVar9;
        bVar9 = true;
      } while (bVar10);
    }
  }
  else {
    uVar25 = 0;
    do {
      uVar31 = (uint)*pbVar22;
      uVar20 = uVar31 - 0x30;
      if (0xf < (uVar25 & 0xff)) {
        if (0x39 < uVar31) {
          uVar20 = (uVar31 - 0x41 & 0xffffffde) + 10;
        }
        uVar33 = 1;
        if (uVar20 < 0x10) {
          uVar33 = 2;
        }
        goto LAB_0078e31c;
      }
      if (0x39 < uVar31) {
        uVar20 = (uVar31 - 0x41 & 0xffffffdf) + 10;
      }
      if (0xf < uVar20) goto LAB_0078e318;
      uVar25 = uVar20 | uVar25 << 4;
      pbVar22 = pbVar22 + 1;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
  }
  local_6f0[0] = uVar25 & 0xff;
  uVar23 = 0x7c - uVar13;
  local_6f0[3] = 0;
  local_6f0[2] = 0;
  local_6f0[1] = 0;
  uVar13 = (uint)(char)(cVar19 + '\x04');
  uVar25 = uVar23 & 0x1f;
  iVar16 = -(uVar23 >> 3 & 0xc);
  uVar31 = *(uint *)((int)local_6f0 + iVar16 + 4);
  uVar20 = *(uint *)((int)local_6f0 + iVar16 + 8);
  uVar23 = uVar25 ^ 0x1f;
  local_72c = uVar31 << uVar25 | (*(uint *)((int)local_6f0 + iVar16) >> 1) >> uVar23 | local_72c;
  uVar36 = *(int *)((int)local_6f0 + iVar16 + 0xc) << uVar25 | (uVar20 >> 1) >> uVar23 | uVar36;
  local_730 = uVar20 << uVar25 | (uVar31 >> 1) >> uVar23 | local_730;
  local_734 = local_734 | *(uint *)((int)local_6f0 + iVar16) << uVar25;
  if (0x7fffffff < uVar13) {
    cVar19 = -0x80;
    goto LAB_0078e2a0;
  }
  goto LAB_0078e0bc;
LAB_0078e318:
  uVar33 = 1;
LAB_0078e31c:
  uVar33 = FUN_013e9310(uVar33);
  goto LAB_0078e330;
LAB_0078deb4:
  bVar18 = *local_394;
  uVar33 = 1;
  if ((bVar18 == 0x2b) || (bVar18 == 0x2d)) goto LAB_0078e300;
LAB_0078ded0:
  uVar36 = local_390;
  pbVar22 = local_394;
  if (bVar18 == 0x2b) {
    pbVar22 = local_394 + 1;
    uVar36 = local_390 - 1;
  }
  if (uVar36 < 3) {
    if (uVar36 == 0) {
      uVar11 = 0;
    }
    else {
      bVar9 = uVar36 == 1;
      iVar17 = 0;
      do {
        bVar18 = *pbVar22;
        if (9 < bVar18 - 0x30) goto LAB_0078e2fc;
        pbVar22 = pbVar22 + 1;
        bVar10 = !bVar9;
        bVar9 = true;
        iVar17 = (bVar18 - 0x30) + iVar17 * 10;
        uVar11 = (undefined1)iVar17;
      } while (bVar10);
    }
  }
  else {
    uVar23 = 0;
    while (uVar11 = (undefined1)uVar23, uVar36 != 0) {
      uVar23 = (uVar23 & 0xff) * 4 + (uVar23 & 0xff);
      if (uVar23 >> 7 != 0) {
        uVar33 = 1;
        if (*pbVar22 - 0x30 < 10) {
          uVar33 = 2;
        }
        goto LAB_0078e300;
      }
      uVar25 = *pbVar22 - 0x30;
      if (9 < uVar25) goto LAB_0078e2fc;
      uVar36 = uVar36 - 1;
      uVar23 = (uVar23 * 2 & 0xff) + (uVar25 & 0xff);
      pbVar22 = pbVar22 + 1;
      if ((uVar23 & 0xffffff00) != 0) {
        uVar33 = 2;
        goto LAB_0078e300;
      }
    }
  }
  iVar17 = iVar16 + 1;
  uVar13 = uVar13 + 8;
  auStack_5bc[iVar16 + 0xc] = uVar11;
  iVar16 = iVar17;
  if (iVar17 == 4) {
    uVar13 = 0x20;
    goto LAB_0078df9c;
  }
  goto LAB_0078de58;
LAB_0078e2fc:
  uVar33 = 1;
LAB_0078e300:
  uVar33 = FUN_013e9310(uVar33);
LAB_0078e330:
  local_47c = (ushort)uVar33;
  uStack_47a = (undefined1)((uint)uVar33 >> 0x10);
  uStack_479 = (undefined1)((uint)uVar33 >> 0x18);
LAB_0078e068:
  local_480 = 1;
  FUN_019bb7e0(uVar24,iVar14);
LAB_0078dba0:
  FUN_013f476c(&local_47c);
LAB_0078dba8:
  param_2[2] = &DAT_3b9aca00;
LAB_0078dbb4:
  FUN_0079217c(&local_618);
LAB_0078dbc0:
  if ((undefined1 *)param_2[2] == &DAT_3b9aca00) {
    *(undefined1 *)(param_2 + 0x43) = 0;
    FUN_01bed4e2(auStack_6e0,param_2 + 0x1c,0x4c);
    local_690 = *(undefined4 *)(iVar26 + 200);
    uStack_68c = *(undefined4 *)(iVar26 + 0xcc);
    uStack_688 = *(undefined4 *)(iVar26 + 0xd0);
    FUN_0077ba44(&local_480);
    FUN_01bed4e2(&local_390,&local_480,200);
    local_1fc = 4;
    local_394 = (byte *)0x0;
    local_398 = 0;
    local_1f8 = 0;
    local_200 = 0;
    FUN_01bed4e2(auStack_1f4,auStack_6e0,0x4c);
    local_1a8 = local_690;
    uStack_1a4 = uStack_68c;
    uStack_1a0 = uStack_688;
    uStack_c4 = 0;
    iVar26 = thunk_FUN_01be5118(0x370);
    if (iVar26 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x370);
    }
    FUN_01bed4e2(iVar26,&local_398,0x370);
    puVar28 = &DAT_01c08ab4;
    param_2[0x1a] = iVar26;
    param_2[0x1b] = &DAT_01c08ab4;
    goto LAB_0078dc90;
  }
  FUN_01bed4e2(auStack_680,param_2,0x68);
LAB_0078dce8:
  if (*(char *)(param_2 + 0x43) != '\0') {
    FUN_0079217c(param_2 + 0x1c);
  }
  *(undefined1 *)(param_2 + 0x43) = 0;
  FUN_01bed4e2(param_1,auStack_680,0x68);
  uVar12 = 1;
LAB_0078dd18:
  *(undefined1 *)((int)param_2 + 0x10d) = uVar12;
  return;
}

