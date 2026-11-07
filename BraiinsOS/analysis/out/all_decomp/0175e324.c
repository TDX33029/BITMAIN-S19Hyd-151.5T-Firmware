// FUN_0175e324 @ 0175e324 size=1728 calls_out=7 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_0175e324(int param_1,int param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5,
            undefined4 param_6,int param_7)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  uint *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  uint uVar20;
  int *piVar22;
  int *piVar21;
  int *piVar23;
  int *piVar24;
  int iStack_6044;
  undefined1 local_6040 [28];
  int aiStack_6024 [4088];
  int iStack_2044;
  int local_2040 [255];
  uint auStack_1c44 [769];
  int local_1040 [255];
  uint uStack_c44;
  int local_c40 [768];
  int aiStack_40 [5];
  int local_2c;
  int iStack_28;
  
  piVar24 = aiStack_40 + 7;
  do {
    piVar24 = piVar24 + -0x400;
    *piVar24 = param_1;
  } while (piVar24 != aiStack_6024);
  local_2c = DAT_018ddaf8;
  FUN_0175a500(local_6040,param_5);
  FUN_016dd1aa(local_1040,param_6,0x1000);
  piVar24 = local_1040;
  do {
    uVar8 = 1;
    iVar16 = 0x64f7;
    while( true ) {
      uVar17 = 0x100 >> (uVar8 & 0xff);
      iVar1 = uVar17 * 2;
      piVar23 = (int *)(&DAT_00429040 + (4 << (uVar8 - 1 & 0xff)));
      uVar20 = 0;
      while( true ) {
        piVar18 = piVar24 + (uVar17 - 1);
        piVar4 = piVar24 + uVar20;
        uVar12 = uVar20;
        do {
          piVar18 = piVar18 + 1;
          uVar12 = uVar12 + 1;
          uVar19 = (uint)((longlong)iVar16 * (longlong)*piVar18);
          lVar3 = (longlong)(int)(uVar19 * 0x3802001) * -0x7fe001;
          iVar10 = (int)((ulonglong)((longlong)iVar16 * (longlong)*piVar18) >> 0x20) +
                   (int)((ulonglong)lVar3 >> 0x20) + (uint)CARRY4((uint)lVar3,uVar19);
          *piVar18 = *piVar4 - iVar10;
          *piVar4 = *piVar4 + iVar10;
          piVar4 = piVar4 + 1;
        } while (uVar12 < uVar17);
        uVar20 = uVar20 + iVar1;
        if (0xff < uVar20) break;
        piVar23 = piVar23 + 1;
        iVar16 = *piVar23;
        uVar17 = uVar17 + iVar1;
      }
      if (uVar8 == 8) break;
      uVar17 = uVar8 & 0xff;
      uVar8 = uVar8 + 1;
      iVar16 = *(int *)(&DAT_00429040 + (1 << uVar17) * 4);
    }
    piVar24 = piVar24 + 0x100;
  } while (aiStack_40 != piVar24);
  piVar24 = &iStack_6044;
  piVar23 = &iStack_2044;
  do {
    piVar4 = piVar24;
    piVar18 = piVar23;
    piVar21 = local_1040;
    do {
      piVar22 = piVar21 + 1;
      lVar3 = (longlong)piVar21[0x300] * (longlong)piVar4[0x301] +
              (longlong)piVar4[1] * (longlong)*piVar21 +
              (longlong)piVar21[0x100] * (longlong)piVar4[0x101] +
              (longlong)piVar4[0x201] * (longlong)piVar21[0x200];
      piVar18 = piVar18 + 1;
      *piVar18 = (int)((ulonglong)((longlong)((int)lVar3 * 0x3802001) * -0x7fe001 + lVar3) >> 0x20);
      piVar4 = piVar4 + 1;
      piVar21 = piVar22;
    } while (local_c40 != piVar22);
    piVar23 = piVar23 + 0x100;
    piVar24 = piVar24 + 0x400;
  } while (&iStack_2044 != piVar24);
  piVar24 = local_2040;
  do {
    piVar23 = piVar24 + 0x100;
    FUN_01702600(piVar24);
    piVar24 = piVar23;
  } while (local_1040 != piVar23);
  puVar13 = auStack_1c44;
  piVar24 = (int *)(param_7 + -4);
  puVar5 = puVar13;
  do {
    puVar6 = puVar5 + -0x100;
    piVar23 = piVar24;
    do {
      puVar6 = puVar6 + 1;
      piVar23 = piVar23 + 1;
      *puVar6 = *puVar6 + *piVar23;
    } while (puVar5 != puVar6);
    piVar24 = piVar24 + 0x100;
    puVar5 = puVar5 + 0x100;
  } while ((int *)(param_7 + 0xffc) != piVar24);
  puVar5 = puVar13;
  do {
    puVar6 = puVar5 + -0x100;
    do {
      puVar6 = puVar6 + 1;
      *puVar6 = ((int)(*puVar6 + 0x400000) >> 0x17) * -0x7fe001 + *puVar6;
    } while (puVar5 != puVar6);
    puVar5 = puVar5 + 0x100;
  } while (&uStack_c44 != puVar5);
  puVar5 = puVar13;
  do {
    puVar6 = puVar5 + -0x100;
    do {
      puVar6 = puVar6 + 1;
      uVar8 = *puVar6;
      *puVar6 = ((uint)(&LAB_007fe000_1 + uVar8) ^ uVar8) &
                (uVar8 >> 0x1f | ((int)uVar8 >> 0x1f) << 1) ^ uVar8;
    } while (puVar5 != puVar6);
    puVar5 = puVar5 + 0x100;
  } while (&uStack_c44 != puVar5);
  piVar23 = (int *)(param_2 + -4);
  piVar24 = (int *)(param_1 + -4);
  do {
    puVar5 = puVar13 + -0x100;
    piVar4 = piVar23;
    piVar18 = piVar24;
    do {
      puVar5 = puVar5 + 1;
      uVar8 = *puVar5;
      uVar17 = uVar8 + 0xfff;
      piVar4 = piVar4 + 1;
      *piVar4 = (int)uVar17 >> 0xd;
      piVar18 = piVar18 + 1;
      *piVar18 = uVar8 - (uVar17 & 0xffffe000);
    } while (puVar13 != puVar5);
    piVar23 = piVar23 + 0x100;
    piVar24 = piVar24 + 0x100;
    puVar13 = puVar13 + 0x100;
  } while ((int *)(param_2 + 0xffc) != piVar23);
  if (param_4 < param_5) {
    if (param_5 < param_4 + 8) {
LAB_0175e9e0:
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0,0x175e9e0);
      (*pcVar2)();
    }
  }
  else if ((param_5 < param_4) && (param_4 < param_5 + 8)) goto LAB_0175e9e0;
  uVar7 = param_5[1];
  uVar9 = param_5[2];
  uVar11 = param_5[3];
  *param_4 = *param_5;
  param_4[1] = uVar7;
  param_4[2] = uVar9;
  param_4[3] = uVar11;
  uVar7 = param_5[5];
  uVar9 = param_5[6];
  uVar11 = param_5[7];
  param_4[4] = param_5[4];
  param_4[5] = uVar7;
  param_4[6] = uVar9;
  param_4[7] = uVar11;
  puVar14 = param_4 + 8;
  do {
    puVar15 = puVar14 + 0x50;
    FUN_01702744(puVar14,param_2);
    param_2 = param_2 + 0x400;
    puVar14 = puVar15;
  } while (param_4 + 0x148 != puVar15);
  FUN_01757bf4(param_4,0x520,param_3,0x40);
  FUN_0177aaa0(local_2040,0x1000);
  FUN_0177aaa0(local_1040,0x1000);
  FUN_0177aaa0(local_6040,0x4000);
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

