// FUN_01085658 @ 01085658 size=2292 calls_out=27 calls_in=2
// strings: 

void FUN_01085658(uint *param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined2 *puVar14;
  undefined2 uVar15;
  uint unaff_r9;
  undefined2 uVar16;
  bool bVar17;
  undefined8 uVar18;
  int *local_710;
  int *local_70c;
  int *local_708;
  int *local_700;
  uint local_6f8;
  uint uStack_6f4;
  uint uStack_6f0;
  uint local_6ec;
  uint uStack_6e8;
  uint uStack_6e4;
  uint uStack_6e0;
  undefined2 local_6dc;
  undefined2 local_6da;
  uint local_6d8;
  uint uStack_6d4;
  uint uStack_6d0;
  uint local_6cc;
  uint uStack_6c8;
  uint uStack_6c4;
  uint uStack_6c0;
  undefined2 local_6bc;
  undefined2 local_6ba;
  uint local_6b8;
  uint uStack_6b4;
  uint uStack_6b0;
  uint local_6ac;
  uint uStack_6a8;
  uint uStack_6a4;
  uint uStack_6a0;
  uint local_698;
  uint uStack_694;
  uint uStack_690;
  uint local_68c;
  uint uStack_688;
  uint uStack_684;
  uint uStack_680;
  undefined1 auStack_678 [248];
  undefined1 auStack_580 [248];
  int *local_488;
  int *local_484;
  int local_480;
  int *local_47c;
  int local_388;
  int iStack_384;
  int iStack_380;
  uint local_378;
  uint local_374;
  undefined4 local_370;
  uint local_350 [2];
  undefined4 local_348;
  undefined4 uStack_344;
  int local_270;
  int local_26c;
  uint local_250;
  undefined1 auStack_24c [224];
  uint local_16c;
  uint local_168;
  uint uStack_164;
  uint local_160;
  uint local_15c;
  uint uStack_158;
  int local_130;
  int iStack_12c;
  int iStack_128;
  undefined1 auStack_120 [8];
  undefined2 local_118 [122];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x68]) {
  case '\0':
    piVar4 = (int *)(*param_2 + 0x18);
    param_2[2] = (int)piVar4;
    param_2[1] = *param_2;
    *(undefined1 *)(param_2 + 5) = 0;
LAB_01085704:
    iVar5 = *piVar4;
    *(undefined1 *)(param_2 + 0x11) = 0;
    param_2[6] = iVar5 + 8;
switchD_010856e8_caseD_3:
    uVar18 = FUN_00617650(param_2 + 6,param_3);
    iVar5 = (int)((ulonglong)uVar18 >> 0x20);
    uVar6 = (uint)uVar18;
    if (uVar6 != 0) {
      *(undefined8 *)(param_2 + 3) = uVar18;
      bVar17 = (char)param_2[0x11] == '\x03';
      if (bVar17) {
        uVar6 = (uint)*(byte *)(param_2 + 0x10);
      }
      if (bVar17 && uVar6 == 3) {
        FUN_0193c3cc(param_2 + 8);
        iVar5 = param_2[4];
      }
      *(undefined1 *)(param_2 + 0x67) = 0;
      param_2[6] = iVar5;
      goto LAB_0108575c;
    }
    uVar3 = 3;
LAB_01085e00:
    local_700 = param_2 + 5;
    *(undefined1 *)local_700 = uVar3;
    *(undefined2 *)(param_1 + 7) = 0x256;
    uVar3 = 3;
    goto LAB_01085e18;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1de8c);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1de8c);
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[5]) {
  case '\0':
    piVar4 = (int *)param_2[2];
    goto LAB_01085704;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1f100);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1f100);
  case '\x03':
    goto switchD_010856e8_caseD_3;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x67]) {
    case '\0':
      iVar5 = param_2[6];
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d26474);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d26474);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_2 + 0x169)) {
      case 0:
        piVar4 = (int *)param_2[0x58];
        iVar5 = param_2[0x59];
        goto LAB_010859fc;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d26464);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d26464);
      case 3:
        goto switchD_01085888_caseD_3;
      case 4:
        uVar18 = *(undefined8 *)(param_2 + 0x5b);
        goto LAB_01085b1c;
      }
    }
  }
LAB_0108575c:
  piVar4 = param_2 + 2;
  param_2[7] = iVar5;
  uVar6 = *(uint *)(iVar5 + 0x30);
  if (0x820820 < uVar6) {
    uVar12 = 0;
LAB_01085780:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar12,piVar4);
  }
  piVar4 = (int *)(uVar6 * 0xfc);
  if (piVar4 == (int *)0x0) {
    iVar5 = 4;
    uVar6 = 0;
  }
  else {
    uVar12 = 4;
    iVar5 = FUN_01298504(piVar4,4);
    if (iVar5 == 0) goto LAB_01085780;
  }
  iVar9 = param_2[7];
  param_2[10] = 0;
  param_2[9] = iVar5;
  param_2[8] = uVar6;
  iVar7 = *(int *)(iVar9 + 0x28);
  iVar10 = *(int *)(iVar9 + 0x2c);
  iVar5 = *(int *)(iVar9 + 0x30);
  if (iVar7 == 0) {
    iVar5 = 0;
  }
  param_2[0xd] = iVar7;
  param_2[0x11] = iVar7;
  uVar6 = (uint)(iVar7 != 0);
  param_2[0xe] = iVar10;
  param_2[0xc] = 0;
  param_2[0x10] = 0;
  param_2[0x12] = iVar10;
  param_2[0x13] = iVar5;
  param_2[0xf] = uVar6;
  param_2[0xb] = uVar6;
  while( true ) {
    uVar15 = (undefined2)unaff_r9;
    iVar5 = FUN_0195e3b0(param_2 + 0xb);
    if (iVar5 == 0) break;
    *(undefined1 *)((int)param_2 + 0x169) = 0;
    piVar4 = (int *)param_2[7];
    param_2[0x58] = (int)piVar4;
    param_2[0x59] = iVar5;
LAB_010859fc:
    param_2[0x14] = iVar5;
    *(undefined1 *)(param_2 + 0x5a) = 0;
    uVar12 = FUN_0195f200(piVar4[10],piVar4[0xb],iVar5);
    FUN_0195ed64(&local_378,uVar12);
    if (local_378 != 0x80000000) {
      *(undefined1 *)(param_2 + 0x5a) = 1;
      FUN_01bed4e2(param_2 + 0x15,&local_378,0xfc);
      piVar4 = (int *)*piVar4;
      do {
        iVar5 = *piVar4;
        bVar17 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar17);
      *piVar4 = iVar5 + 1;
      if (iVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1086044);
        (*pcVar1)();
      }
      param_2[0x54] = (int)piVar4;
      iVar5 = piVar4[0xc];
      *(undefined1 *)(param_2 + 0x66) = 0;
      param_2[0x5b] = iVar5 + 8;
switchD_01085888_caseD_3:
      FUN_006177f4(&local_388,param_2 + 0x5b,param_3);
      if (local_388 == 0) {
        uVar3 = 3;
LAB_01085dec:
        *(undefined1 *)((int)param_2 + 0x169) = uVar3;
      }
      else {
        param_2[0x55] = local_388;
        param_2[0x56] = iStack_384;
        param_2[0x57] = iStack_380;
        cVar2 = (char)param_2[0x66];
        bVar17 = cVar2 == '\x03';
        if (bVar17) {
          cVar2 = (char)param_2[0x65];
        }
        if (bVar17 && cVar2 == '\x03') {
          FUN_0193c3cc(param_2 + 0x5d);
        }
        uVar12 = *(undefined4 *)param_2[0x57];
        iVar5 = ((undefined4 *)param_2[0x57])[1];
        FUN_01bed4e2(&local_378,param_2[0x14],0x10);
        uVar18 = (**(code **)(iVar5 + 0xc))(uVar12,&local_378);
        *(undefined8 *)(param_2 + 0x5b) = uVar18;
LAB_01085b1c:
        (**(code **)((int)((ulonglong)uVar18 >> 0x20) + 0xc))(&local_378,(int)uVar18,param_3);
        uVar6 = local_374;
        unaff_r9 = local_378;
        if (local_378 == 4 && local_374 == 0) {
          uVar3 = 4;
          goto LAB_01085dec;
        }
        uVar3 = (undefined1)local_370;
        uVar11 = local_370 & 0xff;
        FUN_01bed4e2(&local_250,(int)&local_370 + 1,0x11f);
        FUN_01139b38(param_2[0x5b],param_2[0x5c]);
        if ((unaff_r9 & 7) == 2) {
          FUN_019f8c54(param_2[0x55],param_2[0x56]);
          *(undefined1 *)(param_2 + 0x5a) = 0;
          param_2[0x51] = 0;
          param_2[0x4e] = 0;
          piVar13 = (int *)param_2[0x15];
          piVar4 = (int *)param_2[0x16];
          FUN_01bed4e2(auStack_120,param_2 + 0x17,0xf4);
LAB_01085bdc:
          piVar8 = (int *)param_2[0x54];
          DataMemoryBarrier(0xb);
          do {
            iVar5 = *piVar8;
            bVar17 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar17);
          *piVar8 = iVar5 + -1;
          if (iVar5 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01a38f34(param_2[0x54]);
          }
          if ((char)param_2[0x5a] != '\0') {
            FUN_01086b44(param_2 + 0x15);
          }
        }
        else {
          if (unaff_r9 == 3) {
            piVar4 = (int *)FUN_0195b784(uVar11);
            piVar13 = (int *)0x80000001;
            FUN_019f8c54(param_2[0x55],param_2[0x56]);
            goto LAB_01085bdc;
          }
          local_370 = CONCAT31(local_370._1_3_,uVar3);
          local_378 = unaff_r9;
          local_374 = uVar6;
          FUN_01bed4e2((int)&local_370 + 1,&local_250,0x11f);
          FUN_019f8c54(param_2[0x55],param_2[0x56]);
          if (local_270 == 0 && local_26c == 0) {
            local_130 = 0;
          }
          else {
            FUN_01a2b1e0(&local_130,local_26c,local_270,local_26c);
          }
          param_2[0x4e] = local_130;
          param_2[0x4f] = iStack_12c;
          param_2[0x50] = iStack_128;
          if ((local_350[0] & 1) == 0) {
            local_130 = 0;
          }
          else {
            FUN_01a2b1e0(&local_130,local_350,local_348,uStack_344);
          }
          param_2[0x51] = local_130;
          param_2[0x52] = iStack_12c;
          param_2[0x53] = iStack_128;
          *(undefined1 *)(param_2 + 0x5a) = 0;
          piVar13 = (int *)param_2[0x15];
          piVar4 = (int *)param_2[0x16];
          FUN_01bed4e2(auStack_120,param_2 + 0x17,0xf4);
          FUN_0193f694(&local_378);
          piVar8 = (int *)param_2[0x54];
          DataMemoryBarrier(0xb);
          do {
            iVar5 = *piVar8;
            bVar17 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar17);
          *piVar8 = iVar5 + -1;
          if (iVar5 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01a38f34(param_2[0x54]);
          }
        }
        *(undefined1 *)(param_2 + 0x5a) = 0;
        FUN_01bed4e2(auStack_678,auStack_120,0xf4);
        *(undefined1 *)((int)param_2 + 0x169) = 1;
        if (piVar13 != (int *)0x80000002) goto LAB_01085d60;
      }
      local_708 = param_2 + 0x67;
      *(undefined1 *)local_708 = 3;
      uVar3 = 4;
      goto LAB_01085e00;
    }
    FUN_01bed4e2(auStack_678,auStack_120,0xf4);
    piVar13 = (int *)0x80000000;
    *(undefined1 *)((int)param_2 + 0x169) = 1;
LAB_01085d60:
    local_708 = param_2 + 0x67;
    uVar15 = (undefined2)unaff_r9;
    puVar14 = (undefined2 *)((int)param_2 + 0x169);
    FUN_01bed4e2(auStack_580,auStack_678,0xf4);
    FUN_01086a30(param_2 + 0x14);
    if (piVar13 != (int *)0x80000000) {
      if (piVar13 == (int *)0x80000001) {
        FUN_005fa03c(param_2 + 8);
        local_480 = -0x80000000;
        *(undefined1 *)local_708 = 1;
        goto LAB_01085e64;
      }
      local_488 = piVar13;
      local_484 = piVar4;
      FUN_01bed4e2(&local_480,auStack_580,0xf4);
      iVar5 = param_2[10];
      if (iVar5 == param_2[8]) {
        FUN_0195b478();
      }
      FUN_01bed4e2(param_2[9] + iVar5 * 0xfc,&local_488,0xfc);
      param_2[10] = iVar5 + 1;
    }
  }
  local_480 = param_2[8];
  piVar4 = (int *)param_2[9];
  puVar14 = (undefined2 *)param_2[10];
  *(undefined1 *)(param_2 + 0x67) = 1;
  uVar3 = 4;
  if (local_480 == -0x7fffffff) goto LAB_01085e00;
LAB_01085e64:
  local_70c = param_2 + 2;
  local_710 = param_2 + 6;
  local_700 = param_2 + 5;
  FUN_0193eea4(local_710);
  FUN_019f8c54(param_2[3],1);
  *(undefined1 *)local_700 = 1;
  FUN_010855e4(local_70c);
  if (local_480 == -0x80000000) {
    (**(code **)*piVar4)(piVar4);
LAB_01085eec:
    local_6ba = SUB42(puVar14,0);
    local_6bc = 0x255;
    uVar16 = 0x255;
    local_6da = uVar15;
  }
  else {
    local_47c = piVar4 + (int)puVar14 * 0x3f;
    local_488 = piVar4;
    local_484 = piVar4;
    FUN_00db2a80(&local_378,&local_488);
    uVar6 = local_378;
    puVar14 = local_118;
    if (local_378 == 0x80000000) {
      FUN_01960218(&local_488);
      goto LAB_01085eec;
    }
    FUN_01bed4e2(auStack_24c,&local_374,0xf8);
    local_250 = uVar6;
    FUN_014bef88(auStack_120);
    if (local_160 == 0) {
      local_6dc = 0x255;
    }
    else {
      local_374 = local_15c;
      local_370 = uStack_158;
      local_378 = local_160;
      FUN_01298334(&local_6ec,local_118[0],&local_378);
      local_6f8 = local_378;
      uStack_6f4 = local_374;
      uStack_6f0 = local_370;
    }
    if (local_16c == 0) {
      local_6bc = 0x255;
    }
    else {
      local_374 = local_168;
      local_370 = uStack_164;
      local_378 = local_16c;
      FUN_01298334(&local_6cc,local_118[0],&local_378);
      local_6d8 = local_378;
      uStack_6d4 = local_374;
      uStack_6d0 = local_370;
    }
    uVar16 = local_6dc;
    local_698 = local_6f8;
    uStack_694 = uStack_6f4;
    uStack_690 = uStack_6f0;
    local_68c = local_6ec;
    uStack_688 = uStack_6e8;
    uStack_684 = uStack_6e4;
    uStack_680 = uStack_6e0;
    local_6b8 = local_6d8;
    uStack_6b4 = uStack_6d4;
    uStack_6b0 = uStack_6d0;
    local_6ac = local_6cc;
    uStack_6a8 = uStack_6c8;
    uStack_6a4 = uStack_6c4;
    uStack_6a0 = uStack_6c0;
    FUN_01086b44(&local_250);
    FUN_01960218(&local_488);
  }
  *param_1 = local_698;
  param_1[1] = uStack_694;
  param_1[2] = uStack_690;
  param_1[3] = local_68c;
  param_1[4] = uStack_688;
  param_1[5] = uStack_684;
  param_1[6] = uStack_680;
  *(undefined2 *)((int)param_1 + 0x1e) = local_6da;
  *(undefined2 *)(param_1 + 7) = uVar16;
  param_1[8] = local_6b8;
  param_1[9] = uStack_6b4;
  param_1[10] = uStack_6b0;
  param_1[0xb] = local_6ac;
  param_1[0xc] = uStack_6a8;
  param_1[0xd] = uStack_6a4;
  param_1[0xe] = uStack_6a0;
  *(undefined2 *)((int)param_1 + 0x3e) = local_6ba;
  *(undefined2 *)(param_1 + 0xf) = local_6bc;
  uVar3 = 1;
LAB_01085e18:
  *(undefined1 *)(param_2 + 0x68) = uVar3;
  return;
}

