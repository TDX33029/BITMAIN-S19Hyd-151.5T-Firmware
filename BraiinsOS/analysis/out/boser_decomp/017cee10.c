// FUN_017cee10 @ 017cee10 size=2012 calls_out=20 calls_in=0
// strings: tls handshake eof

/* WARNING: Removing unreachable block (ram,0x017cf1d8) */

void FUN_017cee10(undefined4 *param_1,char *param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  byte bVar7;
  undefined *puVar8;
  int iVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined *puVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *local_898;
  undefined *puStack_894;
  undefined *puStack_890;
  undefined *local_88c;
  undefined1 auStack_888 [304];
  undefined1 auStack_758 [272];
  undefined *local_648;
  undefined *puStack_644;
  undefined *puStack_640;
  undefined *puStack_63c;
  undefined *local_638;
  undefined *puStack_634;
  undefined *puStack_630;
  undefined *puStack_62c;
  undefined *local_628;
  undefined *local_624;
  undefined *puStack_620;
  undefined *puStack_61c;
  undefined1 auStack_618 [296];
  undefined1 auStack_4f0 [296];
  undefined *local_3c8;
  undefined *puStack_3c4;
  undefined *puStack_3c0;
  undefined *puStack_3bc;
  undefined4 uStack_3b8;
  undefined *local_2a0;
  undefined *local_29c;
  undefined *local_298;
  undefined *puStack_294;
  undefined *puStack_290;
  undefined *puStack_28c;
  undefined1 auStack_288 [12];
  undefined1 auStack_27c [56];
  uint local_244;
  int local_214;
  char local_1da;
  byte local_1d9;
  byte local_1d6;
  byte local_170;
  undefined *local_168;
  undefined *local_164;
  undefined *puStack_160;
  undefined *local_15c;
  undefined *local_158;
  undefined *local_154;
  undefined *local_150;
  undefined *local_14c;
  undefined *local_148;
  undefined *puStack_144;
  
  puVar14 = (undefined4 *)((uint)&local_298 | 4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2[0x20]) {
  case '\0':
    uVar11 = *(undefined4 *)(param_2 + 0x14);
    iVar9 = *(int *)(param_2 + 0x18);
    param_2[0x21] = '\x01';
    param_2[0x22] = '\x01';
    param_2[0x23] = '\0';
    *(undefined4 *)(param_2 + 0x24) = uVar11;
    *(int *)(param_2 + 0x28) = iVar9;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d1c88c);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d1c88c);
  case '\x03':
    uVar11 = *(undefined4 *)(param_2 + 0x24);
    iVar9 = *(int *)(param_2 + 0x28);
    break;
  case '\x04':
    puVar13 = *(undefined **)(param_2 + 0x28);
    puVar17 = *(undefined **)(param_2 + 0x3c);
    puVar18 = *(undefined **)(param_2 + 0x40);
    goto LAB_017ceeb4;
  }
  (**(code **)(iVar9 + 0xc))(&local_158,uVar11,param_3);
  puVar16 = local_148;
  puVar18 = local_14c;
  puVar17 = local_150;
  puVar8 = local_154;
  puVar13 = local_158;
  if (local_158 == (undefined *)0x2) {
    *param_1 = 4;
    cVar3 = '\x03';
    goto LAB_017cf51c;
  }
  FUN_017ce5f0(*(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_2 + 0x28));
  if (((uint)puVar13 & 1) == 0) {
    if (puVar8 == (undefined *)0x2) goto LAB_017cf450;
    piVar6 = *(int **)(param_2 + 0x1c);
    param_2[0x22] = '\0';
    local_898 = puVar8;
    puStack_894 = puVar17;
    puStack_890 = puVar18;
    *(int **)(param_2 + 0x24) = piVar6;
    local_88c = puVar16;
    param_2[0x21] = '\0';
    local_3c8 = *(undefined **)param_2;
    puStack_3c4 = *(undefined **)(param_2 + 4);
    puStack_3c0 = *(undefined **)(param_2 + 8);
    puStack_3bc = *(undefined **)(param_2 + 0xc);
    uStack_3b8 = *(undefined4 *)(param_2 + 0x10);
    param_2[0x23] = '\0';
    local_628 = puVar8;
    local_624 = puVar17;
    puStack_620 = puVar18;
    puStack_61c = puVar16;
    do {
      iVar9 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar9 + 1;
    if (iVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x17cf5e4);
      (*pcVar1)();
    }
    FUN_018cdd08(&local_158,piVar6,&local_3c8);
    puVar18 = local_150;
    puVar17 = local_154;
    if (local_158 == (undefined *)0x2) {
      local_168 = local_898;
      local_164 = puStack_894;
      puStack_160 = puStack_890;
      local_15c = local_88c;
      FUN_017d0f94(&local_2a0,0x28,(uint)&local_158 | 4);
      local_638 = local_898;
      puStack_634 = puStack_894;
      puStack_630 = puStack_890;
      puStack_62c = local_88c;
      puVar13 = (undefined *)0x3;
      puVar17 = local_2a0;
      puVar18 = local_29c;
    }
    else {
      local_15c = local_158;
      FUN_01bed4e2(&local_298,&local_14c,0x10c);
      puVar5 = (undefined4 *)((uint)&local_898 | 4);
      local_638 = (undefined *)*puVar5;
      puStack_634 = (undefined *)puVar5[1];
      puStack_630 = (undefined *)puVar5[2];
      puStack_62c = local_15c;
      puVar13 = local_628;
      local_168 = local_638;
      local_164 = puStack_634;
      puStack_160 = puStack_630;
    }
    local_648 = local_638;
    puStack_644 = puStack_634;
    puStack_640 = puStack_630;
    puStack_63c = puStack_62c;
    FUN_01bed4e2(auStack_758,&local_298,0x10c);
    *(undefined **)(param_2 + 0x28) = puVar13;
    *(undefined **)(param_2 + 0x2c) = local_648;
    *(undefined **)(param_2 + 0x30) = puStack_644;
    *(undefined **)(param_2 + 0x34) = puStack_640;
    *(undefined **)(param_2 + 0x38) = puStack_63c;
    *(undefined **)(param_2 + 0x3c) = puVar17;
    *(undefined **)(param_2 + 0x40) = puVar18;
    FUN_01bed4e2(param_2 + 0x44,auStack_758,0x10c);
    param_2[0x150] = '\0';
LAB_017ceeb4:
    pcVar10 = param_2 + 0x28;
    pcVar10[0] = '\x02';
    pcVar10[1] = '\0';
    pcVar10[2] = '\0';
    pcVar10[3] = '\0';
    puVar8 = puVar13 + -1;
    if (puVar13 == (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
    }
    if (puVar8 == (undefined *)0x0) {
      uVar11 = *(undefined4 *)(param_2 + 0x30);
      uVar12 = *(undefined4 *)(param_2 + 0x34);
      uVar15 = *(undefined4 *)(param_2 + 0x38);
      *puVar14 = *(undefined4 *)(param_2 + 0x2c);
      puVar14[1] = uVar11;
      puVar14[2] = uVar12;
      puVar14[3] = uVar15;
      FUN_01bed4e2(auStack_27c,param_2 + 0x44,0x114);
      puVar14[4] = puVar17;
      puVar14[5] = puVar18;
      local_298 = puVar13;
      if ((local_1da != '\x01') || ((local_1d9 & 1) == 0)) {
LAB_017cf0f0:
        puVar18 = (undefined *)0x0;
        puVar17 = (undefined *)0x0;
        bVar7 = local_170;
        do {
          while (iVar9 = local_214, local_214 != 0) {
            FUN_0177f8c4(&local_168,&local_298,auStack_288,param_3);
            if (((uint)local_168 & 0xff) != 4) {
              if (((uint)local_168 & 0xff) == 5) break;
LAB_017cf20c:
              puVar17 = local_168;
              puVar18 = local_164;
              goto LAB_017cf214;
            }
            puVar17 = local_164 + (int)puVar17;
          }
          if ((bVar7 & 1) != 0) {
LAB_017cf544:
            if ((local_1da == '\x01') && ((local_1d9 & 1) != 0)) break;
            FUN_019a18a8(&local_158,0x25,"tls handshake eof",0x11);
            puVar17 = local_158;
            puVar18 = local_154;
LAB_017cf214:
            FUN_01bed4e2(&local_158,&local_298,0x130);
            local_168 = local_298;
            local_164 = puStack_294;
            puStack_160 = puStack_290;
            local_15c = puStack_28c;
            FUN_017db510(&local_148);
            local_3c8 = local_168;
            puStack_3c4 = local_164;
            puStack_3c0 = puStack_160;
            puStack_3bc = local_15c;
            goto LAB_017cf3a0;
          }
          while( true ) {
            uVar4 = local_244;
            if (local_244 == 0) {
              uVar4 = (uint)local_1d6;
            }
            if ((local_244 != 0 || (uVar4 & 1) != 0) || ((local_1da == '\0' && (local_214 != 0))))
            break;
            FUN_0177fa20(&local_168,&local_298,auStack_288,param_3);
            if (((uint)local_168 & 0xff) != 4) {
              if (((uint)local_168 & 0xff) != 5) goto LAB_017cf20c;
              if ((local_1da != '\x01') || ((local_1d9 & 1) == 0)) goto LAB_017cf1fc;
              goto LAB_017cef98;
            }
            if (local_164 == (undefined *)0x0) goto LAB_017cf544;
            puVar18 = local_164 + (int)puVar18;
          }
          if ((local_1da == '\x01') && ((local_1d9 & 1) != 0)) break;
          if (iVar9 != 0) goto LAB_017cf1fc;
          bVar7 = 0;
        } while( true );
      }
LAB_017cef98:
      FUN_0177f848(&local_628,&local_298,auStack_288,param_3);
      puVar16 = local_298;
      puVar8 = local_624;
      puVar13 = local_628;
      if (((uint)local_628 & 0xff) == 4) {
        puVar17 = (undefined *)*puVar14;
        puVar18 = (undefined *)puVar14[1];
        FUN_01bed4e2(&local_3c8,&puStack_28c,0x124);
      }
      else if (((uint)local_628 & 0xff) == 5) {
        FUN_01bed4e2(&local_158,&local_298,0x130);
        FUN_017db630(pcVar10);
        FUN_01bed4e2(pcVar10,&local_158,0x130);
        puVar16 = (undefined *)0x3;
      }
      else {
        FUN_01bed4e2(&local_158,&local_298,0x130);
        local_168 = local_298;
        local_164 = puStack_294;
        puStack_160 = puStack_290;
        local_15c = puStack_28c;
        FUN_017db510(&local_148);
        puVar16 = (undefined *)0x2;
        local_3c8 = local_168;
        puStack_3c4 = local_164;
        puStack_3c0 = puStack_160;
        puStack_3bc = local_15c;
        puVar17 = puVar13;
        puVar18 = puVar8;
      }
      if (puVar16 == (undefined *)0x2) goto LAB_017cf3a0;
      if (puVar16 == (undefined *)0x3) goto LAB_017cf394;
      FUN_01bed4e2(auStack_618,&local_3c8,0x124);
    }
    else {
      if (puVar8 != (undefined *)0x2) {
                    /* WARNING: Subroutine does not return */
        FUN_01979f74(&DAT_0050c740,0x22,&DAT_01d1ca9c);
      }
      local_3c8 = *(undefined **)(param_2 + 0x2c);
      puStack_3c4 = *(undefined **)(param_2 + 0x30);
      puStack_3c0 = *(undefined **)(param_2 + 0x34);
      puStack_3bc = *(undefined **)(param_2 + 0x38);
LAB_017cf3a0:
      local_150 = local_3c8;
      local_14c = puStack_3c4;
      local_148 = puStack_3c0;
      puStack_144 = puStack_3bc;
      local_158 = puVar17;
      local_154 = puVar18;
      FUN_00b76614();
      puVar16 = (undefined *)0x2;
    }
    FUN_017ce94c(pcVar10);
    if (puVar16 == (undefined *)0x2) {
      puVar14 = (undefined4 *)((uint)auStack_888 | 4);
      local_158 = puVar17;
      local_154 = puVar18;
      FUN_017cf7a4(puVar14,&local_158);
      local_158 = (undefined *)*puVar14;
      local_154 = (undefined *)puVar14[1];
      puVar17 = (undefined *)FUN_014333d0(&local_158);
      piVar6 = *(int **)(param_2 + 0x24);
      DataMemoryBarrier(0xb);
      do {
        iVar9 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar9 + -1;
      puVar18 = &DAT_01cf5e1c;
      if (iVar9 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018bcb30(*(undefined4 *)(param_2 + 0x24));
      }
      goto LAB_017cf450;
    }
    FUN_01bed4e2(auStack_4f0,auStack_618,0x124);
    piVar6 = *(int **)(param_2 + 0x24);
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar9 + -1;
    if (iVar9 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018bcb30(*(undefined4 *)(param_2 + 0x24));
    }
    param_2[0x23] = '\0';
  }
  else {
    local_14c = puVar16;
    local_150 = puVar18;
    local_154 = puVar17;
    local_158 = puVar8;
    puVar17 = (undefined *)FUN_017be1d4(&local_158);
    puVar18 = &DAT_01d1bf70;
LAB_017cf450:
    param_2[0x23] = '\0';
    if (param_2[0x22] != '\0') {
      piVar6 = *(int **)(param_2 + 0x1c);
      DataMemoryBarrier(0xb);
      do {
        iVar9 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar9 + -1;
      if (iVar9 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018bcb30(*(undefined4 *)(param_2 + 0x1c));
      }
    }
    puVar16 = (undefined *)0x3;
    if ((param_2[0x21] != '\0') && (*param_2 == '\0')) {
      FUN_019bb7e0(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
    }
  }
  *param_1 = puVar16;
  param_1[1] = puVar17;
  param_1[2] = puVar18;
  FUN_01bed4e2(param_1 + 3,auStack_4f0,0x124);
  cVar3 = '\x01';
LAB_017cf51c:
  param_2[0x20] = cVar3;
  return;
LAB_017cf1fc:
  if (puVar18 == (undefined *)0x0 && puVar17 == (undefined *)0x0) goto LAB_017cf58c;
  local_170 = 0;
  goto LAB_017cf0f0;
LAB_017cf58c:
  FUN_01bed4e2(&local_158,&local_298,0x130);
  FUN_017db630(pcVar10);
  FUN_01bed4e2(pcVar10,&local_158,0x130);
LAB_017cf394:
  cVar3 = '\x04';
  *param_1 = 4;
  goto LAB_017cf51c;
}

