// FUN_00fa42e8 @ 00fa42e8 size=872 calls_out=1 calls_in=1
// strings: 

longlong FUN_00fa42e8(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined8 uVar14;
  
  iVar2 = *param_1;
  if (iVar2 == 0) {
LAB_00fa4618:
    puVar8 = (undefined4 *)param_1[10];
    uVar5 = 0;
    if (puVar8 == (undefined4 *)0x0) {
      return (ulonglong)param_2 << 0x20;
    }
    puVar6 = (undefined4 *)param_1[0xb];
    if (puVar8 != puVar6) {
      param_1[10] = (int)(puVar8 + 2);
LAB_00fa463c:
      uVar5 = *puVar8;
      puVar6 = (undefined4 *)puVar8[1];
    }
    return CONCAT44(puVar6,uVar5);
  }
  if (param_1[3] != 0) {
    iVar7 = param_1[4];
    iVar3 = param_1[1];
    param_2 = param_1[2];
    iVar1 = param_2 << 3;
    iVar4 = param_1[3];
LAB_00fa4324:
    if (iVar4 != iVar7) {
      iVar11 = iVar4 + 0x10;
      puVar8 = (undefined4 *)(iVar4 + 8);
      param_1[3] = iVar11;
      piVar9 = (int *)(*(int *)(iVar2 + 4) + 4);
      for (iVar13 = *(int *)(iVar2 + 8) << 3; iVar13 != 0; iVar13 = iVar13 + -8) {
        if (*piVar9 == *(int *)(iVar4 + 0xc)) {
          uVar14 = thunk_FUN_016dd50a(piVar9[-1],*puVar8);
          param_2 = (uint)((ulonglong)uVar14 >> 0x20);
          if ((int)uVar14 == 0) {
            iVar4 = iVar11;
            goto LAB_00fa4324;
          }
        }
        piVar9 = piVar9 + 2;
      }
      piVar9 = (int *)(iVar3 + 4);
      iVar13 = iVar1;
      do {
        if (iVar13 == 0) goto LAB_00fa463c;
        if (*piVar9 == *(int *)(iVar4 + 0xc)) {
          uVar14 = thunk_FUN_016dd50a(piVar9[-1],*puVar8);
          param_2 = (uint)((ulonglong)uVar14 >> 0x20);
          if ((int)uVar14 == 0) goto code_r0x00fa43cc;
        }
        iVar13 = iVar13 + -8;
        piVar9 = piVar9 + 2;
      } while( true );
    }
  }
  puVar6 = (undefined4 *)param_1[7];
  param_1[3] = 0;
  if (puVar6 != (undefined4 *)0x0) {
    iVar4 = param_1[1];
    param_2 = param_1[2];
    puVar12 = (undefined4 *)param_1[8];
    iVar3 = param_1[9];
    iVar1 = param_2 << 3;
LAB_00fa4410:
    while (puVar6 != puVar12) {
      uVar5 = *puVar6;
      iVar11 = puVar6[1];
      puVar6 = puVar6 + 2;
      param_1[7] = (int)puVar6;
      iVar7 = *(int *)(iVar3 + 0x48);
      for (iVar13 = *(int *)(iVar3 + 0x4c) * 0x134; iVar13 != 0; iVar13 = iVar13 + -0x134) {
        if (*(int *)(iVar7 + 0x118) == iVar11) {
          uVar14 = thunk_FUN_016dd50a(*(undefined4 *)(iVar7 + 0x114),uVar5,iVar11);
          param_2 = (uint)((ulonglong)uVar14 >> 0x20);
          if ((int)uVar14 == 0) {
            param_2 = *(uint *)(iVar7 + 0x68);
            iVar7 = *(int *)(iVar7 + 100);
            iVar13 = iVar7 + param_2 * 0x10;
            param_1[3] = iVar7;
            param_1[4] = iVar13;
            goto LAB_00fa4484;
          }
        }
        iVar7 = iVar7 + 0x134;
      }
    }
  }
  param_1[3] = 0;
  if (param_1[5] != 0) {
    iVar3 = param_1[1];
    param_2 = param_1[2];
    iVar7 = param_1[6];
    iVar1 = param_2 << 3;
    iVar4 = param_1[5];
LAB_00fa455c:
    if (iVar4 != iVar7) {
      iVar11 = iVar4 + 0x10;
      puVar8 = (undefined4 *)(iVar4 + 8);
      param_1[5] = iVar11;
      piVar9 = (int *)(*(int *)(iVar2 + 4) + 4);
      for (iVar13 = *(int *)(iVar2 + 8) << 3; iVar13 != 0; iVar13 = iVar13 + -8) {
        if (*piVar9 == *(int *)(iVar4 + 0xc)) {
          uVar14 = thunk_FUN_016dd50a(piVar9[-1],*puVar8);
          param_2 = (uint)((ulonglong)uVar14 >> 0x20);
          if ((int)uVar14 == 0) {
            iVar4 = iVar11;
            goto LAB_00fa455c;
          }
        }
        piVar9 = piVar9 + 2;
      }
      piVar9 = (int *)(iVar3 + 4);
      iVar13 = iVar1;
      do {
        if (iVar13 == 0) goto LAB_00fa463c;
        if (*piVar9 == *(int *)(iVar4 + 0xc)) {
          uVar14 = thunk_FUN_016dd50a(piVar9[-1],*puVar8);
          param_2 = (uint)((ulonglong)uVar14 >> 0x20);
          if ((int)uVar14 == 0) goto code_r0x00fa4600;
        }
        iVar13 = iVar13 + -8;
        piVar9 = piVar9 + 2;
      } while( true );
    }
  }
  *param_1 = 0;
  param_1[5] = 0;
  goto LAB_00fa4618;
code_r0x00fa43cc:
  iVar4 = iVar11;
  goto LAB_00fa4324;
LAB_00fa4484:
  if (iVar7 != iVar13) {
    iVar10 = iVar7 + 0x10;
    puVar8 = (undefined4 *)(iVar7 + 8);
    param_1[3] = iVar10;
    piVar9 = (int *)(*(int *)(iVar2 + 4) + 4);
    for (iVar11 = *(int *)(iVar2 + 8) << 3; iVar11 != 0; iVar11 = iVar11 + -8) {
      if (*piVar9 == *(int *)(iVar7 + 0xc)) {
        uVar14 = thunk_FUN_016dd50a(piVar9[-1],*puVar8);
        param_2 = (uint)((ulonglong)uVar14 >> 0x20);
        if ((int)uVar14 == 0) {
          iVar7 = iVar10;
          goto LAB_00fa4484;
        }
      }
      piVar9 = piVar9 + 2;
    }
    iVar11 = iVar1;
    piVar9 = (int *)(iVar4 + 4);
    do {
      if (iVar11 == 0) goto LAB_00fa463c;
      if (*piVar9 == *(int *)(iVar7 + 0xc)) {
        uVar14 = thunk_FUN_016dd50a(piVar9[-1],*puVar8);
        param_2 = (uint)((ulonglong)uVar14 >> 0x20);
        if ((int)uVar14 == 0) goto code_r0x00fa4524;
      }
      iVar11 = iVar11 + -8;
      piVar9 = piVar9 + 2;
    } while( true );
  }
  goto LAB_00fa4410;
code_r0x00fa4524:
  iVar7 = iVar10;
  goto LAB_00fa4484;
code_r0x00fa4600:
  iVar4 = iVar11;
  goto LAB_00fa455c;
}

