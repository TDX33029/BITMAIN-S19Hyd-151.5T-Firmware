// FUN_017631d8 @ 017631d8 size=1684 calls_out=7 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_017631d8(int param_1,int param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5,
            undefined4 param_6,int param_7)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  undefined4 *puVar19;
  uint uVar20;
  int *piVar21;
  int *piVar22;
  int aiStack_a440 [263];
  int aiStack_a024 [7416];
  undefined4 uStack_2c44;
  int local_2c40 [255];
  uint auStack_2844 [1281];
  int local_1440 [255];
  uint uStack_1044;
  int local_1040 [1024];
  int aiStack_40 [5];
  int local_2c;
  int iStack_28;
  
  piVar22 = aiStack_40 + 7;
  do {
    piVar22 = piVar22 + -0x400;
    *piVar22 = param_1;
  } while (piVar22 != aiStack_a024);
  local_2c = DAT_018ddaf8;
  FUN_0175f518(aiStack_a440,param_5);
  FUN_016dd1aa(local_1440,param_6,0x1400);
  piVar22 = local_1440;
  do {
    uVar9 = 1;
    iVar15 = 0x64f7;
    while( true ) {
      uVar16 = 0x100 >> (uVar9 & 0xff);
      iVar1 = uVar16 * 2;
      piVar21 = (int *)(&DAT_00429040 + (4 << (uVar9 - 1 & 0xff)));
      uVar20 = 0;
      while( true ) {
        piVar18 = piVar22 + (uVar16 - 1);
        piVar4 = piVar22 + uVar20;
        uVar13 = uVar20;
        do {
          piVar18 = piVar18 + 1;
          uVar13 = uVar13 + 1;
          uVar17 = (uint)((longlong)iVar15 * (longlong)*piVar18);
          lVar3 = (longlong)(int)(uVar17 * 0x3802001) * -0x7fe001;
          iVar11 = (int)((ulonglong)((longlong)iVar15 * (longlong)*piVar18) >> 0x20) +
                   (int)((ulonglong)lVar3 >> 0x20) + (uint)CARRY4((uint)lVar3,uVar17);
          *piVar18 = *piVar4 - iVar11;
          *piVar4 = *piVar4 + iVar11;
          piVar4 = piVar4 + 1;
        } while (uVar13 < uVar16);
        uVar20 = uVar20 + iVar1;
        if (0xff < uVar20) break;
        piVar21 = piVar21 + 1;
        iVar15 = *piVar21;
        uVar16 = uVar16 + iVar1;
      }
      if (uVar9 == 8) break;
      uVar16 = uVar9 & 0xff;
      uVar9 = uVar9 + 1;
      iVar15 = *(int *)(&DAT_00429040 + (1 << uVar16) * 4);
    }
    piVar22 = piVar22 + 0x100;
  } while (aiStack_40 != piVar22);
  puVar5 = &uStack_2c44;
  piVar22 = aiStack_a440;
  do {
    piVar21 = local_1440;
    puVar19 = puVar5;
    piVar4 = piVar22;
    do {
      piVar18 = piVar21 + 1;
      lVar3 = (longlong)piVar21[0x400] * (longlong)piVar4[0x400] +
              (longlong)piVar21[0x300] * (longlong)piVar4[0x300] +
              (longlong)*piVar4 * (longlong)*piVar21 +
              (longlong)piVar21[0x100] * (longlong)piVar4[0x100] +
              (longlong)piVar4[0x200] * (longlong)piVar21[0x200];
      puVar19 = puVar19 + 1;
      *puVar19 = (int)((ulonglong)((longlong)((int)lVar3 * 0x3802001) * -0x7fe001 + lVar3) >> 0x20);
      piVar21 = piVar18;
      piVar4 = piVar4 + 1;
    } while (local_1040 != piVar18);
    puVar5 = puVar5 + 0x100;
    piVar22 = piVar22 + 0x500;
  } while (local_2c40 != piVar22);
  piVar22 = local_2c40;
  do {
    piVar21 = piVar22 + 0x100;
    FUN_01702600(piVar22);
    piVar22 = piVar21;
  } while (local_1440 != piVar21);
  puVar14 = auStack_2844;
  piVar22 = (int *)(param_7 + -4);
  puVar6 = puVar14;
  do {
    puVar7 = puVar6 + -0x100;
    piVar21 = piVar22;
    do {
      puVar7 = puVar7 + 1;
      piVar21 = piVar21 + 1;
      *puVar7 = *puVar7 + *piVar21;
    } while (puVar6 != puVar7);
    piVar22 = piVar22 + 0x100;
    puVar6 = puVar6 + 0x100;
  } while ((int *)(param_7 + 0x17fc) != piVar22);
  puVar6 = puVar14;
  do {
    puVar7 = puVar6 + -0x100;
    do {
      puVar7 = puVar7 + 1;
      *puVar7 = ((int)(*puVar7 + 0x400000) >> 0x17) * -0x7fe001 + *puVar7;
    } while (puVar6 != puVar7);
    puVar6 = puVar6 + 0x100;
  } while (&uStack_1044 != puVar6);
  puVar6 = puVar14;
  do {
    puVar7 = puVar6 + -0x100;
    do {
      puVar7 = puVar7 + 1;
      uVar9 = *puVar7;
      *puVar7 = ((uint)(&LAB_007fe000_1 + uVar9) ^ uVar9) &
                (uVar9 >> 0x1f | ((int)uVar9 >> 0x1f) << 1) ^ uVar9;
    } while (puVar6 != puVar7);
    puVar6 = puVar6 + 0x100;
  } while (&uStack_1044 != puVar6);
  piVar21 = (int *)(param_2 + -4);
  piVar22 = (int *)(param_1 + -4);
  do {
    puVar6 = puVar14 + -0x100;
    piVar4 = piVar21;
    piVar18 = piVar22;
    do {
      puVar6 = puVar6 + 1;
      uVar9 = *puVar6;
      uVar16 = uVar9 + 0xfff;
      piVar4 = piVar4 + 1;
      *piVar4 = (int)uVar16 >> 0xd;
      piVar18 = piVar18 + 1;
      *piVar18 = uVar9 - (uVar16 & 0xffffe000);
    } while (puVar14 != puVar6);
    piVar21 = piVar21 + 0x100;
    piVar22 = piVar22 + 0x100;
    puVar14 = puVar14 + 0x100;
  } while ((int *)(param_2 + 0x17fc) != piVar21);
  if (param_4 < param_5) {
    if (param_5 < param_4 + 8) {
LAB_01763868:
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0,0x1763868);
      (*pcVar2)();
    }
  }
  else if ((param_5 < param_4) && (param_4 < param_5 + 8)) goto LAB_01763868;
  uVar8 = param_5[1];
  uVar10 = param_5[2];
  uVar12 = param_5[3];
  *param_4 = *param_5;
  param_4[1] = uVar8;
  param_4[2] = uVar10;
  param_4[3] = uVar12;
  uVar8 = param_5[5];
  uVar10 = param_5[6];
  uVar12 = param_5[7];
  param_4[4] = param_5[4];
  param_4[5] = uVar8;
  param_4[6] = uVar10;
  param_4[7] = uVar12;
  puVar5 = param_4 + 8;
  do {
    puVar19 = puVar5 + 0x50;
    FUN_01702744(puVar5,param_2);
    param_2 = param_2 + 0x400;
    puVar5 = puVar19;
  } while (param_4 + 0x1e8 != puVar19);
  FUN_01757bf4(param_4,0x7a0,param_3,0x40);
  FUN_0177aaa0(local_2c40,0x1800);
  FUN_0177aaa0(local_1440,0x1400);
  FUN_0177aaa0(aiStack_a440,0x7800);
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

