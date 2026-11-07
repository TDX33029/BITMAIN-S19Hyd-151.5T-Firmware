// FUN_017bdd10 @ 017bdd10 size=996 calls_out=2 calls_in=9
// strings: 

undefined8 FUN_017bdd10(uint param_1,uint param_2,uint param_3,uint param_4,char *param_5)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
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
  uint uStack_3c;
  uint local_38;
  uint local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  
  local_4c = param_4 ^ 0x74656462;
  local_50 = param_3 ^ 0x79746573;
  local_54 = param_4 ^ 0x646f7261;
  local_58 = param_3 ^ 0x6e646f6d;
  local_5c = param_2 ^ 0x6c796765;
  local_60 = param_1 ^ 0x6e657261;
  local_64 = param_2 ^ 0x736f6d65;
  local_68 = param_1 ^ 0x70736575;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_48 = param_1;
  uStack_44 = param_2;
  uStack_40 = param_3;
  uStack_3c = param_4;
  if (*param_5 != '\0') {
    if (*param_5 == '\x01') {
      if (param_5[1] == '\0') {
        uVar1 = 1;
      }
      else {
        uVar1 = 2;
      }
      local_28 = CONCAT31(local_28._1_3_,uVar1);
      FUN_01726394(&local_68,&local_28,1);
    }
    else {
      pbVar13 = *(byte **)(*(int *)(param_5 + 4) + 4);
      iVar15 = *(int *)(*(int *)(param_5 + 4) + 8);
      local_28 = iVar15;
      FUN_01726394(&local_68,&local_28,4);
      if (iVar15 != 0) {
        do {
          bVar2 = *pbVar13;
          if (bVar2 - 0x41 < 0x1a) {
            bVar2 = bVar2 | 0x20;
          }
          local_28 = CONCAT31(local_28._1_3_,bVar2);
          FUN_01726394(&local_68,&local_28,1);
          iVar15 = iVar15 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iVar15 != 0);
      }
    }
  }
  iVar15 = *(int *)(param_5 + 0x10);
  pbVar13 = *(byte **)(param_5 + 0xc);
  local_28 = iVar15;
  FUN_013f8e80(&local_68,&local_28,4);
  if (iVar15 != 0) {
    do {
      bVar2 = *pbVar13;
      if (bVar2 - 0x41 < 0x1a) {
        bVar2 = bVar2 | 0x20;
      }
      local_28 = CONCAT31(local_28._1_3_,bVar2);
      FUN_013f8e80(&local_68,&local_28,1);
      iVar15 = iVar15 + -1;
      pbVar13 = pbVar13 + 1;
    } while (iVar15 != 0);
  }
  local_34 = local_34 | local_30 << 0x18;
  local_4c = local_34 ^ local_4c;
  local_50 = local_38 ^ local_50;
  uVar7 = local_50 + local_60;
  uVar8 = local_4c + local_5c + (uint)CARRY4(local_50,local_60);
  uVar3 = (local_4c << 0x10 | local_50 >> 0x10) ^ uVar8;
  uVar11 = (local_50 << 0x10 | local_4c >> 0x10) ^ uVar7;
  uVar6 = local_54 + local_64 + (uint)CARRY4(local_58,local_68);
  uVar5 = uVar3 + local_58 + local_68 + (uint)CARRY4(uVar11,uVar6);
  uVar10 = (uVar3 << 0x15 | uVar11 >> 0xb) ^ uVar5;
  uVar3 = (uVar11 << 0x15 | uVar3 >> 0xb) ^ uVar11 + uVar6;
  uVar12 = (local_54 << 0xd | local_58 >> 0x13) ^ uVar6;
  uVar4 = (local_58 << 0xd | local_54 >> 0x13) ^ local_58 + local_68;
  uVar8 = uVar8 + uVar12 + (uint)CARRY4(uVar7,uVar4);
  uVar9 = uVar8 ^ 0xff;
  uVar16 = uVar3 + uVar9;
  uVar14 = uVar10 + uVar7 + uVar4 + (uint)CARRY4(uVar3,uVar9);
  uVar9 = (uVar10 << 0x10 | uVar3 >> 0x10) ^ uVar14;
  uVar10 = (uVar3 << 0x10 | uVar10 >> 0x10) ^ uVar16;
  uVar8 = uVar8 ^ (uVar12 << 0x11 | uVar4 >> 0xf);
  uVar3 = uVar7 + uVar4 ^ (uVar4 << 0x11 | uVar12 >> 0xf);
  local_38 = uVar11 + uVar6 ^ local_38;
  uVar7 = local_38 + uVar3;
  uVar5 = (uVar5 ^ local_34) + uVar8 + (uint)CARRY4(local_38,uVar3);
  uVar17 = uVar10 + uVar5;
  uVar4 = uVar5 ^ (uVar8 << 0xd | uVar3 >> 0x13);
  uVar12 = uVar9 + uVar7 + (uint)CARRY4(uVar10,uVar5);
  uVar7 = uVar7 ^ (uVar3 << 0xd | uVar8 >> 0x13);
  uVar3 = (uVar9 << 0x15 | uVar10 >> 0xb) ^ uVar12;
  uVar8 = (uVar10 << 0x15 | uVar9 >> 0xb) ^ uVar17;
  uVar5 = uVar4 + uVar14 + (uint)CARRY4(uVar7,uVar16);
  uVar11 = uVar8 + uVar5;
  uVar6 = uVar5 ^ (uVar4 << 0x11 | uVar7 >> 0xf);
  uVar9 = uVar3 + uVar7 + uVar16 + (uint)CARRY4(uVar8,uVar5);
  uVar5 = uVar7 + uVar16 ^ (uVar7 << 0x11 | uVar4 >> 0xf);
  uVar7 = (uVar3 << 0x10 | uVar8 >> 0x10) ^ uVar9;
  uVar3 = (uVar8 << 0x10 | uVar3 >> 0x10) ^ uVar11;
  uVar8 = uVar6 + uVar12 + (uint)CARRY4(uVar5,uVar17);
  uVar14 = uVar3 + uVar8;
  uVar12 = uVar7 + uVar5 + uVar17 + (uint)CARRY4(uVar3,uVar8);
  uVar4 = (uVar3 << 0x15 | uVar7 >> 0xb) ^ uVar14;
  uVar7 = (uVar7 << 0x15 | uVar3 >> 0xb) ^ uVar12;
  uVar8 = (uVar6 << 0xd | uVar5 >> 0x13) ^ uVar8;
  uVar5 = (uVar5 << 0xd | uVar6 >> 0x13) ^ uVar5 + uVar17;
  uVar10 = uVar8 + uVar9 + (uint)CARRY4(uVar5,uVar11);
  uVar9 = (uVar8 << 0x11 | uVar5 >> 0xf) ^ uVar10;
  uVar3 = uVar4 + uVar10;
  uVar6 = (uVar5 << 0x11 | uVar8 >> 0xf) ^ uVar5 + uVar11;
  uVar8 = uVar7 + uVar5 + uVar11 + (uint)CARRY4(uVar4,uVar10);
  uVar10 = (uVar4 << 0x10 | uVar7 >> 0x10) ^ uVar3;
  uVar5 = (uVar6 << 0xd | uVar9 >> 0x13) ^ uVar6 + uVar14;
  uVar7 = (uVar7 << 0x10 | uVar4 >> 0x10) ^ uVar8;
  uVar4 = (uVar9 << 0xd | uVar6 >> 0x13) ^ uVar9 + uVar12 + (uint)CARRY4(uVar6,uVar14);
  uVar6 = uVar4 + uVar8 + (uint)CARRY4(uVar5,uVar3);
  return CONCAT44((uVar7 << 0x15 | uVar10 >> 0xb) ^ (uVar4 << 0x11 | uVar5 >> 0xf) ^ uVar5 + uVar3 ^
                  uVar6,(uVar10 << 0x15 | uVar7 >> 0xb) ^ (uVar5 << 0x11 | uVar4 >> 0xf) ^ uVar6 ^
                        uVar5 + uVar3);
}

