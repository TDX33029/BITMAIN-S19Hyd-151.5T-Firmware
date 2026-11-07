// FUN_01268390 @ 01268390 size=8188 calls_out=9 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x012689f4) */

void FUN_01268390(int *param_1,int param_2,ushort *param_3,uint param_4,uint *param_5,uint param_6)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  ushort *puVar26;
  ushort *puVar27;
  ushort *puVar28;
  uint uVar29;
  bool bVar30;
  bool bVar31;
  ulonglong uVar32;
  undefined8 uVar33;
  uint local_98;
  uint local_60;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  byte local_38;
  uint local_30 [3];
  
  iVar25 = param_2 + 0x2300;
  iVar24 = param_2 + 0xa00;
  local_38 = *(byte *)(param_2 + 0x28ec);
  uVar17 = (uint)*(byte *)(param_2 + 0x2900);
  iVar3 = param_2 + 0x28e4;
  iVar4 = param_2 + 0x1b00;
  iVar5 = param_2 + 0x200;
  iVar6 = param_2 + 0x1680;
  iVar7 = param_2 + 0xe80;
  local_60 = 0;
  uVar23 = param_4;
  puVar28 = param_3;
  uVar29 = 0;
  local_48 = *(uint *)(param_2 + 0x28dc);
  local_44 = *(uint *)(param_2 + 0x28c0);
  local_40 = *(uint *)(param_2 + 0x28d4);
  uVar20 = *(uint *)(param_2 + 0x28d8);
switchD_012691f0_caseD_3:
  local_3c = uVar20;
  uVar18 = local_3c;
  uVar14 = local_40;
  uVar22 = (undefined1)uVar17;
  uVar9 = uVar29;
  uVar20 = local_3c;
  switch(uVar17 & 0xff) {
  case 0:
    uVar17 = 1;
    local_38 = 0;
    local_3c = 0;
    *(undefined4 *)(param_2 + 0x28c4) = 0;
    *(undefined4 *)(param_2 + 0x28c8) = 0;
    *(undefined4 *)(param_2 + 0x28cc) = 1;
    *(undefined4 *)(param_2 + 0x28d0) = 1;
    local_40 = 0;
    local_44 = 0;
    local_48 = 0;
    uVar20 = local_3c;
    goto switchD_012691f0_caseD_3;
  case 1:
    if (uVar23 != 0) {
      uVar23 = uVar23 - 1;
      uVar17 = 2;
      *(uint *)(param_2 + 0x28c4) = (uint)(byte)*puVar28;
      puVar28 = (ushort *)((int)puVar28 + 1);
      goto switchD_012691f0_caseD_3;
    }
    break;
  case 2:
    if (uVar23 != 0) {
      puVar27 = (ushort *)((int)puVar28 + 1);
      bVar2 = (byte)*puVar28;
      uVar17 = 3;
      uVar23 = uVar23 - 1;
      uVar9 = *(uint *)(param_2 + 0x28c4);
      *(uint *)(param_2 + 0x28c8) = (uint)bVar2;
      uVar14 = (uint)bVar2 | uVar9 << 8;
      puVar28 = puVar27;
      if ((uVar9 & 0xf) != 8 ||
          (((uVar9 >> 4) + 8 & 0x10) != 0 ||
          (uVar14 != (uVar14 / 0x1f) * 0x20 - uVar14 / 0x1f || (bVar2 & 0x20) != 0))) {
        uVar17 = 0x1d;
      }
      goto switchD_012691f0_caseD_3;
    }
    break;
  case 3:
    if (local_44 < 3) {
      if (uVar23 == 0) break;
      uVar23 = uVar23 - 1;
      local_48 = local_48 | (uint)(byte)*puVar28 << (local_44 & 0xff);
      local_44 = local_44 | 8;
      puVar28 = (ushort *)((int)puVar28 + 1);
    }
    uVar14 = (local_48 & 7) >> 1;
    local_44 = local_44 - 3;
    uVar9 = local_48 >> 3;
    *(char *)(param_2 + 0x28eb) = (char)uVar14;
    uVar17 = 0x19;
    *(byte *)(param_2 + 0x28ea) = (byte)local_48 & 1;
    local_48 = uVar9;
    switch(uVar14) {
    case 0:
      uVar17 = 4;
      break;
    case 1:
      *(undefined4 *)(param_2 + 0x28e4) = 0x200120;
      FUN_016dd606(param_2 + 0x2780,8,0x90);
      FUN_016dd606(param_2 + 0x2810,9,0x70);
      *(undefined4 *)(param_2 + 0x2898) = 0x8080808;
      *(undefined4 *)(param_2 + 0x289c) = 0x8080808;
      *(undefined4 *)(param_2 + 0x2880) = 0x7070707;
      *(undefined4 *)(param_2 + 0x2884) = 0x7070707;
      *(undefined4 *)(param_2 + 0x2888) = 0x7070707;
      *(undefined4 *)(param_2 + 0x288c) = 0x7070707;
      *(undefined4 *)(param_2 + 0x2890) = 0x7070707;
      *(undefined4 *)(param_2 + 0x2894) = 0x7070707;
      *(undefined4 *)(param_2 + 0x28a0) = 0x5050505;
      *(undefined4 *)(param_2 + 0x28a4) = 0x5050505;
      *(undefined4 *)(param_2 + 0x28a8) = 0x5050505;
      *(undefined4 *)(param_2 + 0x28ac) = 0x5050505;
      *(undefined4 *)(param_2 + 0x28b0) = 0x5050505;
      *(undefined4 *)(param_2 + 0x28b4) = 0x5050505;
      *(undefined4 *)(param_2 + 0x28b8) = 0x5050505;
      *(undefined4 *)(param_2 + 0x28bc) = 0x5050505;
      uVar33 = FUN_0126a460(param_2,&local_48);
      uVar17 = (uint)((ulonglong)uVar33 >> 0x20);
      uVar20 = (uint)uVar33 & 0xff;
      if (uVar20 != 1) {
        if (uVar20 != 2) goto switchD_01268480_default;
        uVar22 = 3;
        uVar21 = 3;
        local_60 = uVar17;
        goto joined_r0x0126a0b0;
      }
      uVar20 = local_3c;
      break;
    case 2:
      uVar17 = 8;
      local_3c = 0;
      uVar20 = local_3c;
    }
    goto switchD_012691f0_caseD_3;
  case 4:
    uVar17 = 5;
    local_3c = 0;
    local_48 = local_48 >> (local_44 & 7);
    local_44 = local_44 & 0xfffffff8;
    uVar20 = local_3c;
    goto switchD_012691f0_caseD_3;
  case 5:
    uVar9 = local_44;
    uVar17 = local_48;
    if (local_3c < 5) {
      uVar20 = 4;
    }
    while (uVar20 != local_3c) {
      if (uVar9 == 0) {
        if (uVar23 == 0) {
LAB_0126a060:
          bVar30 = true;
          local_60._0_1_ = -4;
          uVar22 = 5;
          uVar17 = 0;
          goto LAB_0126a198;
        }
        puVar27 = (ushort *)((int)puVar28 + 1);
        uVar23 = uVar23 - 1;
        *(byte *)(param_2 + 0x28e0 + local_3c) = (byte)*puVar28;
        uVar9 = 0;
      }
      else {
        puVar27 = puVar28;
        if (uVar9 < 8) {
          if (uVar23 == 0) goto LAB_0126a060;
          puVar27 = (ushort *)((int)puVar28 + 1);
          uVar23 = uVar23 - 1;
          uVar17 = uVar17 | (uint)(byte)*puVar28 << (uVar9 & 0xff);
          uVar9 = uVar9 | 8;
        }
        *(char *)(param_2 + 0x28e0 + local_3c) = (char)uVar17;
        uVar17 = uVar17 >> 8;
        uVar9 = uVar9 - 8;
        local_48 = uVar17;
        local_44 = uVar9;
      }
      local_3c = local_3c + 1;
      puVar28 = puVar27;
    }
    uVar20 = (uint)*(ushort *)(param_2 + 0x28e0);
    uVar17 = 0x1f;
    if ((*(ushort *)(param_2 + 0x28e2) ^ *(ushort *)(param_2 + 0x28e0)) == 0xffff) {
      uVar17 = 0x14;
      if (uVar20 != 0) {
        uVar17 = 0x11;
        if (uVar9 == 0) {
          uVar17 = 6;
        }
      }
    }
    goto switchD_012691f0_caseD_3;
  case 6:
    uVar17 = 0x14;
    if (local_3c != 0) {
      uVar17 = 7;
      if (param_6 == uVar29) goto LAB_0126a244;
    }
    goto switchD_012691f0_caseD_3;
  case 7:
    if (uVar23 != 0) {
      uVar20 = param_6 - uVar29;
      if (uVar23 < param_6 - uVar29) {
        uVar20 = uVar23;
      }
      if (local_3c < uVar20) {
        uVar20 = local_3c;
      }
      uVar9 = uVar20 + uVar29;
      if ((CARRY4(uVar20,uVar29)) || (param_6 < uVar9)) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar29,uVar9,param_6,&DAT_0188b09c);
      }
      FUN_016dd1aa((undefined1 *)((int)param_5 + uVar29),puVar28,uVar20);
      uVar23 = uVar23 - uVar20;
      uVar17 = 6;
      puVar28 = (ushort *)((int)puVar28 + uVar20);
      uVar29 = uVar9;
      uVar20 = uVar18 - uVar20;
      goto switchD_012691f0_caseD_3;
    }
    break;
  case 8:
    if (local_3c < 3) {
      local_30[2] = 4;
      local_30[1] = 5;
      local_30[0] = 5;
      uVar17 = local_30[local_3c];
      for (; local_44 < uVar17; local_44 = local_44 + 8) {
        if (uVar23 == 0) goto LAB_0126a120;
        uVar23 = uVar23 - 1;
        local_48 = local_48 | (uint)(byte)*puVar28 << (local_44 & 0x1f);
        puVar28 = (ushort *)((int)puVar28 + 1);
      }
      uVar1 = (ushort)local_48;
      local_48 = local_48 >> (uVar17 & 0x1f);
      *(ushort *)(iVar3 + local_3c * 2) =
           *(short *)(&DAT_003b573c + local_3c * 2) + (uVar1 & ~(ushort)(-1 << (uVar17 & 0x1f)));
      uVar20 = local_3c + 1;
      uVar17 = local_44 - uVar17;
      local_44 = uVar17;
      if (uVar20 != 3) {
        local_30[2] = 4;
        local_30[1] = 5;
        uVar9 = local_30[uVar20];
        puVar27 = puVar28;
        if (uVar17 < uVar9) {
          do {
            if (uVar23 == 0) goto LAB_0126a120;
            puVar28 = (ushort *)((int)puVar27 + 1);
            uVar17 = local_44 + 8;
            uVar23 = uVar23 - 1;
            local_48 = local_48 | (uint)(byte)*puVar27 << (local_44 & 0x1f);
            puVar27 = puVar28;
            local_44 = uVar17;
          } while (uVar17 < uVar9);
        }
        uVar17 = uVar17 - uVar9;
        *(ushort *)(iVar3 + uVar20 * 2) =
             *(short *)(&DAT_003b573c + uVar20 * 2) +
             ((ushort)local_48 & ~(ushort)(-1 << (uVar9 & 0x1f)));
        local_3c = local_3c + 2;
        local_48 = local_48 >> (uVar9 & 0x1f);
        local_44 = uVar17;
        if (local_3c != 3) {
          local_30[2] = 4;
          uVar20 = local_30[local_3c];
          if (uVar17 < uVar20) {
            puVar27 = puVar28;
            do {
              if (uVar23 == 0) {
                bVar30 = true;
                local_60._0_1_ = -4;
                uVar22 = 8;
                uVar17 = 0;
                uVar23 = 0;
                goto LAB_0126a198;
              }
              puVar28 = (ushort *)((int)puVar27 + 1);
              uVar17 = local_44 + 8;
              uVar23 = uVar23 - 1;
              local_48 = local_48 | (uint)(byte)*puVar27 << (local_44 & 0x1f);
              puVar27 = puVar28;
              local_44 = uVar17;
            } while (uVar17 < uVar20);
          }
          uVar1 = (ushort)local_48;
          local_48 = local_48 >> (uVar20 & 0x1f);
          local_44 = uVar17 - uVar20;
          *(ushort *)(iVar3 + local_3c * 2) =
               *(short *)(&DAT_003b573c + local_3c * 2) + (uVar1 & ~(ushort)(-1 << (uVar20 & 0x1f)))
          ;
        }
      }
    }
    uVar17 = 0x1b;
    *(undefined4 *)(param_2 + 0x28fc) = 0;
    *(undefined4 *)(param_2 + 0x28f9) = 0;
    *(undefined4 *)(param_2 + 0x28f5) = 0;
    *(undefined4 *)(param_2 + 0x28f1) = 0;
    *(undefined4 *)(param_2 + 0x28ed) = 0;
    local_3c = 0;
    if (*(ushort *)(param_2 + 0x28e6) < 0x1f) {
      uVar17 = 9;
    }
    uVar20 = local_3c;
    if (0x11e < *(ushort *)(param_2 + 0x28e4)) {
      uVar17 = 0x1b;
    }
    goto switchD_012691f0_caseD_3;
  case 9:
    do {
      while (local_3c < *(ushort *)(param_2 + 0x28e8)) {
        if (local_44 < 3) {
          if (uVar23 == 0) {
            uVar23 = 0;
            uVar17 = 0xfc;
            uVar9 = 2;
            goto LAB_01268a10;
          }
          uVar23 = uVar23 - 1;
          local_48 = local_48 | (uint)(byte)*puVar28 << (local_44 & 0xff);
          local_44 = local_44 | 8;
          puVar28 = (ushort *)((int)puVar28 + 1);
        }
        local_44 = local_44 - 3;
        uVar17 = local_48 >> 3;
        if (0x12 < local_3c) {
          local_48 = uVar17;
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(local_3c,0x13,&DAT_0188b0fc);
        }
        uVar20 = (uint)(byte)(&DAT_003b5742)[local_3c];
        if (0x12 < uVar20) {
          local_48 = uVar17;
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar20,0x13,&DAT_0188b10c);
        }
        local_3c = local_3c + 1;
        *(byte *)(param_2 + 0x28ed + uVar20) = (byte)local_48 & 7;
        local_48 = uVar17;
      }
      *(undefined2 *)(param_2 + 0x28e8) = 0x13;
      uVar32 = FUN_0126a460(param_2,&local_48);
      uVar17 = (uint)(uVar32 >> 0x20);
      if (((uint)uVar32 & 0xff) == 3) {
        uVar22 = 9;
        local_60 = 0xff;
        goto switchD_01268480_caseD_18;
      }
      uVar9 = (uint)uVar32 & 0xff;
    } while ((uVar32 & 0xff) == 0);
LAB_01268a10:
    uVar20 = local_3c;
    if (uVar9 != 1) {
      uVar22 = 9;
      uVar21 = 9;
      local_60 = uVar17;
      goto joined_r0x0126a0b0;
    }
    goto switchD_012691f0_caseD_3;
  case 10:
    goto switchD_01268480_caseD_a;
  case 0xb:
    uVar20 = (uint)local_38;
    uVar17 = local_48;
    for (; local_44 < uVar20; local_44 = local_44 + 8) {
      if (uVar23 == 0) {
        uVar22 = 0xb;
        local_48 = uVar17;
        goto LAB_0126a190;
      }
      uVar23 = uVar23 - 1;
      uVar17 = uVar17 | (uint)(byte)*puVar28 << (local_44 & 0x1f);
      puVar28 = (ushort *)((int)puVar28 + 1);
    }
    local_44 = local_44 - uVar20;
    local_48 = uVar17 >> (uVar20 & 0x1f);
    local_30[2] = 0xb;
    local_30[1] = 3;
    local_30[0] = 3;
    uVar22 = 0;
    if (local_40 == 0x10) {
      uVar22 = *(undefined1 *)(param_2 + (local_3c - 1 & 0x1ff));
    }
    uVar20 = local_30[local_40 & 2] + (uVar17 & ~(-1 << (uVar20 & 0x1f))) + local_3c;
    uVar17 = local_3c & 0x1ff;
    uVar9 = uVar20 & 0x1ff;
    if (uVar9 < uVar17) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar17,uVar9,0x200,&DAT_0188b11c);
    }
    FUN_016dd606(param_2 + uVar17,uVar22,uVar9 - uVar17);
    uVar17 = 10;
    goto switchD_012691f0_caseD_3;
  case 0xc:
    puVar10 = &switchD_01268480::switchdataD_01268484;
    uVar14 = local_48;
    uVar18 = local_44;
    while( true ) {
      local_44 = uVar18;
      uVar29 = uVar9;
      local_48 = uVar14;
      local_3c = uVar20;
      if ((uVar23 < 4) || (puVar8 = (uint *)(param_6 - uVar9), puVar8 <= &DAT_00000001)) break;
      bVar30 = uVar23 == 0xe;
      if (0xd < uVar23) {
        puVar10 = (uint *)0x102;
        bVar30 = puVar8 == (uint *)0x102;
      }
      if ((0xd < uVar23 && puVar10 <= puVar8) && !bVar30) {
        uVar17 = 0xc;
        local_98 = (uint)local_38;
        uVar19 = local_40;
        if (0xd < uVar23) goto LAB_012696ec;
        bVar2 = local_38;
        goto LAB_012696cc;
      }
      puVar27 = puVar28;
      if (uVar18 < 0xf) {
        puVar27 = puVar28 + 1;
        uVar23 = uVar23 - 2;
        uVar14 = uVar14 | (uint)*puVar28 << (uVar18 & 0xff);
        uVar18 = uVar18 | 0x10;
      }
      local_3c = (uint)*(short *)(iVar5 + (uVar14 & 0x3ff) * 2);
      if ((int)local_3c < 0) {
        uVar17 = 10;
        do {
          uVar20 = uVar17;
          uVar17 = (uVar14 >> (uVar20 & 0x1f) & 1) + ~local_3c;
          if (0x23f < uVar17) {
            local_3c = 0x7fff;
            break;
          }
          local_3c = (uint)*(short *)(iVar24 + uVar17 * 2);
          uVar17 = uVar20 + 1;
        } while ((int)local_3c < 0);
        uVar20 = uVar20 + 1 & 0xff;
      }
      else {
        uVar20 = local_3c >> 9;
      }
      local_44 = uVar18 - uVar20;
      uVar17 = 0x15;
      local_48 = uVar14 >> (uVar20 & 0x1f);
      puVar28 = puVar27;
      uVar20 = local_3c;
      if ((local_3c & 0x100) != 0) goto switchD_012691f0_caseD_3;
      if (local_44 < 0xf) {
        puVar28 = puVar27 + 1;
        uVar23 = uVar23 - 2;
        local_48 = local_48 | (uint)*puVar27 << (local_44 & 0xff);
        local_44 = local_44 | 0x10;
      }
      uVar20 = (uint)*(short *)(iVar5 + (local_48 & 0x3ff) * 2);
      if ((int)uVar20 < 0) {
        uVar29 = 10;
        do {
          uVar14 = uVar29;
          uVar20 = (local_48 >> (uVar14 & 0x1f) & 1) + ~uVar20;
          if (0x23f < uVar20) {
            uVar20 = 0x7fff;
            break;
          }
          uVar20 = (uint)*(short *)(iVar24 + uVar20 * 2);
          uVar29 = uVar14 + 1;
        } while ((int)uVar20 < 0);
        uVar29 = uVar14 + 1 & 0xff;
      }
      else {
        uVar29 = uVar20 >> 9;
      }
      local_44 = local_44 - uVar29;
      local_48 = local_48 >> (uVar29 & 0x1f);
      if (param_6 <= uVar9) goto LAB_0126a3b8;
      *(char *)((int)param_5 + uVar9) = (char)local_3c;
      uVar29 = uVar9 + 1;
      if ((uVar20 & 0x100) != 0) {
        goto switchD_012691f0_caseD_3;
      }
      if (param_6 <= uVar29) goto LAB_0126a3cc;
      *(char *)((int)param_5 + uVar29) = (char)uVar20;
      uVar9 = uVar9 + 2;
      puVar10 = param_5;
      uVar14 = local_48;
      uVar18 = local_44;
      uVar20 = local_3c;
    }
    if (uVar18 < 0xf) {
      if (1 < uVar23) {
        uVar23 = uVar23 - 2;
        uVar14 = uVar14 | (uint)*puVar28 << (uVar18 & 0xff);
        local_44 = uVar18 | 0x10;
        puVar28 = puVar28 + 1;
        goto LAB_01269f8c;
      }
      uVar1 = *(ushort *)(iVar5 + (uVar14 & 0x3ff) * 2);
      uVar17 = (uint)(short)uVar1;
      if ((int)uVar17 < 0) {
        if (10 < uVar18) {
          uVar20 = 0xb;
          do {
            uVar17 = (uVar14 >> (uVar20 - 1 & 0x1f) & 1) + ~uVar17;
            if (8 < uVar17 >> 6) goto LAB_0126a3dc;
            uVar17 = (uint)*(short *)(iVar24 + uVar17 * 2);
            if (uVar17 < 0x80000000) goto LAB_01268dc4;
            uVar20 = uVar20 + 1;
          } while (uVar20 <= uVar18);
        }
      }
      else {
        if (0x1ff < uVar1) {
          uVar17 = uVar17 >> 9;
        }
        if (0x1ff < uVar1 && uVar17 <= uVar18) {
LAB_01268dc4:
          goto LAB_01269f8c;
        }
      }
      uVar22 = 0xc;
      if (uVar23 != 0) {
        puVar27 = (ushort *)((int)puVar28 + 1);
        local_44 = uVar18 + 8;
        uVar23 = 0;
        uVar14 = uVar14 | (uint)(byte)*puVar28 << (uVar18 & 0xff);
        puVar28 = puVar27;
        if (6 < uVar18) goto LAB_01269f8c;
        uVar1 = *(ushort *)(iVar5 + (uVar14 & 0x3ff) * 2);
        uVar17 = (uint)(short)uVar1;
        local_48 = uVar14;
        if ((int)uVar17 < 0) {
          if (2 < uVar18) {
            uVar20 = 0xb;
            do {
              uVar17 = (uVar14 >> (uVar20 - 1 & 0x1f) & 1) + ~uVar17;
              if (8 < uVar17 >> 6) {
LAB_0126a3dc:
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(uVar17,0x240,&DAT_0188b13c);
              }
              uVar17 = (uint)*(short *)(iVar24 + uVar17 * 2);
              if (uVar17 < 0x80000000) goto LAB_01269f88;
              uVar20 = uVar20 + 1;
              uVar23 = 0;
              if (local_44 < uVar20) break;
            } while( true );
          }
        }
        else if ((0x1ff < uVar1) && (uVar17 >> 9 <= local_44)) goto LAB_01269f8c;
      }
LAB_0126a250:
      local_60._0_1_ = -4;
      uVar29 = uVar9;
      goto LAB_0126a104;
    }
    goto LAB_01269f8c;
  case 0xd:
    uVar17 = 0x15;
    if (local_3c < 0x100) {
      if (param_6 == uVar29) goto LAB_0126a244;
      if (param_6 <= uVar29) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar29,param_6,&DAT_0188b08c);
      }
      uVar17 = 0xc;
      *(char *)((int)param_5 + uVar29) = (char)local_3c;
      uVar29 = uVar29 + 1;
    }
    goto switchD_012691f0_caseD_3;
  case 0xe:
    uVar20 = (uint)local_38;
    puVar27 = puVar28;
    if (local_44 < uVar20) {
      do {
        if (uVar23 == 0) {
          uVar22 = 0xe;
          goto LAB_0126a190;
        }
        puVar28 = (ushort *)((int)puVar27 + 1);
        uVar9 = local_44 + 8;
        uVar23 = uVar23 - 1;
        local_48 = local_48 | (uint)(byte)*puVar27 << (local_44 & 0x1f);
        puVar27 = puVar28;
        local_44 = uVar9;
      } while (uVar9 < uVar20);
    }
    else {
      uVar9 = local_44;
    }
    uVar17 = 0xf;
    uVar14 = local_48 & ~(-1 << (uVar20 & 0x1f));
    local_48 = local_48 >> (uVar20 & 0x1f);
    local_44 = uVar9 - uVar20;
    uVar20 = local_3c + uVar14;
    goto switchD_012691f0_caseD_3;
  case 0xf:
    uVar14 = local_44;
    if (local_44 < 0xf) {
      if (uVar23 < 2) {
        uVar1 = *(ushort *)(iVar7 + (local_48 & 0x3ff) * 2);
        uVar17 = (uint)(short)uVar1;
        if ((int)uVar17 < 0) {
          if (10 < local_44) {
            uVar18 = 0xb;
            do {
              uVar17 = (local_48 >> (uVar18 - 1 & 0x1f) & 1) + ~uVar17;
              if (8 < uVar17 >> 6) goto LAB_0126a3dc;
              uVar17 = (uint)*(short *)(iVar6 + uVar17 * 2);
              if (uVar17 < 0x80000000) goto LAB_01269058;
              uVar18 = uVar18 + 1;
            } while (uVar18 <= local_44);
          }
        }
        else {
          if (0x1ff < uVar1) {
            uVar17 = uVar17 >> 9;
          }
          if (0x1ff < uVar1 && uVar17 <= local_44) {
LAB_01269058:
            goto LAB_01269e58;
          }
        }
        uVar22 = 0xf;
        if (uVar23 != 0) {
          puVar27 = (ushort *)((int)puVar28 + 1);
          uVar14 = local_44 + 8;
          uVar23 = 0;
          local_48 = local_48 | (uint)(byte)*puVar28 << (local_44 & 0xff);
          puVar28 = puVar27;
          if (6 < local_44) goto LAB_01269e58;
          uVar1 = *(ushort *)(iVar7 + (local_48 & 0x3ff) * 2);
          uVar17 = (uint)(short)uVar1;
          if ((int)uVar17 < 0) {
            bVar30 = 2 < local_44;
            local_44 = uVar14;
            if (bVar30) {
              uVar18 = 0xb;
              while( true ) {
                uVar17 = (local_48 >> (uVar18 - 1 & 0x1f) & 1) + ~uVar17;
                if (8 < uVar17 >> 6) goto LAB_0126a3dc;
                uVar17 = (uint)*(short *)(iVar6 + uVar17 * 2);
                if (uVar17 < 0x80000000) break;
                uVar18 = uVar18 + 1;
                uVar23 = 0;
                if (uVar14 < uVar18) goto LAB_0126a250;
              }
              uVar23 = 0;
              goto LAB_01269e58;
            }
          }
          else {
            local_44 = uVar14;
            if (0x1ff < uVar1) {
              if (uVar17 >> 9 <= uVar14) goto LAB_01269e58;
            }
          }
        }
        goto LAB_0126a250;
      }
      uVar23 = uVar23 - 2;
      local_48 = local_48 | (uint)*puVar28 << (local_44 & 0xff);
      uVar14 = local_44 | 0x10;
      puVar28 = puVar28 + 1;
    }
LAB_01269e58:
    uVar9 = (uint)*(short *)(iVar7 + (local_48 & 0x3ff) * 2);
    if ((int)uVar9 < 0) {
      uVar17 = 10;
      do {
        uVar18 = uVar17;
        uVar17 = (local_48 >> (uVar18 & 0x1f) & 1) + ~uVar9;
        if (0x23f < uVar17) {
          uVar9 = 0x7fff;
          break;
        }
        uVar9 = (uint)*(short *)(iVar6 + uVar17 * 2);
        uVar17 = uVar18 + 1;
      } while ((int)uVar9 < 0);
      uVar18 = uVar18 + 1 & 0xff;
    }
    else {
      uVar18 = uVar9 >> 9;
      uVar9 = uVar9 & 0x1ff;
    }
    uVar17 = 0x22;
    local_48 = local_48 >> (uVar18 & 0x1f);
    local_44 = uVar14 - uVar18;
    if (uVar9 < 0x1e) {
      uVar17 = 0x10;
      local_38 = UnsignedSaturate((char)((uVar9 & 0xff) >> 1) + -1,0x10);
      UnsignedSaturate(0,0x10);
      UnsignedSaturate(0,0x10);
      UnsignedSaturate(0,0x10);
      if (uVar9 < 4) {
        uVar17 = 0x16;
      }
      local_40 = (uint)*(ushort *)(&DAT_003b5756 + uVar9 * 2);
    }
    goto switchD_012691f0_caseD_3;
  case 0x10:
    uVar9 = (uint)local_38;
    if (local_44 < uVar9) {
      if (uVar23 == 0) {
LAB_0126a0fc:
        uVar23 = 0;
        local_60._0_1_ = -4;
        uVar22 = 0x10;
        goto LAB_0126a104;
      }
      iVar15 = 1 - uVar23;
      uVar23 = local_44;
      puVar27 = puVar28;
      while( true ) {
        puVar28 = (ushort *)((int)puVar27 + 1);
        local_48 = local_48 | (uint)(byte)*puVar27 << (uVar23 & 0x1f);
        local_44 = uVar23 + 8;
        if (uVar9 <= local_44) break;
        iVar15 = iVar15 + 1;
        uVar23 = uVar23 + 8;
        puVar27 = puVar28;
        if (iVar15 == 1) {
          local_44 = uVar23;
          goto LAB_0126a0fc;
        }
      }
      uVar23 = -iVar15;
    }
    uVar17 = 0x16;
    uVar14 = local_48 & ~(-1 << (uVar9 & 0x1f));
    local_48 = local_48 >> (uVar9 & 0x1f);
    local_44 = local_44 - uVar9;
    local_40 = local_40 + uVar14;
    goto switchD_012691f0_caseD_3;
  case 0x11:
    if (local_44 < 8) {
      if (uVar23 == 0) break;
      uVar23 = uVar23 - 1;
      local_48 = local_48 | (uint)(byte)*puVar28 << (local_44 & 0xff);
      local_44 = local_44 | 8;
      puVar28 = (ushort *)((int)puVar28 + 1);
    }
    local_40 = local_48 & 0xff;
    uVar17 = 0x12;
    local_48 = local_48 >> 8;
    local_44 = local_44 - 8;
    goto switchD_012691f0_caseD_3;
  case 0x12:
    if (param_6 == uVar29) {
LAB_0126a244:
      local_60 = 2;
      uVar29 = param_6;
      goto switchD_01268480_caseD_18;
    }
    if (param_6 <= uVar29) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar29,param_6,&DAT_0188b08c);
    }
    uVar17 = 0x11;
    *(char *)((int)param_5 + uVar29) = (char)local_40;
    if (local_44 == 0) {
      uVar17 = 6;
    }
    if (local_3c - 1 == 0) {
      uVar17 = 6;
    }
    uVar29 = uVar29 + 1;
    uVar20 = local_3c - 1;
    goto switchD_012691f0_caseD_3;
  case 0x13:
    do {
      uVar9 = local_3c;
      if (param_6 == uVar29) {
        local_60 = 2;
        uVar22 = 0x13;
        uVar29 = param_6;
        goto switchD_01268480_caseD_18;
      }
      uVar18 = param_6 - uVar29;
      uVar17 = uVar18;
      if (local_3c < uVar18) {
        uVar17 = local_3c;
      }
      FUN_0126aa30(param_5,param_6,uVar29 - uVar14,uVar29,uVar17);
      local_3c = uVar9 - uVar17;
      uVar29 = uVar17 + uVar29;
      uVar17 = 0xc;
      uVar20 = local_3c;
    } while (uVar18 < uVar9);
    goto switchD_012691f0_caseD_3;
  case 0x14:
    uVar17 = 3;
    if (*(char *)(param_2 + 0x28ea) != '\0') {
      uVar23 = param_4 - uVar23;
      uVar20 = uVar23;
      if (local_44 >> 3 <= uVar23) {
        uVar20 = local_44 >> 3;
      }
      uVar9 = (local_44 & 0xfffffff8) + uVar20 * -8;
      uVar20 = uVar23 - uVar20;
      if (param_4 < uVar20) {
        local_44 = uVar9;
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar20,param_4,param_4,&DAT_0188b0dc);
      }
      local_3c = 0;
      uVar23 = param_4 - uVar20;
      uVar17 = 0x17;
      puVar28 = (ushort *)((int)param_3 + uVar20);
      local_48 = local_48 >> (local_44 & 7) & ~(-1 << (uVar9 & 0x18));
      local_44 = uVar9;
      uVar20 = local_3c;
    }
    goto switchD_012691f0_caseD_3;
  case 0x15:
    uVar17 = 0x14;
    uVar20 = local_3c & 0x1ff;
    if (uVar20 != 0x100) {
      uVar17 = 0x21;
      if (uVar20 >> 1 < 0x8f) {
        uVar20 = local_3c - 1 & 0x1f;
        uVar17 = 0xe;
        local_38 = (&DAT_00565cf0)[uVar20];
        uVar20 = (uint)*(ushort *)(&DAT_003b56fc + uVar20 * 2);
        if (local_38 == 0) {
          uVar17 = 0xf;
        }
      }
    }
    goto switchD_012691f0_caseD_3;
  case 0x16:
    uVar17 = 0x1e;
    if (local_40 <= uVar29) {
      if (local_40 <= param_6) {
        uVar9 = local_3c + uVar29;
        if (uVar9 <= param_6) {
          uVar17 = uVar29 - local_40;
          bVar31 = uVar29 <= uVar17;
          bVar30 = uVar17 == uVar29;
          if (bVar31) {
            uVar17 = -local_40;
            bVar30 = local_3c == uVar17;
          }
          if ((!bVar31 || local_3c < uVar17) || bVar30) {
            FUN_0126aea0(param_5,param_6,uVar29,local_40,local_3c);
            uVar17 = 0xc;
            uVar29 = uVar9;
            uVar20 = local_3c;
            goto switchD_012691f0_caseD_3;
          }
        }
        uVar17 = 0x13;
        if (local_3c == 0) {
          uVar17 = 0xc;
        }
      }
    }
    goto switchD_012691f0_caseD_3;
  case 0x17:
    uVar17 = 0x18;
    if (3 < local_3c) goto switchD_012691f0_caseD_3;
    if (local_44 == 0) {
      if (uVar23 != 0) {
        puVar27 = (ushort *)((int)puVar28 + 1);
        uVar23 = uVar23 - 1;
        uVar9 = (uint)(byte)*puVar28 | *(int *)(param_2 + 0x28cc) << 8;
        *(uint *)(param_2 + 0x28cc) = uVar9;
        puVar28 = puVar27;
        uVar20 = local_3c + 1;
        if (local_3c + 1 != 4) goto LAB_012695bc;
        goto switchD_012691f0_caseD_3;
      }
    }
    else {
      puVar26 = puVar28;
      if (local_44 < 8) {
        if (uVar23 == 0) goto LAB_0126a25c;
        puVar26 = (ushort *)((int)puVar28 + 1);
        uVar23 = uVar23 - 1;
        local_48 = local_48 | (uint)(byte)*puVar28 << (local_44 & 0xff);
        local_44 = local_44 | 8;
      }
      uVar9 = local_48 & 0xff | *(int *)(param_2 + 0x28cc) << 8;
      local_44 = local_44 - 8;
      *(uint *)(param_2 + 0x28cc) = uVar9;
      uVar20 = local_3c + 1;
      local_48 = local_48 >> 8;
      puVar28 = puVar26;
      if (uVar20 == 4) goto switchD_012691f0_caseD_3;
      puVar27 = puVar26;
      if (local_44 == 0) {
LAB_012695bc:
        local_3c = local_3c + 1;
        uVar20 = local_3c;
        if (uVar23 != 0) {
          puVar26 = (ushort *)((int)puVar27 + 1);
          uVar23 = uVar23 - 1;
          uVar9 = (uint)(byte)*puVar27 | uVar9 << 8;
          *(uint *)(param_2 + 0x28cc) = uVar9;
          puVar28 = puVar26;
          uVar20 = uVar18 + 2;
          if (uVar18 + 2 != 4) goto LAB_012695e8;
          goto switchD_012691f0_caseD_3;
        }
      }
      else {
        if (local_44 < 8) {
          if (uVar23 == 0) goto LAB_0126a25c;
          uVar23 = uVar23 - 1;
          local_48 = local_48 | (uint)(byte)*puVar26 << (local_44 & 0xff);
          local_44 = local_44 | 8;
          puVar26 = (ushort *)((int)puVar26 + 1);
        }
        uVar9 = local_48 & 0xff | uVar9 << 8;
        local_44 = local_44 - 8;
        uVar20 = local_3c + 2;
        local_48 = local_48 >> 8;
        *(uint *)(param_2 + 0x28cc) = uVar9;
        puVar28 = puVar26;
        if (uVar20 == 4) goto switchD_012691f0_caseD_3;
        if (local_44 != 0) {
          if (local_44 < 8) {
            if (uVar23 == 0) goto LAB_0126a25c;
            uVar23 = uVar23 - 1;
            local_48 = local_48 | (uint)(byte)*puVar26 << (local_44 & 0xff);
            local_44 = local_44 | 8;
            puVar26 = (ushort *)((int)puVar26 + 1);
          }
          uVar14 = local_48 & 0xff | uVar9 << 8;
          local_44 = local_44 - 8;
          uVar20 = local_3c + 3;
          uVar9 = local_48 >> 8;
          *(uint *)(param_2 + 0x28cc) = uVar14;
          puVar28 = puVar26;
          local_48 = uVar9;
          if (uVar20 != 4) {
            if (local_44 == 0) goto LAB_01269614;
            if (local_44 < 8) {
              if (uVar23 == 0) goto LAB_0126a25c;
              uVar23 = uVar23 - 1;
              uVar9 = uVar9 | (uint)(byte)*puVar26 << (local_44 & 0xff);
              local_44 = local_44 | 8;
              puVar26 = (ushort *)((int)puVar26 + 1);
            }
            local_44 = local_44 - 8;
            local_48 = uVar9 >> 8;
            uVar20 = uVar9 & 0xff | uVar14 << 8;
LAB_0126962c:
            *(uint *)(param_2 + 0x28cc) = uVar20;
            puVar28 = puVar26;
            uVar20 = uVar18 | 4;
          }
          goto switchD_012691f0_caseD_3;
        }
LAB_012695e8:
        local_3c = uVar18 + 2;
        uVar20 = local_3c;
        if (uVar23 != 0) {
          puVar28 = (ushort *)((int)puVar26 + 1);
          uVar23 = uVar23 - 1;
          uVar14 = (uint)(byte)*puVar26 | uVar9 << 8;
          *(uint *)(param_2 + 0x28cc) = uVar14;
          uVar20 = uVar18 + 3;
          if (uVar18 + 3 == 4) goto switchD_012691f0_caseD_3;
LAB_01269614:
          local_3c = uVar18 + 3;
          uVar20 = local_3c;
          if (uVar23 != 0) {
            puVar26 = (ushort *)((int)puVar28 + 1);
            uVar23 = uVar23 - 1;
            uVar20 = (uint)(byte)*puVar28 | uVar14 << 8;
            goto LAB_0126962c;
          }
        }
      }
    }
LAB_0126a25c:
    local_3c = uVar20;
    uVar22 = 0x17;
    break;
  case 0x18:
    goto switchD_01268480_caseD_18;
  default:
switchD_01268480_default:
    local_60 = 0xff;
    goto switchD_01268480_caseD_18;
  }
LAB_0126a190:
  local_60._0_1_ = -4;
  bVar30 = true;
  uVar23 = 0;
  uVar17 = 0;
  goto LAB_0126a198;
LAB_012696ec:
  do {
    if (uVar18 < 0xf) {
      uVar23 = uVar23 - 2;
      uVar14 = uVar14 | (uint)*puVar28 << (uVar18 & 0xff);
      uVar18 = uVar18 | 0x10;
      puVar28 = puVar28 + 1;
    }
    uVar20 = (uint)*(short *)(iVar5 + (uVar14 & 0x3ff) * 2);
    if ((int)uVar20 < 0) {
      uVar29 = 10;
      do {
        uVar11 = uVar29;
        uVar20 = (uVar14 >> (uVar11 & 0x1f) & 1) + ~uVar20;
        if (0x23f < uVar20) {
          uVar20 = 0x7fff;
          break;
        }
        uVar20 = (uint)*(short *)(iVar24 + uVar20 * 2);
        uVar29 = uVar11 + 1;
      } while ((int)uVar20 < 0);
      uVar29 = uVar11 + 1 & 0xff;
    }
    else {
      uVar29 = uVar20 >> 9;
    }
    uVar18 = uVar18 - uVar29;
    uVar14 = uVar14 >> (uVar29 & 0x1f);
    uVar11 = uVar20;
    uVar29 = uVar9;
    if ((uVar20 & 0x100) == 0) {
      if (uVar18 < 0xf) {
        uVar23 = uVar23 - 2;
        uVar14 = uVar14 | (uint)*puVar28 << (uVar18 & 0xff);
        uVar18 = uVar18 | 0x10;
        puVar28 = puVar28 + 1;
      }
      uVar11 = (uint)*(short *)(iVar5 + (uVar14 & 0x3ff) * 2);
      if ((int)uVar11 < 0) {
        uVar29 = 10;
        do {
          uVar12 = uVar29;
          uVar29 = (uVar14 >> (uVar12 & 0x1f) & 1) + ~uVar11;
          if (0x23f < uVar29) {
            uVar11 = 0x7fff;
            break;
          }
          uVar11 = (uint)*(short *)(iVar24 + uVar29 * 2);
          uVar29 = uVar12 + 1;
        } while ((int)uVar11 < 0);
        uVar29 = uVar12 + 1 & 0xff;
      }
      else {
        uVar29 = uVar11 >> 9;
      }
      if (param_6 <= uVar9) {
LAB_0126a3b8:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar9,param_6,&DAT_0188b08c);
      }
      uVar18 = uVar18 - uVar29;
      uVar14 = uVar14 >> (uVar29 & 0x1f);
      *(char *)((int)param_5 + uVar9) = (char)uVar20;
      uVar29 = uVar9 + 1;
      if ((uVar11 & 0x100) == 0) {
        if (param_6 <= uVar29) {
LAB_0126a3cc:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar29,param_6,&DAT_0188b08c);
        }
        uVar9 = uVar9 + 2;
        *(char *)((int)param_5 + uVar29) = (char)uVar11;
        bVar2 = (byte)local_98;
        if ((param_6 - uVar9 < 0x103) || (uVar23 < 0xe)) break;
        goto LAB_012696ec;
      }
    }
    uVar20 = uVar11 & 0x1ff;
    if (uVar20 == 0x100) {
      uVar20 = 0x100;
      uVar17 = 0x14;
      goto LAB_012696d0;
    }
    if (0x8e < uVar20 >> 1) {
      uVar22 = 0x21;
LAB_0126a2fc:
      local_38 = (byte)local_98;
      local_48 = uVar14;
      local_44 = uVar18;
      local_40 = uVar19;
      local_3c = uVar20;
      goto switchD_01268480_default;
    }
    puVar27 = puVar28;
    if (uVar18 < 0xf) {
      puVar27 = puVar28 + 1;
      uVar20 = (uint)*puVar28;
    }
    uVar9 = uVar11 - 1 & 0x1f;
    if (uVar18 < 0xf) {
      uVar23 = uVar23 - 2;
      uVar14 = uVar14 | uVar20 << (uVar18 & 0xff);
      uVar18 = uVar18 | 0x10;
    }
    uVar11 = (uint)(byte)(&DAT_00565cf0)[uVar9];
    uVar20 = (uint)*(ushort *)(&DAT_003b56fc + uVar9 * 2);
    puVar26 = puVar27;
    if (uVar11 != 0) {
      uVar18 = uVar18 - uVar11;
      uVar11 = uVar11 & 0x1f;
      uVar12 = uVar14 & ~(-1 << uVar11);
      uVar14 = uVar14 >> uVar11;
      if (uVar18 < 0xf) {
        puVar26 = puVar27 + 1;
        uVar11 = (uint)*puVar27;
      }
      uVar20 = uVar12 + uVar20;
      if (uVar18 < 0xf) {
        uVar23 = uVar23 - 2;
        uVar14 = uVar14 | uVar11 << (uVar18 & 0xff);
        uVar18 = uVar18 | 0x10;
      }
    }
    uVar11 = (uint)*(short *)(iVar7 + (uVar14 & 0x3ff) * 2);
    if ((int)uVar11 < 0) {
      uVar12 = 10;
      do {
        uVar13 = uVar12;
        uVar11 = (uVar14 >> (uVar13 & 0x1f) & 1) + ~uVar11;
        if (0x23f < uVar11) {
          uVar11 = 0x7fff;
          break;
        }
        uVar11 = (uint)*(short *)(iVar6 + uVar11 * 2);
        uVar12 = uVar13 + 1;
      } while ((int)uVar11 < 0);
      uVar12 = uVar13 + 1 & 0xff;
    }
    else {
      uVar12 = uVar11 >> 9;
    }
    uVar18 = uVar18 - uVar12;
    uVar14 = uVar14 >> (uVar12 & 0x1f);
    if (0x1d < (uVar11 & 0x1ff)) {
      uVar22 = 0x22;
      bVar2 = (&DAT_00565cf0)[uVar9];
LAB_0126a2f8:
      local_98._0_1_ = bVar2;
      goto LAB_0126a2fc;
    }
    uVar19 = (uint)*(ushort *)(&DAT_003b5756 + (uVar11 & 0x1ff) * 2);
    bVar2 = UnsignedSaturate((char)((uVar11 & 0xff) >> 1) + -1,0x10);
    UnsignedSaturate(0,0x10);
    UnsignedSaturate(0,0x10);
    UnsignedSaturate(0,0x10);
    local_98 = (uint)bVar2;
    puVar28 = puVar26;
    if (3 < (uVar11 & 0xff)) {
      if (uVar18 < 0xf) {
        if (uVar23 < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,2,uVar23,&DAT_0188b12c);
        }
        puVar28 = puVar26 + 1;
        uVar23 = uVar23 - 2;
        uVar14 = uVar14 | (uint)*puVar26 << (uVar18 & 0xff);
        uVar18 = uVar18 | 0x10;
      }
      uVar18 = uVar18 - local_98;
      uVar19 = (uVar14 & ~(-1 << local_98)) + uVar19;
      uVar14 = uVar14 >> local_98;
    }
    uVar22 = 0x1e;
    if ((param_6 < uVar19) || (uVar29 < uVar19)) goto LAB_0126a2f8;
    uVar9 = uVar29 - uVar19;
    if (uVar20 == 3) {
      if (uVar29 < 0xfffffffd) {
        uVar11 = uVar29 + 3;
        if (uVar11 <= param_6) {
          uVar11 = uVar9 + 2;
        }
        if ((uVar11 < param_6) && (uVar9 + 1 < param_6 && uVar9 < param_6)) {
          puVar16 = (undefined1 *)((int)param_5 + uVar29);
          *puVar16 = *(undefined1 *)((int)param_5 + uVar9);
          puVar16[1] = *(undefined1 *)((int)param_5 + uVar9 + 1);
          puVar16[2] = *(undefined1 *)((int)param_5 + uVar11);
        }
      }
    }
    else {
      FUN_0126aa30(param_5,param_6,uVar9,uVar29,uVar20);
    }
    uVar9 = uVar29 + uVar20;
    uVar29 = param_6 - uVar9;
    bVar30 = uVar29 == 0x103;
    if (0x102 < uVar29) {
      bVar30 = uVar23 == 0xd;
    }
  } while (!((0x102 >= uVar29 || uVar23 < 0xd) || bVar30));
LAB_012696cc:
  local_98._0_1_ = bVar2;
  uVar29 = uVar9;
LAB_012696d0:
  local_48 = uVar14;
  local_44 = uVar18;
  local_40 = uVar19;
  local_38 = (byte)local_98;
  goto switchD_012691f0_caseD_3;
LAB_01269f88:
  uVar23 = 0;
LAB_01269f8c:
  uVar20 = (uint)*(short *)(iVar5 + (uVar14 & 0x3ff) * 2);
  if ((int)uVar20 < 0) {
    uVar17 = 10;
    do {
      uVar9 = uVar17;
      uVar17 = (uVar14 >> (uVar9 & 0x1f) & 1) + ~uVar20;
      if (0x23f < uVar17) {
        uVar20 = 0x7fff;
        break;
      }
      uVar20 = (uint)*(short *)(iVar24 + uVar17 * 2);
      uVar17 = uVar9 + 1;
    } while ((int)uVar20 < 0);
    uVar9 = uVar9 + 1 & 0xff;
  }
  else {
    uVar9 = uVar20 >> 9;
    uVar20 = uVar20 & 0x1ff;
  }
  uVar17 = 0xd;
  local_48 = uVar14 >> (uVar9 & 0x1f);
  local_44 = local_44 - uVar9;
  goto switchD_012691f0_caseD_3;
switchD_01268480_caseD_a:
  do {
    uVar9 = (uint)*(ushort *)(param_2 + 0x28e4);
    uVar20 = *(ushort *)(param_2 + 0x28e6) + uVar9;
    puVar27 = puVar28;
    if (uVar20 <= local_3c) {
      if (local_3c == uVar20) {
        if (0x120 < uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar9,0x120,&DAT_0188b0cc);
        }
        FUN_016dd1aa(param_2 + 0x2780,param_2);
        uVar17 = *(ushort *)(param_2 + 0x28e4) & 0x1ff;
        uVar20 = (uint)*(ushort *)(param_2 + 0x28e6) + (uint)*(ushort *)(param_2 + 0x28e4) & 0x1ff;
        if (uVar20 < uVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar17,uVar20,0x200,&DAT_0188b0bc);
        }
        uVar9 = *(ushort *)(param_2 + 0x28e6) & 0x1f;
        if (uVar20 - uVar17 != uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb7204(uVar9,uVar20 - uVar17,&DAT_0188b0ac);
        }
        FUN_016dd1aa((undefined4 *)(param_2 + 0x28a0),param_2 + uVar17);
        *(char *)(param_2 + 0x28eb) = *(char *)(param_2 + 0x28eb) + -1;
        uVar32 = FUN_0126a460(param_2,&local_48);
        if (((uint)uVar32 & 0xff) != 3) {
          goto LAB_0126861c;
        }
        uVar22 = 10;
        local_60 = 0xff;
        goto switchD_01268480_caseD_18;
      }
      uVar17 = 0x1a;
      uVar20 = local_3c;
      goto switchD_012691f0_caseD_3;
    }
    uVar20 = local_44;
    if (local_44 < 0xf) {
      if (1 < uVar23) {
        uVar23 = uVar23 - 2;
        local_48 = local_48 | (uint)*puVar28 << (local_44 & 0xff);
        uVar20 = local_44 | 0x10;
        puVar27 = puVar28 + 1;
        goto LAB_01268740;
      }
      uVar1 = *(ushort *)(iVar4 + (local_48 & 0x3ff) * 2);
      uVar9 = (uint)(short)uVar1;
      if ((int)uVar9 < 0) {
        if (10 < local_44) {
          uVar14 = 0xb;
          do {
            uVar17 = 1;
            uVar9 = (local_48 >> (uVar14 - 1 & 0x1f) & 1) + ~uVar9;
            if (8 < uVar9 >> 6) goto LAB_0126a3a4;
            uVar9 = (uint)*(short *)(iVar25 + uVar9 * 2);
            if (uVar9 < 0x80000000) goto LAB_01268740;
            uVar14 = uVar14 + 1;
          } while (uVar14 <= local_44);
        }
      }
      else {
        if (0x1ff < uVar1) {
          uVar9 = uVar9 >> 9;
        }
        if (0x1ff < uVar1 && uVar9 <= local_44) goto LAB_01268740;
      }
      uVar17 = 0xfc;
      uVar32 = 0xfc00000002;
      if (uVar23 != 0) {
        puVar27 = (ushort *)((int)puVar28 + 1);
        uVar20 = local_44 + 8;
        uVar23 = 0;
        local_48 = local_48 | (uint)(byte)*puVar28 << (local_44 & 0xff);
        if (6 < local_44) goto LAB_01268740;
        uVar1 = *(ushort *)(iVar4 + (local_48 & 0x3ff) * 2);
        uVar9 = (uint)(short)uVar1;
        if ((int)uVar9 < 0) {
          bVar30 = 2 < local_44;
          local_44 = uVar20;
          uVar32 = 0xfc00000002;
          if (bVar30) {
            uVar14 = 0xb;
            do {
              uVar9 = (local_48 >> (uVar14 - 1 & 0x1f) & 1) + ~uVar9;
              if (8 < uVar9 >> 6) {
LAB_0126a3a4:
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(uVar9,0x240,&DAT_0188b13c);
              }
              uVar9 = (uint)*(short *)(iVar25 + uVar9 * 2);
              if (uVar9 < 0x80000000) {
                uVar23 = 0;
                goto LAB_01268740;
              }
              uVar14 = uVar14 + 1;
              uVar23 = 0;
              uVar32 = 0xfc00000002;
            } while (uVar14 <= uVar20);
          }
        }
        else {
          if (0x1ff < uVar1) {
            uVar9 = uVar9 >> 9;
          }
          local_44 = uVar20;
          uVar32 = 0xfc00000002;
          if (0x1ff < uVar1 && uVar9 <= uVar20) goto LAB_01268740;
        }
      }
    }
    else {
LAB_01268740:
      local_40 = (uint)*(short *)(iVar4 + (local_48 & 0x3ff) * 2);
      if ((int)local_40 < 0) {
        uVar9 = 10;
        do {
          uVar14 = uVar9;
          uVar17 = 1;
          uVar9 = (local_48 >> (uVar14 & 0x1f) & 1) + ~local_40;
          if (0x23f < uVar9) {
            local_40 = 0x7fff;
            break;
          }
          local_40 = (uint)*(short *)(iVar25 + uVar9 * 2);
          uVar9 = uVar14 + 1;
        } while ((int)local_40 < 0);
        uVar9 = uVar14 + 1 & 0xff;
      }
      else {
        uVar9 = local_40 >> 9;
        local_40 = local_40 & 0x1ff;
      }
      local_44 = uVar20 - uVar9;
      local_48 = local_48 >> (uVar9 & 0x1f);
      if (local_40 < 0x10) {
        *(char *)(param_2 + (local_3c & 0x1ff)) = (char)local_40;
        local_3c = local_3c + 1;
        uVar32 = (ulonglong)uVar17 << 0x20;
      }
      else {
        if (local_3c == 0) {
          uVar17 = 0x20;
        }
        uVar32 = CONCAT44(uVar17,1);
        if (local_3c != 0 || local_40 != 0x10) {
          local_30[0] = 0x70302;
          local_38 = *(byte *)((int)local_30 + (local_40 & 3));
          uVar32 = 0xb00000001;
        }
      }
    }
LAB_0126861c:
    uVar17 = (uint)(uVar32 >> 0x20);
    puVar28 = puVar27;
  } while ((uVar32 & 0xff) == 0);
  uVar20 = local_3c;
  if (((uint)uVar32 & 0xff) == 2) {
    uVar22 = 10;
    uVar21 = 10;
    local_60 = uVar17;
joined_r0x0126a0b0:
    if ((local_60 & 0xff) == 1) {
      local_60._0_1_ = '\x01';
      if (param_6 == uVar29) {
        local_60._0_1_ = '\x02';
      }
      uVar22 = uVar21;
LAB_0126a104:
      bVar30 = true;
      uVar17 = 0;
    }
    else {
      uVar17 = 0;
      bVar30 = true;
      if ((local_60 & 0xff) != 0xfc) {
switchD_01268480_caseD_18:
        uVar17 = param_4 - uVar23;
        if (local_44 >> 3 <= uVar17) {
          uVar17 = local_44 >> 3;
        }
        local_44 = local_44 + uVar17 * -8;
        bVar30 = (local_60 & 0xff) != 0;
      }
    }
LAB_0126a198:
    *(uint *)(param_2 + 0x28c0) = local_44;
    *(byte *)(param_2 + 0x28ec) = local_38;
    *(uint *)(param_2 + 0x28dc) = local_48 & ~(-1 << (local_44 & 0x1f));
    *(undefined1 *)(param_2 + 0x2900) = uVar22;
    *(uint *)(param_2 + 0x28d4) = local_40;
    *(uint *)(param_2 + 0x28d8) = local_3c;
    if (-1 < (char)local_60) {
      if (param_6 < uVar29) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar29,param_6,&DAT_0188b0ec);
      }
      uVar33 = FUN_0159d934(*(uint *)(param_2 + 0x28d0),*(uint *)(param_2 + 0x28d0) >> 0x10,param_5,
                            uVar29);
      iVar3 = ((uint)uVar33 & 0xffff) + (int)((ulonglong)uVar33 >> 0x20) * 0x10000;
      *(int *)(param_2 + 0x28d0) = iVar3;
      if ((!bVar30) && (iVar3 != *(int *)(param_2 + 0x28cc))) {
        local_60._0_1_ = -2;
      }
    }
    param_1[2] = uVar29;
    *(char *)(param_1 + 1) = (char)local_60;
    *param_1 = param_4 - (uVar17 + uVar23);
    return;
  }
  goto switchD_012691f0_caseD_3;
LAB_0126a120:
  local_3c = uVar20;
  uVar23 = 0;
  local_30[2] = 4;
  local_30[1] = 5;
  bVar30 = true;
  local_60._0_1_ = -4;
  uVar22 = 8;
  uVar17 = 0;
  goto LAB_0126a198;
}

