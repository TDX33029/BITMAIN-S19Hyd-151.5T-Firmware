// FUN_01989bf8 @ 01989bf8 size=1240 calls_out=4 calls_in=2
// strings: 

void FUN_01989bf8(undefined4 *param_1,undefined4 *param_2,char *param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined3 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint extraout_r3;
  int *piVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  undefined4 *puVar12;
  int *piVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  uint *puVar18;
  int iVar19;
  int *piVar20;
  int *piVar21;
  uint *puVar22;
  int *piVar23;
  int *piVar24;
  uint *local_48;
  char local_41;
  undefined4 local_40;
  int *local_3c;
  undefined4 local_38;
  uint **local_34;
  char *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  
  if (*param_3 != 'R') {
    uVar15 = *(undefined4 *)(param_3 + 8);
    uVar9 = *(undefined4 *)(param_3 + 0xc);
    cVar1 = param_3[7];
    uVar17 = *(undefined4 *)(param_3 + 1);
    uVar3 = *(undefined2 *)(param_3 + 5);
    *(char *)(param_1 + 2) = *param_3;
    *(undefined2 *)((int)param_1 + 0xd) = uVar3;
    *(char *)((int)param_1 + 0xf) = cVar1;
    param_1[4] = uVar15;
    param_1[5] = uVar9;
    *(undefined4 *)((int)param_1 + 9) = uVar17;
LAB_01989c9c:
    uVar15 = 1;
    goto LAB_01989ea4;
  }
  piVar24 = (int *)param_2[2];
  uVar15 = *(undefined4 *)(param_3 + 8);
  piVar8 = *(int **)(param_3 + 0xc);
  uVar7 = piVar24[0x4c];
  cVar1 = param_3[4];
  if (uVar7 == 2) {
    FUN_0198ea08(piVar24 + 0x4c,uVar15,piVar8);
    uVar7 = piVar24[0x4c];
  }
  piVar10 = piVar24 + 4;
  if ((uVar7 & 1) == 0) {
    piVar23 = piVar24 + 0x4d;
  }
  else {
    piVar23 = (int *)piVar24[0x4f];
    if ((char)piVar24[0x4e] != 'R') {
      iVar16 = piVar24[0x50];
      iVar11 = piVar24[0x51];
      uVar3 = *(undefined2 *)((int)piVar24 + 0x139);
      uVar2 = *(undefined1 *)((int)piVar24 + 0x13b);
      *(char *)(param_1 + 2) = (char)piVar24[0x4e];
      param_1[3] = piVar23;
      param_1[4] = iVar16;
      param_1[5] = iVar11;
      *(undefined2 *)((int)param_1 + 9) = uVar3;
      *(undefined1 *)((int)param_1 + 0xb) = uVar2;
      goto LAB_01989c9c;
    }
  }
  uVar7 = piVar23[3];
  puVar22 = (uint *)0x0;
  piVar20 = (int *)*param_2;
  piVar21 = (int *)param_2[1];
  piVar13 = piVar8;
  if (uVar7 != 0) {
    iVar11 = piVar23[2];
    puVar18 = puVar22;
    if (uVar7 != 1) {
      puVar18 = (uint *)0x0;
      do {
        puVar22 = (uint *)((int)puVar18 + (uVar7 >> 1));
        uVar7 = uVar7 - (uVar7 >> 1);
        puVar12 = (undefined4 *)(iVar11 + (int)puVar22 * 0x18);
        piVar13 = (int *)puVar12[1];
        if (piVar21 <= piVar13 &&
            (uint)((int *)*puVar12 <= piVar20) <= (uint)((int)piVar21 - (int)piVar13)) {
          puVar22 = puVar18;
        }
        puVar18 = puVar22;
      } while (1 < uVar7);
    }
    puVar22 = (uint *)0x0;
    puVar12 = (undefined4 *)(iVar11 + (int)puVar18 * 0x18);
    piVar13 = (int *)puVar12[1];
    if ((piVar13 < piVar21 ||
         (uint)((int)piVar21 - (int)piVar13) < (uint)((int *)*puVar12 <= piVar20)) &&
       (piVar13 = (int *)puVar12[2],
       piVar21 <= (int *)puVar12[3] &&
       (uint)(piVar13 <= piVar20) <= (uint)((int)piVar21 - (int)puVar12[3]))) {
      uVar7 = piVar23[1];
      uVar14 = *(uint *)(iVar11 + (int)puVar18 * 0x18 + 0x10);
      if (uVar7 <= uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar14,uVar7,&DAT_01d28274,uVar7,cVar1);
      }
      local_38 = param_2[3];
      puVar18 = (uint *)(*piVar23 + uVar14 * 0x28);
      uVar7 = *(uint *)(*piVar23 + uVar14 * 0x28);
      local_28 = &local_38;
      local_2c = &local_40;
      local_30 = &local_41;
      local_34 = &local_48;
      local_48 = puVar18;
      local_41 = cVar1;
      local_40 = uVar15;
      local_3c = piVar8;
      if (uVar7 == 2) {
        FUN_0198fa64(puVar18,&local_34);
        uVar7 = *puVar18;
        piVar13 = piVar24;
      }
      if ((uVar7 & 1) == 0) {
        puVar22 = puVar18 + 1;
      }
      else {
        puVar22 = (uint *)puVar18[3];
        if ((char)puVar18[2] != 'R') {
          uVar7 = puVar18[4];
          uVar14 = puVar18[5];
          uVar3 = *(undefined2 *)((int)puVar18 + 9);
          *(char *)(param_1 + 2) = (char)puVar18[2];
          uVar2 = *(undefined1 *)((int)puVar18 + 0xb);
          param_1[3] = puVar22;
          param_1[4] = uVar7;
          param_1[5] = uVar14;
          *(undefined1 *)((int)param_1 + 0xb) = uVar2;
          *(undefined2 *)((int)param_1 + 9) = uVar3;
          goto LAB_01989c9c;
        }
      }
    }
  }
  uVar7 = piVar24[5];
  uVar15 = 0;
  uVar14 = 2;
  if (*piVar10 == 0x2f && uVar7 == 0) {
    uVar5 = 0;
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = (int *)piVar24[0x46];
    if (piVar8 == (int *)0x2) {
      FUN_0198a0d8(piVar24 + 0x46,*(int *)param_2[3] + 8,piVar24,piVar10);
      piVar8 = (int *)piVar24[0x46];
      uVar7 = extraout_r3;
      piVar13 = piVar24;
      if (((uint)piVar8 & 1) == 0) goto LAB_01989f40;
LAB_01989ec4:
      iVar11 = piVar24[0x48];
      piVar23 = (int *)piVar24[0x49];
      if ((char)iVar11 != 'R') {
        uVar4 = *(undefined3 *)((int)piVar24 + 0x121);
        iVar16 = piVar24[0x4a];
        iVar19 = piVar24[0x4b];
        param_1[3] = piVar23;
        param_1[2] = CONCAT31(uVar4,(char)iVar11);
        param_1[4] = iVar16;
        param_1[5] = iVar19;
        goto LAB_01989c9c;
      }
    }
    else {
      if (((uint)piVar8 & 1) != 0) goto LAB_01989ec4;
LAB_01989f40:
      piVar23 = piVar24 + 0x47;
    }
    uVar6 = piVar23[3];
    uVar5 = 0;
    if (uVar6 != 0) {
      iVar11 = 0;
      if (uVar6 != 1) {
        iVar11 = 0;
        do {
          iVar16 = iVar11 + (uVar6 >> 1);
          uVar6 = uVar6 - (uVar6 >> 1);
          iVar19 = piVar23[2] + iVar16 * 0x18;
          piVar8 = *(int **)(iVar19 + 0xc);
          if (piVar21 <= piVar8 &&
              (uint)(*(int **)(iVar19 + 8) <= piVar20) <= (uint)((int)piVar21 - (int)piVar8)) {
            iVar16 = iVar11;
          }
          iVar11 = iVar16;
        } while (1 < uVar6);
      }
      piVar8 = (int *)(piVar23[2] + iVar11 * 0x18);
      uVar5 = 0;
      piVar13 = (int *)piVar8[2];
      piVar10 = (int *)piVar8[3];
      uVar7 = (int)piVar21 - ((int)piVar10 + (uint)(piVar13 > piVar20));
      if (piVar10 < piVar21 || (uint)((int)piVar21 - (int)piVar10) < (uint)(piVar13 <= piVar20)) {
        piVar13 = (int *)piVar8[4];
        piVar10 = (int *)piVar8[5];
        uVar7 = (int)piVar21 - ((int)piVar10 + (uint)(piVar13 > piVar20));
        uVar14 = 2;
        if (piVar21 <= piVar10 && (uint)(piVar13 <= piVar20) <= (uint)((int)piVar21 - (int)piVar10))
        {
          uVar6 = piVar8[1];
          uVar5 = 0;
          if (uVar6 != 0) {
            iVar11 = *piVar8;
            uVar7 = 0;
            if (uVar6 != 1) {
              uVar7 = 0;
              uVar14 = uVar6;
              do {
                uVar5 = uVar7 + (uVar14 >> 1);
                uVar14 = uVar14 - (uVar14 >> 1);
                puVar12 = (undefined4 *)(iVar11 + uVar5 * 0x18);
                piVar8 = (int *)puVar12[1];
                if (piVar21 <= piVar8 &&
                    (uint)((int *)*puVar12 <= piVar20) <= (uint)((int)piVar21 - (int)piVar8)) {
                  uVar5 = uVar7;
                }
                uVar7 = uVar5;
              } while (1 < uVar14);
            }
            puVar12 = (undefined4 *)(iVar11 + uVar7 * 0x18);
            piVar24 = (int *)*puVar12;
            piVar13 = (int *)puVar12[1];
            piVar10 = (int *)((uint)piVar24 ^ (uint)piVar20 | (uint)piVar13 ^ (uint)piVar21);
            if (piVar10 != (int *)0x0) {
              piVar8 = (int *)((int)piVar13 - ((int)piVar21 + (uint)(piVar20 > piVar24)));
              if (piVar13 <= piVar21 &&
                  (uint)(piVar20 <= piVar24) <= (uint)((int)piVar13 - (int)piVar21)) {
                uVar7 = uVar7 + 1;
              }
              if (uVar7 == 0) {
                uVar7 = 0;
                goto LAB_0198a0a4;
              }
              uVar7 = uVar7 - 1;
            }
            if (uVar6 <= uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar7,uVar6,&DAT_01c03258);
            }
            iVar11 = iVar11 + uVar7 * 0x18;
            if (*(uint *)(iVar11 + 8) < (uint)piVar23[1]) {
              iVar16 = *piVar23 + *(uint *)(iVar11 + 8) * 0xc;
              piVar8 = *(int **)(iVar16 + 4);
              uVar7 = *(uint *)(iVar16 + 8);
            }
            else {
              piVar8 = (int *)0x0;
            }
            piVar13 = *(int **)(iVar11 + 0x10);
            piVar10 = *(int **)(iVar11 + 0x14);
            uVar5 = (uint)(piVar13 != (int *)0x0);
            uVar14 = uVar5;
          }
        }
      }
      else {
LAB_0198a0a4:
        uVar5 = 0;
        uVar14 = 2;
      }
    }
  }
  param_1[1] = puVar22;
  param_1[2] = uVar14;
  param_1[3] = piVar13;
  param_1[4] = uVar5;
  param_1[5] = piVar10;
  param_1[6] = piVar8;
  param_1[7] = uVar7;
LAB_01989ea4:
  *param_1 = uVar15;
  return;
}

