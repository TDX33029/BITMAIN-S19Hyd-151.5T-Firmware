// FUN_017681f0 @ 017681f0 size=1748 calls_out=7 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_017681f0(int param_1,int param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5,
            undefined4 param_6,int param_7)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  uint *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint *puVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined4 *puVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  undefined4 *puVar20;
  int *piVar21;
  uint uVar22;
  int *piVar23;
  int *piVar24;
  undefined1 auStack_11c40 [3100];
  int aiStack_11024 [248];
  int aiStack_10c44 [13312];
  undefined4 uStack_3c44;
  undefined1 local_3c40 [1020];
  uint auStack_3844 [768];
  int aiStack_2c44 [1025];
  undefined1 local_1c40 [1020];
  uint auStack_1844 [768];
  int aiStack_c44 [256];
  int aiStack_844 [513];
  undefined1 auStack_40 [20];
  int local_2c;
  int iStack_28;
  
  piVar23 = (int *)(auStack_40 + 0x1c);
  do {
    piVar23 = piVar23 + -0x400;
    *piVar23 = param_1;
  } while (piVar23 != aiStack_11024);
  local_2c = DAT_018ddaf8;
  FUN_01764448(auStack_11c40,param_5);
  FUN_016dd1aa(local_1c40,param_6,0x1c00);
  puVar5 = local_1c40;
  do {
    uVar7 = 1;
    iVar17 = 0x64f7;
    while( true ) {
      uVar18 = 0x100 >> (uVar7 & 0xff);
      iVar1 = uVar18 * 2;
      piVar23 = (int *)(&DAT_00429040 + (4 << (uVar7 - 1 & 0xff)));
      uVar22 = 0;
      while( true ) {
        piVar21 = (int *)(puVar5 + uVar18 * 4 + -4);
        piVar9 = (int *)(puVar5 + uVar22 * 4);
        uVar13 = uVar22;
        do {
          piVar21 = piVar21 + 1;
          uVar13 = uVar13 + 1;
          uVar19 = (uint)((longlong)iVar17 * (longlong)*piVar21);
          lVar3 = (longlong)(int)(uVar19 * 0x3802001) * -0x7fe001;
          iVar11 = (int)((ulonglong)((longlong)iVar17 * (longlong)*piVar21) >> 0x20) +
                   (int)((ulonglong)lVar3 >> 0x20) + (uint)CARRY4((uint)lVar3,uVar19);
          *piVar21 = *piVar9 - iVar11;
          *piVar9 = *piVar9 + iVar11;
          piVar9 = piVar9 + 1;
        } while (uVar13 < uVar18);
        uVar22 = uVar22 + iVar1;
        if (0xff < uVar22) break;
        piVar23 = piVar23 + 1;
        iVar17 = *piVar23;
        uVar18 = uVar18 + iVar1;
      }
      if (uVar7 == 8) break;
      uVar18 = uVar7 & 0xff;
      uVar7 = uVar7 + 1;
      iVar17 = *(int *)(&DAT_00429040 + (1 << uVar18) * 4);
    }
    puVar5 = puVar5 + 0x400;
  } while (auStack_40 != puVar5);
  puVar16 = &uStack_3c44;
  piVar23 = aiStack_10c44;
  do {
    piVar9 = piVar23;
    piVar21 = aiStack_c44;
    puVar20 = puVar16;
    do {
      piVar24 = piVar21 + 1;
      lVar3 = (longlong)piVar21[0x201] * (longlong)piVar9[0x201] +
              (longlong)piVar21[0x101] * (longlong)piVar9[0x101] +
              (longlong)*piVar24 * (longlong)piVar9[1] +
              (longlong)piVar21[-0xff] * (longlong)piVar9[-0xff] +
              (longlong)piVar21[-0x1ff] * (longlong)piVar9[-0x1ff] +
              (longlong)piVar9[-0x3ff] * (longlong)piVar21[-0x3ff] +
              (longlong)piVar9[-0x2ff] * (longlong)piVar21[-0x2ff];
      puVar20 = puVar20 + 1;
      *puVar20 = (int)((ulonglong)((longlong)((int)lVar3 * 0x3802001) * -0x7fe001 + lVar3) >> 0x20);
      piVar9 = piVar9 + 1;
      piVar21 = piVar24;
    } while (aiStack_844 != piVar24);
    puVar16 = puVar16 + 0x100;
    piVar23 = piVar23 + 0x700;
  } while (aiStack_2c44 != piVar23);
  puVar5 = local_3c40;
  do {
    puVar14 = puVar5 + 0x400;
    FUN_01702600(puVar5);
    puVar5 = puVar14;
  } while (local_1c40 != puVar14);
  puVar15 = auStack_3844;
  piVar23 = (int *)(param_7 + -4);
  puVar4 = puVar15;
  do {
    puVar8 = puVar4 + -0x100;
    piVar9 = piVar23;
    do {
      puVar8 = puVar8 + 1;
      piVar9 = piVar9 + 1;
      *puVar8 = *puVar8 + *piVar9;
    } while (puVar4 != puVar8);
    piVar23 = piVar23 + 0x100;
    puVar4 = puVar4 + 0x100;
  } while ((int *)(param_7 + 0x1ffc) != piVar23);
  puVar4 = puVar15;
  do {
    puVar8 = puVar4 + -0x100;
    do {
      puVar8 = puVar8 + 1;
      *puVar8 = ((int)(*puVar8 + 0x400000) >> 0x17) * -0x7fe001 + *puVar8;
    } while (puVar4 != puVar8);
    puVar4 = puVar4 + 0x100;
  } while (auStack_1844 != puVar4);
  puVar4 = puVar15;
  do {
    puVar8 = puVar4 + -0x100;
    do {
      puVar8 = puVar8 + 1;
      uVar7 = *puVar8;
      *puVar8 = ((uint)(&LAB_007fe000_1 + uVar7) ^ uVar7) &
                (uVar7 >> 0x1f | ((int)uVar7 >> 0x1f) << 1) ^ uVar7;
    } while (puVar4 != puVar8);
    puVar4 = puVar4 + 0x100;
  } while (auStack_1844 != puVar4);
  piVar23 = (int *)(param_2 + -4);
  piVar9 = (int *)(param_1 + -4);
  do {
    puVar4 = puVar15 + -0x100;
    piVar21 = piVar9;
    piVar24 = piVar23;
    do {
      puVar4 = puVar4 + 1;
      uVar18 = *puVar4;
      uVar7 = uVar18 + 0xfff;
      piVar24 = piVar24 + 1;
      *piVar24 = (int)uVar7 >> 0xd;
      piVar21 = piVar21 + 1;
      *piVar21 = uVar18 - (uVar7 & 0xffffe000);
    } while (puVar15 != puVar4);
    piVar23 = piVar23 + 0x100;
    piVar9 = piVar9 + 0x100;
    puVar15 = puVar15 + 0x100;
  } while ((int *)(param_2 + 0x1ffc) != piVar23);
  if (param_4 < param_5) {
    if (param_5 < param_4 + 8) {
LAB_017688c0:
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0,0x17688c0);
      (*pcVar2)();
    }
  }
  else if ((param_5 < param_4) && (param_4 < param_5 + 8)) goto LAB_017688c0;
  uVar6 = param_5[1];
  uVar10 = param_5[2];
  uVar12 = param_5[3];
  *param_4 = *param_5;
  param_4[1] = uVar6;
  param_4[2] = uVar10;
  param_4[3] = uVar12;
  uVar6 = param_5[5];
  uVar10 = param_5[6];
  uVar12 = param_5[7];
  param_4[4] = param_5[4];
  param_4[5] = uVar6;
  param_4[6] = uVar10;
  param_4[7] = uVar12;
  puVar16 = param_4 + 8;
  do {
    puVar20 = puVar16 + 0x50;
    FUN_01702744(puVar16,param_2);
    param_2 = param_2 + 0x400;
    puVar16 = puVar20;
  } while (param_4 + 0x288 != puVar20);
  FUN_01757bf4(param_4,0xa20,param_3,0x40);
  FUN_0177aaa0(local_3c40,0x2000);
  FUN_0177aaa0(local_1c40,0x1c00);
  FUN_0177aaa0(auStack_11c40,0xe000);
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

