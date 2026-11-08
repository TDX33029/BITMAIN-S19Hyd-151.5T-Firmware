// FUN_01758dfc @ 01758dfc size=2808 calls_out=24 calls_in=0
// strings: 

void FUN_01758dfc(undefined4 *param_1,uint *param_2,undefined4 *param_3)

{
  code *pcVar1;
  int *piVar2;
  undefined1 uVar3;
  byte bVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  char cVar8;
  uint uVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *unaff_r8;
  byte unaff_r10;
  bool bVar14;
  undefined8 uVar15;
  undefined1 auStack_b28 [232];
  int *local_a40;
  uint uStack_a3c;
  uint uStack_a38;
  uint uStack_a34;
  uint uStack_a30;
  uint local_a2c;
  uint uStack_a28;
  uint uStack_a24;
  uint uStack_a20;
  uint uStack_a1c;
  uint uStack_a18;
  int *local_908;
  uint uStack_904;
  uint uStack_900;
  uint uStack_8fc;
  uint uStack_8f8;
  uint local_8f4;
  uint uStack_8f0;
  uint uStack_8ec;
  uint uStack_8e8;
  uint uStack_8e4;
  uint uStack_8e0;
  int *local_8d8;
  uint local_8d4;
  uint local_8d0;
  undefined1 auStack_8cc [732];
  undefined1 auStack_5f0 [736];
  int *local_310;
  uint local_30c;
  int *local_308;
  uint uStack_304;
  uint uStack_300;
  uint local_2fc;
  uint uStack_2f8;
  uint uStack_2f4;
  uint uStack_2f0;
  uint uStack_2ec;
  uint uStack_2e8;
  undefined1 auStack_2c0 [668];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x3e]) {
  case '\0':
    FUN_01bed4e2(auStack_b28,param_2 + 4,0xe8);
    puVar13 = (undefined1 *)param_2[2];
    unaff_r8 = (uint *)&DAT_3b9ac9ff;
    if (puVar13 != &DAT_3b9aca00) {
      uVar11 = *param_2;
      uVar9 = param_2[1];
      FUN_019ac130(&local_8d8,1);
      uVar12 = (int)local_8d8 + uVar11;
      uVar11 = local_8d4 + CARRY4((uint)local_8d8,uVar11) + uVar9;
      if ((int)uVar9 < 0 == (int)((local_8d4 ^ uVar11) & ~(local_8d4 ^ uVar9)) < 0) {
        puVar13 = puVar13 + local_8d0;
        if (&DAT_3b9aca00 <= puVar13) {
          bVar14 = 0xfffffffe < uVar12;
          uVar12 = uVar12 + 1;
          uVar9 = uVar11 + bVar14;
          if ((int)((uVar11 ^ uVar9) & ~uVar11) < 0) goto LAB_01759170;
          puVar13 = puVar13 + -1000000000;
          uVar11 = uVar9;
        }
        unaff_r8 = (uint *)&DAT_01d19f3c;
        uVar15 = FUN_019ef7f4(&DAT_01d19f3c);
        uVar7 = (undefined4)((ulonglong)uVar15 >> 0x20);
        FUN_019dc4f8(&local_8d8,(int)uVar15,uVar7,uVar7,uVar12,uVar11,puVar13,&DAT_01d19f3c);
      }
      else {
LAB_01759170:
        FUN_019e6e14(&local_8d8);
      }
      FUN_01bed4e2(auStack_2c0,auStack_b28,0xe8);
      FUN_01bed4e2(&local_310,&local_8d8,0x50);
      FUN_01bed4e2(&local_a40,&local_310,0x138);
      FUN_01bed4e2(param_2 + 0x40,&local_a40,0x138);
      goto switchD_01758e20_caseD_3;
    }
    FUN_01bed4e2(param_2 + 0x40,param_2 + 4,0xe8);
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d19f4c);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d19f4c);
  case '\x03':
switchD_01758e20_caseD_3:
    bVar4 = FUN_019ec70c();
    unaff_r10 = bVar4 == 2 | bVar4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x8c]) {
    case '\0':
      *(undefined1 *)((int)param_2 + 0x233) = 1;
      FUN_01bed4e2(param_2 + 0x66,param_2 + 0x54,0x48);
      *(undefined1 *)((int)param_2 + 0x232) = 1;
      local_908 = (int *)param_2[0x80];
      uStack_904 = param_2[0x81];
      uStack_900 = param_2[0x82];
      uStack_8fc = param_2[0x83];
      uStack_8f8 = param_2[0x84];
      local_8f4 = param_2[0x85];
      uStack_8f0 = param_2[0x86];
      uStack_8ec = param_2[0x87];
      uStack_8e8 = param_2[0x88];
      uStack_8e4 = param_2[0x89];
      uStack_8e0 = param_2[0x8a];
      local_310 = (int *)param_2[0x6a];
      if (local_310 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c(&DAT_0050d76b,0x23,&DAT_01d19f9c);
      }
      do {
        iVar6 = *local_310;
        bVar14 = (bool)hasExclusiveAccess(local_310);
      } while (!bVar14);
      *local_310 = iVar6 + 1;
      if (iVar6 < 0) goto LAB_01759938;
      local_308 = (int *)param_2[0x74];
      local_30c = param_2[0x6b];
      *(undefined1 *)((int)param_2 + 0x233) = 0;
      *(undefined1 *)((int)param_2 + 0x231) = 0;
      param_2[0x8b] = (uint)local_308;
      do {
        iVar6 = *local_308;
        bVar14 = (bool)hasExclusiveAccess(local_308);
      } while (!bVar14);
      *local_308 = iVar6 + 1;
      if (iVar6 < 0) goto LAB_01759938;
      FUN_01823dc4(param_2 + 0x78,&local_310);
      *(undefined1 *)((int)param_2 + 0x232) = 0;
      unaff_r8 = &local_8f4;
      local_310 = local_908;
      local_30c = uStack_904;
      local_308 = (int *)uStack_900;
      uStack_304 = uStack_8fc;
      uStack_300 = uStack_8f8;
      local_2fc = local_8f4;
      uStack_2f8 = uStack_8f0;
      uStack_2f4 = uStack_8ec;
      uStack_2f0 = uStack_8e8;
      uStack_2ec = uStack_8e4;
      uStack_2e8 = uStack_8e0;
      uVar15 = FUN_0175194c(param_2 + 0x78,&local_310);
      *(undefined8 *)(param_2 + 0x7e) = uVar15;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d19fac);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d19fac);
    case '\x03':
      uVar15 = *(undefined8 *)(param_2 + 0x7e);
    }
    (**(code **)((int)((ulonglong)uVar15 >> 0x20) + 0xc))(&local_310,(int)uVar15,param_3);
    piVar2 = local_308;
    uVar11 = local_30c;
    piVar5 = local_310;
    uVar15 = CONCAT44(local_308,local_30c);
    if (local_310 == (int *)0x4) {
      cVar8 = '\x03';
      uVar7 = *param_3;
      *(undefined1 *)(param_2 + 0x8c) = 3;
      iVar6 = FUN_019ee264(bVar4 == 2 | bVar4 & 1,param_2 + 0x40,uVar7);
      if (iVar6 != 0) {
        uVar3 = 3;
        *(undefined1 *)((int)param_1 + 9) = 3;
        goto LAB_01759894;
      }
    }
    else {
      FUN_01bed4e2(auStack_5f0,&uStack_304,0x2dc);
      FUN_01139b38(param_2[0x7e],param_2[0x7f]);
      if (piVar5 == (int *)0x3) {
        FUN_0182f7a8(param_2 + 0x78);
        piVar5 = (int *)param_2[0x8b];
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar5;
          bVar14 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar14);
        *piVar5 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_018fa168(param_2[0x8b]);
        }
        *(undefined1 *)((int)param_2 + 0x232) = 0;
        FUN_016f8f88(param_2 + 0x71);
        piVar5 = (int *)param_2[0x75];
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar5;
          bVar14 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar14);
        *piVar5 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_018fa168(param_2[0x75]);
        }
        piVar5 = (int *)param_2[0x76];
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar5;
          bVar14 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar14);
        *piVar5 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01703e40(param_2[0x76]);
        }
        if ((char)param_2[0x70] != '\x02') {
          (**(code **)(param_2[0x6c] + 0x10))(param_2 + 0x6f,param_2[0x6d],param_2[0x6e]);
        }
        piVar5 = (int *)param_2[0x6a];
        if (piVar5 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar6 = *piVar5;
            bVar14 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar14);
          *piVar5 = iVar6 + -1;
          cVar8 = '\x02';
          goto LAB_01759824;
        }
        cVar8 = '\x02';
      }
      else {
        FUN_01bed4e2(auStack_8cc,auStack_5f0,0x2dc);
        local_8d0 = (uint)piVar2;
        local_8d4 = uVar11;
        local_8d8 = piVar5;
        if (piVar5 == (int *)0x2) {
          FUN_01bed4e2(&local_310,&local_8d8,0x2e8);
          uVar15 = FUN_016fd478((char)param_2[0x77],&local_310);
          unaff_r10 = *(byte *)((int)param_2 + 0x231);
          cVar8 = '\0';
        }
        else {
          FUN_01bed4e2(&local_310,&local_8d8,0x2e8);
          uVar15 = FUN_016fe8e8((char)param_2[0x77],&local_310);
          cVar8 = *(char *)((int)param_2 + 0x1de);
          unaff_r10 = *(byte *)((int)param_2 + 0x231);
          if (local_8d8 == (int *)0x2) {
            FUN_016fd61c(&local_8d8);
          }
        }
        FUN_0182f7a8(param_2 + 0x78);
        piVar5 = (int *)param_2[0x8b];
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar5;
          bVar14 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar14);
        *piVar5 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_018fa168(param_2[0x8b]);
        }
        *(undefined1 *)((int)param_2 + 0x232) = 0;
        FUN_016f8f88(param_2 + 0x71);
        piVar5 = (int *)param_2[0x75];
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar5;
          bVar14 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar14);
        *piVar5 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_018fa168(param_2[0x75]);
        }
        piVar5 = (int *)param_2[0x76];
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar5;
          bVar14 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar14);
        *piVar5 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01703e40(param_2[0x76]);
        }
        if ((char)param_2[0x70] != '\x02') {
          (**(code **)(param_2[0x6c] + 0x10))(param_2 + 0x6f,param_2[0x6d],param_2[0x6e]);
        }
        piVar5 = (int *)param_2[0x6a];
        if (piVar5 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar6 = *piVar5;
            bVar14 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar14);
          *piVar5 = iVar6 + -1;
LAB_01759824:
          if (iVar6 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0070451c(param_2[0x6a],param_2[0x6b]);
          }
        }
      }
      unaff_r8 = (uint *)((ulonglong)uVar15 >> 0x20);
      param_3 = (undefined4 *)uVar15;
      *(undefined1 *)(param_2 + 0x8c) = 1;
      *(undefined1 *)((int)param_2 + 0x233) = 0;
    }
    uVar15 = CONCAT44(unaff_r8,param_3);
    FUN_017554b4(param_2 + 0x40);
    cVar10 = '\x02';
    if (cVar8 == '\x03') {
      uVar15 = 0x1d19d2400000001;
    }
    else {
      cVar10 = '\x02';
      if (cVar8 != '\x02') {
        cVar10 = cVar8;
      }
    }
    goto LAB_01759880;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x78]) {
  case '\0':
    *(undefined1 *)((int)param_2 + 0x1e3) = 1;
    FUN_01bed4e2(param_2 + 0x52,param_2 + 0x40,0x48);
    *(undefined1 *)((int)param_2 + 0x1e2) = 1;
    local_a40 = (int *)param_2[0x6c];
    uStack_a3c = param_2[0x6d];
    uStack_a38 = param_2[0x6e];
    uStack_a34 = param_2[0x6f];
    uStack_a30 = param_2[0x70];
    local_a2c = param_2[0x71];
    uStack_a28 = param_2[0x72];
    uStack_a24 = param_2[0x73];
    uStack_a20 = param_2[0x74];
    uStack_a1c = param_2[0x75];
    uStack_a18 = param_2[0x76];
    local_310 = (int *)param_2[0x56];
    if (local_310 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c(&DAT_0050d76b,0x23,&DAT_01d19f9c);
    }
    do {
      iVar6 = *local_310;
      bVar14 = (bool)hasExclusiveAccess(local_310);
    } while (!bVar14);
    *local_310 = iVar6 + 1;
    if (iVar6 < 0) {
LAB_01759938:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1759938);
      (*pcVar1)();
    }
    local_308 = (int *)param_2[0x60];
    local_30c = param_2[0x57];
    *(undefined1 *)((int)param_2 + 0x1e3) = 0;
    *(undefined1 *)((int)param_2 + 0x1e1) = 0;
    param_2[0x77] = (uint)local_308;
    do {
      iVar6 = *local_308;
      bVar14 = (bool)hasExclusiveAccess(local_308);
    } while (!bVar14);
    *local_308 = iVar6 + 1;
    if (iVar6 < 0) goto LAB_01759938;
    FUN_01823dc4(param_2 + 100,&local_310);
    *(undefined1 *)((int)param_2 + 0x1e2) = 0;
    unaff_r10 = (byte)&local_a2c;
    local_310 = local_a40;
    local_30c = uStack_a3c;
    local_308 = (int *)uStack_a38;
    uStack_304 = uStack_a34;
    uStack_300 = uStack_a30;
    local_2fc = local_a2c;
    uStack_2f8 = uStack_a28;
    uStack_2f4 = uStack_a24;
    uStack_2f0 = uStack_a20;
    uStack_2ec = uStack_a1c;
    uStack_2e8 = uStack_a18;
    uVar15 = FUN_0175194c(param_2 + 100,&local_310);
    *(undefined8 *)(param_2 + 0x6a) = uVar15;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d19fac);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d19fac);
  case '\x03':
    uVar15 = *(undefined8 *)(param_2 + 0x6a);
  }
  (**(code **)((int)((ulonglong)uVar15 >> 0x20) + 0xc))(&local_310,(int)uVar15,param_3);
  piVar2 = local_308;
  uVar11 = local_30c;
  piVar5 = local_310;
  uVar15 = CONCAT44(local_308,local_30c);
  if (local_310 == (int *)0x4) {
    *(undefined1 *)(param_2 + 0x78) = 3;
    *(undefined1 *)((int)param_1 + 9) = 3;
    uVar3 = 4;
    goto LAB_01759894;
  }
  FUN_01bed4e2(auStack_5f0,&uStack_304,0x2dc);
  FUN_01139b38(param_2[0x6a],param_2[0x6b]);
  if (piVar5 == (int *)0x3) {
    FUN_0182f7a8(param_2 + 100);
    piVar5 = (int *)param_2[0x77];
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar5;
      bVar14 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar14);
    *piVar5 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018fa168(param_2[0x77]);
    }
    *(undefined1 *)((int)param_2 + 0x1e2) = 0;
    FUN_016f8f88(param_2 + 0x5d);
    piVar5 = (int *)param_2[0x61];
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar5;
      bVar14 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar14);
    *piVar5 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018fa168(param_2[0x61]);
    }
    piVar5 = (int *)param_2[0x62];
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar5;
      bVar14 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar14);
    *piVar5 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01703e40(param_2[0x62]);
    }
    if ((char)param_2[0x5c] != '\x02') {
      (**(code **)(param_2[0x58] + 0x10))(param_2 + 0x5b,param_2[0x59],param_2[0x5a]);
    }
    piVar5 = (int *)param_2[0x56];
    if (piVar5 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar5;
        bVar14 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar14);
      *piVar5 = iVar6 + -1;
      cVar10 = '\x02';
      goto LAB_01759308;
    }
    cVar10 = '\x02';
  }
  else {
    FUN_01bed4e2(auStack_8cc,auStack_5f0,0x2dc);
    local_8d0 = (uint)piVar2;
    local_8d4 = uVar11;
    local_8d8 = piVar5;
    if (piVar5 == (int *)0x2) {
      FUN_01bed4e2(&local_310,&local_8d8,0x2e8);
      uVar15 = FUN_016fd478((char)param_2[99],&local_310);
      unaff_r10 = *(byte *)((int)param_2 + 0x1e1);
      cVar10 = '\0';
    }
    else {
      FUN_01bed4e2(&local_310,&local_8d8,0x2e8);
      uVar15 = FUN_016fe8e8((char)param_2[99],&local_310);
      cVar10 = *(char *)((int)param_2 + 0x18e);
      unaff_r10 = *(byte *)((int)param_2 + 0x1e1);
      if (local_8d8 == (int *)0x2) {
        FUN_0175a0c0(&local_8d8);
      }
    }
    FUN_0182f7a8(param_2 + 100);
    piVar5 = (int *)param_2[0x77];
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar5;
      bVar14 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar14);
    *piVar5 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018fa168(param_2[0x77]);
    }
    *(undefined1 *)((int)param_2 + 0x1e2) = 0;
    FUN_016f8f88(param_2 + 0x5d);
    piVar5 = (int *)param_2[0x61];
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar5;
      bVar14 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar14);
    *piVar5 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018fa168(param_2[0x61]);
    }
    piVar5 = (int *)param_2[0x62];
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar5;
      bVar14 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar14);
    *piVar5 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01703e40(param_2[0x62]);
    }
    if ((char)param_2[0x5c] != '\x02') {
      (**(code **)(param_2[0x58] + 0x10))(param_2 + 0x5b,param_2[0x59],param_2[0x5a]);
    }
    piVar5 = (int *)param_2[0x56];
    if (piVar5 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar5;
        bVar14 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar14);
      *piVar5 = iVar6 + -1;
LAB_01759308:
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(param_2[0x56],param_2[0x57]);
      }
    }
  }
  *(undefined1 *)(param_2 + 0x78) = 1;
  *(undefined1 *)((int)param_2 + 0x1e3) = 0;
  FUN_016fb538(param_2 + 0x40);
LAB_01759880:
  *param_1 = (int)uVar15;
  uVar3 = 1;
  *(char *)((int)param_1 + 9) = cVar10;
  *(byte *)(param_1 + 2) = unaff_r10;
  param_1[1] = (int)((ulonglong)uVar15 >> 0x20);
LAB_01759894:
  *(undefined1 *)(param_2 + 0x3e) = uVar3;
  return;
}

