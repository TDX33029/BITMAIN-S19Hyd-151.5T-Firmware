// FUN_017cc064 @ 017cc064 size=1120 calls_out=3 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_017cc064(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
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
  int local_28;
  
  if ((char)param_1[2] != '\0') {
    return;
  }
  if (param_2 != (uint *)0x0) {
    uVar1 = param_2[2];
    uVar2 = param_2[3];
    uVar9 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    if ((uVar9 & 1) != 0) goto LAB_017cc48c;
  }
  uVar20 = thunk_FUN_01bee35a(&local_68,0x2c0);
  puVar5 = (uint *)((int)uVar20 + (int)((ulonglong)uVar20 >> 0x20));
  if ((char)puVar5[4] == '\0') {
    FUN_019ae6ac(&local_68);
    *puVar5 = local_68;
    puVar5[1] = local_64;
    puVar5[2] = local_60;
    puVar5[3] = local_5c;
    *(undefined1 *)(puVar5 + 4) = 1;
  }
  uVar9 = *puVar5;
  uVar3 = puVar5[1];
  uVar12 = puVar5[2];
  uVar10 = puVar5[3];
  *puVar5 = uVar9 + 1;
  puVar5[1] = uVar3 + (0xfffffffe < uVar9);
  iVar13 = 1;
  do {
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_68 = uVar9 ^ 0x70736575;
    local_64 = uVar3 ^ 0x736f6d65;
    local_60 = uVar9 ^ 0x6e657261;
    local_5c = uVar3 ^ 0x6c796765;
    local_28 = iVar13;
    local_58 = uVar12 ^ 0x6e646f6d;
    local_54 = uVar10 ^ 0x646f7261;
    local_50 = uVar12 ^ 0x79746573;
    local_4c = uVar10 ^ 0x74656462;
    local_48 = uVar9;
    local_44 = uVar3;
    local_40 = uVar12;
    local_3c = uVar10;
    FUN_01726394(&local_68,&local_28,4);
    local_34 = local_34 | local_30 << 0x18;
    local_4c = local_34 ^ local_4c;
    local_50 = local_38 ^ local_50;
    uVar7 = local_50 + local_60;
    uVar16 = local_4c + local_5c + (uint)CARRY4(local_50,local_60);
    uVar1 = (local_4c << 0x10 | local_50 >> 0x10) ^ uVar16;
    uVar14 = (local_50 << 0x10 | local_4c >> 0x10) ^ uVar7;
    uVar4 = local_54 + local_64 + (uint)CARRY4(local_58,local_68);
    uVar18 = uVar1 + local_58 + local_68 + (uint)CARRY4(uVar14,uVar4);
    uVar11 = (uVar1 << 0x15 | uVar14 >> 0xb) ^ uVar18;
    uVar6 = (uVar14 << 0x15 | uVar1 >> 0xb) ^ uVar14 + uVar4;
    uVar2 = (local_54 << 0xd | local_58 >> 0x13) ^ uVar4;
    uVar1 = (local_58 << 0xd | local_54 >> 0x13) ^ local_58 + local_68;
    uVar8 = uVar16 + uVar2 + (uint)CARRY4(uVar7,uVar1);
    uVar16 = uVar8 ^ 0xff;
    uVar15 = uVar6 + uVar16;
    uVar17 = uVar11 + uVar7 + uVar1 + (uint)CARRY4(uVar6,uVar16);
    uVar16 = (uVar11 << 0x10 | uVar6 >> 0x10) ^ uVar17;
    uVar6 = (uVar6 << 0x10 | uVar11 >> 0x10) ^ uVar15;
    uVar8 = uVar8 ^ (uVar2 << 0x11 | uVar1 >> 0xf);
    uVar2 = uVar7 + uVar1 ^ (uVar1 << 0x11 | uVar2 >> 0xf);
    local_38 = uVar14 + uVar4 ^ local_38;
    uVar4 = local_38 + uVar2;
    uVar7 = (uVar18 ^ local_34) + uVar8 + (uint)CARRY4(local_38,uVar2);
    uVar18 = uVar6 + uVar7;
    uVar19 = uVar16 + uVar4 + (uint)CARRY4(uVar6,uVar7);
    uVar1 = (uVar16 << 0x15 | uVar6 >> 0xb) ^ uVar19;
    uVar16 = (uVar6 << 0x15 | uVar16 >> 0xb) ^ uVar18;
    uVar7 = uVar7 ^ (uVar8 << 0xd | uVar2 >> 0x13);
    uVar4 = uVar4 ^ (uVar2 << 0xd | uVar8 >> 0x13);
    uVar2 = uVar7 + uVar17 + (uint)CARRY4(uVar4,uVar15);
    uVar11 = uVar16 + uVar2;
    uVar6 = uVar2 ^ (uVar7 << 0x11 | uVar4 >> 0xf);
    uVar14 = uVar1 + uVar4 + uVar15 + (uint)CARRY4(uVar16,uVar2);
    uVar7 = uVar4 + uVar15 ^ (uVar4 << 0x11 | uVar7 >> 0xf);
    uVar4 = (uVar1 << 0x10 | uVar16 >> 0x10) ^ uVar14;
    uVar1 = (uVar16 << 0x10 | uVar1 >> 0x10) ^ uVar11;
    uVar16 = uVar6 + uVar19 + (uint)CARRY4(uVar7,uVar18);
    uVar15 = uVar1 + uVar16;
    uVar17 = uVar4 + uVar7 + uVar18 + (uint)CARRY4(uVar1,uVar16);
    uVar2 = (uVar1 << 0x15 | uVar4 >> 0xb) ^ uVar15;
    uVar8 = (uVar4 << 0x15 | uVar1 >> 0xb) ^ uVar17;
    uVar16 = (uVar6 << 0xd | uVar7 >> 0x13) ^ uVar16;
    uVar4 = (uVar7 << 0xd | uVar6 >> 0x13) ^ uVar7 + uVar18;
    uVar7 = uVar16 + uVar14 + (uint)CARRY4(uVar4,uVar11);
    uVar6 = (uVar16 << 0x11 | uVar4 >> 0xf) ^ uVar7;
    uVar14 = uVar2 + uVar7;
    uVar1 = (uVar4 << 0x11 | uVar16 >> 0xf) ^ uVar4 + uVar11;
    uVar16 = uVar8 + uVar4 + uVar11 + (uint)CARRY4(uVar2,uVar7);
    uVar7 = (uVar6 << 0xd | uVar1 >> 0x13) ^ uVar6 + uVar17 + (uint)CARRY4(uVar1,uVar15);
    uVar4 = (uVar1 << 0xd | uVar6 >> 0x13) ^ uVar1 + uVar15;
    uVar6 = (uVar2 << 0x10 | uVar8 >> 0x10) ^ uVar14;
    uVar1 = (uVar8 << 0x10 | uVar2 >> 0x10) ^ uVar16;
    uVar16 = uVar7 + uVar16 + (uint)CARRY4(uVar4,uVar14);
    iVar13 = iVar13 + 1;
    uVar2 = (uVar1 << 0x15 | uVar6 >> 0xb) ^ (uVar7 << 0x11 | uVar4 >> 0xf) ^ uVar4 + uVar14 ^
            uVar16;
    uVar1 = (uVar6 << 0x15 | uVar1 >> 0xb) ^ (uVar4 << 0x11 | uVar7 >> 0xf) ^ uVar16 ^
            uVar4 + uVar14;
  } while (uVar1 == 0 && uVar2 == 0);
LAB_017cc48c:
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}

