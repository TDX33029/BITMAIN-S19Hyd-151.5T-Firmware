// FUN_010290a0 @ 010290a0 size=1904 calls_out=4 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_010290a0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ushort *puVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
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
  
  FUN_0109ff54(&local_68,param_2,param_3,auStack_a8,"");
  uVar22 = local_60;
  uVar15 = local_64;
  puVar3 = local_68;
  uVar16 = local_60 & 0xff;
  if (uVar16 == 3) {
    return 0;
  }
  uVar4 = param_1[10];
  if (uVar4 == 0) {
    return 0;
  }
  if (*param_1 != 2 || param_1[1] != 0) {
    uVar5 = (uVar16 != 2 ^ 0x84222325) * 0x5635bc91;
    if (uVar16 == 2) {
      uVar5 = ((uint)local_68 & 0xff ^ 0x9dce13f5) * -0x436f;
    }
    else if ((local_60 & 1) == 0) {
      if (local_64 != 0) {
        uVar6 = local_64;
        puVar10 = local_68;
        do {
          uVar6 = uVar6 - 1;
          uVar5 = (uVar5 ^ (byte)""[(byte)*puVar10]) * 0x1b3;
          puVar10 = (uint *)((int)puVar10 + 1);
        } while (uVar6 != 0);
      }
    }
    else if (local_64 != 0) {
      uVar6 = local_64;
      puVar10 = local_68;
      do {
        uVar6 = uVar6 - 1;
        uVar5 = (uVar5 ^ (byte)*puVar10) * 0x1b3;
        puVar10 = (uint *)((int)puVar10 + 1);
      } while (uVar6 != 0);
    }
    goto LAB_010294c8;
  }
  local_48 = param_1[2];
  local_44 = param_1[3];
  local_40 = param_1[4];
  local_3c = param_1[5];
  local_4c = local_3c ^ 0x74656462;
  local_34 = 0;
  local_54 = local_3c ^ 0x646f7261;
  uStack_5c = local_44 ^ 0x6c796765;
  local_30 = 0;
  local_2c = 0;
  local_60 = local_48 ^ 0x6e657261;
  local_64 = local_44 ^ 0x736f6d65;
  local_68 = (uint *)(local_48 ^ 0x70736575);
  local_38 = 0;
  local_50 = local_40 ^ 0x79746573;
  local_58 = local_40 ^ 0x6e646f6d;
  local_28 = (uint)(uVar16 != 2);
  FUN_01028a58(&local_68,&local_28,4);
  if (uVar16 == 2) {
    local_28 = (uint)puVar3 & 0xff;
    puVar10 = &local_28;
    uVar5 = 4;
LAB_01029290:
    FUN_01028a58(&local_68,puVar10,uVar5);
  }
  else {
    if ((uVar22 & 1) != 0) {
      puVar10 = puVar3;
      uVar5 = uVar15;
      goto LAB_01029290;
    }
    if (uVar15 != 0) {
      uVar5 = uVar15;
      puVar10 = puVar3;
      do {
        local_28 = CONCAT31(local_28._1_3_,""[(byte)*puVar10]);
        FUN_01028a58(&local_68,&local_28,1);
        uVar5 = uVar5 - 1;
        puVar10 = (uint *)((int)puVar10 + 1);
      } while (uVar5 != 0);
    }
  }
  uVar28 = local_54 + local_64 + (uint)CARRY4(local_58,(uint)local_68);
  uVar26 = (local_54 << 0xd | local_58 >> 0x13) ^ uVar28;
  uVar14 = (local_58 << 0xd | local_54 >> 0x13) ^ (int)local_68 + local_58;
  uVar23 = local_34 | local_30 << 0x18;
  uVar11 = uVar23 ^ local_4c;
  uVar5 = local_38 ^ local_50;
  uVar17 = uVar5 + local_60;
  uVar18 = uVar11 + uStack_5c + (uint)CARRY4(uVar5,local_60);
  uVar6 = (uVar5 << 0x10 | uVar11 >> 0x10) ^ uVar17;
  uVar25 = uVar18 + uVar26 + (uint)CARRY4(uVar17,uVar14);
  uVar18 = (uVar11 << 0x10 | uVar5 >> 0x10) ^ uVar18;
  pbVar12 = (byte *)((int)local_68 + local_58) + CARRY4(uVar6,uVar28) + uVar18;
  uVar19 = uVar25 ^ (uVar26 << 0x11 | uVar14 >> 0xf);
  uVar26 = uVar17 + uVar14 ^ (uVar14 << 0x11 | uVar26 >> 0xf);
  uVar5 = uVar6 + uVar28 ^ local_38;
  uVar27 = uVar5 + uVar26;
  uVar29 = ((uint)pbVar12 ^ uVar23) + uVar19 + (uint)CARRY4(uVar5,uVar26);
  uVar20 = uVar29 ^ (uVar19 << 0xd | uVar26 >> 0x13);
  uVar11 = (uVar18 << 0x15 | uVar6 >> 0xb) ^ (uint)pbVar12;
  uVar25 = uVar25 ^ 0xff;
  uVar5 = (uVar6 << 0x15 | uVar18 >> 0xb) ^ uVar6 + uVar28;
  uVar23 = uVar5 + uVar25;
  uVar26 = uVar27 ^ (uVar26 << 0xd | uVar19 >> 0x13);
  uVar18 = uVar11 + uVar17 + uVar14 + (uint)CARRY4(uVar5,uVar25);
  uVar25 = uVar20 + uVar18 + (uint)CARRY4(uVar26,uVar23);
  uVar6 = (uVar5 << 0x10 | uVar11 >> 0x10) ^ uVar23;
  uVar14 = uVar25 ^ (uVar20 << 0x11 | uVar26 >> 0xf);
  uVar18 = (uVar11 << 0x10 | uVar5 >> 0x10) ^ uVar18;
  uVar19 = uVar6 + uVar29;
  uVar11 = uVar26 + uVar23 ^ (uVar26 << 0x11 | uVar20 >> 0xf);
  uVar17 = uVar18 + uVar27 + (uint)CARRY4(uVar6,uVar29);
  uVar28 = uVar14 + uVar17 + (uint)CARRY4(uVar11,uVar19);
  uVar5 = (uVar14 << 0xd | uVar11 >> 0x13) ^ uVar28;
  uVar14 = (uVar11 << 0xd | uVar14 >> 0x13) ^ uVar11 + uVar19;
  uVar17 = (uVar18 << 0x15 | uVar6 >> 0xb) ^ uVar17;
  uVar6 = (uVar6 << 0x15 | uVar18 >> 0xb) ^ uVar19;
  uVar18 = uVar6 + uVar25;
  uVar26 = uVar17 + uVar26 + uVar23 + (uint)CARRY4(uVar6,uVar25);
  uVar20 = (uVar17 << 0x10 | uVar6 >> 0x10) ^ uVar26;
  uVar6 = (uVar6 << 0x10 | uVar17 >> 0x10) ^ uVar18;
  uVar27 = uVar5 + uVar26 + (uint)CARRY4(uVar14,uVar18);
  uVar26 = uVar6 + uVar28;
  uVar25 = (uVar5 << 0x11 | uVar14 >> 0xf) ^ uVar27;
  uVar23 = uVar20 + uVar11 + uVar19 + (uint)CARRY4(uVar6,uVar28);
  uVar11 = (uVar6 << 0x15 | uVar20 >> 0xb) ^ uVar26;
  uVar5 = (uVar14 << 0x11 | uVar5 >> 0xf) ^ uVar14 + uVar18;
  uVar17 = (uVar20 << 0x15 | uVar6 >> 0xb) ^ uVar23;
  uVar14 = uVar17 + uVar14 + uVar18 + (uint)CARRY4(uVar11,uVar27);
  uVar6 = (uVar5 << 0xd | uVar25 >> 0x13) ^ uVar5 + uVar26;
  uVar5 = (uVar25 << 0xd | uVar5 >> 0x13) ^ uVar25 + uVar23 + (uint)CARRY4(uVar5,uVar26);
  uVar5 = ((uVar17 << 0x10 | uVar11 >> 0x10) ^ uVar14) >> 0xb ^ uVar5 >> 0xf ^
          uVar5 + uVar14 + (uint)CARRY4(uVar6,uVar11 + uVar27) ^ uVar6 + uVar11 + uVar27;
LAB_010294c8:
  uVar1 = *(ushort *)(param_1 + 0xe);
  uVar26 = (uint)uVar1;
  uVar5 = uVar5 & 0x7fff;
  iVar7 = param_1[9];
  iVar24 = param_1[6];
  uVar11 = param_1[7];
  uVar6 = uVar26 & uVar5;
  if (uVar16 != 2) {
    if ((uVar22 & 1) == 0) {
      uVar22 = 0;
      do {
        do {
          uVar16 = uVar6;
          uVar6 = 0;
        } while (uVar11 <= uVar16);
        puVar21 = (ushort *)(iVar24 + uVar16 * 4);
        uVar6 = (uint)*puVar21;
        if (uVar6 == 0xffff) {
          return 0;
        }
        uVar2 = puVar21[1];
        if ((uVar16 - (uVar2 & uVar1) & uVar26) < uVar22) {
          return 0;
        }
        if (uVar2 == uVar5) {
          if (uVar4 <= uVar6) goto LAB_01029800;
          iVar8 = uVar6 * 0x34 + iVar7;
          if ((*(int *)(iVar8 + 0x20) != 0) && (*(uint *)(iVar8 + 0x28) == uVar15)) {
            if (uVar15 == 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = 0;
              while (*(char *)(*(int *)(iVar8 + 0x24) + uVar6) == ""[*(byte *)((int)puVar3 + uVar6)]
                    ) {
                uVar6 = uVar6 + 1;
                if (uVar15 == uVar6) {
                  return 1;
                }
              }
            }
            if (uVar15 <= uVar6) {
              return 1;
            }
          }
        }
        uVar22 = uVar22 + 1;
        uVar6 = uVar16 + 1;
      } while( true );
    }
    uVar22 = 0;
    do {
      do {
        uVar16 = uVar6;
        uVar6 = 0;
      } while (uVar11 <= uVar16);
      puVar21 = (ushort *)(iVar24 + uVar16 * 4);
      uVar6 = (uint)*puVar21;
      if (uVar6 == 0xffff) {
        return 0;
      }
      uVar2 = puVar21[1];
      if ((uVar16 - (uVar2 & uVar1) & uVar26) < uVar22) {
        return 0;
      }
      if (uVar2 == uVar5) {
        if (uVar4 <= uVar6) goto LAB_01029800;
        iVar8 = uVar6 * 0x34 + iVar7;
        if (((*(int *)(iVar8 + 0x20) != 0) && (*(uint *)(iVar8 + 0x28) == uVar15)) &&
           (iVar8 = thunk_FUN_016dd50a(*(undefined4 *)(iVar8 + 0x24),puVar3,uVar15), iVar8 == 0)) {
          return 1;
        }
      }
      uVar22 = uVar22 + 1;
      uVar6 = uVar16 + 1;
    } while( true );
  }
  uVar15 = 0;
  do {
    do {
      uVar22 = uVar6;
      uVar6 = 0;
    } while (uVar11 <= uVar22);
    puVar21 = (ushort *)(iVar24 + uVar22 * 4);
    uVar6 = (uint)*puVar21;
    if ((uVar6 == 0xffff) || (uVar2 = puVar21[1], (uVar22 - (uVar2 & uVar1) & uVar26) < uVar15)) {
      return 0;
    }
    if (uVar2 == uVar5) {
      if (uVar4 <= uVar6) {
LAB_01029800:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar6,uVar4,&DAT_018a6bf0);
      }
      iVar8 = uVar6 * 0x34 + iVar7;
      piVar9 = (int *)(iVar8 + 0x20);
      iVar13 = *piVar9;
      if (iVar13 == 0) {
        piVar9 = (int *)(uint)*(byte *)(iVar8 + 0x24);
      }
      if (iVar13 == 0 && piVar9 == (int *)((uint)puVar3 & 0xff)) {
        return 1;
      }
    }
    uVar15 = uVar15 + 1;
    uVar6 = uVar22 + 1;
  } while( true );
}

