// FUN_0166851c @ 0166851c size=512 calls_out=3 calls_in=0
// strings: 

void FUN_0166851c(int param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int unaff_r4;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  undefined8 uVar18;
  undefined1 auStack_248 [112];
  int local_1d8 [26];
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined1 auStack_168 [88];
  int local_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  undefined1 auStack_dc [76];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [96];
  undefined4 uStack_28;
  
  uVar18 = (**(code **)(param_3 + 0x10))(param_2);
  puVar5 = (undefined4 *)((ulonglong)uVar18 >> 0x20);
  iVar15 = (int)uVar18;
  piVar7 = (int *)((uint)&local_f8 | 4);
  uVar18 = (*(code *)puVar5[3])(iVar15);
  piVar6 = (int *)((ulonglong)uVar18 >> 0x20);
  if ((int)uVar18 != 0) {
    if (*(char *)(param_1 + 1) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0166876c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_01668770 + *(int *)(&DAT_01668770 + *piVar6 * 4)))();
      return;
    }
    FUN_016dd1aa(auStack_248,piVar6,0x70);
    *piVar6 = 0;
    FUN_0167075c(&local_f8,auStack_248);
    local_1d8[0] = local_f8;
    if (local_f8 == 4) {
      FUN_016dd1aa((uint)auStack_88 | 4,&iStack_f0,0x60);
      FUN_016dd1aa((uint)local_1d8 | 4,auStack_88,100);
      local_1d8[0] = 2;
    }
    else {
      FUN_016dd1aa(auStack_88,piVar7,100);
      FUN_016dd1aa((uint)local_1d8 | 4,auStack_88,100);
      local_170 = local_90;
      uStack_16c = uStack_8c;
    }
    FUN_01671334(&local_f8,local_1d8);
    local_110 = *piVar7;
    iStack_10c = piVar7[1];
    iStack_108 = piVar7[2];
    iStack_104 = piVar7[3];
    iStack_100 = piVar7[4];
    iStack_fc = piVar7[5];
    iVar15 = 3;
    if (local_f8 != 4) {
      FUN_016dd1aa(auStack_168,auStack_dc,0x54);
      iVar15 = local_f8;
    }
    local_f8 = local_110;
    iStack_f4 = iStack_10c;
    iStack_f0 = iStack_108;
    iStack_ec = iStack_104;
    iStack_e8 = iStack_100;
    iStack_e4 = iStack_fc;
    iVar4 = *piVar6;
    *(bool *)(param_1 + 1) = iVar15 == 1;
                    /* WARNING: Could not recover jumptable at 0x016686ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_016686f0 + *(int *)(&DAT_016686f0 + iVar4 * 4)))();
    return;
  }
  if ((code *)*puVar5 != (code *)0x0) {
    (*(code *)*puVar5)(iVar15);
  }
  if (puVar5[1] == 0) {
    return;
  }
  if (iVar15 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar16 = *(byte *)(iVar15 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar8 = uVar11 - 0x10, uVar11 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)(iVar15 + -3) >> 5);
  iVar14 = *(int *)(iVar4 + 8) + 0x10;
  iVar12 = iVar8 * uVar16 + iVar8 + -4;
  iVar8 = iVar14 + iVar12;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar11 = *(uint *)(iVar8 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar8 - iVar15) < uVar11) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar8 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar11 = 1 << uVar16;
  *(undefined1 *)(iVar15 + -3) = 0xff;
  *(undefined2 *)(iVar15 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar4 + 0x10);
    uVar9 = *(uint *)(iVar4 + 0xc) | uVar13;
    if ((uVar11 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar13 == 0) || (uVar9 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar16);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar5;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar5 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar11 + uVar13;
      return;
    }
    puVar17 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar9 = *puVar17;
      if (uVar13 != uVar9) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar3);
    *puVar17 = uVar11 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar9) {
      return;
    }
  } while( true );
}

