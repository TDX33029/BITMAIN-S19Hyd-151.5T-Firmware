// FUN_01005868 @ 01005868 size=980 calls_out=5 calls_in=2
// strings: 

void FUN_01005868(undefined4 *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  uint local_78;
  int local_74;
  uint local_70;
  int local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int iStack_30;
  
  local_5c = 0x74656462;
  local_60 = 0x79746573;
  local_64 = 0x646f7261;
  local_68 = 0x6e646f6d;
  local_6c = 0x6c796765;
  local_70 = 0x6e657261;
  local_74 = 0x736f6d65;
  local_78 = 0x70736575;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  FUN_015f3b0c(&local_38,1);
  FUN_01005c40(&local_78,&local_38,8);
  local_38 = iStack_30;
  uVar3 = FUN_01005c40(&local_78,&local_38,4);
  uVar18 = thunk_FUN_016de0ee(uVar3,0x248);
  uVar4 = *(uint *)((int)uVar18 + (int)((ulonglong)uVar18 >> 0x20));
  if (uVar4 < 3) {
    piVar10 = (int *)FUN_015f7ed0();
  }
  else {
    piVar10 = (int *)(uVar4 - 8);
    do {
      iVar5 = *piVar10;
      bVar2 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar2);
    *piVar10 = iVar5 + 1;
    if (iVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1005c38);
      (*pcVar1)();
    }
  }
  local_38 = piVar10[2];
  local_34 = piVar10[3];
  FUN_01005c40(&local_78,&local_38,8);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar10;
    bVar2 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar2);
  *piVar10 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015e92c0(piVar10);
  }
  uVar16 = local_64 + local_74 + (uint)CARRY4(local_68,local_78);
  uVar11 = (local_64 << 0xd | local_68 >> 0x13) ^ uVar16;
  uVar8 = (local_68 << 0xd | local_64 >> 0x13) ^ local_68 + local_78;
  param_1[1] = 0;
  local_44 = local_44 | local_40 << 0x18;
  *param_1 = 1;
  local_60 = local_48 ^ local_60;
  local_5c = local_44 ^ local_5c;
  uVar13 = local_60 + local_70;
  uVar4 = local_5c + local_6c + (uint)CARRY4(local_60,local_70);
  uVar14 = uVar4 + uVar11 + (uint)CARRY4(uVar13,uVar8);
  uVar4 = (local_5c << 0x10 | local_60 >> 0x10) ^ uVar4;
  uVar7 = (local_60 << 0x10 | local_5c >> 0x10) ^ uVar13;
  uVar15 = uVar14 ^ (uVar11 << 0x11 | uVar8 >> 0xf);
  uVar6 = uVar4 + local_68 + local_78 + (uint)CARRY4(uVar7,uVar16);
  uVar11 = uVar13 + uVar8 ^ (uVar8 << 0x11 | uVar11 >> 0xf);
  local_48 = uVar7 + uVar16 ^ local_48;
  uVar17 = local_48 + uVar11;
  uVar12 = (uVar6 ^ local_44) + uVar15 + (uint)CARRY4(local_48,uVar11);
  uVar9 = uVar12 ^ (uVar15 << 0xd | uVar11 >> 0x13);
  uVar6 = (uVar4 << 0x15 | uVar7 >> 0xb) ^ uVar6;
  uVar14 = uVar14 ^ 0xff;
  uVar4 = (uVar7 << 0x15 | uVar4 >> 0xb) ^ uVar7 + uVar16;
  uVar7 = uVar4 + uVar14;
  uVar11 = uVar17 ^ (uVar11 << 0xd | uVar15 >> 0x13);
  uVar8 = uVar6 + uVar13 + uVar8 + (uint)CARRY4(uVar4,uVar14);
  uVar15 = uVar9 + uVar8 + (uint)CARRY4(uVar11,uVar7);
  uVar13 = uVar15 ^ (uVar9 << 0x11 | uVar11 >> 0xf);
  uVar9 = uVar11 + uVar7 ^ (uVar11 << 0x11 | uVar9 >> 0xf);
  uVar8 = (uVar6 << 0x10 | uVar4 >> 0x10) ^ uVar8;
  uVar6 = (uVar4 << 0x10 | uVar6 >> 0x10) ^ uVar7;
  uVar14 = uVar6 + uVar12;
  uVar12 = uVar8 + uVar17 + (uint)CARRY4(uVar6,uVar12);
  uVar17 = uVar13 + uVar12 + (uint)CARRY4(uVar9,uVar14);
  uVar4 = (uVar13 << 0xd | uVar9 >> 0x13) ^ uVar17;
  uVar13 = (uVar9 << 0xd | uVar13 >> 0x13) ^ uVar9 + uVar14;
  uVar12 = (uVar8 << 0x15 | uVar6 >> 0xb) ^ uVar12;
  uVar6 = (uVar6 << 0x15 | uVar8 >> 0xb) ^ uVar14;
  uVar8 = uVar6 + uVar15;
  uVar11 = uVar12 + uVar11 + uVar7 + (uint)CARRY4(uVar6,uVar15);
  uVar16 = uVar4 + uVar11 + (uint)CARRY4(uVar13,uVar8);
  uVar11 = (uVar12 << 0x10 | uVar6 >> 0x10) ^ uVar11;
  uVar6 = (uVar6 << 0x10 | uVar12 >> 0x10) ^ uVar8;
  uVar7 = uVar6 + uVar17;
  uVar12 = (uVar4 << 0x11 | uVar13 >> 0xf) ^ uVar16;
  uVar15 = uVar11 + uVar9 + uVar14 + (uint)CARRY4(uVar6,uVar17);
  uVar14 = (uVar6 << 0x15 | uVar11 >> 0xb) ^ uVar7;
  uVar9 = (uVar11 << 0x15 | uVar6 >> 0xb) ^ uVar15;
  uVar11 = uVar14 + uVar16;
  uVar4 = (uVar13 << 0x11 | uVar4 >> 0xf) ^ uVar13 + uVar8;
  uVar8 = uVar9 + uVar13 + uVar8 + (uint)CARRY4(uVar14,uVar16);
  uVar6 = (uVar4 << 0xd | uVar12 >> 0x13) ^ uVar4 + uVar7;
  uVar7 = (uVar12 << 0xd | uVar4 >> 0x13) ^ uVar12 + uVar15 + (uint)CARRY4(uVar4,uVar7);
  uVar13 = uVar7 + uVar8 + (uint)CARRY4(uVar6,uVar11);
  uVar8 = (uVar9 << 0x10 | uVar14 >> 0x10) ^ uVar8;
  uVar4 = (uVar14 << 0x10 | uVar9 >> 0x10) ^ uVar11;
  param_1[3] = (uVar8 << 0x15 | uVar4 >> 0xb) ^ (uVar7 << 0x11 | uVar6 >> 0xf) ^ uVar6 + uVar11 ^
               uVar13;
  param_1[2] = (uVar4 << 0x15 | uVar8 >> 0xb) ^ (uVar6 << 0x11 | uVar7 >> 0xf) ^ uVar13 ^
               uVar6 + uVar11;
  return;
}

