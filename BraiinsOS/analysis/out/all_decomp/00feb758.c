// FUN_00feb758 @ 00feb758 size=1688 calls_out=4 calls_in=2
// strings: 

void FUN_00feb758(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int local_a4;
  uint local_7c;
  int local_78;
  byte *local_74;
  uint local_70;
  int local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
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
  undefined1 local_25;
  
  iVar9 = *(int *)(param_2 + 0x10);
  uVar11 = *(uint *)(param_2 + 0x14);
  if (param_3 != 0) {
    if (param_3 < uVar11) {
      if (*(char *)(iVar9 + param_3) < -0x40) goto LAB_00feb790;
    }
    else if (uVar11 != param_3) {
LAB_00feb790:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(iVar9,uVar11,param_3,uVar11,&DAT_018819e8);
    }
  }
  FUN_00fe92e8(&local_7c,iVar9 + param_3,uVar11 - param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_7c == 2) {
    param_1[5] = param_3;
    *param_1 = 2;
    param_1[1] = 0xe;
    return;
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    local_48 = *(uint *)(param_2 + 0x28);
    local_44 = *(uint *)(param_2 + 0x2c);
    local_40 = *(uint *)(param_2 + 0x30);
    local_3c = *(uint *)(param_2 + 0x34);
    local_4c = local_3c ^ 0x74656462;
    local_54 = local_3c ^ 0x646f7261;
    local_50 = local_40 ^ 0x79746573;
    local_58 = local_40 ^ 0x6e646f6d;
    local_a4 = 0;
    local_5c = local_44 ^ 0x6c796765;
    local_64 = local_44 ^ 0x736f6d65;
    local_38 = 0;
    local_60 = local_48 ^ 0x6e657261;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_68 = local_48 ^ 0x70736575;
    FUN_010038e4(&local_68,local_74);
    local_25 = 0xff;
    FUN_010038e4(&local_68,&local_25,1);
    uVar15 = local_34 | local_30 << 0x18;
    uVar3 = uVar15 ^ local_4c;
    uVar11 = local_38 ^ local_50;
    uVar12 = (local_58 << 0xd | local_54 >> 0x13) ^ local_58 + local_68;
    uVar8 = local_54 + local_64 + (uint)CARRY4(local_58,local_68);
    uVar14 = uVar11 + local_60;
    uVar7 = uVar3 + local_5c + (uint)CARRY4(uVar11,local_60);
    uVar6 = (local_54 << 0xd | local_58 >> 0x13) ^ uVar8;
    uVar2 = (uVar11 << 0x10 | uVar3 >> 0x10) ^ uVar14;
    uVar17 = uVar7 + uVar6 + (uint)CARRY4(uVar14,uVar12);
    uVar7 = (uVar3 << 0x10 | uVar11 >> 0x10) ^ uVar7;
    uVar10 = uVar7 + local_58 + local_68 + (uint)CARRY4(uVar2,uVar8);
    uVar13 = uVar14 + uVar12 ^ (uVar12 << 0x11 | uVar6 >> 0xf);
    uVar11 = uVar2 + uVar8 ^ local_38;
    uVar6 = uVar17 ^ (uVar6 << 0x11 | uVar12 >> 0xf);
    uVar16 = uVar11 + uVar13;
    uVar15 = (uVar10 ^ uVar15) + uVar6 + (uint)CARRY4(uVar11,uVar13);
    uVar10 = (uVar7 << 0x15 | uVar2 >> 0xb) ^ uVar10;
    uVar3 = uVar15 ^ (uVar6 << 0xd | uVar13 >> 0x13);
    uVar17 = uVar17 ^ 0xff;
    uVar11 = (uVar2 << 0x15 | uVar7 >> 0xb) ^ uVar2 + uVar8;
    uVar6 = uVar16 ^ (uVar13 << 0xd | uVar6 >> 0x13);
    uVar13 = uVar11 + uVar17;
    uVar7 = uVar10 + uVar14 + uVar12 + (uint)CARRY4(uVar11,uVar17);
    uVar14 = uVar3 + uVar7 + (uint)CARRY4(uVar6,uVar13);
    uVar8 = uVar14 ^ (uVar3 << 0x11 | uVar6 >> 0xf);
    uVar2 = uVar6 + uVar13 ^ (uVar6 << 0x11 | uVar3 >> 0xf);
    uVar7 = (uVar10 << 0x10 | uVar11 >> 0x10) ^ uVar7;
    uVar12 = (uVar11 << 0x10 | uVar10 >> 0x10) ^ uVar13;
    uVar17 = uVar12 + uVar15;
    uVar10 = uVar7 + uVar16 + (uint)CARRY4(uVar12,uVar15);
    uVar16 = uVar8 + uVar10 + (uint)CARRY4(uVar2,uVar17);
    uVar11 = (uVar8 << 0xd | uVar2 >> 0x13) ^ uVar16;
    uVar3 = (uVar2 << 0xd | uVar8 >> 0x13) ^ uVar2 + uVar17;
    uVar10 = (uVar7 << 0x15 | uVar12 >> 0xb) ^ uVar10;
    uVar7 = (uVar12 << 0x15 | uVar7 >> 0xb) ^ uVar17;
    uVar12 = uVar7 + uVar14;
    uVar14 = uVar10 + uVar6 + uVar13 + (uint)CARRY4(uVar7,uVar14);
    uVar15 = uVar11 + uVar14 + (uint)CARRY4(uVar3,uVar12);
    uVar14 = (uVar10 << 0x10 | uVar7 >> 0x10) ^ uVar14;
    uVar6 = (uVar7 << 0x10 | uVar10 >> 0x10) ^ uVar12;
    uVar8 = uVar6 + uVar16;
    uVar17 = uVar14 + uVar2 + uVar17 + (uint)CARRY4(uVar6,uVar16);
    uVar7 = (uVar6 << 0x15 | uVar14 >> 0xb) ^ uVar8;
    uVar13 = (uVar11 << 0x11 | uVar3 >> 0xf) ^ uVar15;
    uVar10 = (uVar14 << 0x15 | uVar6 >> 0xb) ^ uVar17;
    uVar6 = uVar7 + uVar15;
    uVar11 = (uVar3 << 0x11 | uVar11 >> 0xf) ^ uVar3 + uVar12;
    uVar3 = uVar10 + uVar3 + uVar12 + (uint)CARRY4(uVar7,uVar15);
    uVar2 = (uVar11 << 0xd | uVar13 >> 0x13) ^ uVar11 + uVar8;
    uVar11 = (uVar13 << 0xd | uVar11 >> 0x13) ^ uVar13 + uVar17 + (uint)CARRY4(uVar11,uVar8);
    uVar2 = ((uVar6 ^ uVar10 >> 0x10) << 0x15 | ((uVar10 << 0x10 | uVar7 >> 0x10) ^ uVar3) >> 0xb) ^
            (uVar2 << 0x11 | uVar11 >> 0xf) ^ uVar11 + uVar3 + (uint)CARRY4(uVar2,uVar6) ^
            uVar2 + uVar6;
    uVar3 = *(uint *)(param_2 + 0x1c);
    iVar9 = *(int *)(param_2 + 0x18);
    uVar11 = uVar2 >> 0x19;
    while( true ) {
      uVar2 = uVar3 & uVar2;
      uVar7 = *(uint *)(iVar9 + uVar2);
      uVar6 = uVar7 ^ uVar11 * 0x1010101;
      uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff;
      while (uVar6 != 0) {
        uVar8 = uVar6 - 1 & uVar6;
        uVar10 = uVar2 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                        (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) & uVar3;
        iVar4 = iVar9 + -0x10 + uVar10 * -0x10;
        uVar6 = uVar8;
        if ((local_70 == *(uint *)(iVar4 + 8)) &&
           (iVar4 = thunk_FUN_016dd50a(local_74,*(undefined4 *)(iVar4 + 4)), iVar4 == 0)) {
          uVar11 = *(uint *)(iVar9 + uVar10 * -0x10 + -4);
          goto LAB_00febc80;
        }
      }
      if ((uVar7 & 0x80808080 & uVar7 << 1) != 0) break;
      local_a4 = local_a4 + 4;
      uVar2 = uVar2 + local_a4;
    }
  }
  if (local_70 != 0) {
    if (local_70 == 1) {
      bVar1 = *local_74;
      if ((bVar1 == 0x2b) || (bVar1 == 0x2d)) goto LAB_00febdc8;
    }
    else {
      bVar1 = *local_74;
    }
    uVar2 = local_70;
    pbVar5 = local_74;
    if (bVar1 == 0x2b) {
      pbVar5 = local_74 + 1;
      uVar2 = local_70 - 1;
    }
    if (uVar2 < 9) {
      uVar11 = 0;
      if (uVar2 != 0) {
        do {
          bVar1 = *pbVar5;
          if (9 < bVar1 - 0x30) goto LAB_00febd80;
          pbVar5 = pbVar5 + 1;
          uVar2 = uVar2 - 1;
          uVar11 = (bVar1 - 0x30) + uVar11 * 10;
        } while (uVar2 != 0);
      }
      goto LAB_00febc80;
    }
    uVar11 = 0;
    do {
      if (uVar2 == 0) goto LAB_00febc80;
      uVar3 = (uint)((ulonglong)uVar11 * 10);
      if ((int)((ulonglong)uVar11 * 10 >> 0x20) != 0) break;
      uVar6 = *pbVar5 - 0x30;
      uVar11 = uVar6 + uVar3;
      if (9 < uVar6) break;
      uVar2 = uVar2 - 1;
      pbVar5 = pbVar5 + 1;
    } while (!CARRY4(uVar6,uVar3));
  }
LAB_00febd80:
  if ((local_70 == 0) && ((local_7c & 1) != 0)) {
    uVar2 = local_78 - (local_78 >> 0x1f);
    local_7c = 0;
    uVar11 = *(uint *)(param_2 + 0x3c) + uVar2;
    if ((int)uVar2 < 0 == CARRY4(*(uint *)(param_2 + 0x3c),uVar2)) {
LAB_00febc80:
      *param_1 = 1;
      param_1[1] = uVar11;
      param_1[2] = local_7c;
      param_1[3] = local_78;
      param_1[4] = local_6c + param_3;
      param_1[5] = 0;
      return;
    }
  }
LAB_00febdc8:
  param_1[4] = local_6c + param_3;
  param_1[2] = local_7c;
  param_1[3] = local_78;
  param_1[5] = local_74;
  param_1[6] = local_70;
  *param_1 = 0;
  return;
}

