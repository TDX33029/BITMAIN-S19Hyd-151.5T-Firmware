// FUN_006476e4 @ 006476e4 size=2360 calls_out=22 calls_in=2
// strings: scheduler::cronopen/utils-rs/scheduler/src/cron.rsevent open/utils-rs/scheduler/src/cron.rs:4650 event open/utils-rs/scheduler/src/cron.rs:231event open/utils-rs/scheduler/src/cron.rs:226event open/utils-rs/scheduler/src/cron.rs:333 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | scheduler::cronopen/utils-rs/scheduler/src/cron.rsevent open/utils-rs/scheduler/src/cron.rs:4650 event open/utils-rs/scheduler/src/cron.rs:231event open/utils-rs/scheduler/src/cron.rs:226event open/utils-rs/scheduler/src/cron.rs:333 | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_006476e4(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 **ppuVar1;
  undefined4 **ppuVar2;
  undefined4 **ppuVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  byte *pbVar9;
  undefined4 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  undefined4 **ppuVar14;
  undefined4 uVar15;
  undefined4 **ppuVar16;
  undefined4 *puVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint uVar20;
  bool bVar21;
  ulonglong uVar22;
  int local_50c;
  int local_508;
  undefined1 auStack_4b0 [96];
  undefined4 ***local_450;
  undefined4 ***local_44c;
  int *local_448;
  undefined1 auStack_388 [200];
  undefined4 **local_2c0;
  undefined4 **local_2bc;
  undefined1 auStack_2b8 [200];
  int **local_1f0;
  undefined4 **local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 *local_1d8;
  undefined4 ****local_1d4;
  undefined4 **local_1d0;
  undefined4 **local_1cc;
  undefined4 **local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  int ***local_100;
  code *local_fc;
  int *local_f8;
  int **local_f0;
  undefined4 **local_ec;
  undefined1 *local_e8;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xe8)) {
  case 0:
    FUN_00eac858(auStack_4b0);
    FUN_01bed4e2(param_2 + 0x40,auStack_4b0,0x60);
    *(undefined4 *)(param_2 + 0xc4) = 4;
    *(undefined4 *)(param_2 + 0xc0) = 0;
    *(undefined4 *)(param_2 + 200) = 0;
    *(undefined4 *)(param_2 + 0xa0) = 0;
    *(undefined4 *)(param_2 + 0xa4) = 1;
    *(undefined4 *)(param_2 + 0xa8) = 0;
    *(undefined4 *)(param_2 + 0xac) = 0;
    *(undefined4 *)(param_2 + 0xb0) = 1;
    *(undefined4 *)(param_2 + 0xb4) = 0;
    *(undefined4 *)(param_2 + 0xb8) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c207dc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c207dc);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xe5)) {
    case 0:
      iVar6 = *(int *)(param_2 + 0xe0);
      goto LAB_00647834;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c207fc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c207fc);
    case 3:
      uVar10 = *(undefined4 *)(param_2 + 0xdc);
      goto LAB_00647874;
    }
  }
LAB_0064781c:
  *(undefined1 *)(param_2 + 0xe5) = 0;
  iVar6 = param_2 + 0x40;
  *(int *)(param_2 + 0xe0) = iVar6;
LAB_00647834:
  *(undefined1 *)(param_2 + 0xe4) = 1;
  *(int *)(param_2 + 0xcc) = iVar6;
  *(undefined4 *)(param_2 + 0xd0) = 0x80000000;
  do {
    uVar10 = *(undefined4 *)(param_2 + 0xcc);
    *(undefined4 *)(param_2 + 0xdc) = uVar10;
LAB_00647874:
    FUN_0118ec5c(&local_1d0,uVar10,param_3);
    ppuVar3 = local_1cc;
    ppuVar1 = local_1d0;
    if (local_1d0 == (undefined4 **)0x80000002) {
      uVar4 = 3;
      *(undefined1 *)(param_2 + 0xe5) = 3;
      *param_1 = 0x80000001;
      goto LAB_00648024;
    }
    if (local_1d0 == (undefined4 **)0x80000000) {
      local_1d0 = local_1cc;
      local_1cc = local_1c8;
      ppuVar14 = (undefined4 **)FUN_007afd78(&local_1d0);
      ppuVar16 = (undefined4 **)0x80000001;
      goto LAB_00647998;
    }
    if (local_1d0 == (undefined4 **)0x80000001) {
      if (*(int *)(param_2 + 0xd0) != -0x80000000) {
        FUN_019bb7e0(*(int *)(param_2 + 0xd0),*(undefined4 *)(param_2 + 0xd4));
      }
      *(undefined1 *)(param_2 + 0xe4) = 0;
      FUN_01bed4e2(&local_450,&local_f0,200);
      *(undefined1 *)(param_2 + 0xe5) = 1;
      FUN_01bed4e2(auStack_388,&local_450,200);
      FUN_005f5ea8(param_2 + 0xcc);
      goto LAB_00647c90;
    }
    uVar22 = FUN_013245a0(local_1cc);
    iVar6 = (int)(uVar22 >> 0x20);
    pcVar7 = (char *)uVar22;
    if (iVar6 != 0) {
      if ((uVar22 < 0x300000000) || (iVar8 = thunk_FUN_01bed842("###",pcVar7,3), iVar8 != 0)) {
        if (*pcVar7 != '#') break;
      }
      else {
        pbVar18 = (byte *)0x0;
        bVar21 = false;
        pbVar19 = (byte *)0x0;
        pbVar11 = (byte *)(pcVar7 + 3);
        do {
          pbVar9 = pbVar19;
          if (bVar21) {
            iVar8 = -0x80000000;
            goto LAB_00647e30;
          }
          bVar21 = true;
          pbVar19 = pbVar18;
          do {
            while( true ) {
              while( true ) {
                do {
                  pbVar18 = pbVar19;
                  if (pbVar11 == (byte *)(pcVar7 + iVar6)) {
                    pbVar19 = pbVar9;
                    pbVar11 = (byte *)(pcVar7 + iVar6);
                    pbVar12 = (byte *)(iVar6 + -3);
                    goto LAB_00647bd8;
                  }
                  pbVar12 = pbVar11 + 1;
                  uVar20 = (uint)*pbVar11;
                  if (0x7fffffff < (uint)(int)(char)*pbVar11) {
                    if (uVar20 < 0xe0) {
                      uVar20 = pbVar11[1] & 0x3f | (uVar20 & 0x1f) << 6;
                      pbVar12 = pbVar11 + 2;
                    }
                    else {
                      uVar13 = pbVar11[2] & 0x3f | (pbVar11[1] & 0x3f) << 6;
                      if (uVar20 < 0xf0) {
                        uVar20 = uVar13 | (uVar20 & 0x1f) << 0xc;
                        pbVar12 = pbVar11 + 3;
                      }
                      else {
                        uVar20 = pbVar11[3] & 0x3f | uVar13 << 6 | (uVar20 & 7) << 0x12;
                        pbVar12 = pbVar11 + 4;
                      }
                    }
                  }
                  pbVar19 = pbVar12 + ((int)pbVar18 - (int)pbVar11);
                  pbVar11 = pbVar12;
                  if ((uVar20 - 9 < 0x18) && ((1 << (uVar20 - 9 & 0xff) & 0x80001fU) != 0))
                  goto LAB_00647bc0;
                } while (uVar20 < 0x80);
                uVar13 = uVar20 >> 8;
                if (0x1f < uVar13) break;
                if (uVar13 == 0) {
                  if (((&DAT_00533bcd)[uVar20 & 0xff] & 1) != 0) goto LAB_00647bc0;
                }
                else if ((uVar13 == 0x16) && (uVar20 == 0x1680)) goto LAB_00647bc0;
              }
              if (uVar13 == 0x20) break;
              if ((uVar13 == 0x30) && (uVar20 == 0x3000)) goto LAB_00647bc0;
            }
          } while (((&DAT_00533bcd)[uVar20 & 0xff] & 2) == 0);
LAB_00647bc0:
          bVar21 = false;
          pbVar12 = pbVar18;
          pbVar18 = pbVar19;
LAB_00647bd8:
          iVar8 = (int)pbVar12 - (int)pbVar9;
        } while (iVar8 == 0);
        uVar10 = 0;
        if (iVar8 < 0) {
LAB_00647bec:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar10,local_50c);
        }
        uVar10 = 1;
        local_50c = FUN_01298504(iVar8,1);
        if (local_50c == 0) {
          local_50c = iVar8;
          goto LAB_00647bec;
        }
        FUN_01bed4e2(local_50c,pcVar7 + 3 + (int)pbVar9,iVar8);
        local_508 = iVar8;
LAB_00647e30:
        if (*(int *)(param_2 + 0xd0) != -0x80000000) {
          FUN_019bb7e0(*(int *)(param_2 + 0xd0),*(undefined4 *)(param_2 + 0xd4));
        }
        *(int *)(param_2 + 0xd4) = local_50c;
        *(undefined1 *)(param_2 + 0xe4) = 1;
        *(int *)(param_2 + 0xd0) = iVar8;
        *(int *)(param_2 + 0xd8) = local_508;
      }
    }
    FUN_019bb7e0(ppuVar1,ppuVar3);
  } while( true );
  *(undefined1 *)(param_2 + 0xe4) = 0;
  local_100 = *(int ****)(param_2 + 0xd0);
  local_fc = *(code **)(param_2 + 0xd4);
  local_f8 = *(int **)(param_2 + 0xd8);
  FUN_0195a40c(&local_1d0,pcVar7,iVar6);
  ppuVar14 = local_1cc;
  ppuVar2 = local_1d0;
  ppuVar16 = (undefined4 **)0x80000001;
  if (local_1d0 != (undefined4 **)0x80000000) {
    FUN_01bed4e2(&local_f0,&local_1c8,200);
    ppuVar16 = ppuVar2;
  }
  FUN_019bb7e0(ppuVar1,ppuVar3);
LAB_00647998:
  bVar21 = *(char *)(param_2 + 0xe4) != '\0';
  iVar6 = 0;
  if (bVar21) {
    iVar6 = *(int *)(param_2 + 0xd0);
  }
  if (bVar21 && iVar6 != -0x80000000) {
    FUN_019bb7e0(iVar6,*(undefined4 *)(param_2 + 0xd4));
  }
  *(undefined1 *)(param_2 + 0xe4) = 0;
  FUN_01bed4e2(&local_450,&local_f0,200);
  *(undefined1 *)(param_2 + 0xe5) = 1;
  FUN_01bed4e2(auStack_388,&local_450,200);
  FUN_005f5ea8(param_2 + 0xcc);
  if (ppuVar16 == (undefined4 **)0x80000000) {
LAB_00647c90:
    if ((DAT_01d50f88 == 0) &&
       (((DAT_01d4fc6c - 1 < 2 ||
         ((DAT_01d4fc6c != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4fc64), cVar5 != '\0')))) &&
        (iVar6 = FUN_01aaa278(DAT_01d4fc64), iVar6 != 0)))) {
      if (*(undefined4 ***)(DAT_01d4fc64 + 0x20) == (undefined4 **)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c207ec);
      }
      local_44c = &local_1f0;
      local_1c8 = *(undefined4 ***)(DAT_01d4fc64 + 0x24);
      local_1c4 = *(undefined4 *)(DAT_01d4fc64 + 0x28);
      local_f8 = (int *)(DAT_01d4fc64 + 0x1c);
      local_1d0 = (undefined4 **)*local_f8;
      local_450 = &local_1d0;
      local_100 = (int ***)&local_450;
      local_1c0 = 0;
      local_1e8 = *(undefined4 *)(param_2 + 200);
      local_1ec = &local_1d8;
      local_1d8 = &local_1e8;
      local_fc = (code *)0x1;
      local_448 = (int *)&DAT_01d2ea4c;
      local_1f0 = (int **)&DAT_0059d784;
      local_1d4 = (undefined4 ****)FUN_012fd02c;
      local_1cc = *(undefined4 ***)(DAT_01d4fc64 + 0x20);
      FUN_01aaaecc(DAT_01d4fc64,&local_100);
      iVar6 = DAT_01d4fc64;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_ec = *(undefined4 ***)(DAT_01d4fc64 + 0x14);
        local_e8 = *(undefined1 **)(DAT_01d4fc64 + 0x18);
        local_f0 = (int **)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar17 = DAT_01d4edc8;
        pcVar7 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar17 = &DAT_01cfc5e0;
          pcVar7 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar8 = (*(code *)puVar17[3])(pcVar7,&local_f0);
        if (iVar8 != 0) {
          FUN_01aaa328(iVar6,pcVar7,puVar17[4],&local_f0,&local_100);
        }
      }
    }
    else {
      iVar6 = DAT_01d4fc64;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_1e0 = *(undefined4 *)(DAT_01d4fc64 + 0x14);
        local_1dc = *(undefined4 *)(DAT_01d4fc64 + 0x18);
        local_1e4 = 5;
        DataMemoryBarrier(0xb);
        puVar17 = DAT_01d4edc8;
        pcVar7 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar17 = &DAT_01cfc5e0;
          pcVar7 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar8 = (*(code *)puVar17[3])(pcVar7,&local_1e4);
        if (iVar8 != 0) {
          local_448 = (int *)(DAT_01d4fc64 + 0x1c);
          if (*(undefined4 ***)(DAT_01d4fc64 + 0x20) == (undefined4 **)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c207ec);
          }
          local_ec = &local_1d8;
          local_1c8 = *(undefined4 ***)(DAT_01d4fc64 + 0x24);
          local_1c4 = *(undefined4 *)(DAT_01d4fc64 + 0x28);
          local_f0 = (int **)&local_1d0;
          local_450 = &local_f0;
          local_1f0 = *(int ***)(param_2 + 200);
          local_1d4 = &local_100;
          local_1c0 = 0;
          local_100 = &local_1f0;
          local_44c = (undefined4 ***)&DAT_00000001;
          local_e8 = &DAT_01d2ea4c;
          local_1d8 = (undefined4 *)&DAT_0059d784;
          local_fc = FUN_012fd02c;
          local_1d0 = (undefined4 **)*local_448;
          local_1cc = *(undefined4 ***)(DAT_01d4fc64 + 0x20);
          FUN_01aaa328(iVar6,pcVar7,puVar17[4],&local_1e4,&local_450);
        }
      }
    }
    uVar15 = *(undefined4 *)(param_2 + 0xc0);
    ppuVar14 = *(undefined4 ***)(param_2 + 0xc4);
    uVar10 = *(undefined4 *)(param_2 + 200);
    FUN_005f32d0(param_2 + 0x40);
    goto LAB_00648014;
  }
  if (ppuVar16 == (undefined4 **)0x80000001) {
    FUN_005f9d30(param_2 + 0xc0);
    FUN_005f32d0(param_2 + 0x40);
    uVar15 = 0x80000000;
    uVar10 = 0x80000001;
LAB_00648014:
    param_1[1] = ppuVar14;
    param_1[2] = uVar10;
    *param_1 = uVar15;
    uVar4 = 1;
LAB_00648024:
    *(undefined1 *)(param_2 + 0xe8) = uVar4;
    return;
  }
  local_2c0 = ppuVar16;
  local_2bc = ppuVar14;
  FUN_01bed4e2(auStack_2b8,auStack_388,200);
  iVar6 = *(int *)(param_2 + 200);
  if (iVar6 == *(int *)(param_2 + 0xc0)) {
    FUN_0195b4a8();
  }
  FUN_01bed4e2(iVar6 * 0xd0 + *(int *)(param_2 + 0xc4),&local_2c0,0xd0);
  *(int *)(param_2 + 200) = iVar6 + 1;
  goto LAB_0064781c;
}

