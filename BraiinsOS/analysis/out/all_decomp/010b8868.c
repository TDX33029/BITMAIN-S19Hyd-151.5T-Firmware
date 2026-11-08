// FUN_010b8868 @ 010b8868 size=3648 calls_out=11 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_010b8868(int *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  uint uVar10;
  int *piVar11;
  byte *pbVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint extraout_r12;
  uint uVar29;
  uint uVar30;
  undefined8 uVar31;
  uint local_104;
  int local_f0;
  byte *pbStack_ec;
  uint uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  int local_d8;
  byte *local_d4;
  uint local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  uint local_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  uint *local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint local_34;
  int local_30;
  undefined4 local_2c;
  uint local_28;
  
  FUN_010b1fa0(&local_68,param_1,&DAT_018d85ec);
  if ((char)local_58 != '\x02') {
    (*(code *)local_68[4])(&local_5c,local_64,local_60);
  }
  FUN_010b1fa0(&local_68,param_1,&DAT_018d85fc);
  if ((char)local_58 != '\x02') {
    (*(code *)local_68[4])(&local_5c,local_64,local_60);
  }
  FUN_010b1fa0(&local_68,param_1,&DAT_018d860c);
  if ((char)local_58 != '\x02') {
    (*(code *)local_68[4])(&local_5c,local_64,local_60);
  }
  FUN_010b1fa0(&local_68,param_1,&DAT_018d861c);
  if ((char)local_58 != '\x02') {
    (*(code *)local_68[4])(&local_5c,local_64,local_60);
  }
  if (param_2 != 0) {
    uVar14 = param_1[10];
    uVar22 = 0;
    local_5c = 0;
    local_60 = 0;
    local_64 = 0x43;
    local_68 = (uint *)0x0;
    if (uVar14 != 0) {
      uVar5 = FUN_010b0a24(param_1,&local_68);
      uVar24 = local_60;
      uVar10 = local_64;
      puVar4 = local_68;
      iVar6 = param_1[6];
      iVar7 = param_1[9];
      uVar1 = *(ushort *)(param_1 + 0xe);
      uVar8 = local_64 & 0xff;
      uVar17 = param_1[7];
      uVar27 = (uint)uVar1 & uVar5 & 0xffff;
LAB_010b89e4:
      do {
        uVar15 = uVar27;
        uVar27 = 0;
      } while (uVar17 <= uVar15);
      iVar20 = 0;
      puVar9 = (ushort *)(iVar6 + uVar15 * 4);
      uVar27 = (uint)*puVar9;
      if ((uVar27 == 0xffff) ||
         (uVar2 = puVar9[1], (uVar15 - (uVar2 & uVar1) & (uint)uVar1) < uVar22)) goto LAB_010b8ab0;
      if ((uint)uVar2 == (uVar5 & 0xffff)) {
        if (uVar14 <= uVar27) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar27,uVar14,&DAT_018a6bf0);
        }
        iVar20 = uVar27 * 0x34 + iVar7;
        if ((*(int *)(iVar20 + 0x20) != 0) != (puVar4 == (uint *)0x0)) {
          if (*(int *)(iVar20 + 0x20) == 0) {
            if (*(byte *)(iVar20 + 0x24) == uVar8) goto LAB_010b8aa0;
          }
          else if ((*(int *)(iVar20 + 0x28) == uVar24) &&
                  (iVar20 = thunk_FUN_016dd50a(*(undefined4 *)(iVar20 + 0x24),uVar10), iVar20 == 0))
          goto LAB_010b8aa0;
        }
      }
      uVar22 = uVar22 + 1;
      uVar27 = uVar15 + 1;
      goto LAB_010b89e4;
    }
    goto LAB_010b8b50;
  }
  goto LAB_010b8b00;
LAB_010b8aa0:
  iVar20 = uVar27 * 0x34 + iVar7 + 0xc;
LAB_010b8ab0:
  if (puVar4 != (uint *)0x0) {
    (*(code *)puVar4[4])(&local_5c);
  }
  if ((iVar20 == 0) ||
     ((*(int *)(iVar20 + 8) == 8 &&
      (iVar6 = thunk_FUN_016dd50a(*(undefined4 *)(iVar20 + 4),&DAT_00569968,8), iVar6 == 0))))
  goto LAB_010b8b50;
LAB_010b8b00:
  local_a4 = 0x43;
  local_9c = 0;
  local_a0 = 0;
  local_a8 = 0;
  FUN_010b21c0(&local_68,param_1,&local_a8);
  if ((char)local_58 != '\x02') {
    (*(code *)local_68[4])(&local_5c,local_64,local_60);
  }
LAB_010b8b50:
  local_64 = 0x14;
  local_5c = 0;
  local_60 = 0;
  local_68 = (uint *)0x0;
  FUN_010b21c0(&local_f0,param_1,&local_68);
  if ((char)local_e0 == '\x02') {
    return;
  }
  local_d8 = local_f0;
  local_d4 = pbStack_ec;
  local_d0 = uStack_e8;
  uStack_cc = uStack_e4;
  uStack_c8 = local_e0;
  if (uStack_e8 != 0) {
    uVar14 = uStack_e8;
    pbVar12 = pbStack_ec;
    do {
      if ((*pbVar12 != 9) && (0x5e < *pbVar12 - 0x20)) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_68,&DAT_01884898,&DAT_018848bc);
      }
      pbVar12 = pbVar12 + 1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  uVar14 = 0;
  uVar22 = 0;
LAB_010b8c80:
  do {
    uVar10 = uStack_e8;
    local_104 = uVar22;
    if (uStack_e8 < uVar14) {
LAB_010b8de4:
      bVar3 = true;
      goto LAB_010b8df4;
    }
    uVar24 = uStack_e8 - uVar14;
    pbVar12 = pbStack_ec + uVar14;
    if (uVar24 < 8) {
      if (uStack_e8 == uVar14) {
LAB_010b8de0:
        uVar14 = uStack_e8;
        goto LAB_010b8de4;
      }
      uVar5 = 0;
      while (pbVar12[uVar5] != 0x2c) {
        uVar5 = uVar5 + 1;
        if (uVar24 == uVar5) goto LAB_010b8de0;
      }
    }
    else {
      uVar27 = ((uint)(pbVar12 + 3) & 0xfffffffc) - (int)pbVar12;
      if (uVar27 == 0) {
        uVar27 = 0;
        do {
          uVar8 = *(uint *)(pbVar12 + uVar27);
          uVar5 = *(uint *)((int)(pbVar12 + uVar27) + 4) ^ 0x2c2c2c2c;
          if (((0x1010100 - (uVar8 ^ 0x2c2c2c2c) | uVar8) & 0x80808080 & (0x1010100 - uVar5 | uVar5)
              ) != 0x80808080) break;
          uVar27 = uVar27 + 8;
LAB_010b8d14:
        } while (uVar27 <= uVar24 - 8);
        if (uVar24 == uVar27) {
          bVar3 = true;
          uVar14 = uStack_e8;
          goto LAB_010b8df4;
        }
        iVar6 = 0;
        while (pbVar12[iVar6 + uVar27] != 0x2c) {
          iVar6 = iVar6 + 1;
          if ((uStack_e8 - uVar27) - uVar14 == iVar6) goto LAB_010b8de0;
        }
        uVar5 = iVar6 + uVar27;
      }
      else {
        uVar5 = 0;
        while (pbVar12[uVar5] != 0x2c) {
          uVar5 = uVar5 + 1;
          if (uVar27 == uVar5) goto LAB_010b8d14;
        }
      }
    }
    uVar10 = uVar5 + uVar14;
    uVar14 = uVar10 + 1;
  } while ((uStack_e8 <= uVar10) || (pbStack_ec[uVar10] != 0x2c));
  bVar3 = false;
  local_104 = uVar14;
LAB_010b8df4:
  uVar31 = FUN_010ceb84(pbStack_ec + uVar22,uVar10 - uVar22);
  FUN_0109ff54(&local_68,(int)uVar31,(int)((ulonglong)uVar31 >> 0x20),&local_a8,"");
  uVar24 = local_60;
  uVar10 = local_64;
  puVar4 = local_68;
  uVar27 = local_60 & 0xff;
  uVar22 = extraout_r12;
  if (uVar27 != 3) {
    uVar22 = param_1[10];
  }
  if (uVar27 != 3 && uVar22 != 0) {
    if (*param_1 != 2 || param_1[1] != 0) {
      uVar5 = (uVar27 != 2 ^ 0x84222325) * 0x5635bc91;
      if (uVar27 == 2) {
        uVar5 = ((uint)local_68 & 0xff ^ 0x9dce13f5) * -0x436f;
      }
      else {
        puVar13 = local_68;
        uVar8 = local_64;
        if ((local_60 & 1) == 0) {
          for (; uVar8 != 0; uVar8 = uVar8 - 1) {
            uVar5 = (uVar5 ^ (byte)""[(byte)*puVar13]) * 0x1b3;
            puVar13 = (uint *)((int)puVar13 + 1);
          }
        }
        else if (local_64 != 0) {
          do {
            uVar8 = uVar8 - 1;
            uVar5 = (uVar5 ^ (byte)*puVar13) * 0x1b3;
            puVar13 = (uint *)((int)puVar13 + 1);
          } while (uVar8 != 0);
        }
      }
      goto LAB_010b9214;
    }
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_48 = param_1[2];
    local_44 = param_1[3];
    local_40 = param_1[4];
    uStack_3c = param_1[5];
    local_5c = local_44 ^ 0x6c796765;
    local_60 = local_48 ^ 0x6e657261;
    uStack_54 = uStack_3c ^ 0x646f7261;
    local_58 = local_40 ^ 0x6e646f6d;
    uStack_4c = uStack_3c ^ 0x74656462;
    local_50 = local_40 ^ 0x79746573;
    local_64 = local_44 ^ 0x736f6d65;
    local_68 = (uint *)(local_48 ^ 0x70736575);
    local_28 = (uint)(uVar27 != 2);
    FUN_01028a58(&local_68,&local_28,4);
    if (uVar27 == 2) {
      local_28 = (uint)puVar4 & 0xff;
      puVar13 = &local_28;
      uVar5 = 4;
LAB_010b8ff8:
      FUN_01028a58(&local_68,puVar13,uVar5);
    }
    else {
      puVar13 = puVar4;
      uVar5 = uVar10;
      if ((uVar24 & 1) != 0) {
        goto LAB_010b8ff8;
      }
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        uVar8 = local_28 >> 8;
        local_28 = CONCAT31((int3)uVar8,""[(byte)*puVar13]);
        FUN_01028a58(&local_68,&local_28,1);
        puVar13 = (uint *)((int)puVar13 + 1);
      }
    }
    uVar17 = uStack_54 + local_64 + (uint)CARRY4(local_58,(uint)local_68);
    uVar21 = (uStack_54 << 0xd | local_58 >> 0x13) ^ uVar17;
    uVar18 = (local_58 << 0xd | uStack_54 >> 0x13) ^ (int)local_68 + local_58;
    uVar15 = local_34 | local_30 << 0x18;
    uVar16 = uVar15 ^ uStack_4c;
    uVar5 = local_38 ^ local_50;
    uVar26 = uVar5 + local_60;
    uVar23 = uVar16 + local_5c + (uint)CARRY4(uVar5,local_60);
    uVar8 = (uVar5 << 0x10 | uVar16 >> 0x10) ^ uVar26;
    uVar28 = uVar23 + uVar21 + (uint)CARRY4(uVar26,uVar18);
    uVar23 = (uVar16 << 0x10 | uVar5 >> 0x10) ^ uVar23;
    uVar29 = uVar28 ^ (uVar21 << 0x11 | uVar18 >> 0xf);
    pbVar12 = (byte *)((int)local_68 + local_58) + CARRY4(uVar8,uVar17) + uVar23;
    uVar16 = uVar26 + uVar18 ^ (uVar18 << 0x11 | uVar21 >> 0xf);
    uVar5 = uVar8 + uVar17 ^ local_38;
    uVar30 = uVar5 + uVar16;
    uVar25 = ((uint)pbVar12 ^ uVar15) + uVar29 + (uint)CARRY4(uVar5,uVar16);
    uVar19 = uVar25 ^ (uVar29 << 0xd | uVar16 >> 0x13);
    uVar15 = uVar30 ^ (uVar16 << 0xd | uVar29 >> 0x13);
    uVar29 = (uVar23 << 0x15 | uVar8 >> 0xb) ^ (uint)pbVar12;
    uVar28 = uVar28 ^ 0xff;
    uVar5 = (uVar8 << 0x15 | uVar23 >> 0xb) ^ uVar8 + uVar17;
    uVar21 = uVar5 + uVar28;
    uVar16 = uVar29 + uVar26 + uVar18 + (uint)CARRY4(uVar5,uVar28);
    uVar28 = uVar19 + uVar16 + (uint)CARRY4(uVar15,uVar21);
    uVar17 = uVar28 ^ (uVar19 << 0x11 | uVar15 >> 0xf);
    uVar8 = uVar15 + uVar21 ^ (uVar15 << 0x11 | uVar19 >> 0xf);
    uVar16 = (uVar29 << 0x10 | uVar5 >> 0x10) ^ uVar16;
    uVar18 = (uVar5 << 0x10 | uVar29 >> 0x10) ^ uVar21;
    uVar19 = uVar18 + uVar25;
    uVar23 = uVar16 + uVar30 + (uint)CARRY4(uVar18,uVar25);
    uVar25 = uVar17 + uVar23 + (uint)CARRY4(uVar8,uVar19);
    uVar5 = (uVar17 << 0xd | uVar8 >> 0x13) ^ uVar25;
    uVar17 = (uVar8 << 0xd | uVar17 >> 0x13) ^ uVar8 + uVar19;
    uVar23 = (uVar16 << 0x15 | uVar18 >> 0xb) ^ uVar23;
    uVar16 = (uVar18 << 0x15 | uVar16 >> 0xb) ^ uVar19;
    uVar18 = uVar16 + uVar28;
    uVar21 = uVar23 + uVar15 + uVar21 + (uint)CARRY4(uVar16,uVar28);
    uVar28 = (uVar23 << 0x10 | uVar16 >> 0x10) ^ uVar21;
    uVar15 = (uVar16 << 0x10 | uVar23 >> 0x10) ^ uVar18;
    uVar29 = uVar5 + uVar21 + (uint)CARRY4(uVar17,uVar18);
    uVar16 = uVar15 + uVar25;
    uVar21 = (uVar5 << 0x11 | uVar17 >> 0xf) ^ uVar29;
    uVar19 = uVar28 + uVar8 + uVar19 + (uint)CARRY4(uVar15,uVar25);
    uVar23 = (uVar15 << 0x15 | uVar28 >> 0xb) ^ uVar16;
    uVar5 = (uVar17 << 0x11 | uVar5 >> 0xf) ^ uVar17 + uVar18;
    uVar15 = (uVar28 << 0x15 | uVar15 >> 0xb) ^ uVar19;
    uVar17 = uVar15 + uVar17 + uVar18 + (uint)CARRY4(uVar23,uVar29);
    uVar8 = (uVar5 << 0xd | uVar21 >> 0x13) ^ uVar5 + uVar16;
    uVar5 = (uVar21 << 0xd | uVar5 >> 0x13) ^ uVar21 + uVar19 + (uint)CARRY4(uVar5,uVar16);
    uVar5 = ((uVar15 << 0x10 | uVar23 >> 0x10) ^ uVar17) >> 0xb ^ uVar5 >> 0xf ^
            uVar5 + uVar17 + (uint)CARRY4(uVar8,uVar23 + uVar29) ^ uVar8 + uVar23 + uVar29;
LAB_010b9214:
    uVar5 = uVar5 & 0x7fff;
    uVar1 = *(ushort *)(param_1 + 0xe);
    uVar15 = (uint)uVar1;
    iVar7 = param_1[6];
    uVar17 = param_1[7];
    iVar6 = param_1[9];
    uVar8 = uVar15 & uVar5;
    if (uVar27 != 2) {
      if ((uVar24 & 1) == 0) {
        uVar24 = 0;
LAB_010b93e8:
        do {
          uVar27 = uVar8;
          uVar8 = 0;
        } while (uVar17 <= uVar27);
        puVar9 = (ushort *)(iVar7 + uVar27 * 4);
        uVar8 = (uint)*puVar9;
        if ((uVar8 == 0xffff) || (uVar2 = puVar9[1], (uVar27 - (uVar2 & uVar1) & uVar15) < uVar24))
        goto LAB_010b8e54;
        if (uVar2 == uVar5) {
          if (uVar22 <= uVar8) goto LAB_010b9664;
          iVar20 = uVar8 * 0x34 + iVar6;
          if ((*(int *)(iVar20 + 0x20) != 0) && (*(uint *)(iVar20 + 0x28) == uVar10)) {
            if (uVar10 == 0) goto LAB_010b9534;
            uVar23 = 0;
            while (*(char *)(*(int *)(iVar20 + 0x24) + uVar23) ==
                   ""[*(byte *)((int)puVar4 + uVar23)]) {
              uVar23 = uVar23 + 1;
              if (uVar10 == uVar23) goto LAB_010b9534;
            }
            if (uVar10 <= uVar23) goto LAB_010b9534;
          }
        }
        uVar24 = uVar24 + 1;
        uVar8 = uVar27 + 1;
        goto LAB_010b93e8;
      }
      uVar24 = 0;
LAB_010b92dc:
      do {
        uVar27 = uVar8;
        uVar8 = 0;
      } while (uVar17 <= uVar27);
      puVar9 = (ushort *)(iVar7 + uVar27 * 4);
      uVar8 = (uint)*puVar9;
      if ((uVar8 == 0xffff) || (uVar2 = puVar9[1], (uVar27 - (uVar2 & uVar1) & uVar15) < uVar24))
      goto LAB_010b8e54;
      if (uVar2 == uVar5) {
        if (uVar22 <= uVar8) goto LAB_010b9664;
        iVar20 = uVar8 * 0x34 + iVar6;
        if (((*(int *)(iVar20 + 0x20) != 0) && (*(uint *)(iVar20 + 0x28) == uVar10)) &&
           (iVar20 = thunk_FUN_016dd50a(*(undefined4 *)(iVar20 + 0x24),puVar4,uVar10), iVar20 == 0))
        goto LAB_010b9534;
      }
      uVar24 = uVar24 + 1;
      uVar8 = uVar27 + 1;
      goto LAB_010b92dc;
    }
    uVar10 = 0;
LAB_010b9248:
    do {
      uVar27 = uVar8;
      uVar8 = 0;
    } while (uVar17 <= uVar27);
    puVar9 = (ushort *)(iVar7 + uVar27 * 4);
    uVar8 = (uint)*puVar9;
    if ((uVar8 == 0xffff) || (uVar2 = puVar9[1], (uVar27 - (uVar2 & uVar1) & uVar15) < uVar10))
    goto LAB_010b8e54;
    if (uVar2 == uVar5) {
      if (uVar22 <= uVar8) {
LAB_010b9664:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar8,uVar22,&DAT_018a6bf0);
      }
      iVar20 = uVar8 * 0x34 + iVar6;
      if ((*(int *)(iVar20 + 0x20) == 0) &&
         ((uint)*(byte *)(iVar20 + 0x24) == ((uint)puVar4 & 0xff))) goto LAB_010b9534;
    }
    uVar10 = uVar10 + 1;
    uVar8 = uVar27 + 1;
    goto LAB_010b9248;
  }
  goto LAB_010b8e54;
LAB_010b9534:
  if (uVar22 <= uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar8,uVar22,&DAT_018a63c4);
  }
  piVar11 = (int *)(iVar6 + uVar8 * 0x34);
  if (*piVar11 != 0) {
    uVar10 = piVar11[1];
    while (FUN_010b1bc4(&local_68,iVar6,uVar22,param_1 + 0xb,uVar10), uVar10 = local_5c,
          local_60 == 1) {
      (**(code **)(local_58 + 0x10))(&uStack_4c,uStack_54,local_50);
      iVar6 = param_1[9];
      uVar22 = param_1[10];
    }
    (**(code **)(local_58 + 0x10))(&uStack_4c,uStack_54,local_50);
  }
  FUN_014428b8(&local_68,param_1,uVar27,uVar8);
  local_c0 = local_5c;
  uStack_bc = local_58;
  uStack_b8 = uStack_54;
  uStack_b4 = local_50;
  local_b0 = uStack_4c;
  if (local_48 != 0) {
    (**(code **)(local_48 + 0x10))(&uStack_3c,local_44,local_40);
  }
  if ((char)local_b0 != '\x02') {
    (**(code **)(local_c0 + 0x10))(&uStack_b4,uStack_bc,uStack_b8);
  }
LAB_010b8e54:
  uVar22 = local_104;
  if (bVar3) {
    (**(code **)(local_d8 + 0x10))(&uStack_cc,local_d4,local_d0);
    return;
  }
  goto LAB_010b8c80;
}

