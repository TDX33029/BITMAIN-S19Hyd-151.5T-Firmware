// FUN_010ce738 @ 010ce738 size=964 calls_out=4 calls_in=0
// strings: 

void FUN_010ce738(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  undefined8 uVar19;
  uint local_4c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  piVar15 = (int *)*param_2;
  if (piVar15 == (int *)0x0) {
    piVar15 = (int *)thunk_FUN_016d4a50(0x10);
    if (piVar15 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x10);
    }
    *param_2 = piVar15;
    *piVar15 = (int)&DAT_005674cc;
    piVar15[1] = 0;
    piVar15[2] = 0;
    piVar15[3] = 0;
  }
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(0x40);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x40);
  }
  uVar7 = param_3[1];
  uVar9 = param_3[2];
  uVar11 = param_3[3];
  uVar13 = param_3[4];
  *puVar2 = *param_3;
  puVar2[1] = uVar7;
  puVar2[2] = uVar9;
  puVar2[3] = uVar11;
  puVar2[4] = uVar13;
  uVar7 = param_3[6];
  uVar9 = param_3[7];
  uVar11 = param_3[8];
  uVar13 = param_3[9];
  puVar2[5] = param_3[5];
  puVar2[6] = uVar7;
  puVar2[7] = uVar9;
  puVar2[8] = uVar11;
  puVar2[9] = uVar13;
  uVar7 = param_3[0xb];
  uVar9 = param_3[0xc];
  uVar11 = param_3[0xd];
  uVar13 = param_3[0xe];
  uVar14 = param_3[0xf];
  puVar2[10] = param_3[10];
  puVar2[0xb] = uVar7;
  puVar2[0xc] = uVar9;
  puVar2[0xd] = uVar11;
  puVar2[0xe] = uVar13;
  puVar2[0xf] = uVar14;
  if (piVar15[2] == 0) {
    FUN_0109f6b4(piVar15);
  }
  puVar3 = (uint *)*piVar15;
  uVar5 = piVar15[1];
  uVar12 = uVar5 & 0x6699a42b;
  iVar17 = 0;
  bVar1 = false;
  do {
    uVar16 = *(uint *)((int)puVar3 + uVar12);
    uVar10 = uVar16 & 0x80808080;
    uVar18 = (uVar10 ^ 0x80808080) & (uVar16 ^ 0x33333333) + 0xfefefeff;
    while (uVar18 != 0) {
      uVar8 = uVar12 + ((uint)LZCOUNT(uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 |
                                      (uVar18 >> 0x10 & 0xff) << 8 | uVar18 >> 0x18) >> 3) & uVar5;
      uVar18 = uVar18 - 1 & uVar18;
      if ((puVar3[uVar8 * -6 + -6] == 0x7be5ccb3 && puVar3[uVar8 * -6 + -4] == 0x6699a42b) &&
          (puVar3[uVar8 * -6 + -5] == 0xc976bcf6 && puVar3[uVar8 * -6 + -3] == 0xf3e2f64a)) {
        uVar5 = puVar3[uVar8 * -6 + -2];
        uVar12 = puVar3[uVar8 * -6 + -1];
        puVar3[uVar8 * -6 + -2] = (uint)puVar2;
        puVar3[uVar8 * -6 + -1] = (uint)&DAT_018853a8;
        uVar19 = (**(code **)(uVar12 + 0x1c))(uVar5);
        puVar6 = (undefined4 *)((ulonglong)uVar19 >> 0x20);
        puVar4 = (undefined4 *)uVar19;
        (*(code *)puVar6[3])(&local_38,puVar4);
        puVar2 = puVar4;
        if ((local_38 != 0x7be5ccb3 || iStack_30 != 0x6699a42b) ||
            (iStack_34 != -0x3689430a || iStack_2c != -0xc1d09b6)) {
          puVar2 = (undefined4 *)0x0;
          if ((code *)*puVar6 != (code *)0x0) {
            (*(code *)*puVar6)(puVar4);
          }
          if (puVar6[1] != 0) {
            thunk_FUN_016d3fb4(puVar4);
          }
        }
        if (puVar2 == (undefined4 *)0x0) {
          *(undefined2 *)param_1 = 2;
          return;
        }
        uVar7 = puVar4[1];
        uVar9 = puVar4[2];
        uVar11 = puVar4[3];
        uVar13 = puVar4[4];
        *param_1 = *puVar4;
        param_1[1] = uVar7;
        param_1[2] = uVar9;
        param_1[3] = uVar11;
        param_1[4] = uVar13;
        uVar7 = puVar4[6];
        uVar9 = puVar4[7];
        uVar11 = puVar4[8];
        uVar13 = puVar4[9];
        param_1[5] = puVar4[5];
        param_1[6] = uVar7;
        param_1[7] = uVar9;
        param_1[8] = uVar11;
        param_1[9] = uVar13;
        uVar7 = puVar4[0xb];
        uVar9 = puVar4[0xc];
        uVar11 = puVar4[0xd];
        uVar13 = puVar4[0xe];
        uVar14 = puVar4[0xf];
        param_1[10] = puVar4[10];
        param_1[0xb] = uVar7;
        param_1[0xc] = uVar9;
        param_1[0xd] = uVar11;
        param_1[0xe] = uVar13;
        param_1[0xf] = uVar14;
        thunk_FUN_016d3fb4(puVar2);
        return;
      }
    }
    if (bVar1) {
LAB_010ce900:
      if ((uVar10 & uVar16 << 1) != 0) {
        uVar12 = (uint)*(char *)((int)puVar3 + local_4c);
        if (-1 < (int)uVar12) {
          uVar12 = *puVar3 & 0x80808080;
          uVar10 = LZCOUNT((*puVar3 & 0x80) << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                           (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18);
          uVar12 = (uint)*(byte *)((int)puVar3 + (uVar10 >> 3));
          local_4c = uVar10 >> 3;
        }
        iVar17 = piVar15[3];
        piVar15[2] = piVar15[2] - (uVar12 & 1);
        *(undefined2 *)param_1 = 2;
        *(undefined1 *)((int)puVar3 + local_4c) = 0x33;
        *(undefined1 *)((int)puVar3 + (uVar5 & local_4c - 4) + 4) = 0x33;
        piVar15[3] = iVar17 + 1;
        puVar3[local_4c * -6 + -6] = 0x7be5ccb3;
        puVar3[local_4c * -6 + -4] = 0x6699a42b;
        puVar3[local_4c * -6 + -5] = 0xc976bcf6;
        puVar3[local_4c * -6 + -1] = (uint)&DAT_018853a8;
        puVar3[local_4c * -6 + -2] = (uint)puVar2;
        puVar3[local_4c * -6 + -3] = 0xf3e2f64a;
        return;
      }
      bVar1 = true;
    }
    else {
      if (uVar10 != 0) {
        local_4c = uVar12 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                           (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                   uVar5;
        goto LAB_010ce900;
      }
      bVar1 = false;
    }
    iVar17 = iVar17 + 4;
    uVar12 = iVar17 + uVar12 & uVar5;
  } while( true );
}

