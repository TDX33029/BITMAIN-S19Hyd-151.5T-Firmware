// FUN_01ac3bf0 @ 01ac3bf0 size=1736 calls_out=4 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01ac3bf0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  byte *pbVar1;
  ushort uVar2;
  ushort uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  ushort *puVar13;
  int iVar14;
  uint unaff_r4;
  uint uVar15;
  int iVar16;
  uint unaff_r6;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined1 auStack_a8 [64];
  uint *local_68;
  uint local_64;
  uint local_60;
  uint uStack_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  undefined4 local_2c;
  uint local_28;
  
  FUN_0140df4c(&local_68,param_2,param_3,auStack_a8,"");
  uVar6 = local_60;
  uVar5 = local_64;
  puVar4 = local_68;
  uVar26 = local_60 & 0xff;
  if (uVar26 == 3) {
    *param_1 = 2;
    return;
  }
  uVar7 = param_4[10];
  if (uVar7 == 0) {
    uVar9 = 0;
LAB_01ac4290:
    *param_1 = uVar9;
    param_1[1] = unaff_r6;
    param_1[2] = unaff_r4;
    return;
  }
  if (*param_4 != 2 || param_4[1] != 0) {
    uVar8 = 0x2325;
    local_68 = (uint *)(uint)(uVar26 != 2);
    iVar16 = 0;
    do {
      pbVar1 = (byte *)((int)&local_68 + iVar16);
      iVar16 = iVar16 + 1;
      uVar8 = (uVar8 ^ *pbVar1) * 0x1b3;
    } while (iVar16 != 4);
    if (uVar26 == 2) {
      local_68 = (uint *)((uint)puVar4 & 0xff);
      iVar16 = 0;
      do {
        pbVar1 = (byte *)((int)&local_68 + iVar16);
        iVar16 = iVar16 + 1;
        uVar8 = (uVar8 ^ *pbVar1) * 0x1b3;
      } while (iVar16 != 4);
    }
    else {
      uVar11 = uVar8 & 0xffff;
      if ((local_60 & 1) == 0) {
        if (local_64 == 0) goto LAB_01ac4114;
        puVar10 = puVar4;
        uVar11 = local_64;
        do {
          uVar11 = uVar11 - 1;
          uVar8 = (uVar8 ^ (byte)""[(byte)*puVar10]) * 0x1b3;
          puVar10 = (uint *)((int)puVar10 + 1);
        } while (uVar11 != 0);
      }
      else {
        if (local_64 == 0) goto LAB_01ac4114;
        puVar10 = puVar4;
        uVar11 = local_64;
        do {
          uVar11 = uVar11 - 1;
          uVar8 = (uVar8 ^ (byte)*puVar10) * 0x1b3;
          puVar10 = (uint *)((int)puVar10 + 1);
        } while (uVar11 != 0);
      }
    }
    uVar11 = uVar8 & 0xffff;
    goto LAB_01ac4114;
  }
  local_48 = param_4[2];
  local_44 = param_4[3];
  local_40 = param_4[4];
  local_3c = param_4[5];
  local_4c = local_3c ^ 0x74656462;
  local_34 = 0;
  local_54 = local_3c ^ 0x646f7261;
  uStack_5c = local_44 ^ 0x6c796765;
  local_30 = 0;
  local_2c = 0;
  local_38 = 0;
  local_60 = local_48 ^ 0x6e657261;
  local_50 = local_40 ^ 0x79746573;
  local_64 = local_44 ^ 0x736f6d65;
  local_58 = local_40 ^ 0x6e646f6d;
  local_28 = (uint)(uVar26 != 2);
  local_68 = (uint *)(local_48 ^ 0x70736575);
  FUN_00714518(&local_68,&local_28,4);
  if (uVar26 == 2) {
    local_28 = (uint)puVar4 & 0xff;
    puVar10 = &local_28;
    uVar8 = 4;
LAB_01ac3e24:
    FUN_00714518(&local_68,puVar10,uVar8);
  }
  else {
    if ((uVar6 & 1) != 0) {
      puVar10 = puVar4;
      uVar8 = uVar5;
      goto LAB_01ac3e24;
    }
    if (uVar5 != 0) {
      uVar8 = uVar5;
      puVar10 = puVar4;
      do {
        local_28 = CONCAT31(local_28._1_3_,""[(byte)*puVar10]);
        FUN_00714518(&local_68,&local_28,1);
        uVar8 = uVar8 - 1;
        puVar10 = (uint *)((int)puVar10 + 1);
      } while (uVar8 != 0);
    }
  }
  uVar24 = local_54 + local_64 + (uint)CARRY4(local_58,(uint)local_68);
  uVar12 = (local_54 << 0xd | local_58 >> 0x13) ^ uVar24;
  uVar18 = (local_58 << 0xd | local_54 >> 0x13) ^ (int)local_68 + local_58;
  uVar11 = local_34 | local_30 << 0x18;
  uVar15 = uVar11 ^ local_4c;
  uVar17 = local_38 ^ local_50;
  uVar23 = uVar17 + local_60;
  uVar8 = uVar15 + uStack_5c + (uint)CARRY4(uVar17,local_60);
  uVar22 = uVar8 + uVar12 + (uint)CARRY4(uVar23,uVar18);
  uVar8 = (uVar15 << 0x10 | uVar17 >> 0x10) ^ uVar8;
  uVar27 = uVar22 ^ (uVar12 << 0x11 | uVar18 >> 0xf);
  uVar15 = (uVar17 << 0x10 | uVar15 >> 0x10) ^ uVar23;
  uVar17 = (int)local_68 + local_58 + CARRY4(uVar15,uVar24) + uVar8;
  uVar19 = uVar23 + uVar18 ^ (uVar18 << 0x11 | uVar12 >> 0xf);
  uVar12 = uVar15 + uVar24 ^ local_38;
  uVar25 = uVar12 + uVar19;
  uVar20 = (uVar17 ^ uVar11) + uVar27 + (uint)CARRY4(uVar12,uVar19);
  uVar12 = uVar20 ^ (uVar27 << 0xd | uVar19 >> 0x13);
  uVar11 = uVar25 ^ (uVar19 << 0xd | uVar27 >> 0x13);
  uVar17 = (uVar8 << 0x15 | uVar15 >> 0xb) ^ uVar17;
  uVar22 = uVar22 ^ 0xff;
  uVar8 = (uVar15 << 0x15 | uVar8 >> 0xb) ^ uVar15 + uVar24;
  uVar19 = uVar8 + uVar22;
  uVar18 = uVar17 + uVar23 + uVar18 + (uint)CARRY4(uVar8,uVar22);
  uVar24 = uVar12 + uVar18 + (uint)CARRY4(uVar11,uVar19);
  uVar15 = uVar24 ^ (uVar12 << 0x11 | uVar11 >> 0xf);
  uVar12 = uVar11 + uVar19 ^ (uVar11 << 0x11 | uVar12 >> 0xf);
  uVar18 = (uVar17 << 0x10 | uVar8 >> 0x10) ^ uVar18;
  uVar22 = (uVar8 << 0x10 | uVar17 >> 0x10) ^ uVar19;
  uVar23 = uVar22 + uVar20;
  uVar17 = uVar18 + uVar25 + (uint)CARRY4(uVar22,uVar20);
  uVar25 = uVar15 + uVar17 + (uint)CARRY4(uVar12,uVar23);
  uVar8 = (uVar15 << 0xd | uVar12 >> 0x13) ^ uVar25;
  uVar15 = (uVar12 << 0xd | uVar15 >> 0x13) ^ uVar12 + uVar23;
  uVar17 = (uVar18 << 0x15 | uVar22 >> 0xb) ^ uVar17;
  uVar18 = (uVar22 << 0x15 | uVar18 >> 0xb) ^ uVar23;
  uVar22 = uVar18 + uVar24;
  uVar20 = uVar17 + uVar11 + uVar19 + (uint)CARRY4(uVar18,uVar24);
  uVar24 = uVar8 + uVar20 + (uint)CARRY4(uVar15,uVar22);
  uVar20 = (uVar17 << 0x10 | uVar18 >> 0x10) ^ uVar20;
  uVar11 = (uVar18 << 0x10 | uVar17 >> 0x10) ^ uVar22;
  uVar17 = uVar11 + uVar25;
  uVar19 = (uVar8 << 0x11 | uVar15 >> 0xf) ^ uVar24;
  uVar23 = uVar20 + uVar12 + uVar23 + (uint)CARRY4(uVar11,uVar25);
  uVar12 = (uVar11 << 0x15 | uVar20 >> 0xb) ^ uVar17;
  uVar18 = (uVar20 << 0x15 | uVar11 >> 0xb) ^ uVar23;
  uVar8 = (uVar15 << 0x11 | uVar8 >> 0xf) ^ uVar15 + uVar22;
  uVar15 = uVar18 + uVar15 + uVar22 + (uint)CARRY4(uVar12,uVar24);
  uVar11 = (uVar19 << 0xd | uVar8 >> 0x13) ^ uVar19 + uVar23 + (uint)CARRY4(uVar8,uVar17);
  uVar8 = (uVar8 << 0xd | uVar19 >> 0x13) ^ uVar8 + uVar17;
  uVar11 = (((uVar18 << 0x10 | uVar12 >> 0x10) ^ uVar15) >> 0xb ^ uVar11 >> 0xf ^
            uVar11 + uVar15 + (uint)CARRY4(uVar8,uVar12 + uVar24) ^ uVar8 + uVar12 + uVar24) &
           0xffff;
LAB_01ac4114:
  uVar2 = *(ushort *)(param_4 + 0xe);
  iVar21 = param_4[6];
  uVar12 = param_4[7];
  iVar16 = param_4[9];
  uVar15 = 0;
  uVar8 = (uint)uVar2 & uVar11 & 0x7fff;
LAB_01ac413c:
  do {
    unaff_r6 = uVar8;
    uVar8 = 0;
  } while (uVar12 <= unaff_r6);
  puVar13 = (ushort *)(iVar21 + unaff_r6 * 4);
  unaff_r4 = (uint)*puVar13;
  uVar9 = 0;
  if ((unaff_r4 == 0xffff) ||
     (uVar3 = puVar13[1], (unaff_r6 - (uVar3 & uVar2) & (uint)uVar2) < uVar15)) goto LAB_01ac4290;
  if ((uint)uVar3 == (uVar11 & 0x7fff)) {
    if (uVar7 <= unaff_r4) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(unaff_r4,uVar7,&DAT_01d2f55c);
    }
    iVar14 = unaff_r4 * 0x34 + iVar16;
    if (*(int *)(iVar14 + 0x20) == 0) {
      if ((uVar26 == 2) && ((uint)*(byte *)(iVar14 + 0x24) == ((uint)puVar4 & 0xff))) {
LAB_01ac42a0:
        uVar9 = 1;
        goto LAB_01ac4290;
      }
    }
    else if (uVar26 != 2) {
      if ((uVar6 & 1) == 0) {
        if (*(uint *)(iVar14 + 0x28) == uVar5) {
          uVar9 = 1;
          if (uVar5 == 0) goto LAB_01ac4290;
          uVar8 = 0;
          while (*(char *)(*(int *)(iVar14 + 0x24) + uVar8) == ""[*(byte *)((int)puVar4 + uVar8)]) {
            uVar8 = uVar8 + 1;
            if (uVar5 == uVar8) goto LAB_01ac4290;
          }
          if (uVar5 <= uVar8) goto LAB_01ac4290;
        }
      }
      else if ((*(uint *)(iVar14 + 0x28) == uVar5) &&
              (iVar14 = thunk_FUN_01bed842(*(undefined4 *)(iVar14 + 0x24),puVar4,uVar5), iVar14 == 0
              )) goto LAB_01ac42a0;
    }
  }
  uVar15 = uVar15 + 1;
  uVar8 = unaff_r6 + 1;
  goto LAB_01ac413c;
}

