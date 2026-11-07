// FUN_01ab8ab4 @ 01ab8ab4 size=1508 calls_out=0 calls_in=2
// strings: 

void FUN_01ab8ab4(uint param_1,uint param_2,uint *param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  uint local_2c;
  undefined4 local_28;
  
  uVar16 = param_3[0xf];
  puVar18 = param_3 + 2;
  local_2c = param_1;
  if (uVar16 == 0) {
LAB_01ab8ce0:
    uVar8 = 0;
    uVar16 = 4;
    uVar11 = 4;
LAB_01ab8d08:
    uVar19 = 0;
    if ((uVar11 | 1) < uVar16) {
      uVar9 = uVar11 * 8 - 0x20;
      uVar2 = *(ushort *)((int)&local_2c + uVar11 + uVar8);
      uVar10 = (uint)uVar2 << (uVar11 << 3);
      if (-1 < (int)uVar9) {
        uVar10 = 0;
      }
      param_1 = uVar10 | param_1;
      iVar5 = uVar11 * -8;
      uVar11 = uVar11 | 2;
      uVar19 = (uint)(uVar2 >> (iVar5 + 0x20U & 0xff));
      if (-1 < (int)uVar9) {
        uVar19 = (uint)uVar2 << (uVar9 & 0xff);
      }
    }
    if (uVar16 <= uVar11) goto LAB_01ab8dbc;
    local_28 = param_2;
    bVar1 = *(byte *)((int)&local_2c + uVar11 + uVar8);
    param_3[0xe] = param_3[0xe] + 8;
    uVar10 = uVar11 * 8 - 0x20;
    uVar8 = (uint)bVar1 << (uVar11 << 3);
    if (-1 < (int)uVar10) {
      uVar8 = 0;
    }
    param_1 = uVar8 | param_1;
    uVar11 = (uint)(bVar1 >> (uVar11 * -8 + 0x20 & 0xff));
    if (-1 < (int)uVar10) {
      uVar11 = (uint)bVar1 << (uVar10 & 0xff);
    }
    uVar19 = uVar11 | uVar19;
LAB_01ab8dd0:
    uVar3 = 8 - uVar16;
    uVar8 = 0;
    uVar11 = 0;
    uVar9 = 0;
    uVar10 = uVar3;
    if (3 < uVar3) {
      uVar10 = 4;
      uVar8 = 4;
      uVar9 = param_2;
    }
    if ((uVar8 | 1) < uVar10) {
      puVar6 = (ushort *)&local_28;
      if (3 < uVar3) {
        puVar6 = (ushort *)((int)register0x00000054 + -0x24);
      }
      uVar2 = *puVar6;
      uVar11 = (uint)(uVar2 >> (uVar8 * -8 + 0x20 & 0xff));
      uVar4 = uVar8 * 8 - 0x20;
      if (-1 < (int)uVar4) {
        uVar11 = (uint)uVar2 << (uVar4 & 0xff);
      }
      uVar7 = (uint)uVar2 << (uVar8 << 3);
      uVar8 = uVar8 | 2;
      if (-1 < (int)uVar4) {
        uVar7 = 0;
      }
      uVar9 = uVar7 | uVar9;
    }
    if (uVar8 < uVar10) {
      uVar4 = uVar8 * 8 - 0x20;
      bVar1 = *(byte *)((int)&local_28 + uVar8);
      uVar10 = (uint)bVar1 << (uVar8 << 3);
      if (-1 < (int)uVar4) {
        uVar10 = 0;
      }
      uVar9 = uVar10 | uVar9;
      uVar8 = (uint)(bVar1 >> (uVar8 * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar4) {
        uVar8 = (uint)bVar1 << (uVar4 & 0xff);
      }
      uVar11 = uVar8 | uVar11;
    }
    iVar5 = (uVar16 & 7) * 8;
    uVar10 = iVar5 - 0x20;
    uVar8 = uVar9 << iVar5;
    if (-1 < (int)uVar10) {
      uVar8 = 0;
    }
    param_1 = param_1 | uVar8;
    param_3[0xc] = param_1;
    uVar11 = uVar9 >> ((uVar16 & 7) * -8 + 0x20 & 0xff) | uVar11 << iVar5;
    if (-1 < (int)uVar10) {
      uVar11 = uVar9 << (uVar10 & 0xff);
    }
    uVar19 = uVar19 | uVar11;
    param_3[0xd] = uVar19;
    if (4 < uVar3) {
      uVar16 = uVar16 + 4;
      goto LAB_01ab908c;
    }
    uVar8 = param_3[5];
    uVar10 = param_3[4];
    uVar11 = uVar10 + *param_3;
    uVar17 = uVar8 + param_3[1] + (uint)CARRY4(uVar10,*param_3);
    uVar7 = (uVar10 << 0xd | uVar8 >> 0x13) ^ uVar11;
    uVar10 = (uVar8 << 0xd | uVar10 >> 0x13) ^ uVar17;
    uVar15 = param_3[6] ^ param_1;
    uVar9 = *puVar18 + uVar15;
    uVar4 = param_3[7] ^ uVar19;
    uVar8 = param_3[3] + uVar4 + (uint)CARRY4(*puVar18,uVar15);
    param_3[3] = uVar9 + uVar7;
    param_3[4] = uVar9 + uVar7 ^ (uVar7 << 0x11 | uVar10 >> 0xf);
    uVar12 = uVar8 + uVar10 + (uint)CARRY4(uVar9,uVar7);
    *puVar18 = uVar12;
    param_3[5] = uVar12 ^ (uVar10 << 0x11 | uVar7 >> 0xf);
    uVar9 = uVar9 ^ (uVar15 << 0x10 | uVar4 >> 0x10);
    uVar8 = uVar8 ^ (uVar4 << 0x10 | uVar15 >> 0x10);
    param_3[6] = (uVar9 << 0x15 | uVar8 >> 0xb) ^ uVar9 + uVar17;
    uVar11 = uVar8 + uVar11 + (uint)CARRY4(uVar9,uVar17);
    param_3[7] = (uVar8 << 0x15 | uVar9 >> 0xb) ^ uVar11;
    *param_3 = uVar9 + uVar17 ^ param_1;
    param_3[1] = uVar11 ^ uVar19;
    if (uVar16 == 8) goto LAB_01ab8fcc;
    uVar16 = uVar16 - 4;
    uVar11 = 0;
    param_2 = 0;
  }
  else {
    uVar8 = 8 - uVar16;
    uVar10 = 0;
    uVar11 = uVar8;
    if (3 < uVar8) {
      uVar11 = 4;
      uVar10 = 4;
    }
    uVar19 = 0;
    uVar9 = 0;
    if (3 < uVar8) {
      uVar9 = param_1;
    }
    if ((uVar10 | 1) < uVar11) {
      puVar13 = &local_2c;
      if (3 < uVar8) {
        puVar13 = &local_28;
      }
      uVar2 = (ushort)*puVar13;
      uVar3 = uVar10 * 8 - 0x20;
      uVar19 = (uint)(uVar2 >> (uVar10 * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar3) {
        uVar19 = (uint)uVar2 << (uVar3 & 0xff);
      }
      uVar4 = (uint)uVar2 << (uVar10 << 3);
      uVar10 = uVar10 | 2;
      if (-1 < (int)uVar3) {
        uVar4 = 0;
      }
      uVar9 = uVar4 | uVar9;
    }
    if (uVar10 < uVar11) {
      bVar1 = *(byte *)((int)&local_2c + uVar10);
      uVar3 = uVar10 * 8 - 0x20;
      uVar11 = (uint)bVar1 << (uVar10 << 3);
      if (-1 < (int)uVar3) {
        uVar11 = 0;
      }
      uVar9 = uVar11 | uVar9;
      uVar11 = (uint)(bVar1 >> (uVar10 * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar3) {
        uVar11 = (uint)bVar1 << (uVar3 & 0xff);
      }
      uVar19 = uVar11 | uVar19;
    }
    iVar5 = (uVar16 & 7) * 8;
    uVar10 = iVar5 - 0x20;
    uVar11 = uVar9 << iVar5;
    if (-1 < (int)uVar10) {
      uVar11 = 0;
    }
    uVar11 = param_3[0xc] | uVar11;
    uVar19 = uVar9 >> ((uVar16 & 7) * -8 + 0x20 & 0xff) | uVar19 << iVar5;
    if (-1 < (int)uVar10) {
      uVar19 = uVar9 << (uVar10 & 0xff);
    }
    uVar19 = param_3[0xd] | uVar19;
    if (uVar8 < 5) {
      uVar9 = param_3[4];
      uVar3 = param_3[5];
      uVar10 = uVar9 + *param_3;
      uVar14 = uVar3 + param_3[1] + (uint)CARRY4(uVar9,*param_3);
      uVar17 = (uVar9 << 0xd | uVar3 >> 0x13) ^ uVar10;
      uVar9 = (uVar3 << 0xd | uVar9 >> 0x13) ^ uVar14;
      uVar15 = param_3[6] ^ uVar11;
      uVar4 = param_3[7] ^ uVar19;
      uVar3 = *puVar18 + uVar15;
      uVar7 = param_3[3] + uVar4 + (uint)CARRY4(*puVar18,uVar15);
      param_3[3] = uVar3 + uVar17;
      param_3[4] = uVar3 + uVar17 ^ (uVar17 << 0x11 | uVar9 >> 0xf);
      uVar12 = uVar7 + uVar9 + (uint)CARRY4(uVar3,uVar17);
      param_3[5] = uVar12 ^ (uVar9 << 0x11 | uVar17 >> 0xf);
      *puVar18 = uVar12;
      uVar3 = uVar3 ^ (uVar15 << 0x10 | uVar4 >> 0x10);
      uVar7 = uVar7 ^ (uVar4 << 0x10 | uVar15 >> 0x10);
      *param_3 = uVar3 + uVar14 ^ uVar11;
      param_3[6] = (uVar3 << 0x15 | uVar7 >> 0xb) ^ uVar3 + uVar14;
      uVar11 = uVar7 + uVar10 + (uint)CARRY4(uVar3,uVar14);
      param_3[7] = (uVar7 << 0x15 | uVar3 >> 0xb) ^ uVar11;
      param_3[1] = uVar11 ^ uVar19;
      if (uVar16 == 8) goto LAB_01ab8ce0;
      uVar16 = uVar16 - 4;
      uVar11 = 0;
      param_1 = 0;
      goto LAB_01ab8d08;
    }
    uVar16 = uVar16 + 4;
    param_1 = uVar11;
LAB_01ab8dbc:
    param_3[0xe] = param_3[0xe] + 8;
    local_28 = param_2;
    if (uVar16 != 0) goto LAB_01ab8dd0;
LAB_01ab8fcc:
    uVar3 = 0;
    uVar16 = 4;
    uVar11 = 4;
  }
  uVar8 = 0;
  if ((uVar11 | 1) < uVar16) {
    uVar10 = uVar11 * 8 - 0x20;
    uVar2 = *(ushort *)((int)&local_28 + uVar11 + uVar3);
    uVar8 = (uint)uVar2 << (uVar11 << 3);
    if (-1 < (int)uVar10) {
      uVar8 = 0;
    }
    param_2 = uVar8 | param_2;
    iVar5 = uVar11 * -8;
    uVar11 = uVar11 | 2;
    uVar8 = (uint)(uVar2 >> (iVar5 + 0x20U & 0xff));
    if (-1 < (int)uVar10) {
      uVar8 = (uint)uVar2 << (uVar10 & 0xff);
    }
  }
  if (uVar11 < uVar16) {
    uVar19 = uVar11 * 8 - 0x20;
    bVar1 = *(byte *)((int)&local_28 + uVar11 + uVar3);
    uVar10 = (uint)bVar1 << (uVar11 << 3);
    if (-1 < (int)uVar19) {
      uVar10 = 0;
    }
    param_2 = uVar10 | param_2;
    uVar11 = (uint)(bVar1 >> (uVar11 * -8 + 0x20 & 0xff));
    if (-1 < (int)uVar19) {
      uVar11 = (uint)bVar1 << (uVar19 & 0xff);
    }
    uVar8 = uVar11 | uVar8;
  }
  param_3[0xc] = param_2;
  param_3[0xd] = uVar8;
LAB_01ab908c:
  param_3[0xf] = uVar16;
  return;
}

