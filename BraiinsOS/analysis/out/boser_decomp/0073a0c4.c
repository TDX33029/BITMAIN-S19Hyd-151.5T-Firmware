// FUN_0073a0c4 @ 0073a0c4 size=3892 calls_out=25 calls_in=4
// strings: /etc/network.conf/var/log/ash_history/mnt/stock_config/cgminer.conf/mnt/stock_config/network.conf/mnt/stock_config/sn/etc/block_candidate.jsonl/etc/bosminer-mri/proc/loadavg/proc/cmdline/proc/crypto/proc/devices/proc/iomem/proc/ioports/proc/filesystems/proc/misc/proc/modules/proc/mtd/proc/version/proc/net/arp | gateway | gateway | netmask | netmask

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0073a0c4(undefined4 *param_1,int param_2)

{
  byte bVar1;
  uint ******ppppppuVar2;
  uint *******pppppppuVar3;
  uint *******pppppppuVar4;
  uint ******ppppppuVar5;
  undefined1 uVar6;
  uint uVar7;
  uint *******pppppppuVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint ******ppppppuVar14;
  undefined4 extraout_r1;
  uint uVar15;
  uint ******extraout_r2;
  uint ******extraout_r2_00;
  uint extraout_r3;
  uint extraout_r3_00;
  uint uVar16;
  int *piVar17;
  char *pcVar18;
  uint ******ppppppuVar19;
  uint *******pppppppuVar20;
  undefined4 uVar21;
  uint *******pppppppuVar22;
  uint *******pppppppuVar23;
  uint *******pppppppuVar24;
  uint *******pppppppuVar25;
  char *pcVar26;
  uint *******pppppppuVar27;
  bool bVar28;
  ulonglong uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  uint local_d4;
  int local_c0;
  uint *******local_bc;
  uint local_b4;
  uint ******local_b0;
  uint ******local_9c;
  uint ******local_98;
  uint ******local_88;
  uint *******local_84;
  uint *******local_80;
  uint ******local_7c;
  uint *******local_78;
  uint ******local_74;
  uint *******local_70;
  char *local_6c;
  int local_68;
  uint *******local_64;
  uint *******local_60;
  uint ******local_5c;
  uint *******local_58;
  uint ******local_54;
  uint *******local_50;
  char *local_4c;
  int local_48;
  uint *******local_44;
  undefined1 local_3c;
  uint *******local_38;
  uint *******local_34;
  uint *******local_30;
  char local_29;
  uint ******local_28;
  
  pppppppuVar27 = (uint *******)&local_80;
  pppppppuVar8 = (uint *******)&local_70;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x2c)) {
  case 0:
    *(undefined1 *)(param_2 + 0x28) = 0;
    *(char **)(param_2 + 4) =
         "/etc/network.conf/var/log/ash_history/mnt/stock_config/cgminer.conf/mnt/stock_config/network.conf/mnt/stock_config/sn/etc/block_candidate.jsonl/etc/bosminer-mri/proc/loadavg/proc/cmdline/proc/crypto/proc/devices/proc/iomem/proc/ioports/proc/filesystems/proc/misc/proc/modules/proc/mtd/proc/version/proc/net/arp"
    ;
    *(undefined4 *)(param_2 + 8) = 0x11;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c07db8);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c07db8);
  }
  FUN_0073b128(&local_60,param_2 + 4);
  pcVar26 = (char *)local_58;
  ppppppuVar5 = local_5c;
  pppppppuVar4 = local_60;
  if (local_60 == (uint *******)0x80000001) {
    *param_1 = 0x80000002;
    uVar6 = 3;
    goto LAB_0073ab08;
  }
  uVar7 = (uint)*(byte *)(param_2 + 0x28);
  uVar16 = ((uint)local_5c & 0xffff) >> 8;
  if (uVar7 == 3) {
    uVar7 = FUN_00b71be0(param_2 + 0x14);
  }
  if (pppppppuVar4 != (uint *******)0x80000000) {
    uVar32 = thunk_FUN_01bee35a(uVar7,0x2c0);
    piVar17 = (int *)((int)uVar32 + (int)((ulonglong)uVar32 >> 0x20));
    if ((char)piVar17[4] == '\0') {
      FUN_019ae6ac(&local_60);
      *piVar17 = (int)local_60;
      piVar17[1] = (int)local_5c;
      piVar17[2] = (int)local_58;
      piVar17[3] = (int)local_54;
      *(undefined1 *)(piVar17 + 4) = 1;
    }
    local_70 = (uint *******)*piVar17;
    local_6c = (char *)piVar17[1];
    local_68 = piVar17[2];
    local_64 = (uint *******)piVar17[3];
    *piVar17 = (int)((int)local_70 + 1);
    piVar17[1] = (int)(local_6c + ((uint *******)0xfffffffe < local_70));
    local_80 = (uint *******)&DAT_0056d238;
    local_7c = (uint ******)0x0;
    local_78 = (uint *******)0x0;
    local_74 = (uint ******)0x0;
    local_48 = CONCAT31(local_48._1_3_,1);
    local_4c = (char *)0xa;
    local_60 = (uint *******)&DAT_0000000a;
    local_3c = 0;
    local_54 = (uint ******)0x0;
    local_bc = local_44;
    pppppppuVar20 = (uint *******)0x0;
    local_5c = ppppppuVar5;
    local_58 = (uint *******)pcVar26;
    local_50 = (uint *******)pcVar26;
    pppppppuVar25 = (uint *******)0x0;
joined_r0x0073a220:
    pppppppuVar23 = pppppppuVar20;
    if (pcVar26 < pppppppuVar20) {
LAB_0073a2bc:
      bVar28 = true;
      pppppppuVar20 = (uint *******)pcVar26;
      pppppppuVar8 = pppppppuVar25;
      if ((uint *******)pcVar26 == pppppppuVar25) goto LAB_0073a624;
    }
    else {
      uVar7 = (int)pcVar26 - (int)pppppppuVar20;
      pcVar18 = (char *)((int)ppppppuVar5 + (int)pppppppuVar20);
      if (uVar7 < 8) {
        uVar16 = 0;
        if (uVar7 == 0) {
          uVar29 = 0;
        }
        else {
          do {
            if (pcVar18[uVar16] == '\n') {
              uVar29 = CONCAT44(uVar16,1);
              goto LAB_0073a288;
            }
            uVar16 = uVar16 + 1;
          } while (uVar7 != uVar16);
          uVar29 = (ulonglong)uVar7 << 0x20;
        }
      }
      else {
        uVar29 = FUN_01307168(10,pcVar18);
      }
LAB_0073a288:
      iVar12 = (int)(uVar29 >> 0x20);
      if ((uVar29 & 1) == 0) {
        pppppppuVar23 = (uint *******)pcVar26;
        goto LAB_0073a2bc;
      }
      pppppppuVar8 = (uint *******)((int)pppppppuVar20 + iVar12);
      pppppppuVar20 = (uint *******)((int)pppppppuVar8 + 1);
      if ((pcVar26 <= pppppppuVar8) || (pcVar18[iVar12] != '\n')) goto joined_r0x0073a220;
      bVar28 = false;
      pppppppuVar23 = pppppppuVar20;
      pppppppuVar8 = pppppppuVar20;
      local_bc = pppppppuVar20;
    }
    uVar7 = (int)pppppppuVar20 - (int)pppppppuVar25;
    pcVar18 = (char *)((int)ppppppuVar5 + (int)pppppppuVar25);
    if ((uVar7 == 0) || (*(char *)((int)pppppppuVar20 + (int)ppppppuVar5 + -1) != '\n')) {
      uVar16 = uVar7;
    }
    else {
      uVar16 = uVar7 - 1;
      if ((uVar16 != 0) && (*(char *)((int)pppppppuVar20 + (int)((int)ppppppuVar5 + -2)) == '\r')) {
        uVar16 = uVar7 - 2;
      }
    }
    if (pcVar18 != (char *)0x0) {
      uVar7 = 0;
      do {
        uVar15 = uVar16 - uVar7;
        if (uVar15 < 8) {
          uVar13 = 0;
          if (uVar15 == 0) {
            uVar29 = 0;
          }
          else {
            do {
              if ((pcVar18 + uVar7)[uVar13] == '=') {
                uVar29 = CONCAT44(uVar13,1);
                goto LAB_0073a374;
              }
              uVar13 = uVar13 + 1;
            } while (uVar15 != uVar13);
            uVar29 = (ulonglong)uVar15 << 0x20;
          }
        }
        else {
          uVar29 = FUN_01307168(0x3d,pcVar18 + uVar7);
        }
LAB_0073a374:
        if ((uVar29 & 1) == 0) break;
        uVar15 = (int)(uVar29 >> 0x20) + uVar7;
        uVar7 = uVar15 + 1;
        if ((uVar15 < uVar16) && (pcVar18[uVar15] == '=')) {
          uVar32 = FUN_013245a0(pcVar18);
          ppppppuVar14 = (uint ******)((ulonglong)uVar32 >> 0x20);
          uVar30 = FUN_013245a0(pcVar18 + uVar7,uVar16 - uVar7);
          pppppppuVar20 = local_64;
          iVar12 = local_68;
          pcVar18 = local_6c;
          pppppppuVar27 = local_70;
          local_9c = (uint ******)uVar30;
          uVar31 = FUN_01930380(local_70,local_6c,local_68,local_64,uVar32);
          uVar7 = (uint)uVar31;
          if (local_78 == (uint *******)0x0) {
            FUN_00744a18(&local_80,(int)((ulonglong)uVar31 >> 0x20),pppppppuVar27,pcVar18,iVar12,
                         pppppppuVar20);
          }
          ppppppuVar2 = local_7c;
          pppppppuVar27 = local_80;
          uVar16 = uVar7 >> 0x19;
          local_b0 = (uint ******)0x0;
          local_c0 = 0;
          goto LAB_0073a44c;
        }
      } while (uVar7 <= uVar16);
      goto LAB_0073a55c;
    }
    goto LAB_0073a624;
  }
  local_bc = (uint *******)&DAT_80000000;
  if (((uint)ppppppuVar5 & 0xff) - 2 < 2) {
    uVar16 = (uint)*(byte *)((int)pcVar26 + 8);
LAB_0073a794:
    if (uVar16 != 0) goto LAB_0073a79c;
LAB_0073a77c:
    FUN_0069263c(ppppppuVar5,pcVar26);
    pppppppuVar24 = (uint *******)&DAT_80000000;
    uVar32 = CONCAT44(extraout_r1,&DAT_80000000);
    local_b0 = extraout_r2;
    local_b4 = extraout_r3;
  }
  else {
    if (((uint)ppppppuVar5 & 0xff) != 0) goto LAB_0073a794;
    if ((uint *******)pcVar26 == (uint *******)0x2) goto LAB_0073a77c;
LAB_0073a79c:
    local_84 = (uint *******)pcVar26;
    local_88 = ppppppuVar5;
    uVar32 = FUN_0079627c(&local_88);
    pcVar26 = (char *)uVar32;
    pppppppuVar24 = (uint *******)&DAT_80000001;
    local_b0 = extraout_r2_00;
    local_b4 = extraout_r3_00;
  }
  goto LAB_0073aaec;
LAB_0073a44c:
  uVar7 = (uint)ppppppuVar2 & uVar7;
  local_b4 = *(uint *)((int)pppppppuVar27 + uVar7);
  uVar15 = local_b4 ^ uVar16 * 0x1010101;
  uVar15 = ~uVar15 & 0x80808080 & uVar15 + 0xfefefeff;
  while (uVar15 != 0) {
    uVar13 = uVar7 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                    (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) &
             (uint)ppppppuVar2;
    uVar15 = uVar15 - 1 & uVar15;
    if ((ppppppuVar14 == pppppppuVar27[uVar13 * -4 + -3]) &&
       (iVar12 = thunk_FUN_01bed842((uint ******)uVar32,pppppppuVar27[uVar13 * -4 + -4],ppppppuVar14
                                   ), iVar12 == 0)) {
      *(undefined8 *)(pppppppuVar27 + uVar13 * -4 + -2) = uVar30;
      goto LAB_0073a55c;
    }
  }
  uVar13 = local_b4 & 0x80808080;
  uVar15 = local_d4;
  if (local_b0 == (uint ******)&DAT_00000001) {
LAB_0073a510:
    if ((uVar13 & local_b4 << 1) != 0) goto LAB_0073a57c;
    local_b0 = (uint ******)&DAT_00000001;
    local_d4 = uVar15;
  }
  else {
    if (uVar13 != 0) {
      uVar15 = uVar7 + ((uint)LZCOUNT((local_b4 & 0x80) << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                      (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3) &
               (uint)ppppppuVar2;
      goto LAB_0073a510;
    }
    local_b0 = (uint ******)0x0;
  }
  local_c0 = local_c0 + 4;
  uVar7 = local_c0 + uVar7;
  goto LAB_0073a44c;
LAB_0073a57c:
  uVar7 = (uint)*(char *)((int)pppppppuVar27 + uVar15);
  if (-1 < (int)uVar7) {
    uVar7 = (uint)*pppppppuVar27 & 0x80808080;
    uVar15 = LZCOUNT(((uint)*pppppppuVar27 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                     (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18);
    uVar7 = (uint)*(byte *)((int)pppppppuVar27 + (uVar15 >> 3));
    uVar15 = uVar15 >> 3;
  }
  bVar1 = (byte)((ulonglong)uVar31 >> 0x18) >> 1;
  *(byte *)((int)pppppppuVar27 + uVar15) = bVar1;
  local_78 = (uint *******)((int)local_78 - (uVar7 & 1));
  *(byte *)((int)pppppppuVar27 + ((uint)ppppppuVar2 & uVar15 - 4) + 4) = bVar1;
  pppppppuVar27[uVar15 * -4 + -3] = ppppppuVar14;
  pppppppuVar27[uVar15 * -4 + -2] = local_9c;
  pppppppuVar27[uVar15 * -4 + -4] = (uint ******)uVar32;
  pppppppuVar27[uVar15 * -4 + -1] = (uint ******)((ulonglong)uVar30 >> 0x20);
  local_74 = (uint ******)((int)local_74 + 1);
LAB_0073a55c:
  pppppppuVar20 = pppppppuVar23;
  pppppppuVar25 = pppppppuVar8;
  if (bVar28) goto LAB_0073a624;
  goto joined_r0x0073a220;
LAB_0073a624:
  pppppppuVar3 = local_64;
  iVar12 = local_68;
  pcVar18 = local_6c;
  pppppppuVar25 = local_70;
  ppppppuVar2 = local_74;
  ppppppuVar14 = local_7c;
  pppppppuVar20 = local_80;
  if (local_74 != (uint ******)0x0) {
    pcVar26 = &DAT_00570b90;
    pcVar9 = (char *)FUN_01349930();
    pppppppuVar27 = (uint *******)(((uint)pcVar9 >> 0x19) * 0x1010101);
    pppppppuVar8 = (uint *******)0x0;
    do {
      uVar15 = (uint)ppppppuVar14 & (uint)pcVar9;
      uVar7 = *(uint *)((int)pppppppuVar20 + uVar15);
      for (uVar16 = ~(uVar7 ^ (uint)pppppppuVar27) & 0x80808080 &
                    (uVar7 ^ (uint)pppppppuVar27) + 0xfefefeff; uVar16 != 0;
          uVar16 = uVar16 - 1 & uVar16) {
        uVar13 = uVar15 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                         (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3) &
                 (uint)ppppppuVar14;
        if (((pppppppuVar20 + uVar13 * -4 + -4)[1] == (uint ******)0x8) &&
           (iVar10 = thunk_FUN_01bed842(&DAT_00570b90,pppppppuVar20[uVar13 * -4 + -4],8),
           iVar10 == 0)) {
          uVar21 = 0;
          local_b0 = pppppppuVar20[uVar13 * -4 + -1];
          if ((int)local_b0 < 0) {
LAB_0073a754:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar21,local_b0);
          }
          ppppppuVar19 = pppppppuVar20[uVar13 * -4 + -2];
          if (local_b0 == (uint ******)0x0) {
            local_9c = (uint ******)0x1;
            local_98 = (uint ******)0x0;
          }
          else {
            uVar21 = 1;
            local_9c = (uint ******)FUN_01298504(local_b0,1);
            local_98 = local_b0;
            if (local_9c == (uint ******)0x0) goto LAB_0073a754;
          }
          FUN_01bed4e2(local_9c,ppppppuVar19);
          goto LAB_0073a838;
        }
      }
      local_98 = (uint ******)&DAT_80000000;
      if ((uVar7 & 0x80808080 & uVar7 << 1) != 0) goto LAB_0073a838;
      pppppppuVar8 = pppppppuVar8 + 1;
      pcVar9 = (char *)(uVar15 + (int)pppppppuVar8);
    } while( true );
  }
  pcVar26 = &DAT_00000001;
  pppppppuVar24 = (uint *******)0x0;
  local_98 = (uint ******)&DAT_80000000;
  goto LAB_0073a7cc;
LAB_0073a838:
  uVar16 = FUN_01349930(pppppppuVar25,pcVar18,iVar12,pppppppuVar3,&DAT_0056d034,4);
  uVar7 = uVar16 >> 0x19;
  iVar10 = 0;
  while( true ) {
    uVar16 = (uint)ppppppuVar14 & uVar16;
    pppppppuVar22 = *(uint ********)((int)pppppppuVar20 + uVar16);
    uVar15 = (uint)pppppppuVar22 ^ uVar7 * 0x1010101;
    for (uVar15 = ~uVar15 & 0x80808080 & uVar15 + 0xfefefeff; uVar15 != 0;
        uVar15 = uVar15 - 1 & uVar15) {
      uVar13 = uVar16 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                       (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) &
               (uint)ppppppuVar14;
      ppppppuVar19 = (pppppppuVar20 + uVar13 * -4 + -4)[1];
      bVar28 = ppppppuVar19 == (uint ******)0x4;
      if (bVar28) {
        ppppppuVar19 = (uint ******)*pppppppuVar20[uVar13 * -4 + -4];
      }
      if (bVar28 && ppppppuVar19 == (uint ******)0x70636864) {
        if ((pppppppuVar20[uVar13 * -4 + -1] != (uint ******)0x4) ||
           (*pppppppuVar20[uVar13 * -4 + -2] != (uint *****)0x65757274)) goto LAB_0073a934;
        local_bc = (uint *******)0x0;
        pppppppuVar24 = (uint *******)&DAT_80000000;
        goto LAB_0073aa5c;
      }
    }
    if (((uint)pppppppuVar22 & 0x80808080 & (int)pppppppuVar22 << 1) != 0) break;
    iVar10 = iVar10 + 4;
    uVar16 = uVar16 + iVar10;
  }
LAB_0073a934:
  pcVar26 = "gateway";
  pcVar9 = (char *)FUN_01349930(pppppppuVar25,pcVar18,iVar12,pppppppuVar3,"gateway",7);
  pppppppuVar27 = (uint *******)(((uint)pcVar9 >> 0x19) * 0x1010101);
  pppppppuVar8 = (uint *******)0x0;
  while( true ) {
    pppppppuVar22 = (uint *******)((uint)ppppppuVar14 & (uint)pcVar9);
    uVar7 = *(uint *)((int)pppppppuVar20 + (int)pppppppuVar22);
    for (uVar16 = ~(uVar7 ^ (uint)pppppppuVar27) & 0x80808080 &
                  (uVar7 ^ (uint)pppppppuVar27) + 0xfefefeff; uVar16 != 0;
        uVar16 = uVar16 - 1 & uVar16) {
      uVar15 = (uint)((int)pppppppuVar22 +
                     ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                    (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3)) &
               (uint)ppppppuVar14;
      if (((pppppppuVar20 + uVar15 * -4 + -4)[1] == (uint ******)0x7) &&
         (iVar10 = thunk_FUN_01bed842("gateway",pppppppuVar20[uVar15 * -4 + -4],7), iVar10 == 0)) {
        FUN_01304e7c(&local_60,pppppppuVar20[uVar15 * -4 + -2],pppppppuVar20[uVar15 * -4 + -1]);
        if ((char)local_60 != '\0') goto LAB_0073aa44;
        local_b4 = CONCAT13(local_5c._0_1_,local_60._1_3_);
        goto LAB_0073ab1c;
      }
    }
    local_b4 = 0;
    if ((uVar7 & 0x80808080 & uVar7 << 1) != 0) break;
    pppppppuVar8 = pppppppuVar8 + 1;
    pcVar9 = (char *)((int)pppppppuVar22 + (int)pppppppuVar8);
  }
LAB_0073ab1c:
  pcVar26 = (char *)FUN_01349930(pppppppuVar25,pcVar18,iVar12,pppppppuVar3,&DAT_003e0577,10);
  pppppppuVar27 = (uint *******)(((uint)pcVar26 >> 0x19) * 0x1010101);
  pppppppuVar8 = (uint *******)0x0;
  while( true ) {
    pppppppuVar23 = (uint *******)((uint)ppppppuVar14 & (uint)pcVar26);
    uVar7 = *(uint *)((int)pppppppuVar20 + (int)pppppppuVar23);
    for (uVar16 = ~(uVar7 ^ (uint)pppppppuVar27) & 0x80808080 &
                  (uVar7 ^ (uint)pppppppuVar27) + 0xfefefeff; uVar16 != 0;
        uVar16 = uVar16 - 1 & uVar16) {
      uVar15 = (uint)((int)pppppppuVar23 +
                     ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                    (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3)) &
               (uint)ppppppuVar14;
      if (((pppppppuVar20 + uVar15 * -4 + -4)[1] == (uint ******)0xa) &&
         (iVar10 = thunk_FUN_01bed842(&DAT_003e0577,pppppppuVar20[uVar15 * -4 + -4],10), iVar10 == 0
         )) {
        pppppppuVar23 = (uint *******)&local_60;
        local_78 = (uint *******)pppppppuVar20[uVar15 * -4 + -2];
        local_7c = pppppppuVar20[uVar15 * -4 + -1];
        local_64 = (uint *******)CONCAT22(local_64._2_2_,1);
        local_6c = (char *)((int)local_78 + (int)local_7c);
        local_68 = 0;
        local_80 = (uint *******)0x0;
        local_74 = local_7c;
        local_70 = local_78;
        goto LAB_0073ac40;
      }
    }
    if ((uVar7 & 0x80808080 & uVar7 << 1) != 0) break;
    pppppppuVar8 = pppppppuVar8 + 1;
    pcVar26 = (char *)((int)pppppppuVar23 + (int)pppppppuVar8);
  }
LAB_0073ad54:
  local_bc = (uint *******)0x0;
  pppppppuVar24 = (uint *******)0x0;
  pcVar26 = &DAT_00000001;
  goto LAB_0073ad80;
LAB_0073aedc:
  uVar15 = (uint)ppppppuVar14 & (uint)pcVar18;
  pppppppuVar23 = *(uint ********)((int)pppppppuVar20 + uVar15);
  uVar16 = (uint)pppppppuVar23 ^ uVar7 * 0x1010101;
  for (pppppppuVar27 = (uint *******)(~uVar16 & 0x80808080 & uVar16 + 0xfefefeff);
      pppppppuVar27 != (uint *******)0x0;
      pppppppuVar27 = (uint *******)((uint)((int)pppppppuVar27 + -1) & (uint)pppppppuVar27)) {
    uVar16 = uVar15 + ((uint)LZCOUNT((int)pppppppuVar27 << 0x18 |
                                     ((uint)pppppppuVar27 >> 8 & 0xff) << 0x10 |
                                     ((uint)pppppppuVar27 >> 0x10 & 0xff) << 8 |
                                     (uint)pppppppuVar27 >> 0x18) >> 3) & (uint)ppppppuVar14;
    if (((pppppppuVar20 + uVar16 * -4 + -4)[1] == (uint ******)0x7) &&
       (iVar12 = thunk_FUN_01bed842("netmask",pppppppuVar20[uVar16 * -4 + -4],7), iVar12 == 0)) {
      FUN_01304e7c(&local_60,pppppppuVar20[uVar16 * -4 + -2],pppppppuVar20[uVar16 * -4 + -1]);
      pppppppuVar23 = pppppppuVar22;
      if ((char)local_60 == '\x01') goto LAB_0073a7cc;
      pppppppuVar27 = (uint *******)CONCAT13(local_5c._0_1_,local_60._1_3_);
      goto LAB_0073aa5c;
    }
  }
  if (((uint)pppppppuVar23 & 0x80808080 & (int)pppppppuVar23 << 1) != 0) goto LAB_0073a7cc;
  pppppppuVar22 = pppppppuVar22 + 1;
  pcVar18 = (char *)(uVar15 + (int)pppppppuVar22);
  goto LAB_0073aedc;
  while( true ) {
    FUN_01304e7c(pppppppuVar23,(int)uVar32,(int)((ulonglong)uVar32 >> 0x20));
    if ((char)local_60 != '\x01') break;
LAB_0073ac40:
    uVar32 = FUN_013182f8(&local_80);
    if ((int)uVar32 == 0) goto LAB_0073ad54;
  }
  ppppppuVar19 = (uint ******)CONCAT13(local_5c._0_1_,local_60._1_3_);
  pppppppuVar22 = (uint *******)thunk_FUN_01be5118(0x10);
  if (pppppppuVar22 == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x10);
  }
  *pppppppuVar22 = ppppppuVar19;
  pppppppuVar8 = (uint *******)&SUB_00000004;
  local_bc = (uint *******)&DAT_00000001;
  local_30 = (uint *******)&DAT_00000001;
  local_38 = (uint *******)&SUB_00000004;
  pppppppuVar27 = (uint *******)&local_38;
  local_60 = local_80;
  local_5c = local_7c;
  local_58 = local_78;
  local_54 = local_74;
  local_50 = local_70;
  local_4c = local_6c;
  local_48 = local_68;
  local_44 = local_64;
  local_34 = pppppppuVar22;
  while( true ) {
    uVar32 = FUN_013182f8(pppppppuVar23);
    if ((int)uVar32 == 0) break;
    FUN_01304e7c(&local_29,(int)uVar32,(int)((ulonglong)uVar32 >> 0x20));
    ppppppuVar19 = local_28;
    if (local_29 != '\x01') {
      if (local_bc == local_38) {
        FUN_016092cc(pppppppuVar27,local_bc,1,1,4);
        pppppppuVar22 = local_34;
      }
      pppppppuVar22[(int)local_bc] = ppppppuVar19;
      local_bc = (uint *******)((int)local_bc + 1);
      local_30 = local_bc;
    }
  }
  if (local_38 == (uint *******)&DAT_80000000) goto LAB_0073ad54;
  pppppppuVar24 = local_38;
  pcVar26 = (char *)local_34;
LAB_0073ad80:
  if (ppppppuVar2 != (uint ******)0x0) {
    uVar7 = FUN_01349930(pppppppuVar25,pcVar18,iVar12,pppppppuVar3,&DAT_003e0581,9);
    pppppppuVar23 = (uint *******)((uVar7 >> 0x19) * 0x1010101);
    iVar10 = 0;
    while( true ) {
      uVar7 = (uint)ppppppuVar14 & uVar7;
      pppppppuVar8 = *(uint ********)((int)pppppppuVar20 + uVar7);
      for (pppppppuVar27 =
                (uint *******)
                (~((uint)pppppppuVar8 ^ (uint)pppppppuVar23) & 0x80808080 &
                ((uint)pppppppuVar8 ^ (uint)pppppppuVar23) + 0xfefefeff);
          pppppppuVar27 != (uint *******)0x0;
          pppppppuVar27 = (uint *******)((uint)((int)pppppppuVar27 + -1) & (uint)pppppppuVar27)) {
        uVar16 = uVar7 + ((uint)LZCOUNT((int)pppppppuVar27 << 0x18 |
                                        ((uint)pppppppuVar27 >> 8 & 0xff) << 0x10 |
                                        ((uint)pppppppuVar27 >> 0x10 & 0xff) << 8 |
                                        (uint)pppppppuVar27 >> 0x18) >> 3) & (uint)ppppppuVar14;
        if (((pppppppuVar20 + uVar16 * -4 + -4)[1] == (uint ******)0x9) &&
           (iVar11 = thunk_FUN_01bed842(&DAT_003e0581,pppppppuVar20[uVar16 * -4 + -4],9),
           iVar11 == 0)) {
          FUN_01304e7c(&local_60,pppppppuVar20[uVar16 * -4 + -2],pppppppuVar20[uVar16 * -4 + -1]);
          if ((char)local_60 == '\x01') goto LAB_0073a7cc;
          pppppppuVar8 = (uint *******)CONCAT13(local_5c._0_1_,local_60._1_3_);
          pcVar18 = (char *)FUN_01349930(pppppppuVar25,pcVar18,iVar12,pppppppuVar3,"netmask",7);
          uVar7 = (uint)pcVar18 >> 0x19;
          pppppppuVar22 = (uint *******)0x0;
          goto LAB_0073aedc;
        }
      }
      if (((uint)pppppppuVar8 & 0x80808080 & (int)pppppppuVar8 << 1) != 0) break;
      iVar10 = iVar10 + 4;
      uVar7 = uVar7 + iVar10;
    }
  }
LAB_0073a7cc:
  FUN_0134c054(pppppppuVar24,pcVar26,1,4);
  pppppppuVar22 = pppppppuVar23;
LAB_0073aa44:
  pppppppuVar24 = (uint *******)&DAT_80000001;
  if (local_98 != (uint ******)&DAT_80000000) {
    FUN_019bb7e0(local_98,local_9c);
  }
LAB_0073aa5c:
  uVar32 = CONCAT44(local_9c,local_98);
  if ((ppppppuVar14 != (uint ******)0x0) &&
     (ppppppuVar14 + (int)ppppppuVar14 * 4 + 4 != (uint ******)0xfffffffb)) {
    thunk_FUN_01be4678((int)pppppppuVar20 - ((int)ppppppuVar14 * 0x10 + 0x10));
  }
  if (pppppppuVar24 == (uint *******)&DAT_80000001) {
    local_5c = (uint ******)&DAT_0132b6a0;
    local_60 = (uint *******)&DAT_01c07dc8;
    pcVar26 = (char *)FUN_0073b5cc(&local_60);
    local_bc = pppppppuVar22;
  }
  FUN_019bb7e0(pppppppuVar4,ppppppuVar5);
LAB_0073aaec:
  param_1[5] = local_b4;
  *(undefined8 *)(param_1 + 6) = uVar32;
  param_1[8] = local_b0;
  uVar6 = 1;
  *param_1 = pppppppuVar24;
  param_1[1] = pcVar26;
  param_1[2] = local_bc;
  param_1[3] = pppppppuVar8;
  param_1[4] = pppppppuVar27;
LAB_0073ab08:
  *(undefined1 *)(param_2 + 0x2c) = uVar6;
  return;
}

