// FUN_01340514 @ 01340514 size=996 calls_out=6 calls_in=2
// strings: 

uint * FUN_01340514(uint *param_1,uint *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
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
  undefined8 uVar19;
  uint local_78;
  int local_74;
  uint local_70;
  int iStack_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  undefined1 auStack_58 [16];
  uint local_48;
  uint local_44;
  int local_40;
  int local_38;
  int local_34;
  int iStack_30;
  
  if ((char)param_1[2] != '\0') {
    return param_1;
  }
  if (param_2 != (uint *)0x0) {
    uVar6 = param_2[2];
    uVar7 = param_2[3];
    uVar3 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    if ((uVar3 & 1) != 0) goto LAB_013408d0;
  }
  local_5c = 0x74656462;
  local_64 = 0x646f7261;
  local_70 = 0x6e657261;
  iStack_6c = 0x6c796765;
  local_74 = 0x736f6d65;
  local_78 = 0x70736575;
  local_60 = 0x79746573;
  local_68 = 0x6e646f6d;
  FUN_01bed93e(auStack_58,0,0x20);
  FUN_019ac130(&local_38,1);
  FUN_013408fc(&local_78,&local_38,8);
  local_38 = iStack_30;
  uVar4 = FUN_013408fc(&local_78,&local_38,4);
  uVar19 = thunk_FUN_01bee35a(uVar4,0x240);
  uVar3 = *(uint *)((int)uVar19 + (int)((ulonglong)uVar19 >> 0x20));
  if (uVar3 < 3) {
    piVar8 = (int *)FUN_019b03e8();
  }
  else {
    piVar8 = (int *)(uVar3 - 8);
    do {
      iVar5 = *piVar8;
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = iVar5 + 1;
    if (iVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x13408f4);
      (*pcVar1)();
    }
  }
  local_38 = piVar8[2];
  local_34 = piVar8[3];
  FUN_013408fc(&local_78,&local_38,8);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar8;
    bVar2 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar2);
  *piVar8 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019a2ffc(piVar8);
  }
  uVar17 = local_64 + local_74 + (uint)CARRY4(local_68,local_78);
  uVar12 = (local_64 << 0xd | local_68 >> 0x13) ^ uVar17;
  uVar9 = (local_68 << 0xd | local_64 >> 0x13) ^ local_68 + local_78;
  local_44 = local_44 | local_40 << 0x18;
  local_5c = local_44 ^ local_5c;
  local_60 = local_48 ^ local_60;
  uVar14 = local_60 + local_70;
  uVar3 = local_5c + iStack_6c + (uint)CARRY4(local_60,local_70);
  uVar15 = uVar3 + uVar12 + (uint)CARRY4(uVar14,uVar9);
  uVar3 = (local_5c << 0x10 | local_60 >> 0x10) ^ uVar3;
  uVar7 = (local_60 << 0x10 | local_5c >> 0x10) ^ uVar14;
  uVar16 = uVar15 ^ (uVar12 << 0x11 | uVar9 >> 0xf);
  uVar6 = uVar3 + local_68 + local_78 + (uint)CARRY4(uVar7,uVar17);
  uVar12 = uVar14 + uVar9 ^ (uVar9 << 0x11 | uVar12 >> 0xf);
  local_48 = uVar7 + uVar17 ^ local_48;
  uVar18 = local_48 + uVar12;
  uVar13 = (uVar6 ^ local_44) + uVar16 + (uint)CARRY4(local_48,uVar12);
  uVar10 = uVar13 ^ (uVar16 << 0xd | uVar12 >> 0x13);
  uVar11 = uVar18 ^ (uVar12 << 0xd | uVar16 >> 0x13);
  uVar6 = (uVar3 << 0x15 | uVar7 >> 0xb) ^ uVar6;
  uVar15 = uVar15 ^ 0xff;
  uVar3 = (uVar7 << 0x15 | uVar3 >> 0xb) ^ uVar7 + uVar17;
  uVar16 = uVar3 + uVar15;
  uVar12 = uVar6 + uVar14 + uVar9 + (uint)CARRY4(uVar3,uVar15);
  uVar17 = uVar10 + uVar12 + (uint)CARRY4(uVar11,uVar16);
  uVar7 = uVar17 ^ (uVar10 << 0x11 | uVar11 >> 0xf);
  uVar14 = uVar11 + uVar16 ^ (uVar11 << 0x11 | uVar10 >> 0xf);
  uVar12 = (uVar6 << 0x10 | uVar3 >> 0x10) ^ uVar12;
  uVar6 = (uVar3 << 0x10 | uVar6 >> 0x10) ^ uVar16;
  uVar15 = uVar6 + uVar13;
  uVar13 = uVar12 + uVar18 + (uint)CARRY4(uVar6,uVar13);
  uVar18 = uVar7 + uVar13 + (uint)CARRY4(uVar14,uVar15);
  uVar3 = (uVar7 << 0xd | uVar14 >> 0x13) ^ uVar18;
  uVar9 = (uVar14 << 0xd | uVar7 >> 0x13) ^ uVar14 + uVar15;
  uVar13 = (uVar12 << 0x15 | uVar6 >> 0xb) ^ uVar13;
  uVar6 = (uVar6 << 0x15 | uVar12 >> 0xb) ^ uVar15;
  uVar10 = uVar6 + uVar17;
  uVar12 = uVar13 + uVar11 + uVar16 + (uint)CARRY4(uVar6,uVar17);
  uVar11 = uVar3 + uVar12 + (uint)CARRY4(uVar9,uVar10);
  uVar12 = (uVar13 << 0x10 | uVar6 >> 0x10) ^ uVar12;
  uVar6 = (uVar6 << 0x10 | uVar13 >> 0x10) ^ uVar10;
  uVar16 = uVar6 + uVar18;
  uVar13 = uVar12 + uVar14 + uVar15 + (uint)CARRY4(uVar6,uVar18);
  uVar7 = (uVar6 << 0x15 | uVar12 >> 0xb) ^ uVar16;
  uVar15 = (uVar3 << 0x11 | uVar9 >> 0xf) ^ uVar11;
  uVar14 = (uVar12 << 0x15 | uVar6 >> 0xb) ^ uVar13;
  uVar12 = uVar7 + uVar11;
  uVar3 = (uVar9 << 0x11 | uVar3 >> 0xf) ^ uVar9 + uVar10;
  uVar10 = uVar14 + uVar9 + uVar10 + (uint)CARRY4(uVar7,uVar11);
  uVar6 = (uVar3 << 0xd | uVar15 >> 0x13) ^ uVar3 + uVar16;
  uVar16 = (uVar15 << 0xd | uVar3 >> 0x13) ^ uVar15 + uVar13 + (uint)CARRY4(uVar3,uVar16);
  uVar9 = uVar16 + uVar10 + (uint)CARRY4(uVar6,uVar12);
  uVar10 = (uVar14 << 0x10 | uVar7 >> 0x10) ^ uVar10;
  uVar3 = (uVar7 << 0x10 | uVar14 >> 0x10) ^ uVar12;
  uVar7 = (uVar10 << 0x15 | uVar3 >> 0xb) ^ (uVar16 << 0x11 | uVar6 >> 0xf) ^ uVar6 + uVar12 ^ uVar9
  ;
  uVar6 = (uVar3 << 0x15 | uVar10 >> 0xb) ^ (uVar6 << 0x11 | uVar16 >> 0xf) ^ uVar9 ^ uVar6 + uVar12
  ;
LAB_013408d0:
  *param_1 = uVar6;
  param_1[1] = uVar7;
  *(undefined1 *)(param_1 + 2) = 1;
  return param_1;
}

