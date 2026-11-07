// FUN_019c7348 @ 019c7348 size=4972 calls_out=32 calls_in=4
// strings: /proc/stat | btime | btime | /proc/meminfo | Shmem | SwapTotal

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_019c7348(undefined4 param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  byte *pbVar10;
  float fVar11;
  uint *****pppppuVar12;
  uint *****pppppuVar13;
  uint *****pppppuVar14;
  bool bVar15;
  uint *****pppppuVar16;
  uint uVar17;
  char cVar18;
  uint ******ppppppuVar19;
  uint *puVar20;
  uint ******ppppppuVar21;
  byte bVar22;
  uint *****pppppuVar23;
  byte *pbVar24;
  uint *******pppppppuVar25;
  undefined4 *puVar26;
  undefined1 *puVar27;
  uint ******ppppppuVar28;
  uint uVar29;
  uint uVar30;
  undefined1 *puVar31;
  uint ******ppppppuVar32;
  uint uVar33;
  uint uVar34;
  uint ******ppppppuVar35;
  undefined4 uVar36;
  uint ******ppppppuVar37;
  undefined4 uVar38;
  uint *****pppppuVar39;
  uint *****pppppuVar40;
  uint *****pppppuVar41;
  bool bVar42;
  byte in_Q;
  uint in_fpscr;
  float fVar43;
  float fVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  ulonglong uVar47;
  uint *******local_7d0;
  int local_7b8;
  undefined1 auStack_7a0 [176];
  uint local_6f0;
  uint uStack_6ec;
  uint uStack_6e8;
  uint uStack_6e4;
  int local_6a8;
  char local_6a4;
  uint ******local_6a0;
  uint ******local_69c;
  uint ******local_698;
  int local_694;
  uint ******local_690;
  int iStack_68c;
  undefined4 local_688;
  undefined4 uStack_684;
  uint auStack_680 [2];
  uint local_678;
  uint uStack_674;
  uint local_670;
  int iStack_66c;
  uint local_668;
  uint local_664;
  uint local_660;
  uint uStack_65c;
  uint local_658;
  uint uStack_654;
  uint local_650;
  uint local_64c;
  uint auStack_648 [2];
  uint auStack_640 [2];
  int local_638;
  int iStack_634;
  int iStack_630;
  int local_62c;
  ulonglong local_628;
  uint ******local_620;
  uint ******local_61c;
  undefined1 uStack_618;
  ulonglong local_610;
  int *local_604;
  undefined4 local_600;
  undefined4 local_5fc;
  uint ******local_5f8;
  undefined *local_5f4;
  uint ******local_5f0;
  uint ******local_5ec;
  uint ******local_5e8;
  uint ******local_5e4;
  uint ******local_5e0;
  uint ******local_5dc;
  uint ******local_5d8;
  int local_5d4;
  uint ******local_5d0;
  int local_5cc;
  undefined4 local_5c8;
  undefined4 local_5c4;
  uint ******local_5c0;
  undefined2 local_5bc;
  uint *******local_4d8;
  uint ******local_4d4;
  uint ******local_4d0;
  uint *****pppppuStack_4cc;
  uint *******local_4c8;
  undefined8 local_4c4;
  uint ******local_4bc;
  uint ******local_4b8;
  undefined4 *local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  uint ******local_4a8;
  undefined4 local_4a4;
  undefined4 local_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 local_490;
  undefined4 local_48c;
  uint *****local_3bc;
  uint *******local_3b8;
  uint ******ppppppuStack_3b4;
  uint ******ppppppuStack_3b0;
  uint *****pppppuStack_3ac;
  int local_3a8 [72];
  int local_288 [72];
  uint *******local_168;
  undefined8 local_164;
  uint ******local_15c;
  uint ******local_158;
  undefined4 *local_154;
  undefined4 local_150;
  undefined4 local_14c;
  uint ******local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_78;
  int local_74;
  undefined4 local_70;
  undefined2 local_6c;
  
  uVar45 = thunk_FUN_01bee35a(param_1,0x2c0);
  puVar26 = (undefined4 *)((int)uVar45 + (int)((ulonglong)uVar45 >> 0x20));
  if (*(char *)(puVar26 + 4) == '\0') {
    FUN_019ae6ac(&local_168);
    *puVar26 = local_168;
    puVar26[1] = (ulonglong *)local_164;
    puVar26[2] = local_164._4_4_;
    puVar26[3] = local_15c;
    *(undefined1 *)(puVar26 + 4) = 1;
  }
  local_5d0 = (uint ******)*puVar26;
  local_5cc = puVar26[1];
  local_5c8 = puVar26[2];
  local_5c4 = puVar26[3];
  *puVar26 = (byte *)((int)local_5d0 + 1);
  puVar26[1] = local_5cc + (uint)((uint ******)0xfffffffe < local_5d0);
  local_5e0 = (uint ******)&DAT_0056d238;
  local_5dc = (uint ******)0x0;
  local_5d8 = (uint ******)0x0;
  local_5d4 = 0;
  local_4d0 = (uint ******)0x0;
  local_4d4 = (uint ******)0x1;
  local_4d8 = (uint *******)0x0;
  local_4c4._4_4_ = (uint ******)0x0;
  local_4c4._0_4_ = (uint ******)0x1;
  local_4c8 = (uint *******)0x0;
  FUN_019c4d48(&local_168,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,&local_4d8,&local_4c8);
  FUN_01bed4e2(&local_4c8,&local_168,0xe0);
  iVar6 = thunk_FUN_01be5118(0x380);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(8,0x380);
  }
  FUN_01bed4e2(&local_158,&local_4c8,0xe0);
  local_78 = 4;
  local_6c = 1;
  local_164._4_4_ = (int **)&DAT_3b9aca00;
  local_70 = 0;
  local_74 = iVar6;
  iVar6 = FUN_01be2b70(0x1e);
  iVar7 = FUN_01be2b70(2);
  local_4c4._0_4_ = (uint ******)&DAT_000001b6;
  local_4c8 = (uint *******)0x0;
  local_4bc = (uint ******)((uint)local_4bc & 0xffff0000);
  local_4c4._4_4_ = (uint ******)&DAT_00000001;
  FUN_019a581c(&local_620,&local_4c8,"/proc/stat",10);
  ppppppuVar37 = local_61c;
  if ((char)local_620 == '\x04') {
    local_5f8 = local_61c;
    local_4c4._4_4_ = (uint ******)0x0;
    local_4c4._0_4_ = (uint ******)&DAT_00000001;
    local_4c8 = (uint *******)0x0;
    FUN_019a65b4(&local_5f0,&local_5f8,&local_4c8);
    pppppppuVar25 = local_4c8;
    if (((char)local_5f0 == '\x04') || (((uint)local_5f0 & 0xff) == 4)) {
      local_4d8 = local_4c8;
      local_4d4 = (uint ******)local_4c4;
      local_4d0 = local_4c4._4_4_;
      FUN_01bf01d6(ppppppuVar37);
      ppppppuVar37 = local_4d4;
      if (pppppppuVar25 != (uint *******)&DAT_80000000) {
        bVar42 = false;
        ppppppuVar19 = local_4d0;
        ppppppuVar21 = local_4d4;
        do {
          do {
            do {
              ppppppuVar28 = ppppppuVar21;
              ppppppuVar35 = ppppppuVar19;
              if (bVar42) {
                FUN_0134bd64(pppppppuVar25,ppppppuVar37);
                goto LAB_019c76ac;
              }
              bVar42 = true;
              ppppppuVar19 = (uint ******)0x0;
              ppppppuVar21 = ppppppuVar28;
            } while (ppppppuVar35 == (uint ******)0x0);
            ppppppuVar32 = (uint ******)0x0;
            do {
              bVar42 = *(byte *)((int)ppppppuVar28 + (int)ppppppuVar32) != 10;
              if (!bVar42) {
                ppppppuVar21 = (uint ******)((int)ppppppuVar28 + (int)ppppppuVar32 + 1);
                ppppppuVar35 = (uint ******)((int)ppppppuVar35 - (int)((int)ppppppuVar32 + 1));
                goto LAB_019c75ec;
              }
              ppppppuVar32 = (uint ******)((int)ppppppuVar32 + 1);
            } while (ppppppuVar35 != ppppppuVar32);
            ppppppuVar32 = ppppppuVar35;
LAB_019c75ec:
            ppppppuVar19 = ppppppuVar35;
          } while (ppppppuVar32 < &DAT_00000005);
          iVar8 = thunk_FUN_01bed842("btime",ppppppuVar28,5);
        } while (iVar8 != 0);
        bVar42 = false;
        bVar15 = false;
        do {
          while( true ) {
            if (bVar15) goto LAB_019c8684;
            if (ppppppuVar32 != (uint ******)0x0) break;
            bVar42 = true;
            bVar15 = true;
          }
          ppppppuVar19 = (uint ******)0x0;
          while (*(byte *)((int)ppppppuVar28 + (int)ppppppuVar19) != 0x20) {
            ppppppuVar19 = (uint ******)((int)ppppppuVar19 + 1);
            if (ppppppuVar32 == ppppppuVar19) {
              bVar42 = true;
              goto LAB_019c85f8;
            }
          }
          ppppppuVar28 = (uint ******)((int)ppppppuVar28 + (int)ppppppuVar19 + 1);
          ppppppuVar32 = (uint ******)((int)ppppppuVar32 - (int)((int)ppppppuVar19 + 1));
          bVar15 = false;
        } while (ppppppuVar19 == (uint ******)0x0);
LAB_019c85f8:
        do {
          ppppppuVar19 = ppppppuVar28;
          if (bVar42) goto LAB_019c8684;
          bVar42 = true;
          if (ppppppuVar32 != (uint ******)0x0) {
            ppppppuVar21 = (uint ******)0x0;
            do {
              if (*(byte *)((int)ppppppuVar19 + (int)ppppppuVar21) == 0x20) {
                ppppppuVar28 = (uint ******)((int)ppppppuVar19 + (int)ppppppuVar21 + 1);
                ppppppuVar32 = (uint ******)((int)ppppppuVar32 - (int)((int)ppppppuVar21 + 1));
                bVar42 = false;
                goto LAB_019c8648;
              }
              ppppppuVar21 = (uint ******)((int)ppppppuVar21 + 1);
            } while (ppppppuVar32 != ppppppuVar21);
          }
          ppppppuVar21 = ppppppuVar32;
          ppppppuVar28 = ppppppuVar19;
LAB_019c8648:
        } while (ppppppuVar21 == (uint ******)0x0);
        uVar47 = 0;
        do {
          ppppppuVar21 = (uint ******)((int)ppppppuVar21 + -1);
          uVar47 = (uVar47 & 0xffffffff) * 10 +
                   (CONCAT44((int)(uVar47 >> 0x20) * 10,*(byte *)ppppppuVar19 - 0x30) &
                   0xffffffff000000ff);
          ppppppuVar19 = (uint ******)((int)ppppppuVar19 + 1);
        } while (ppppppuVar21 != (uint ******)0x0);
        goto LAB_019c868c;
      }
    }
    else {
      local_4d4 = local_5f0;
      local_4d8 = (uint *******)&DAT_80000000;
      local_4d0 = local_5ec;
      FUN_0134bd64(local_4c8,(uint ******)local_4c4);
      FUN_01bf01d6(ppppppuVar37);
    }
  }
  else {
    local_4d4 = local_620;
    local_4d0 = local_61c;
    local_4d8 = (uint *******)&DAT_80000000;
  }
  FUN_019c72f8(&local_4d8);
LAB_019c76ac:
  local_4c4._0_4_ = (uint ******)0x0;
  local_4c8 = (uint *******)0x0;
  iVar8 = FUN_01bf0582(7,&local_4c8);
  pppppppuVar25 = local_4c8;
  if (iVar8 != 0) {
    pppppppuVar25 = (uint *******)0x0;
  }
  uVar47 = (ulonglong)(int)pppppppuVar25;
LAB_019c76d8:
  local_6a0 = local_5e0;
  local_69c = local_5dc;
  local_698 = local_5d8;
  local_694 = local_5d4;
  local_690 = local_5d0;
  iStack_68c = local_5cc;
  local_688 = local_5c8;
  uStack_684 = local_5c4;
  FUN_01bed93e(auStack_680,0,0x48);
  iStack_634 = iVar6 >> 0x1f;
  local_62c = iVar7 >> 0x1f;
  local_638 = iVar6;
  iStack_630 = iVar7;
  local_628 = uVar47;
  FUN_01bed4e2(auStack_7a0,&local_168,0x100);
  local_4c4 = CONCAT44(local_4c4._4_4_,(uint ******)local_4c4);
  local_164 = CONCAT44(local_164._4_4_,(ulonglong *)local_164);
  if (param_2[9] != 2) {
    local_4c4 = CONCAT44(local_4c4._4_4_,(uint ******)local_4c4);
    local_164 = CONCAT44(local_164._4_4_,(ulonglong *)local_164);
    if (((param_2[9] | param_2[10]) & 1) != 0) {
      FUN_019cab6c(&local_4d8,"/proc/meminfo",0xd,0x40fb);
      ppppppuVar37 = local_4d4;
      pppppppuVar25 = local_4d8;
      if (local_4d8 == (uint *******)&DAT_80000000) {
        FUN_019c72f8(&local_4d8);
      }
      else {
        local_7d0 = local_4d8;
        local_5c0 = local_4d0;
        local_5d0 = local_4d0;
        local_5d8 = local_4d0;
        local_5bc = 1;
        local_5c4 = 0;
        local_5c8 = CONCAT31(local_5c8._1_3_,1);
        local_5cc = 10;
        local_5d4 = 0;
        local_5dc = local_4d4;
        local_5e0 = (uint ******)&DAT_0000000a;
        bVar42 = false;
        local_4c4 = CONCAT44(local_4c4._4_4_,(uint ******)local_4c4);
        local_164 = CONCAT44(local_164._4_4_,(ulonglong *)local_164);
switchD_019c7a08_caseD_a:
        uVar45 = FUN_01a5c3e4(&local_5e0);
        ppppppuVar19 = (uint ******)((ulonglong)uVar45 >> 0x20);
        if ((int)uVar45 != 0) {
          local_4ac = 0;
          local_4b0 = CONCAT31(local_4b0._1_3_,1);
          local_4a4 = CONCAT22(local_4a4._2_2_,1);
          local_4b4 = (undefined4 *)0x3a;
          local_4c8 = (uint *******)0x3a;
          local_4bc = (uint ******)0x0;
          local_4b8 = ppppppuVar19;
          local_4a8 = ppppppuVar19;
          local_4c4 = uVar45;
          uVar45 = FUN_01a5c3e4(&local_4c8);
          iVar6 = (int)uVar45;
          if (iVar6 != 0) {
            iVar7 = FUN_01a5c3e4(&local_4c8);
            if (iVar7 != 0) {
              uVar46 = FUN_0073498c();
              local_158 = (uint ******)((ulonglong)uVar46 >> 0x20);
              local_14c = 0;
              local_150 = CONCAT31(local_150._1_3_,1);
              local_144 = CONCAT22(local_144._2_2_,1);
              local_154 = (undefined4 *)&DAT_00000020;
              local_15c = (uint ******)0x0;
              local_168 = (uint *******)&DAT_00000020;
              local_148 = local_158;
              local_164 = uVar46;
              uVar47 = FUN_01a5c3e4(&local_168);
              iVar7 = (int)(uVar47 >> 0x20);
              pcVar9 = (char *)uVar47;
              if (pcVar9 != (char *)0x0 && iVar7 != 0) {
                if (iVar7 == 1) {
                  cVar18 = *pcVar9;
                  if (cVar18 == '+') goto switchD_019c7a08_caseD_a;
                  if (cVar18 == '-') goto switchD_019c7a08_caseD_a;
                }
                else {
                  cVar18 = *pcVar9;
                }
                if (cVar18 == '+') {
                  uVar47 = CONCAT44(iVar7 + -1,pcVar9 + 1);
                }
                if (uVar47 < 0x1100000000) {
                  if ((int)(uVar47 >> 0x20) == 0) {
                    uVar4 = 0;
                  }
                  else {
                    uVar4 = 0;
                    do {
                      uVar29 = *(byte *)uVar47 - 0x30;
                      if (9 < uVar29) goto switchD_019c7a08_caseD_a;
                      iVar7 = (int)(uVar47 >> 0x20) + -1;
                      uVar47 = CONCAT44(iVar7,(byte *)uVar47 + 1);
                      uVar4 = (uVar4 & 0xffffffff) * 10 + CONCAT44((int)(uVar4 >> 0x20) * 10,uVar29)
                      ;
                    } while (iVar7 != 0);
                  }
LAB_019c79f4:
                  switch((int)((ulonglong)uVar45 >> 0x20)) {
                  case 5:
                    iVar6 = thunk_FUN_01bed842(iVar6,"Shmem",5);
                    puVar20 = &local_658;
                    break;
                  case 6:
                    iVar6 = thunk_FUN_01bed842(iVar6,"Cached",6);
                    puVar20 = &local_660;
                    break;
                  case 7:
                    iVar7 = thunk_FUN_01bed842(iVar6,"MemFree",7);
                    if (iVar7 != 0) {
                      iVar6 = thunk_FUN_01bed842(iVar6,"Buffers",7);
                      puVar20 = &local_668;
                      break;
                    }
                    puVar20 = &local_678;
                    goto LAB_019c7b74;
                  case 8:
                    iVar7 = thunk_FUN_01bed842(iVar6,&DAT_00571128,8);
                    if (iVar7 == 0) {
                      puVar20 = auStack_680;
                      goto LAB_019c7b74;
                    }
                    iVar6 = thunk_FUN_01bed842(iVar6,&DAT_00570b80,8);
                    puVar20 = auStack_640;
                    break;
                  case 9:
                    iVar6 = thunk_FUN_01bed842(iVar6,"SwapTotal",9);
                    puVar20 = auStack_648;
                    break;
                  default:
                    goto switchD_019c7a08_caseD_a;
                  case 0xc:
                    iVar7 = thunk_FUN_01bed842(iVar6,"MemAvailable",0xc);
                    if (iVar7 == 0) {
                      bVar42 = true;
                      puVar20 = &local_670;
                      goto LAB_019c7b74;
                    }
                    iVar6 = thunk_FUN_01bed842(iVar6,"SReclaimable",0xc);
                    puVar20 = &local_650;
                  }
                  if (iVar6 == 0) {
LAB_019c7b74:
                    uVar33 = (uint)(uVar4 >> 0x16);
                    uVar29 = (int)uVar4 << 10;
                    if ((int)((uVar4 >> 0x16) >> 0x20) != 0) {
                      uVar29 = 0xffffffff;
                      uVar33 = 0xffffffff;
                    }
                    *puVar20 = uVar29;
                    puVar20[1] = uVar33;
                  }
                  goto switchD_019c7a08_caseD_a;
                }
                uVar29 = 0;
                uVar33 = 0;
                do {
                  iVar7 = (int)(uVar47 >> 0x20);
                  uVar4 = CONCAT44(uVar33,uVar29);
                  if (iVar7 == 0) goto LAB_019c79f4;
                  uVar34 = (uint)((ulonglong)uVar29 * 10);
                  uVar29 = (uint)((ulonglong)uVar29 * 10 >> 0x20);
                  uVar17 = (uint)((ulonglong)uVar33 * 10);
                  uVar30 = uVar29 + uVar17;
                  if ((int)((ulonglong)uVar33 * 10 >> 0x20) != 0 || CARRY4(uVar29,uVar17)) break;
                  uVar17 = *(byte *)uVar47 - 0x30;
                  if (9 < uVar17) break;
                  uVar29 = uVar34 + uVar17;
                  uVar33 = uVar30 + CARRY4(uVar34,uVar17);
                  uVar47 = CONCAT44(iVar7 + -1,(byte *)uVar47 + 1);
                } while (!CARRY4(uVar30,(uint)CARRY4(uVar34,uVar17)));
              }
            }
          }
          goto switchD_019c7a08_caseD_a;
        }
        FUN_0134bd64(pppppppuVar25,ppppppuVar37);
        if (bVar42) goto LAB_019c7c4c;
      }
      uVar29 = local_678 + local_668;
      uVar33 = uStack_674 + local_664 + (uint)CARRY4(local_678,local_668);
      if (CARRY4(uStack_674,local_664) ||
          CARRY4(uStack_674 + local_664,(uint)CARRY4(local_678,local_668))) {
        uVar29 = 0xffffffff;
        uVar33 = 0xffffffff;
      }
      uVar30 = uVar29 + local_660;
      uVar34 = uVar33 + uStack_65c + (uint)CARRY4(uVar29,local_660);
      if (CARRY4(uVar33,uStack_65c) || CARRY4(uVar33 + uStack_65c,(uint)CARRY4(uVar29,local_660))) {
        uVar34 = 0xffffffff;
        uVar30 = 0xffffffff;
      }
      uVar33 = uVar30 + local_650;
      uVar29 = uVar34 + local_64c + (uint)CARRY4(uVar30,local_650);
      if (CARRY4(uVar34,local_64c) || CARRY4(uVar34 + local_64c,(uint)CARRY4(uVar30,local_650))) {
        uVar29 = 0xffffffff;
        uVar33 = 0xffffffff;
      }
      local_670 = uVar33 - local_658;
      iStack_66c = uVar29 - (uStack_654 + (local_658 > uVar33));
      if (uVar29 <= uStack_654 && (uint)(local_658 <= uVar33) <= uVar29 - uStack_654) {
        iStack_66c = 0;
        local_670 = 0;
      }
    }
  }
LAB_019c7c4c:
  if (param_2[0xb] != 2) {
    FUN_019bfbf0(auStack_7a0,0,param_2[0xb] & 1,param_2[0xc]);
  }
  bVar22 = *param_2;
  if (bVar22 == 2) goto LAB_019c8564;
  uVar36 = *(undefined4 *)(param_2 + 1);
  uVar38 = *(undefined4 *)(param_2 + 5);
  FUN_019cab6c(&local_168,"/proc/uptime",0xc,0x32);
  if (local_168 == (uint *******)&DAT_80000000) {
    FUN_019c72f8(&local_168);
    pppppppuVar25 = (uint *******)0x0;
    uVar45 = 1;
  }
  else {
    pppppppuVar25 = local_168;
    uVar45 = local_164;
  }
  puVar27 = (undefined1 *)((ulonglong)uVar45 >> 0x20);
  pbVar24 = (byte *)uVar45;
  puVar31 = (undefined1 *)0x0;
  do {
    uVar29 = (int)puVar27 - (int)puVar31;
    if (uVar29 < 8) {
      uVar33 = 0;
      if (uVar29 == 0) {
        uVar47 = 0;
      }
      else {
        do {
          if ((pbVar24 + (int)puVar31)[uVar33] == 0x2e) {
            uVar47 = CONCAT44(uVar33,1);
            goto LAB_019c7d38;
          }
          uVar33 = uVar33 + 1;
        } while (uVar29 != uVar33);
        uVar47 = (ulonglong)uVar29 << 0x20;
      }
    }
    else {
      uVar47 = FUN_01307168(0x2e,pbVar24 + (int)puVar31);
    }
LAB_019c7d38:
    if ((uVar47 & 1) == 0) break;
    puVar31 = puVar31 + (int)(uVar47 >> 0x20);
    if ((puVar31 < puVar27) && (pbVar24[(int)puVar31] == 0x2e)) {
      puVar27 = puVar31;
      break;
    }
    puVar31 = puVar31 + 1;
  } while (puVar31 <= puVar27);
  if (puVar27 == (undefined1 *)0x0) {
LAB_019c7dac:
    uVar47 = 0;
  }
  else {
    if (puVar27 != &DAT_00000001) {
      bVar5 = *pbVar24;
LAB_019c7ed8:
      pbVar10 = pbVar24;
      if (bVar5 == 0x2b) {
        pbVar10 = pbVar24 + 1;
        puVar27 = puVar27 + -1;
      }
      if (&DAT_00000010 < puVar27) {
        uVar29 = 0;
        uVar33 = 0;
        do {
          uVar47 = CONCAT44(uVar33,uVar29);
          if (puVar27 == (undefined1 *)0x0) goto LAB_019c7db0;
          uVar34 = (uint)((ulonglong)uVar29 * 10);
          uVar29 = (uint)((ulonglong)uVar29 * 10 >> 0x20);
          uVar17 = (uint)((ulonglong)uVar33 * 10);
          uVar30 = uVar29 + uVar17;
          if (((int)((ulonglong)uVar33 * 10 >> 0x20) != 0 || CARRY4(uVar29,uVar17)) ||
             (uVar17 = *pbVar10 - 0x30, 9 < uVar17)) break;
          uVar29 = uVar34 + uVar17;
          pbVar10 = pbVar10 + 1;
          uVar33 = uVar30 + CARRY4(uVar34,uVar17);
          puVar27 = puVar27 + -1;
        } while (!CARRY4(uVar30,(uint)CARRY4(uVar34,uVar17)));
      }
      else if (puVar27 != (undefined1 *)0x0) {
        uVar47 = 0;
        do {
          bVar5 = *pbVar10;
          if (9 < bVar5 - 0x30) goto LAB_019c7dac;
          pbVar10 = pbVar10 + 1;
          puVar27 = puVar27 + -1;
          uVar47 = (uVar47 & 0xffffffff) * 10 + CONCAT44((int)(uVar47 >> 0x20) * 10,bVar5 - 0x30);
        } while (puVar27 != (undefined1 *)0x0);
        goto LAB_019c7db0;
      }
      goto LAB_019c7dac;
    }
    bVar5 = *pbVar24;
    if (bVar5 == 0x2b) goto LAB_019c7dac;
    uVar47 = 0;
    if (bVar5 != 0x2d) goto LAB_019c7ed8;
  }
LAB_019c7db0:
  FUN_0134bd64(pppppppuVar25,pbVar24);
  local_5f4 = &DAT_01d28324;
  local_61c._1_3_ = (undefined3)uVar38;
  uStack_618 = (undefined1)((uint)uVar38 >> 0x18);
  local_61c._0_1_ = (undefined1)((uint)uVar36 >> 0x18);
  local_620 = (uint ******)CONCAT31((int3)uVar36,bVar22);
  local_5fc = 0;
  local_600 = 4;
  local_5f8 = (uint ******)&DAT_00000001;
  local_610 = uVar47;
  local_604 = &local_638;
  FUN_019adfac(&local_168,"/proc",5);
  if (local_168 == (uint *******)0x0) {
    local_490 = (ulonglong *)local_164;
    local_4a0 = 0;
    local_4b0 = 0;
    local_4b4 = &local_600;
    local_4b8 = (uint ******)&local_5f8;
    local_4bc = (uint ******)&local_620;
    local_4c4._4_4_ = (uint ******)&local_604;
    local_4c4._0_4_ = (uint ******)&local_610;
    local_4c8 = (uint *******)&local_4d8;
    local_48c = CONCAT31(local_48c._1_3_,local_164._4_1_);
    local_4d8 = &local_6a0;
    FUN_019c6a28(local_3a8,&local_4c8);
    if (local_3a8[0] == 2) {
      FUN_019c6db0(&local_4c8);
      ppppppuVar37 = (uint ******)&DAT_00000008;
      ppppppuVar19 = (uint ******)0x0;
      local_5e8 = (uint ******)0x0;
    }
    else {
      ppppppuVar37 = (uint ******)thunk_FUN_01be5118(0x480);
      if (ppppppuVar37 == (uint ******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(8,0x480);
      }
      FUN_01bed4e2(ppppppuVar37,local_3a8,0x120);
      local_5d8 = (uint ******)&DAT_00000001;
      local_5e0 = (uint ******)&SUB_00000004;
      local_168 = local_4c8;
      local_164._0_4_ = (ulonglong *)(uint ******)local_4c4;
      local_164._4_4_ = (int **)local_4c4._4_4_;
      local_15c = local_4bc;
      local_158 = local_4b8;
      local_154 = local_4b4;
      local_150 = local_4b0;
      local_14c = local_4ac;
      local_148 = local_4a8;
      local_144 = local_4a4;
      local_140 = local_4a0;
      uStack_13c = uStack_49c;
      uStack_138 = uStack_498;
      uStack_134 = uStack_494;
      uStack_130 = local_490;
      uStack_12c = local_48c;
      iVar6 = 0x120;
      local_5dc = ppppppuVar37;
      while( true ) {
        ppppppuVar19 = local_5d8;
        FUN_019c6a28(local_288,&local_168);
        if (local_288[0] == 2) break;
        if (ppppppuVar19 == local_5e0) {
          FUN_006520b4(&local_5e0,ppppppuVar19,1,8,0x120);
          ppppppuVar37 = local_5dc;
        }
        FUN_01bed4e2((byte *)((int)ppppppuVar37 + iVar6),local_288,0x120);
        local_5d8 = (uint ******)((int)ppppppuVar19 + 1);
        iVar6 = iVar6 + 0x120;
      }
      FUN_019c6db0(&local_168);
      local_5e8 = local_5e0;
    }
    ppppppuVar21 = ppppppuVar37 + (int)ppppppuVar19 * 0x48;
    local_5f0 = ppppppuVar37;
    local_5ec = ppppppuVar37;
    local_5e4 = ppppppuVar21;
    if (ppppppuVar19 != (uint ******)0x0) {
LAB_019c8068:
      pppppppuVar25 = (uint *******)*ppppppuVar37;
      FUN_01bed4e2(&local_5e0,ppppppuVar37 + 1,0x108);
      ppppppuVar19 = ppppppuVar37 + 0x48;
      if (pppppppuVar25 != (uint *******)0x2) {
        pppppuVar12 = ppppppuVar37[0x43];
        FUN_01bed4e2((uint)&local_4c8 | 4,&local_5e0,0x108);
        local_4d8 = (uint *******)ppppppuVar37[0x44];
        local_4d4 = (uint ******)ppppppuVar37[0x45];
        local_4d0 = (uint ******)ppppppuVar37[0x46];
        pppppuStack_4cc = ppppppuVar37[0x47];
        local_4c8 = pppppppuVar25;
        local_3bc = pppppuVar12;
        local_3b8 = local_4d8;
        ppppppuStack_3b4 = local_4d4;
        ppppppuStack_3b0 = local_4d0;
        pppppuStack_3ac = pppppuStack_4cc;
        uVar29 = FUN_019c88bc(local_690,iStack_68c,local_688,uStack_684,pppppuVar12);
        if (local_698 == (uint ******)0x0) {
          FUN_019c58d4(&local_6a0,&local_690);
        }
        ppppppuVar28 = local_69c;
        ppppppuVar37 = local_6a0;
        bVar42 = false;
        local_7b8 = 0;
        uVar33 = uVar29;
        do {
          uVar33 = (uint)local_69c & uVar33;
          uVar30 = *(uint *)((int)local_6a0 + uVar33);
          uVar34 = uVar30 ^ (uVar29 >> 0x19) * 0x1010101;
          uVar34 = ~uVar34 & 0x80808080 & uVar34 + 0xfefefeff;
          while (uVar34 != 0) {
            uVar17 = uVar34 >> 8;
            uVar1 = uVar34 >> 0x10;
            uVar2 = uVar34 >> 0x18;
            uVar3 = uVar34 << 0x18;
            uVar34 = uVar34 - 1 & uVar34;
            uVar17 = uVar33 + ((uint)LZCOUNT(uVar3 | (uVar17 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 |
                                             uVar2) >> 3) & (uint)local_69c;
            if (pppppuVar12 == local_6a0[uVar17 * -0x4a + -0x4a]) {
              ppppppuVar37 = local_6a0 + uVar17 * -0x4a + -0x48;
              FUN_01bed4e2(&local_168,ppppppuVar37,0x120);
              FUN_01bed4e2(ppppppuVar37,&local_4c8,0x120);
              if (local_168 != (uint *******)0x2) {
                FUN_019bd1b4(&local_168);
              }
              goto LAB_019c8228;
            }
          }
          uVar34 = uVar30 & 0x80808080;
          pppppppuVar25 = local_7d0;
          if (bVar42) {
LAB_019c81b0:
            if ((uVar34 & uVar30 << 1) != 0) goto LAB_019c823c;
            bVar42 = true;
            local_7d0 = pppppppuVar25;
          }
          else {
            if (uVar34 != 0) {
              pppppppuVar25 =
                   (uint *******)
                   (uVar33 + ((uint)LZCOUNT((uVar30 & 0x80) << 0x18 | (uVar34 >> 8 & 0xff) << 0x10 |
                                            (uVar34 >> 0x10 & 0xff) << 8 | uVar34 >> 0x18) >> 3) &
                   (uint)local_69c);
              goto LAB_019c81b0;
            }
            bVar42 = false;
          }
          local_7b8 = local_7b8 + 4;
          uVar33 = local_7b8 + uVar33;
        } while( true );
      }
      goto LAB_019c82ec;
    }
LAB_019c82f0:
    FUN_019ca92c(&local_5f0);
  }
  else {
    local_4c8 = (uint *******)&DAT_00000001;
    local_4c4 = local_164;
    FUN_019bd120(&local_4c8);
  }
  fVar44 = 0.0;
  fVar11 = fVar44;
  if ((bVar22 & 1) == 0) {
    bVar42 = false;
  }
  else {
    if (local_6a4 == '\x01') {
      FUN_019bfbf0(auStack_7a0,1,1,0);
    }
    bVar42 = false;
    if (local_6a8 != 0) {
      fVar11 = (float)FUN_01bf0958(local_6f0 - uStack_6e8);
      bVar42 = true;
      fVar43 = (float)VectorUnsignedToFloat(local_6a8,(byte)(in_fpscr >> 0x16) & 3);
      if ((((byte)((uStack_6e4 < uStack_6ec ||
                   uStack_6ec - uStack_6e4 < (uint)(uStack_6e8 <= local_6f0)) << 2 | in_Q) & 0x1f)
           >> 2 & 1) == 0) {
        fVar11 = 1.0;
      }
      fVar44 = (float)VectorUnsignedToFloat(local_6a8 * 100,(byte)(in_fpscr >> 0x16) & 3);
      fVar11 = fVar11 / fVar43;
    }
  }
  if (local_694 != 0) {
    ppppppuVar19 = local_6a0 + 1;
    uVar29 = ~(uint)*local_6a0 & 0x80808080;
    ppppppuVar37 = local_6a0;
    iVar6 = local_694;
    do {
      ppppppuVar21 = ppppppuVar19;
      if (uVar29 == 0) {
        do {
          ppppppuVar19 = ppppppuVar21 + 1;
          pppppuVar12 = *ppppppuVar21;
          ppppppuVar37 = ppppppuVar37 + -0x128;
          ppppppuVar21 = ppppppuVar19;
        } while (((uint)pppppuVar12 & 0x80808080) == 0x80808080);
        uVar29 = (uint)pppppuVar12 & 0x80808080 ^ 0x80808080;
      }
      ppppppuVar21 = ppppppuVar37 +
                     (short)-(short)((uint)LZCOUNT(uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 |
                                                   (uVar29 >> 0x10 & 0xff) << 8 | uVar29 >> 0x18) >>
                                    3) * 0x4a;
      if (*(byte *)(ppppppuVar21 + -2) == 1) {
        if (bVar42) {
          pppppuVar40 = ppppppuVar21[-0x34];
          pppppuVar12 = ppppppuVar21[-0x32];
          pppppuVar41 = ppppppuVar21[-0x33];
          pppppuVar23 = ppppppuVar21[-0x31];
          if ((pppppuVar40 != (uint *****)0x0 || pppppuVar12 != (uint *****)0x0) ||
              (pppppuVar41 != (uint *****)0x0 || pppppuVar23 != (uint *****)0x0)) {
            pppppuVar13 = ppppppuVar21[-0x38];
            pppppuVar39 = ppppppuVar21[-0x36];
            pppppuVar14 = ppppppuVar21[-0x35];
            uVar34 = (int)pppppuVar39 - (int)pppppuVar12;
            pppppuVar16 = ppppppuVar21[-0x37];
            uVar33 = (int)pppppuVar14 - ((int)pppppuVar23 + (uint)(pppppuVar12 > pppppuVar39));
            if (pppppuVar14 <= pppppuVar23 &&
                (uint)(pppppuVar12 <= pppppuVar39) <= (uint)((int)pppppuVar14 - (int)pppppuVar23)) {
              uVar33 = 0;
              uVar34 = 0;
            }
            uVar30 = (int)pppppuVar13 - (int)pppppuVar40;
            uVar17 = (int)pppppuVar16 - ((int)pppppuVar41 + (uint)(pppppuVar40 > pppppuVar13));
            if (pppppuVar16 <= pppppuVar41 &&
                (uint)(pppppuVar40 <= pppppuVar13) <= (uint)((int)pppppuVar16 - (int)pppppuVar41)) {
              uVar30 = 0;
              uVar17 = 0;
            }
            iVar7 = uVar30 + uVar34;
            iVar8 = uVar17 + uVar33 + (uint)CARRY4(uVar30,uVar34);
            if (CARRY4(uVar17,uVar33) || CARRY4(uVar17 + uVar33,(uint)CARRY4(uVar30,uVar34))) {
              iVar7 = -1;
              iVar8 = -1;
            }
            fVar43 = (float)FUN_01bf0958(iVar7,iVar8);
            pppppuVar12 = (uint *****)FUN_01be5c34((fVar43 / fVar11) * 100.0,fVar44);
            ppppppuVar21[-4] = pppppuVar12;
          }
        }
        *(byte *)(ppppppuVar21 + -2) = 0;
      }
      else {
        iVar7 = ((int)local_6a0 - (int)ppppppuVar21 >> 3) * -0x6eb3e453;
        puVar20 = (uint *)((int)local_6a0 + (iVar7 - 4U & (uint)local_69c));
        uVar33 = *puVar20;
        uVar34 = *(uint *)((int)local_6a0 + iVar7) & 0x80808080 &
                 *(uint *)((int)local_6a0 + iVar7) << 1;
        bVar22 = 0x80;
        if (((uint)LZCOUNT(uVar34 << 0x18 | (uVar34 >> 8 & 0xff) << 0x10 |
                           (uVar34 >> 0x10 & 0xff) << 8 | uVar34 >> 0x18) >> 3) +
            ((uint)LZCOUNT(uVar33 & 0x80808080 & uVar33 << 1) >> 3) < 4) {
          bVar22 = 0xff;
          local_698 = (uint ******)((int)local_698 + 1);
        }
        *(byte *)((int)local_6a0 + iVar7) = bVar22;
        local_694 = local_694 + -1;
                    /* WARNING (jumptable): Read-only address (ram,0x0056d23c) is written */
        *(byte *)(puVar20 + 1) = bVar22;
        FUN_019c5164(ppppppuVar21 + -0x4a);
      }
      iVar6 = iVar6 + -1;
      uVar29 = uVar29 - 1 & uVar29;
    } while (iVar6 != 0);
  }
  local_6a4 = '\x01';
LAB_019c8564:
  FUN_01bed4e2(param_1,auStack_7a0,0x180);
  return;
LAB_019c8684:
  uVar47 = 0;
LAB_019c868c:
  FUN_0134bd64(pppppppuVar25,ppppppuVar37);
  goto LAB_019c76d8;
LAB_019c823c:
  uVar33 = (uint)(char)*(byte *)((int)local_6a0 + (int)pppppppuVar25);
  if (-1 < (int)uVar33) {
    uVar33 = (uint)*local_6a0 & 0x80808080;
    uVar34 = LZCOUNT(((uint)*local_6a0 & 0x80) << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 |
                     (uVar33 >> 0x10 & 0xff) << 8 | uVar33 >> 0x18);
    uVar33 = (uint)*(byte *)((int)local_6a0 + (uVar34 >> 3));
    pppppppuVar25 = (uint *******)(uVar34 >> 3);
  }
  FUN_01bed4e2((uint)&local_168 | 4,&local_4c8,0x120);
  bVar5 = (byte)(uVar29 >> 0x19);
  *(byte *)((int)ppppppuVar37 + (int)pppppppuVar25) = bVar5;
                    /* WARNING (jumptable): Read-only address (ram,0x0056d23c) is written */
  *(byte *)((int)ppppppuVar37 + ((uint)ppppppuVar28 & (uint)(pppppppuVar25 + -1)) + 4) = bVar5;
  local_698 = (uint ******)((int)local_698 - (uVar33 & 1));
  ppppppuVar37[(int)pppppppuVar25 * -0x4a + -0x4a] = pppppuVar12;
  local_694 = local_694 + 1;
  FUN_01bed4e2(ppppppuVar37 + (int)pppppppuVar25 * -0x4a + -0x49,&local_168,0x124);
LAB_019c8228:
  ppppppuVar37 = ppppppuVar19;
  if (ppppppuVar19 == ppppppuVar21) goto LAB_019c82ec;
  goto LAB_019c8068;
LAB_019c82ec:
  local_5ec = ppppppuVar19;
  goto LAB_019c82f0;
}

