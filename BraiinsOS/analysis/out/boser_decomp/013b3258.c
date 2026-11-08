// FUN_013b3258 @ 013b3258 size=1020 calls_out=1 calls_in=11
// strings: 

ulonglong FUN_013b3258(int *param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint local_68;
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
  
  if (*param_1 == 2 && param_1[1] == 0) {
    local_48 = param_1[2];
    local_44 = param_1[3];
    local_40 = param_1[4];
    local_3c = param_1[5];
    local_34 = 0;
    uStack_5c = local_44 ^ 0x6c796765;
    local_30 = 0;
    local_60 = local_48 ^ 0x6e657261;
    local_2c = 0;
    local_38 = 0;
    local_4c = local_3c ^ 0x74656462;
    local_54 = local_3c ^ 0x646f7261;
    local_68 = local_48 ^ 0x70736575;
    local_64 = local_44 ^ 0x736f6d65;
    local_50 = local_40 ^ 0x79746573;
    iVar10 = *param_2;
    local_58 = local_40 ^ 0x6e646f6d;
    local_28 = (uint)(iVar10 != 0);
    FUN_013b2d68(&local_68,&local_28,4);
    if (iVar10 == 0) {
      local_28 = (uint)*(byte *)(param_2 + 1);
      puVar4 = &local_28;
      iVar10 = 4;
    }
    else {
      puVar4 = (uint *)param_2[1];
      iVar10 = param_2[2];
    }
    FUN_013b2d68(&local_68,puVar4,iVar10);
    uVar3 = local_54 + local_64 + (uint)CARRY4(local_58,local_68);
    uVar8 = (local_54 << 0xd | local_58 >> 0x13) ^ uVar3;
    uVar5 = (local_58 << 0xd | local_54 >> 0x13) ^ local_58 + local_68;
    local_34 = local_34 | local_30 << 0x18;
    local_4c = local_34 ^ local_4c;
    local_50 = local_38 ^ local_50;
    uVar13 = local_50 + local_60;
    uVar6 = local_4c + uStack_5c + (uint)CARRY4(local_50,local_60);
    uVar2 = (local_50 << 0x10 | local_4c >> 0x10) ^ uVar13;
    uVar14 = uVar6 + uVar8 + (uint)CARRY4(uVar13,uVar5);
    uVar6 = (local_4c << 0x10 | local_50 >> 0x10) ^ uVar6;
    uVar15 = uVar14 ^ (uVar8 << 0x11 | uVar5 >> 0xf);
    uVar11 = uVar6 + local_58 + local_68 + (uint)CARRY4(uVar2,uVar3);
    uVar8 = uVar13 + uVar5 ^ (uVar5 << 0x11 | uVar8 >> 0xf);
    local_38 = uVar2 + uVar3 ^ local_38;
    uVar16 = local_38 + uVar8;
    uVar12 = (uVar11 ^ local_34) + uVar15 + (uint)CARRY4(local_38,uVar8);
    uVar9 = uVar12 ^ (uVar15 << 0xd | uVar8 >> 0x13);
    uVar8 = uVar16 ^ (uVar8 << 0xd | uVar15 >> 0x13);
    uVar11 = (uVar6 << 0x15 | uVar2 >> 0xb) ^ uVar11;
    uVar14 = uVar14 ^ 0xff;
    uVar2 = (uVar2 << 0x15 | uVar6 >> 0xb) ^ uVar2 + uVar3;
    uVar15 = uVar2 + uVar14;
    uVar14 = uVar11 + uVar13 + uVar5 + (uint)CARRY4(uVar2,uVar14);
    uVar13 = uVar9 + uVar14 + (uint)CARRY4(uVar8,uVar15);
    uVar5 = uVar13 ^ (uVar9 << 0x11 | uVar8 >> 0xf);
    uVar3 = uVar8 + uVar15 ^ (uVar8 << 0x11 | uVar9 >> 0xf);
    uVar14 = (uVar11 << 0x10 | uVar2 >> 0x10) ^ uVar14;
    uVar6 = (uVar2 << 0x10 | uVar11 >> 0x10) ^ uVar15;
    uVar9 = uVar6 + uVar12;
    uVar11 = uVar14 + uVar16 + (uint)CARRY4(uVar6,uVar12);
    uVar16 = uVar5 + uVar11 + (uint)CARRY4(uVar3,uVar9);
    uVar2 = (uVar5 << 0xd | uVar3 >> 0x13) ^ uVar16;
    uVar5 = (uVar3 << 0xd | uVar5 >> 0x13) ^ uVar3 + uVar9;
    uVar11 = (uVar14 << 0x15 | uVar6 >> 0xb) ^ uVar11;
    uVar6 = (uVar6 << 0x15 | uVar14 >> 0xb) ^ uVar9;
    uVar14 = uVar6 + uVar13;
    uVar12 = uVar11 + uVar8 + uVar15 + (uint)CARRY4(uVar6,uVar13);
    uVar13 = uVar2 + uVar12 + (uint)CARRY4(uVar5,uVar14);
    uVar12 = (uVar11 << 0x10 | uVar6 >> 0x10) ^ uVar12;
    uVar8 = (uVar6 << 0x10 | uVar11 >> 0x10) ^ uVar14;
    uVar6 = uVar8 + uVar16;
    uVar15 = (uVar2 << 0x11 | uVar5 >> 0xf) ^ uVar13;
    uVar3 = uVar12 + uVar3 + uVar9 + (uint)CARRY4(uVar8,uVar16);
    uVar11 = (uVar8 << 0x15 | uVar12 >> 0xb) ^ uVar6;
    uVar8 = (uVar12 << 0x15 | uVar8 >> 0xb) ^ uVar3;
    uVar2 = (uVar5 << 0x11 | uVar2 >> 0xf) ^ uVar5 + uVar14;
    uVar5 = uVar8 + uVar5 + uVar14 + (uint)CARRY4(uVar11,uVar13);
    uVar3 = (uVar15 << 0xd | uVar2 >> 0x13) ^ uVar15 + uVar3 + (uint)CARRY4(uVar2,uVar6);
    uVar2 = (uVar2 << 0xd | uVar15 >> 0x13) ^ uVar2 + uVar6;
    uVar3 = ((uVar8 << 0x10 | uVar11 >> 0x10) ^ uVar5) >> 0xb ^ uVar3 >> 0xf ^
            uVar3 + uVar5 + (uint)CARRY4(uVar2,uVar11 + uVar13);
    uVar2 = uVar3 ^ uVar2 + uVar11 + uVar13;
  }
  else {
    uVar3 = 0xcbf29ce4;
    iVar10 = 0;
    local_68 = (uint)(*param_2 != 0);
    uVar2 = 0x84222325;
    do {
      pbVar7 = (byte *)((int)&local_68 + iVar10);
      iVar10 = iVar10 + 1;
      uVar8 = uVar2 ^ *pbVar7;
      lVar1 = (ulonglong)uVar8 * 0x1b3;
      uVar2 = (uint)lVar1;
      uVar3 = uVar3 * 0x1b3 + uVar8 * 0x100 + (int)((ulonglong)lVar1 >> 0x20);
    } while (iVar10 != 4);
    if (*param_2 == 0) {
      local_68 = (uint)*(byte *)(param_2 + 1);
      iVar10 = 0;
      do {
        pbVar7 = (byte *)((int)&local_68 + iVar10);
        iVar10 = iVar10 + 1;
        uVar8 = uVar2 ^ *pbVar7;
        lVar1 = (ulonglong)uVar8 * 0x1b3;
        uVar2 = (uint)lVar1;
        uVar3 = uVar3 * 0x1b3 + uVar8 * 0x100 + (int)((ulonglong)lVar1 >> 0x20);
      } while (iVar10 != 4);
    }
    else {
      iVar10 = param_2[2];
      if (iVar10 != 0) {
        pbVar7 = (byte *)param_2[1];
        do {
          iVar10 = iVar10 + -1;
          uVar8 = uVar2 ^ *pbVar7;
          lVar1 = (ulonglong)uVar8 * 0x1b3;
          uVar2 = (uint)lVar1;
          uVar3 = uVar3 * 0x1b3 + uVar8 * 0x100 + (int)((ulonglong)lVar1 >> 0x20);
          pbVar7 = pbVar7 + 1;
        } while (iVar10 != 0);
      }
    }
  }
  return CONCAT44(uVar3,uVar2) & 0xffffffff00007fff;
}

