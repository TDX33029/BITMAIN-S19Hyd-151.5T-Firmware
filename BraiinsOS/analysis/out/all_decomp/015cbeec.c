// FUN_015cbeec @ 015cbeec size=1072 calls_out=7 calls_in=2
// strings: .debug_

int * FUN_015cbeec(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int unaff_r4;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  uint *local_293c;
  char local_2938;
  int local_2934;
  undefined1 auStack_2930 [10508];
  
  iVar9 = param_1[3];
  puVar7 = (uint *)param_1[2];
  iVar5 = iVar9 * 0x28;
  if (iVar9 != 0) {
    unaff_r4 = param_1[4];
  }
  if (iVar9 != 0 && unaff_r4 != 0) {
    iVar8 = param_1[5];
    iVar16 = param_1[8];
    iVar4 = param_1[9];
    uVar10 = param_1[6];
    uVar15 = param_1[7];
    puVar13 = puVar7;
    iVar1 = iVar5;
    do {
      puVar14 = puVar13 + 10;
      uVar2 = *puVar13;
      if (!CARRY4(uVar15,(uint)CARRY4(uVar10,uVar2))) {
        uVar18 = FUN_0127b808(unaff_r4,iVar8,uVar10 + uVar2,uVar15 + CARRY4(uVar10,uVar2),iVar16,
                              iVar4);
        if ((((int)uVar18 != 0) && ((int)((ulonglong)uVar18 >> 0x20) == param_4)) &&
           (iVar6 = thunk_FUN_016dd50a((int)uVar18,param_3,param_4), iVar6 == 0)) {
          if (puVar13[1] != 8) {
            puVar14 = (uint *)puVar13[5];
          }
          if (puVar13[1] == 8 || puVar14 == (uint *)0x0) {
            return (int *)((*(byte *)((int)puVar13 + 9) & 8) >> 3 ^ 1);
          }
          uVar10 = puVar13[4];
          if ((uint)param_1[1] < uVar10) {
            return (int *)0x0;
          }
          if ((uint *)(param_1[1] - uVar10) < puVar14) {
            return (int *)0x0;
          }
          piVar12 = (int *)(*param_1 + uVar10);
          if ((*(byte *)((int)puVar13 + 9) & 8) == 0) {
            return piVar12;
          }
          if (puVar14 < &DAT_0000000c) {
            return (int *)0x0;
          }
          if (*piVar12 != 1) {
            return (int *)0x0;
          }
          uVar18 = FUN_015e0948(param_2,piVar12[1]);
          piVar11 = (int *)uVar18;
          FUN_016dd606(auStack_2930,0,0x2901);
          FUN_0126af18(&local_293c,auStack_2930,piVar12 + 3,puVar14 + -3,uVar18);
          if (local_293c != puVar14 + -3 || local_2934 != (int)((ulonglong)uVar18 >> 0x20)) {
            piVar11 = (int *)0x0;
          }
          if (local_2938 != '\0') {
            piVar11 = (int *)0x0;
          }
          return piVar11;
        }
      }
      iVar1 = iVar1 + -0x28;
      puVar13 = puVar14;
    } while (iVar1 != 0);
  }
  iVar1 = thunk_FUN_016dd50a(".debug_",param_3,7);
  if (iVar1 != 0) {
    return (int *)0x0;
  }
  if (*(char *)(param_3 + 7) < -0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa8ac(param_3,param_4,7,param_4,&DAT_018aaa3c);
  }
  if ((iVar9 != 0) && (iVar9 = param_1[4], iVar9 != 0)) {
    iVar1 = param_1[5];
    uVar15 = param_1[6];
    uVar10 = param_1[7];
    iVar16 = param_1[8];
    iVar8 = param_1[9];
    do {
      uVar2 = *puVar7;
      if (!CARRY4(uVar10,(uint)CARRY4(uVar15,uVar2))) {
        uVar17 = FUN_0127b808(iVar9,iVar1,uVar15 + uVar2,uVar10 + CARRY4(uVar15,uVar2),iVar16,iVar8)
        ;
        iVar6 = (int)(uVar17 >> 0x20);
        iVar4 = (int)uVar17;
        if (((iVar4 != 0) && (0x7ffffffff < uVar17)) &&
           ((iVar3 = thunk_FUN_016dd50a(&DAT_0056a2e0,iVar4,8), iVar6 + -1 == param_4 && iVar3 == 0
            && (iVar4 = thunk_FUN_016dd50a(iVar4 + 8,(char *)(param_3 + 7),iVar6 + -8), iVar4 == 0))
           )) {
          if (puVar7[1] == 8) {
            return (int *)0x0;
          }
          uVar10 = puVar7[5];
          if (uVar10 == 0) {
            return (int *)0x0;
          }
          uVar15 = puVar7[4];
          if ((uint)param_1[1] < uVar15) {
            return (int *)0x0;
          }
          if (param_1[1] - uVar15 < uVar10) {
            return (int *)0x0;
          }
          if (uVar10 < 8) {
            return (int *)0x0;
          }
          piVar12 = (int *)(*param_1 + uVar15);
          if (*piVar12 != 0x42494c5a || piVar12[1] != 0) {
            return (int *)0x0;
          }
          if (uVar10 - 8 < 4) {
            return (int *)0x0;
          }
          uVar15 = piVar12[2];
          uVar18 = FUN_015e0948(param_2,uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                        (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18);
          iVar5 = FUN_015e0a04(piVar12 + 3,uVar10 - 0xc,(int *)uVar18,
                               (int)((ulonglong)uVar18 >> 0x20));
          piVar12 = (int *)0x0;
          if (iVar5 != 0) {
            piVar12 = (int *)uVar18;
          }
          return piVar12;
        }
      }
      iVar5 = iVar5 + -0x28;
      puVar7 = puVar7 + 10;
    } while (iVar5 != 0);
  }
  return (int *)0x0;
}

