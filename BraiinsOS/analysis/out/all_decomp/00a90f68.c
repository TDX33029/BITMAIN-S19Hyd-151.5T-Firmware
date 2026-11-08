// FUN_00a90f68 @ 00a90f68 size=1368 calls_out=9 calls_in=1
// strings: 1.3.6.1.4.1.23200.2.1.2.1ipduv3 | 1.3.6.1.4.1.23280.8.1.5.bosminer_plus_tunerbosminer-plus/bosminer-plus-tuner/src/main.rsevent bosminer-plus/bosminer-plus-tuner/src/main.rs:302event bosminer-plus/bosminer-plus-tuner/src/main.rs:317event bosminer-plus/bosminer-plus-tuner/src/main.rs:249event bosminer-plus/bosminer-plus-tuner/src/main.rs:266event bosminer-plus/bosminer-plus-tuner/src/main.rs:283event bosminer-plus/bosminer-plus-tuner/src/main.rs:223event bosminer-plus/bosminer-plus-tuner/src/main.rs:328event bosminer-plus/bosminer-plus-tuner/src/main.rs:390event bosminer-plus/bosminer-plus-tuner/src/main.rs:185event bosminer-plus/bosminer-plus-tuner/src/main.rs:353event bosminer-plus/bosminer-plus-tuner/src/main.rs:219 | 1.3.6.1.4.1.23280.8.1.5.bosminer_plus_tunerbosminer-plus/bosminer-plus-tuner/src/main.rsevent bosminer-plus/bosminer-plus-tuner/src/main.rs:302event bosminer-plus/bosminer-plus-tuner/src/main.rs:317event bosminer-plus/bosminer-plus-tuner/src/main.rs:249event bosminer-plus/bosminer-plus-tuner/src/main.rs:266event bosminer-plus/bosminer-plus-tuner/src/main.rs:283event bosminer-plus/bosminer-plus-tuner/src/main.rs:223event bosminer-plus/bosminer-plus-tuner/src/main.rs:328event bosminer-plus/bosminer-plus-tuner/src/main.rs:390event bosminer-plus/bosminer-plus-tuner/src/main.rs:185event bosminer-plus/bosminer-plus-tuner/src/main.rs:353event bosminer-plus/bosminer-plus-tuner/src/main.rs:219 | 1.3.6.1.4.1.23280.8.1.5.bosminer_plus_tunerbosminer-plus/bosminer-plus-tuner/src/main.rsevent bosminer-plus/bosminer-plus-tuner/src/main.rs:302event bosminer-plus/bosminer-plus-tuner/src/main.rs:317event bosminer-plus/bosminer-plus-tuner/src/main.rs:249event bosminer-plus/bosminer-plus-tuner/src/main.rs:266event bosminer-plus/bosminer-plus-tuner/src/main.rs:283event bosminer-plus/bosminer-plus-tuner/src/main.rs:223event bosminer-plus/bosminer-plus-tuner/src/main.rs:328event bosminer-plus/bosminer-plus-tuner/src/main.rs:390event bosminer-plus/bosminer-plus-tuner/src/main.rs:185event bosminer-plus/bosminer-plus-tuner/src/main.rs:353event bosminer-plus/bosminer-plus-tuner/src/main.rs:219

/* WARNING: Removing unreachable block (ram,0x00a91230) */
/* WARNING: Removing unreachable block (ram,0x00a91164) */
/* WARNING: Removing unreachable block (ram,0x00a91274) */
/* WARNING: Removing unreachable block (ram,0x00a9127c) */
/* WARNING: Removing unreachable block (ram,0x00a91288) */

longlong FUN_00a90f68(int *param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  char **ppcVar3;
  int *piVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  ulonglong uVar15;
  int local_5c;
  char *local_58;
  int local_54;
  int iStack_50;
  char *local_48;
  undefined4 local_44;
  char *local_40;
  int iStack_3c;
  int iStack_38;
  char **local_30;
  byte *local_2c;
  int *local_28;
  undefined1 *local_24;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0xd4]) {
  case '\0':
    iVar9 = param_1[0xd2];
    param_1[0xd3] = iVar9;
    if (*(char *)(iVar9 + 0x68) == '\x03') {
      *param_1 = iVar9;
      *(undefined1 *)(param_1 + 2) = 0;
LAB_00a90fec:
      *(undefined1 *)(param_1 + 9) = 0;
      param_1[1] = iVar9;
      param_1[4] = iVar9;
      param_1[5] = (int)"1.3.6.1.4.1.23200.2.1.2.1ipduv3";
      param_1[6] = 0x19;
switchD_00a90fd0_caseD_3:
      FUN_00a91764(&local_30,param_1 + 4,param_2);
      piVar4 = local_28;
      pbVar11 = local_2c;
      ppcVar3 = local_30;
      if (local_30 == (char **)0x80000001) {
        uVar5 = 3;
        goto LAB_00a910fc;
      }
      FUN_00a9166c(param_1 + 4);
      if (ppcVar3 == (char **)&DAT_80000000) {
        (*(code *)**(undefined4 **)pbVar11)(pbVar11);
        local_24 = &LAB_00fac484;
        local_28 = (int *)(param_1[1] + 0x60);
        local_30 = &local_58;
        local_54 = 0x18;
        local_58 = 
        "1.3.6.1.4.1.23280.8.1.5.bosminer_plus_tunerbosminer-plus/bosminer-plus-tuner/src/main.rsevent bosminer-plus/bosminer-plus-tuner/src/main.rs:302event bosminer-plus/bosminer-plus-tuner/src/main.rs:317event bosminer-plus/bosminer-plus-tuner/src/main.rs:249event bosminer-plus/bosminer-plus-tuner/src/main.rs:266event bosminer-plus/bosminer-plus-tuner/src/main.rs:283event bosminer-plus/bosminer-plus-tuner/src/main.rs:223event bosminer-plus/bosminer-plus-tuner/src/main.rs:328event bosminer-plus/bosminer-plus-tuner/src/main.rs:390event bosminer-plus/bosminer-plus-tuner/src/main.rs:185event bosminer-plus/bosminer-plus-tuner/src/main.rs:353event bosminer-plus/bosminer-plus-tuner/src/main.rs:219"
        ;
        local_2c = (byte *)&DAT_0157d360;
        FUN_00600d2c(&local_40,&DAT_00570dec,&local_30);
        param_1[3] = (int)local_40;
        param_1[4] = iStack_3c;
        param_1[5] = iStack_38;
        *(undefined1 *)(param_1 + 0xd1) = 0;
        param_1[0xd0] = param_1[1];
        param_1[7] = param_1[5];
        param_1[6] = param_1[4];
        goto switchD_00a90fd0_caseD_4;
      }
      uVar5 = 1;
      if (piVar4 == (int *)0x6) {
        uVar12 = (uint)*pbVar11;
        if (uVar12 - 0x41 < 0x1a) {
          uVar12 = uVar12 | 0x20;
        }
        if (uVar12 == 0x69) {
          uVar12 = (uint)pbVar11[1];
          if (uVar12 - 0x41 < 0x1a) {
            uVar12 = uVar12 | 0x20;
          }
          if (uVar12 == 0x70) {
            uVar12 = (uint)pbVar11[2];
            if (uVar12 - 0x41 < 0x1a) {
              uVar12 = uVar12 | 0x20;
            }
            if (uVar12 == 100) {
              uVar12 = (uint)pbVar11[3];
              if (uVar12 - 0x41 < 0x1a) {
                uVar12 = uVar12 | 0x20;
              }
              if (uVar12 == 0x75) {
                uVar12 = (uint)pbVar11[4];
                if (uVar12 - 0x41 < 0x1a) {
                  uVar12 = uVar12 | 0x20;
                }
                if (uVar12 == 0x76) {
                  uVar12 = (uint)pbVar11[5];
                  if (uVar12 - 0x41 < 0x1a) {
                    uVar12 = uVar12 | 0x20;
                  }
                  if (uVar12 == 0x33) {
                    uVar5 = 2;
                  }
                }
              }
            }
          }
        }
      }
      bVar2 = false;
      if (ppcVar3 != (char **)0x0) {
        thunk_FUN_016d3fb4(pbVar11);
      }
LAB_00a91218:
      *(undefined1 *)(param_1 + 2) = 1;
      uVar12 = param_2;
      goto LAB_00a91228;
    }
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0186dd08);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186dd08);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[2]) {
    case '\0':
      iVar9 = *param_1;
      goto LAB_00a90fec;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187b5ec);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187b5ec);
    case '\x03':
      goto switchD_00a90fd0_caseD_3;
    }
switchD_00a90fd0_caseD_4:
    uVar15 = FUN_00a93b08(param_1 + 6,param_2);
    uVar12 = (uint)(uVar15 >> 0x20);
    uVar5 = 4;
    if ((int)uVar15 == 2) {
LAB_00a910fc:
      *(undefined1 *)(param_1 + 2) = uVar5;
      *(undefined1 *)(param_1 + 0xd4) = 3;
      return CONCAT44(param_2,1);
    }
    if ((char)param_1[0xd1] == '\x03') {
      FUN_00a9166c(param_1 + 8);
    }
    if ((uVar15 & 1) == 0) {
      if (param_1[3] != 0) {
        thunk_FUN_016d3fb4(param_1[4]);
      }
      uVar5 = 0;
      bVar2 = false;
      *(undefined1 *)(param_1 + 2) = 1;
    }
    else {
      bVar2 = true;
      uVar5 = 0;
      param_2 = uVar12;
      if (param_1[3] == 0) goto LAB_00a91218;
      thunk_FUN_016d3fb4(param_1[4]);
      *(undefined1 *)(param_1 + 2) = 1;
    }
LAB_00a91228:
    if (bVar2) goto LAB_00a9148c;
    *(undefined1 *)(param_1[0xd3] + 0x68) = uVar5;
    iVar9 = param_1[0xd3];
  }
  if (*(int *)(iVar9 + 0x60) != 0) {
    cVar1 = *(char *)(iVar9 + 0x68);
joined_r0x00a912b8:
    if (cVar1 == '\x03') {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_0034e012,0x23,&DAT_0186dd18);
    }
    iVar10 = 1;
    if (cVar1 == '\x02') {
      iVar10 = 3;
    }
    local_28 = &local_5c;
    local_30 = &local_48;
    local_5c = (*(int *)(iVar9 + 0x60) + -1) * iVar10 + *(int *)(iVar9 + 100) + 1;
    local_48 = 
    "1.3.6.1.4.1.23280.8.1.5.bosminer_plus_tunerbosminer-plus/bosminer-plus-tuner/src/main.rsevent bosminer-plus/bosminer-plus-tuner/src/main.rs:302event bosminer-plus/bosminer-plus-tuner/src/main.rs:317event bosminer-plus/bosminer-plus-tuner/src/main.rs:249event bosminer-plus/bosminer-plus-tuner/src/main.rs:266event bosminer-plus/bosminer-plus-tuner/src/main.rs:283event bosminer-plus/bosminer-plus-tuner/src/main.rs:223event bosminer-plus/bosminer-plus-tuner/src/main.rs:328event bosminer-plus/bosminer-plus-tuner/src/main.rs:390event bosminer-plus/bosminer-plus-tuner/src/main.rs:185event bosminer-plus/bosminer-plus-tuner/src/main.rs:353event bosminer-plus/bosminer-plus-tuner/src/main.rs:219"
    ;
    if (cVar1 != '\0') {
      local_48 = &DAT_0034dfe8;
    }
    local_44 = 0x18;
    local_24 = &LAB_00fac484;
    local_2c = (byte *)&DAT_0157d360;
    FUN_00600d2c(&local_40,&DAT_00570dec,&local_30);
    local_58 = local_40;
    local_54 = iStack_3c;
    iStack_50 = iStack_38;
    iVar9 = param_1[0xd3];
    if ((*(uint *)(iVar9 + 0x54) & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar9 + 0x58));
      iVar9 = param_1[0xd3];
    }
    uVar12 = 0;
    *(char **)(iVar9 + 0x54) = local_58;
    *(int *)(iVar9 + 0x58) = local_54;
    *(int *)(iVar9 + 0x5c) = iStack_50;
    goto LAB_00a9148c;
  }
  uVar12 = *(uint *)(iVar9 + 0x50);
  if (uVar12 == 0) {
    uVar6 = 0;
  }
  else {
    pbVar11 = *(byte **)(iVar9 + 0x4c);
    if (uVar12 == 1) {
      bVar14 = *pbVar11;
      uVar6 = 1;
      if ((bVar14 == 0x2b) || (bVar14 == 0x2d)) goto LAB_00a91478;
    }
    else {
      bVar14 = *pbVar11;
    }
    uVar7 = 0;
    if (bVar14 == 0x2b) {
      pbVar11 = pbVar11 + 1;
      uVar12 = uVar12 - 1;
    }
    if (uVar12 < 9) {
      for (; uVar12 != 0; uVar12 = uVar12 - 1) {
        bVar14 = *pbVar11;
        if (9 < bVar14 - 0x30) goto LAB_00a91474;
        pbVar11 = pbVar11 + 1;
        uVar7 = (bVar14 - 0x30) + uVar7 * 10;
      }
LAB_00a91408:
      *(uint *)(iVar9 + 0x60) = uVar7;
      iVar9 = param_1[0xd3];
      cVar1 = *(char *)(iVar9 + 0x68);
      goto joined_r0x00a912b8;
    }
    do {
      if (uVar12 == 0) goto LAB_00a91408;
      uVar8 = (uint)((ulonglong)uVar7 * 10);
      if ((int)((ulonglong)uVar7 * 10 >> 0x20) != 0) {
        uVar6 = 1;
        if (*pbVar11 - 0x30 < 10) {
          uVar6 = 2;
        }
        goto LAB_00a91478;
      }
      uVar13 = *pbVar11 - 0x30;
      if (9 < uVar13) goto LAB_00a91474;
      uVar7 = uVar13 + uVar8;
      uVar12 = uVar12 - 1;
      pbVar11 = pbVar11 + 1;
    } while (!CARRY4(uVar13,uVar8));
    uVar6 = 2;
  }
  goto LAB_00a91478;
LAB_00a91474:
  uVar6 = 1;
LAB_00a91478:
  uVar12 = FUN_00ab171c(uVar6,&DAT_0034e000,0x12);
LAB_00a9148c:
  *(undefined1 *)(param_1 + 0xd4) = 1;
  return (ulonglong)uVar12 << 0x20;
}

