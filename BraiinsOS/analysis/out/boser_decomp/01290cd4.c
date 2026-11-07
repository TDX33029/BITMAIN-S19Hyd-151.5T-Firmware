// FUN_01290cd4 @ 01290cd4 size=1408 calls_out=3 calls_in=1
// strings: /etc

void FUN_01290cd4(uint *param_1,int param_2,uint param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint local_b0;
  uint local_ac;
  uint local_98;
  uint local_94;
  undefined1 *local_90;
  uint local_40;
  undefined1 *local_3c;
  
  if (param_2 == 0) {
    FUN_019ad254(&local_98,"/etc",0xe);
    puVar4 = local_90;
    uVar22 = local_94;
    if (local_98 == 1) {
      FUN_019ac130(&local_98,0);
      *param_1 = local_98;
      param_1[1] = local_94;
      param_1[2] = (uint)local_90;
      FUN_0069263c(uVar22,puVar4);
    }
    else {
      if (local_3c < &DAT_3b9aca00) {
        local_94 = (int)local_40 >> 0x1f;
        local_90 = local_3c;
        local_98 = local_40;
      }
      else {
        FUN_019ac130(&local_98,0);
        FUN_0069263c(2,&DAT_01d27958);
      }
      *param_1 = local_98;
      param_1[1] = local_94;
      param_1[2] = (uint)local_90;
    }
  }
  else {
    uVar11 = param_3 & 7;
    uVar6 = param_3 & 0xfffffff8;
    local_b0 = 0x79746573;
    uVar7 = 0x646f7261;
    uVar13 = 0x6e646f6d;
    uVar20 = 0x6c796765;
    uVar18 = 0x6e657261;
    uVar9 = 0x736f6d65;
    uVar15 = 0x70736575;
    uVar22 = 0x74656462;
    local_ac = 0;
    if (uVar6 == 0) {
      uVar6 = 0;
    }
    else {
      uVar19 = 0;
      local_b0 = 0x79746573;
      do {
        uVar16 = uVar9 + uVar7 + (uint)CARRY4(uVar15,uVar13);
        uVar10 = uVar16 ^ (uVar7 << 0xd | uVar13 >> 0x13);
        uVar14 = uVar15 + uVar13 ^ (uVar13 << 0xd | uVar7 >> 0x13);
        puVar8 = (uint *)(param_2 + uVar19);
        uVar17 = *puVar8;
        uVar19 = uVar19 + 8;
        uVar12 = puVar8[1];
        local_b0 = uVar17 ^ local_b0;
        uVar5 = local_b0 + uVar18;
        uVar22 = uVar12 ^ uVar22;
        uVar21 = uVar22 + uVar20 + (uint)CARRY4(local_b0,uVar18);
        uVar20 = uVar5 + uVar14;
        uVar18 = uVar21 + uVar10 + (uint)CARRY4(uVar5,uVar14);
        uVar7 = uVar18 ^ (uVar10 << 0x11 | uVar14 >> 0xf);
        uVar21 = uVar21 ^ (uVar22 << 0x10 | local_b0 >> 0x10);
        uVar5 = uVar5 ^ (local_b0 << 0x10 | uVar22 >> 0x10);
        uVar9 = uVar21 + uVar15 + uVar13 + (uint)CARRY4(uVar5,uVar16);
        uVar22 = (uVar21 << 0x15 | uVar5 >> 0xb) ^ uVar9;
        uVar9 = uVar9 ^ uVar12;
        uVar13 = uVar20 ^ (uVar14 << 0x11 | uVar10 >> 0xf);
        local_b0 = (uVar5 << 0x15 | uVar21 >> 0xb) ^ uVar5 + uVar16;
        uVar15 = uVar5 + uVar16 ^ uVar17;
      } while (uVar19 < uVar6);
    }
    if (uVar11 < 4) {
      uVar19 = 0;
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)(param_2 + uVar6);
      uVar19 = 4;
    }
    if ((uVar19 | 1) < uVar11) {
      uVar10 = uVar19 * 8 - 0x20;
      uVar2 = *(ushort *)(param_2 + uVar6 + uVar19);
      uVar21 = (uint)uVar2 << (uVar19 << 3);
      if (-1 < (int)uVar10) {
        uVar21 = 0;
      }
      uVar5 = uVar21 | uVar5;
      iVar3 = uVar19 * -8;
      uVar19 = uVar19 | 2;
      local_ac = (uint)(uVar2 >> (iVar3 + 0x20U & 0xff));
      if (-1 < (int)uVar10) {
        local_ac = (uint)uVar2 << (uVar10 & 0xff);
      }
    }
    if (uVar19 < uVar11) {
      uVar11 = uVar19 * 8 - 0x20;
      bVar1 = *(byte *)(param_2 + uVar19 + uVar6);
      uVar6 = (uint)bVar1 << (uVar19 << 3);
      if (-1 < (int)uVar11) {
        uVar6 = 0;
      }
      uVar5 = uVar6 | uVar5;
      uVar6 = (uint)(bVar1 >> (uVar19 * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar11) {
        uVar6 = (uint)bVar1 << (uVar11 & 0xff);
      }
      local_ac = uVar6 | local_ac;
    }
    uVar19 = uVar9 + uVar7 + (uint)CARRY4(uVar15,uVar13);
    param_1[2] = (uint)&DAT_3b9aca00;
    uVar11 = uVar19 ^ (uVar7 << 0xd | uVar13 >> 0x13);
    uVar21 = uVar15 + uVar13 ^ (uVar13 << 0xd | uVar7 >> 0x13);
    local_ac = local_ac | param_3 << 0x18;
    uVar22 = local_ac ^ uVar22;
    local_b0 = uVar5 ^ local_b0;
    uVar6 = local_b0 + uVar18;
    uVar20 = uVar22 + uVar20 + (uint)CARRY4(local_b0,uVar18);
    uVar10 = uVar20 + uVar11 + (uint)CARRY4(uVar6,uVar21);
    uVar18 = (local_b0 << 0x10 | uVar22 >> 0x10) ^ uVar6;
    uVar20 = (uVar22 << 0x10 | local_b0 >> 0x10) ^ uVar20;
    uVar9 = uVar10 ^ (uVar11 << 0x11 | uVar21 >> 0xf);
    uVar7 = uVar20 + uVar15 + uVar13 + (uint)CARRY4(uVar18,uVar19);
    uVar11 = uVar6 + uVar21 ^ (uVar21 << 0x11 | uVar11 >> 0xf);
    uVar5 = uVar18 + uVar19 ^ uVar5;
    uVar12 = uVar5 + uVar11;
    uVar5 = (uVar7 ^ local_ac) + uVar9 + (uint)CARRY4(uVar5,uVar11);
    uVar22 = uVar5 ^ (uVar9 << 0xd | uVar11 >> 0x13);
    uVar7 = (uVar20 << 0x15 | uVar18 >> 0xb) ^ uVar7;
    uVar10 = uVar10 ^ 0xff;
    uVar15 = (uVar18 << 0x15 | uVar20 >> 0xb) ^ uVar18 + uVar19;
    uVar9 = uVar12 ^ (uVar11 << 0xd | uVar9 >> 0x13);
    uVar19 = uVar15 + uVar10;
    uVar18 = uVar7 + uVar6 + uVar21 + (uint)CARRY4(uVar15,uVar10);
    uVar21 = uVar22 + uVar18 + (uint)CARRY4(uVar9,uVar19);
    uVar13 = uVar21 ^ (uVar22 << 0x11 | uVar9 >> 0xf);
    uVar11 = uVar9 + uVar19 ^ (uVar9 << 0x11 | uVar22 >> 0xf);
    uVar18 = (uVar7 << 0x10 | uVar15 >> 0x10) ^ uVar18;
    uVar6 = (uVar15 << 0x10 | uVar7 >> 0x10) ^ uVar19;
    uVar20 = uVar6 + uVar5;
    uVar7 = uVar18 + uVar12 + (uint)CARRY4(uVar6,uVar5);
    uVar10 = uVar13 + uVar7 + (uint)CARRY4(uVar11,uVar20);
    uVar22 = (uVar13 << 0xd | uVar11 >> 0x13) ^ uVar10;
    uVar13 = (uVar11 << 0xd | uVar13 >> 0x13) ^ uVar11 + uVar20;
    uVar7 = (uVar18 << 0x15 | uVar6 >> 0xb) ^ uVar7;
    uVar6 = (uVar6 << 0x15 | uVar18 >> 0xb) ^ uVar20;
    uVar18 = uVar6 + uVar21;
    uVar9 = uVar7 + uVar9 + uVar19 + (uint)CARRY4(uVar6,uVar21);
    uVar5 = uVar22 + uVar9 + (uint)CARRY4(uVar13,uVar18);
    uVar9 = (uVar7 << 0x10 | uVar6 >> 0x10) ^ uVar9;
    uVar6 = (uVar6 << 0x10 | uVar7 >> 0x10) ^ uVar18;
    uVar15 = uVar6 + uVar10;
    uVar19 = uVar9 + uVar11 + uVar20 + (uint)CARRY4(uVar6,uVar10);
    uVar7 = (uVar6 << 0x15 | uVar9 >> 0xb) ^ uVar15;
    uVar11 = (uVar22 << 0x11 | uVar13 >> 0xf) ^ uVar5;
    uVar20 = (uVar9 << 0x15 | uVar6 >> 0xb) ^ uVar19;
    uVar9 = uVar7 + uVar5;
    uVar22 = (uVar13 << 0x11 | uVar22 >> 0xf) ^ uVar13 + uVar18;
    uVar13 = uVar20 + uVar13 + uVar18 + (uint)CARRY4(uVar7,uVar5);
    uVar6 = (uVar22 << 0xd | uVar11 >> 0x13) ^ uVar22 + uVar15;
    uVar11 = (uVar11 << 0xd | uVar22 >> 0x13) ^ uVar11 + uVar19 + (uint)CARRY4(uVar22,uVar15);
    uVar15 = uVar11 + uVar13 + (uint)CARRY4(uVar6,uVar9);
    uVar13 = (uVar20 << 0x10 | uVar7 >> 0x10) ^ uVar13;
    uVar22 = (uVar7 << 0x10 | uVar20 >> 0x10) ^ uVar9;
    param_1[1] = (uVar13 << 0x15 | uVar22 >> 0xb) ^ (uVar11 << 0x11 | uVar6 >> 0xf) ^ uVar6 + uVar9
                 ^ uVar15;
    *param_1 = (uVar22 << 0x15 | uVar13 >> 0xb) ^ (uVar6 << 0x11 | uVar11 >> 0xf) ^ uVar15 ^
               uVar6 + uVar9;
  }
  return;
}

