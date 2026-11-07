// FUN_01681fc0 @ 01681fc0 size=1200 calls_out=5 calls_in=10
// strings: 

void FUN_01681fc0(undefined4 *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  undefined4 local_2c;
  undefined1 local_25;
  
  local_3c = param_2[3];
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  local_4c = local_3c ^ 0x74656462;
  local_50 = uStack_40 ^ 0x79746573;
  local_54 = local_3c ^ 0x646f7261;
  local_58 = uStack_40 ^ 0x6e646f6d;
  local_5c = uStack_44 ^ 0x6c796765;
  local_60 = local_48 ^ 0x6e657261;
  local_64 = uStack_44 ^ 0x736f6d65;
  local_68 = local_48 ^ 0x70736575;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  FUN_010b4a1c(&local_68,*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
  local_25 = 0xff;
  FUN_010b4a1c(&local_68,&local_25,1);
  uVar14 = local_54 + local_64 + (uint)CARRY4(local_58,local_68);
  uVar4 = (local_58 << 0xd | local_54 >> 0x13) ^ local_58 + local_68;
  uVar6 = (local_54 << 0xd | local_58 >> 0x13) ^ uVar14;
  uVar17 = local_34 | local_30 << 0x18;
  uVar10 = uVar17 ^ local_4c;
  uVar1 = local_38 ^ local_50;
  uVar8 = uVar1 + local_60;
  uVar11 = uVar10 + local_5c + (uint)CARRY4(uVar1,local_60);
  uVar9 = uVar11 + uVar6 + (uint)CARRY4(uVar8,uVar4);
  uVar13 = uVar9 ^ (uVar6 << 0x11 | uVar4 >> 0xf);
  uVar2 = (uVar1 << 0x10 | uVar10 >> 0x10) ^ uVar8;
  uVar11 = (uVar10 << 0x10 | uVar1 >> 0x10) ^ uVar11;
  uVar10 = uVar11 + local_58 + local_68 + (uint)CARRY4(uVar2,uVar14);
  uVar1 = uVar8 + uVar4 ^ (uVar4 << 0x11 | uVar6 >> 0xf);
  uVar6 = uVar2 + uVar14 ^ local_38;
  uVar15 = uVar6 + uVar1;
  uVar12 = (uVar10 ^ uVar17) + uVar13 + (uint)CARRY4(uVar6,uVar1);
  uVar17 = uVar12 ^ (uVar13 << 0xd | uVar1 >> 0x13);
  uVar6 = uVar15 ^ (uVar1 << 0xd | uVar13 >> 0x13);
  uVar10 = (uVar11 << 0x15 | uVar2 >> 0xb) ^ uVar10;
  uVar9 = uVar9 ^ 0xff;
  uVar1 = (uVar2 << 0x15 | uVar11 >> 0xb) ^ uVar2 + uVar14;
  uVar11 = uVar1 + uVar9;
  uVar8 = uVar10 + uVar8 + uVar4 + (uint)CARRY4(uVar1,uVar9);
  uVar13 = uVar17 + uVar8 + (uint)CARRY4(uVar6,uVar11);
  uVar4 = uVar13 ^ (uVar17 << 0x11 | uVar6 >> 0xf);
  uVar2 = uVar6 + uVar11 ^ (uVar6 << 0x11 | uVar17 >> 0xf);
  uVar8 = (uVar10 << 0x10 | uVar1 >> 0x10) ^ uVar8;
  uVar9 = (uVar1 << 0x10 | uVar10 >> 0x10) ^ uVar11;
  uVar10 = uVar9 + uVar12;
  uVar12 = uVar8 + uVar15 + (uint)CARRY4(uVar9,uVar12);
  uVar14 = uVar4 + uVar12 + (uint)CARRY4(uVar2,uVar10);
  uVar1 = (uVar4 << 0xd | uVar2 >> 0x13) ^ uVar14;
  uVar4 = (uVar2 << 0xd | uVar4 >> 0x13) ^ uVar2 + uVar10;
  uVar12 = (uVar8 << 0x15 | uVar9 >> 0xb) ^ uVar12;
  uVar8 = (uVar9 << 0x15 | uVar8 >> 0xb) ^ uVar10;
  uVar9 = uVar8 + uVar13;
  uVar17 = uVar12 + uVar6 + uVar11 + (uint)CARRY4(uVar8,uVar13);
  uVar13 = uVar1 + uVar17 + (uint)CARRY4(uVar4,uVar9);
  uVar17 = (uVar12 << 0x10 | uVar8 >> 0x10) ^ uVar17;
  uVar6 = (uVar8 << 0x10 | uVar12 >> 0x10) ^ uVar9;
  uVar11 = uVar6 + uVar14;
  uVar12 = uVar17 + uVar2 + uVar10 + (uint)CARRY4(uVar6,uVar14);
  uVar8 = (uVar6 << 0x15 | uVar17 >> 0xb) ^ uVar11;
  uVar2 = (uVar1 << 0x11 | uVar4 >> 0xf) ^ uVar13;
  uVar10 = (uVar17 << 0x15 | uVar6 >> 0xb) ^ uVar12;
  uVar6 = uVar8 + uVar13;
  uVar1 = (uVar4 << 0x11 | uVar1 >> 0xf) ^ uVar4 + uVar9;
  uVar4 = uVar10 + uVar4 + uVar9 + (uint)CARRY4(uVar8,uVar13);
  uVar9 = (uVar2 << 0xd | uVar1 >> 0x13) ^ uVar2 + uVar12 + (uint)CARRY4(uVar1,uVar11);
  uVar1 = (uVar1 << 0xd | uVar2 >> 0x13) ^ uVar1 + uVar11;
  uVar6 = ((uVar6 ^ uVar10 >> 0x10) << 0x15 | ((uVar10 << 0x10 | uVar8 >> 0x10) ^ uVar4) >> 0xb) ^
          (uVar1 << 0x11 | uVar9 >> 0xf) ^ uVar9 + uVar4 + (uint)CARRY4(uVar1,uVar6) ^ uVar1 + uVar6
  ;
  uVar4 = param_2[8];
  uVar16 = *(undefined4 *)(param_3 + 4);
  iVar7 = *(int *)(param_3 + 8);
  uVar9 = param_2[6];
  uVar8 = param_2[7];
  uVar2 = param_2[5];
  iVar5 = 0;
  uVar1 = uVar6;
  do {
    uVar1 = uVar4 & uVar1;
    uVar10 = *(uint *)(uVar8 + uVar1);
    uVar11 = uVar10 ^ (uVar6 >> 0x19) * 0x1010101;
    for (uVar11 = ~uVar11 & 0x80808080 & uVar11 + 0xfefefeff; uVar11 != 0;
        uVar11 = uVar11 - 1 & uVar11) {
      uVar17 = uVar1 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                      (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) & uVar4;
      uVar12 = *(uint *)((uVar8 - 4) + uVar17 * -4);
      if (uVar9 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar12,uVar9,&DAT_018adbc8);
      }
      iVar3 = uVar2 + uVar12 * 0xc0;
      if ((iVar7 == *(int *)(iVar3 + 0x78)) &&
         (iVar3 = thunk_FUN_016dd50a(uVar16,*(undefined4 *)(iVar3 + 0x74)), iVar3 == 0)) {
        *param_1 = 0x80000000;
        param_1[1] = param_2 + 4;
        param_1[2] = uVar12;
        param_1[3] = uVar17;
        FUN_00919614(param_3);
        return;
      }
    }
    if ((uVar10 & 0x80808080 & uVar10 << 1) != 0) {
      FUN_016dd1aa(param_1,param_3,0x48);
      param_1[0x12] = param_2 + 4;
      param_1[0x13] = uVar6;
      return;
    }
    iVar5 = iVar5 + 4;
    uVar1 = iVar5 + uVar1;
  } while( true );
}

