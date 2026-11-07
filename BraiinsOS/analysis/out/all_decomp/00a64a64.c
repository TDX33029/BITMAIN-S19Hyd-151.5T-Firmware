// FUN_00a64a64 @ 00a64a64 size=992 calls_out=1 calls_in=0
// strings: 

uint FUN_00a64a64(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  byte *pbVar4;
  uint uVar5;
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
    local_34 = 0;
    local_48 = param_1[2];
    local_44 = param_1[3];
    local_40 = param_1[4];
    local_3c = param_1[5];
    local_30 = 0;
    uStack_5c = local_44 ^ 0x6c796765;
    local_2c = 0;
    local_60 = local_48 ^ 0x6e657261;
    local_38 = 0;
    local_4c = local_3c ^ 0x74656462;
    local_54 = local_3c ^ 0x646f7261;
    local_68 = local_48 ^ 0x70736575;
    local_64 = local_44 ^ 0x736f6d65;
    local_50 = local_40 ^ 0x79746573;
    iVar9 = *param_2;
    local_58 = local_40 ^ 0x6e646f6d;
    local_28 = (uint)(iVar9 != 0);
    FUN_00834c9c(&local_68,&local_28,4);
    if (iVar9 == 0) {
      local_28 = (uint)*(byte *)(param_2 + 1);
      puVar3 = &local_28;
      iVar9 = 4;
    }
    else {
      puVar3 = (uint *)param_2[1];
      iVar9 = param_2[2];
    }
    FUN_00834c9c(&local_68,puVar3,iVar9);
    uVar2 = local_54 + local_64 + (uint)CARRY4(local_58,local_68);
    uVar7 = (local_54 << 0xd | local_58 >> 0x13) ^ uVar2;
    uVar5 = (local_58 << 0xd | local_54 >> 0x13) ^ local_58 + local_68;
    local_34 = local_34 | local_30 << 0x18;
    local_4c = local_34 ^ local_4c;
    local_50 = local_38 ^ local_50;
    uVar12 = local_50 + local_60;
    uVar6 = local_4c + uStack_5c + (uint)CARRY4(local_50,local_60);
    uVar1 = (local_50 << 0x10 | local_4c >> 0x10) ^ uVar12;
    uVar13 = uVar6 + uVar7 + (uint)CARRY4(uVar12,uVar5);
    uVar6 = (local_4c << 0x10 | local_50 >> 0x10) ^ uVar6;
    uVar14 = uVar13 ^ (uVar7 << 0x11 | uVar5 >> 0xf);
    uVar10 = uVar6 + local_58 + local_68 + (uint)CARRY4(uVar1,uVar2);
    uVar7 = uVar12 + uVar5 ^ (uVar5 << 0x11 | uVar7 >> 0xf);
    local_38 = uVar1 + uVar2 ^ local_38;
    uVar15 = local_38 + uVar7;
    uVar11 = (uVar10 ^ local_34) + uVar14 + (uint)CARRY4(local_38,uVar7);
    uVar8 = uVar11 ^ (uVar14 << 0xd | uVar7 >> 0x13);
    uVar7 = uVar15 ^ (uVar7 << 0xd | uVar14 >> 0x13);
    uVar10 = (uVar6 << 0x15 | uVar1 >> 0xb) ^ uVar10;
    uVar13 = uVar13 ^ 0xff;
    uVar1 = (uVar1 << 0x15 | uVar6 >> 0xb) ^ uVar1 + uVar2;
    uVar14 = uVar1 + uVar13;
    uVar13 = uVar10 + uVar12 + uVar5 + (uint)CARRY4(uVar1,uVar13);
    uVar12 = uVar8 + uVar13 + (uint)CARRY4(uVar7,uVar14);
    uVar5 = uVar12 ^ (uVar8 << 0x11 | uVar7 >> 0xf);
    uVar2 = uVar7 + uVar14 ^ (uVar7 << 0x11 | uVar8 >> 0xf);
    uVar13 = (uVar10 << 0x10 | uVar1 >> 0x10) ^ uVar13;
    uVar6 = (uVar1 << 0x10 | uVar10 >> 0x10) ^ uVar14;
    uVar8 = uVar6 + uVar11;
    uVar10 = uVar13 + uVar15 + (uint)CARRY4(uVar6,uVar11);
    uVar15 = uVar5 + uVar10 + (uint)CARRY4(uVar2,uVar8);
    uVar1 = (uVar5 << 0xd | uVar2 >> 0x13) ^ uVar15;
    uVar5 = (uVar2 << 0xd | uVar5 >> 0x13) ^ uVar2 + uVar8;
    uVar10 = (uVar13 << 0x15 | uVar6 >> 0xb) ^ uVar10;
    uVar6 = (uVar6 << 0x15 | uVar13 >> 0xb) ^ uVar8;
    uVar13 = uVar6 + uVar12;
    uVar11 = uVar10 + uVar7 + uVar14 + (uint)CARRY4(uVar6,uVar12);
    uVar12 = uVar1 + uVar11 + (uint)CARRY4(uVar5,uVar13);
    uVar11 = (uVar10 << 0x10 | uVar6 >> 0x10) ^ uVar11;
    uVar7 = (uVar6 << 0x10 | uVar10 >> 0x10) ^ uVar13;
    uVar6 = uVar7 + uVar15;
    uVar14 = (uVar1 << 0x11 | uVar5 >> 0xf) ^ uVar12;
    uVar2 = uVar11 + uVar2 + uVar8 + (uint)CARRY4(uVar7,uVar15);
    uVar10 = (uVar7 << 0x15 | uVar11 >> 0xb) ^ uVar6;
    uVar7 = (uVar11 << 0x15 | uVar7 >> 0xb) ^ uVar2;
    uVar1 = (uVar5 << 0x11 | uVar1 >> 0xf) ^ uVar5 + uVar13;
    uVar5 = uVar7 + uVar5 + uVar13 + (uint)CARRY4(uVar10,uVar12);
    uVar2 = (uVar14 << 0xd | uVar1 >> 0x13) ^ uVar14 + uVar2 + (uint)CARRY4(uVar1,uVar6);
    uVar1 = (uVar1 << 0xd | uVar14 >> 0x13) ^ uVar1 + uVar6;
    return (((uVar7 << 0x10 | uVar10 >> 0x10) ^ uVar5) >> 0xb ^ uVar2 >> 0xf ^
            uVar2 + uVar5 + (uint)CARRY4(uVar1,uVar10 + uVar12) ^ uVar1 + uVar10 + uVar12) & 0x7fff;
  }
  if (*param_2 == 0) {
    return (*(byte *)(param_2 + 1) ^ 0x9dce13f5) * -0x436f & 0x7fff;
  }
  iVar9 = param_2[2];
  uVar1 = 0x47985764;
  if (iVar9 != 0) {
    uVar1 = 0x47985764;
    pbVar4 = (byte *)param_2[1];
    do {
      iVar9 = iVar9 + -1;
      uVar1 = (uVar1 ^ *pbVar4) * 0x1b3;
      pbVar4 = pbVar4 + 1;
    } while (iVar9 != 0);
  }
  return uVar1 & 0x7fff;
}

