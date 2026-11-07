// FUN_01986d9c @ 01986d9c size=1012 calls_out=7 calls_in=2
// strings: .debug_

undefined8 FUN_01986d9c(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int unaff_r4;
  int *piVar11;
  uint uVar12;
  int *piVar13;
  uint *puVar14;
  uint *unaff_r7;
  uint *puVar15;
  int iVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  uint *local_293c;
  char local_2938;
  uint *local_2934;
  undefined1 auStack_2930 [10508];
  
  iVar10 = param_1[3];
  puVar7 = (uint *)param_1[2];
  iVar5 = iVar10 * 0x28;
  if (iVar10 != 0) {
    unaff_r4 = param_1[4];
  }
  if (iVar10 != 0 && unaff_r4 != 0) {
    iVar8 = param_1[5];
    iVar16 = param_1[8];
    unaff_r7 = (uint *)param_1[9];
    uVar12 = param_1[6];
    uVar2 = param_1[7];
    puVar15 = puVar7;
    iVar1 = iVar5;
    do {
      puVar14 = puVar15 + 10;
      uVar6 = *puVar15;
      if (!CARRY4(uVar2,(uint)CARRY4(uVar12,uVar6))) {
        uVar18 = FUN_0164bbd8(unaff_r4,iVar8,uVar12 + uVar6,uVar2 + CARRY4(uVar12,uVar6),iVar16,
                              unaff_r7);
        if ((((int)uVar18 != 0) && ((int)((ulonglong)uVar18 >> 0x20) == param_4)) &&
           (iVar4 = thunk_FUN_01bed842((int)uVar18,param_3,param_4), iVar4 == 0)) {
          if (puVar15[1] != 8) {
            puVar14 = (uint *)puVar15[5];
          }
          if (puVar15[1] != 8 && puVar14 != (uint *)0x0) {
            piVar11 = (int *)0x0;
            uVar12 = puVar15[4];
            if ((uVar12 <= (uint)param_1[1]) && (puVar14 <= (uint *)(param_1[1] - uVar12))) {
              piVar13 = (int *)(*param_1 + uVar12);
              if ((*(byte *)((int)puVar15 + 9) & 8) == 0) {
                piVar11 = piVar13;
                unaff_r7 = puVar14;
              }
              else if ((&DAT_0000000b < puVar14) && (*piVar13 == 1)) {
                uVar18 = FUN_0199b160(param_2,piVar13[1]);
                unaff_r7 = (uint *)((ulonglong)uVar18 >> 0x20);
                piVar11 = (int *)uVar18;
                FUN_01bed93e(auStack_2930,0,0x2901);
                FUN_01601ec4(&local_293c,auStack_2930,piVar13 + 3,puVar14 + -3,uVar18);
                if (local_293c != puVar14 + -3 || local_2934 != unaff_r7) {
                  piVar11 = (int *)0x0;
                }
                if (local_2938 != '\0') {
                  piVar11 = (int *)0x0;
                }
              }
            }
          }
          else {
            piVar11 = (int *)((*(byte *)((int)puVar15 + 9) & 8) >> 3 ^ 1);
            unaff_r7 = (uint *)0x0;
          }
          goto LAB_01986e14;
        }
      }
      iVar1 = iVar1 + -0x28;
      puVar15 = puVar14;
    } while (iVar1 != 0);
  }
  iVar1 = thunk_FUN_01bed842(".debug_",param_3,7);
  piVar11 = (int *)0x0;
  if (iVar1 == 0) {
    if (*(char *)(param_3 + 7) < -0x40) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb514(param_3,param_4,7,param_4,&DAT_01d27640);
    }
    if ((iVar10 != 0) && (iVar10 = param_1[4], iVar10 != 0)) {
      iVar1 = param_1[5];
      puVar15 = (uint *)param_1[6];
      uVar12 = param_1[7];
      iVar16 = param_1[8];
      iVar8 = param_1[9];
      unaff_r7 = puVar7;
      do {
        uVar2 = *unaff_r7;
        if (!CARRY4(uVar12,(uint)CARRY4((uint)puVar15,uVar2))) {
          uVar17 = FUN_0164bbd8(iVar10,iVar1,(undefined1 *)((int)puVar15 + uVar2),
                                uVar12 + CARRY4((uint)puVar15,uVar2),iVar16,iVar8);
          iVar9 = (int)(uVar17 >> 0x20);
          iVar4 = (int)uVar17;
          if ((((iVar4 != 0) && (0x7ffffffff < uVar17)) &&
              (iVar3 = thunk_FUN_01bed842(&DAT_00570828,iVar4,8),
              iVar9 + -1 == param_4 && iVar3 == 0)) &&
             (iVar4 = thunk_FUN_01bed842(iVar4 + 8,(char *)(param_3 + 7),iVar9 + -8), iVar4 == 0)) {
            piVar11 = (int *)0x0;
            if ((unaff_r7[1] != 8) && (uVar12 = unaff_r7[5], uVar12 != 0)) {
              uVar2 = unaff_r7[4];
              if ((((uVar2 <= (uint)param_1[1]) && ((uVar12 <= param_1[1] - uVar2 && (7 < uVar12))))
                  && (piVar13 = (int *)(*param_1 + uVar2), *piVar13 == 0x42494c5a && piVar13[1] == 0
                     )) && (3 < uVar12 - 8)) {
                uVar2 = piVar13[2];
                uVar18 = FUN_0199b160(param_2,uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 |
                                              (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18);
                unaff_r7 = (uint *)((ulonglong)uVar18 >> 0x20);
                iVar5 = FUN_0199b234(piVar13 + 3,uVar12 - 0xc,(int *)uVar18,unaff_r7);
                piVar11 = (int *)0x0;
                if (iVar5 != 0) {
                  piVar11 = (int *)uVar18;
                }
              }
            }
            goto LAB_01986e14;
          }
        }
        iVar5 = iVar5 + -0x28;
        unaff_r7 = unaff_r7 + 10;
      } while (iVar5 != 0);
      piVar11 = (int *)0x0;
      unaff_r7 = puVar15;
    }
  }
LAB_01986e14:
  return CONCAT44(unaff_r7,piVar11);
}

