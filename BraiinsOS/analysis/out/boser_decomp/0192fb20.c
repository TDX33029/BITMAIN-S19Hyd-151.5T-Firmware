// FUN_0192fb20 @ 0192fb20 size=1056 calls_out=2 calls_in=5
// strings: 

undefined8 FUN_0192fb20(uint param_1,uint param_2,uint param_3,uint param_4,byte *param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
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
  undefined1 *local_28;
  
  local_4c = param_4 ^ 0x74656462;
  local_50 = param_3 ^ 0x79746573;
  local_54 = param_4 ^ 0x646f7261;
  local_58 = param_3 ^ 0x6e646f6d;
  bVar1 = *param_5;
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
  local_28 = (undefined1 *)(uint)bVar1;
  FUN_0192ff40(&local_68,&local_28,4);
  if ((undefined1 *)(uint)bVar1 == (undefined1 *)0x1) {
    bVar1 = param_5[1];
    puVar7 = (undefined1 *)0x4;
    local_28 = (undefined1 *)(uint)bVar1;
    FUN_0192ff40(&local_68,&local_28,4);
    if ((undefined1 *)(uint)bVar1 == (undefined1 *)0x1) {
      puVar7 = (undefined1 *)0x10;
    }
    local_28 = puVar7;
    FUN_01905344(&local_68,&local_28,4);
    FUN_01905344(&local_68,param_5 + 2,puVar7);
  }
  else {
    iVar2 = *(int *)(param_5 + 0xc);
    if (iVar2 != 0) {
      pbVar12 = *(byte **)(param_5 + 8);
      pbVar13 = pbVar12;
      do {
        pbVar14 = pbVar13 + 1;
        local_28 = (undefined1 *)(uint)*pbVar13;
        if (0x7fffffff < (uint)(int)(char)*pbVar13) {
          if (local_28 < (undefined1 *)0xe0) {
            local_28 = (undefined1 *)(pbVar13[1] & 0x3f | ((uint)local_28 & 0x1f) << 6);
            pbVar14 = pbVar13 + 2;
          }
          else {
            uVar3 = pbVar13[2] & 0x3f | (pbVar13[1] & 0x3f) << 6;
            if (local_28 < (undefined1 *)0xf0) {
              local_28 = (undefined1 *)(uVar3 | ((uint)local_28 & 0x1f) << 0xc);
              pbVar14 = pbVar13 + 3;
            }
            else {
              local_28 = (undefined1 *)
                         (pbVar13[3] & 0x3f | uVar3 << 6 | ((uint)local_28 & 7) << 0x12);
              if (local_28 == &DAT_00110000) break;
              pbVar14 = pbVar13 + 4;
            }
          }
        }
        if (local_28 + -0x41 < (undefined1 *)0x1a) {
          local_28 = (undefined1 *)((uint)local_28 | 0x20);
        }
        FUN_01905344(&local_68,&local_28,4);
        pbVar13 = pbVar14;
      } while (pbVar14 != pbVar12 + iVar2);
    }
  }
  local_34 = local_34 | local_30 << 0x18;
  local_4c = local_34 ^ local_4c;
  local_50 = local_38 ^ local_50;
  uVar8 = local_50 + local_60;
  uVar9 = local_4c + local_5c + (uint)CARRY4(local_50,local_60);
  uVar3 = (local_4c << 0x10 | local_50 >> 0x10) ^ uVar9;
  uVar15 = (local_50 << 0x10 | local_4c >> 0x10) ^ uVar8;
  uVar6 = local_54 + local_64 + (uint)CARRY4(local_58,local_68);
  uVar5 = uVar3 + local_58 + local_68 + (uint)CARRY4(uVar15,uVar6);
  uVar11 = (uVar3 << 0x15 | uVar15 >> 0xb) ^ uVar5;
  uVar3 = (uVar15 << 0x15 | uVar3 >> 0xb) ^ uVar15 + uVar6;
  uVar16 = (local_54 << 0xd | local_58 >> 0x13) ^ uVar6;
  uVar4 = (local_58 << 0xd | local_54 >> 0x13) ^ local_58 + local_68;
  uVar9 = uVar9 + uVar16 + (uint)CARRY4(uVar8,uVar4);
  uVar10 = uVar9 ^ 0xff;
  uVar18 = uVar3 + uVar10;
  uVar17 = uVar11 + uVar8 + uVar4 + (uint)CARRY4(uVar3,uVar10);
  uVar10 = (uVar11 << 0x10 | uVar3 >> 0x10) ^ uVar17;
  uVar11 = (uVar3 << 0x10 | uVar11 >> 0x10) ^ uVar18;
  uVar9 = uVar9 ^ (uVar16 << 0x11 | uVar4 >> 0xf);
  uVar3 = uVar8 + uVar4 ^ (uVar4 << 0x11 | uVar16 >> 0xf);
  local_38 = uVar15 + uVar6 ^ local_38;
  uVar8 = local_38 + uVar3;
  uVar5 = (uVar5 ^ local_34) + uVar9 + (uint)CARRY4(local_38,uVar3);
  uVar19 = uVar11 + uVar5;
  uVar4 = uVar5 ^ (uVar9 << 0xd | uVar3 >> 0x13);
  uVar16 = uVar10 + uVar8 + (uint)CARRY4(uVar11,uVar5);
  uVar8 = uVar8 ^ (uVar3 << 0xd | uVar9 >> 0x13);
  uVar3 = (uVar10 << 0x15 | uVar11 >> 0xb) ^ uVar16;
  uVar9 = (uVar11 << 0x15 | uVar10 >> 0xb) ^ uVar19;
  uVar5 = uVar4 + uVar17 + (uint)CARRY4(uVar8,uVar18);
  uVar15 = uVar9 + uVar5;
  uVar6 = uVar5 ^ (uVar4 << 0x11 | uVar8 >> 0xf);
  uVar10 = uVar3 + uVar8 + uVar18 + (uint)CARRY4(uVar9,uVar5);
  uVar5 = uVar8 + uVar18 ^ (uVar8 << 0x11 | uVar4 >> 0xf);
  uVar8 = (uVar3 << 0x10 | uVar9 >> 0x10) ^ uVar10;
  uVar3 = (uVar9 << 0x10 | uVar3 >> 0x10) ^ uVar15;
  uVar9 = uVar6 + uVar16 + (uint)CARRY4(uVar5,uVar19);
  uVar17 = uVar3 + uVar9;
  uVar16 = uVar8 + uVar5 + uVar19 + (uint)CARRY4(uVar3,uVar9);
  uVar4 = (uVar3 << 0x15 | uVar8 >> 0xb) ^ uVar17;
  uVar8 = (uVar8 << 0x15 | uVar3 >> 0xb) ^ uVar16;
  uVar9 = (uVar6 << 0xd | uVar5 >> 0x13) ^ uVar9;
  uVar5 = (uVar5 << 0xd | uVar6 >> 0x13) ^ uVar5 + uVar19;
  uVar11 = uVar9 + uVar10 + (uint)CARRY4(uVar5,uVar15);
  uVar10 = (uVar9 << 0x11 | uVar5 >> 0xf) ^ uVar11;
  uVar3 = uVar4 + uVar11;
  uVar6 = (uVar5 << 0x11 | uVar9 >> 0xf) ^ uVar5 + uVar15;
  uVar9 = uVar8 + uVar5 + uVar15 + (uint)CARRY4(uVar4,uVar11);
  uVar11 = (uVar4 << 0x10 | uVar8 >> 0x10) ^ uVar3;
  uVar5 = (uVar6 << 0xd | uVar10 >> 0x13) ^ uVar6 + uVar17;
  uVar8 = (uVar8 << 0x10 | uVar4 >> 0x10) ^ uVar9;
  uVar4 = (uVar10 << 0xd | uVar6 >> 0x13) ^ uVar10 + uVar16 + (uint)CARRY4(uVar6,uVar17);
  uVar6 = uVar4 + uVar9 + (uint)CARRY4(uVar5,uVar3);
  return CONCAT44((uVar8 << 0x15 | uVar11 >> 0xb) ^ (uVar4 << 0x11 | uVar5 >> 0xf) ^ uVar5 + uVar3 ^
                  uVar6,(uVar11 << 0x15 | uVar8 >> 0xb) ^ (uVar5 << 0x11 | uVar4 >> 0xf) ^ uVar6 ^
                        uVar5 + uVar3);
}

