// FUN_016a1db0 @ 016a1db0 size=524 calls_out=4 calls_in=3
// strings: SetGloba | SetGloba | lDefaultError | SetGloba | SetGloba | SetGloba

void FUN_016a1db0(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  undefined *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  
  piVar3 = param_1 + 2;
  if (*piVar3 != 0 || param_1[3] != 0) {
    DataMemoryBarrier(0xb);
    uVar6 = DAT_018dd984 == 2 & DAT_018daa70;
    puVar11 = DAT_018daa78;
    piVar2 = DAT_018daa74;
    if (DAT_018dd984 != 2) {
      puVar11 = &DAT_018ae394;
      piVar2 = (int *)s_SetGloba_00414c05;
    }
    if (uVar6 == 1) {
      do {
        iVar4 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar4 + 1;
      if (iVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xfdee,0x16a1fb8);
        (*pcVar5)();
      }
      iVar4 = *(int *)(puVar11 + 8);
      *piVar3 = 0;
      param_1[3] = 0;
      piVar3 = (int *)((int)piVar2 + (iVar4 - 1U & 0xfffffff8) + 8);
    }
    else {
      *piVar3 = 0;
      param_1[3] = 0;
      piVar3 = piVar2;
    }
    (**(code **)(puVar11 + 0x40))(piVar3);
    if (uVar6 != 0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015614d8(piVar2,puVar11);
      }
    }
  }
  iVar4 = param_1[0xb];
  if (iVar4 != 0) {
    puVar7 = (uint *)param_1[8];
    puVar10 = puVar7 + 1;
    uVar6 = ~*puVar7 & 0x80808080;
    do {
      puVar9 = puVar10;
      if (uVar6 == 0) {
        do {
          puVar10 = puVar9 + 1;
          uVar6 = *puVar9;
          puVar7 = puVar7 + -0x18;
          puVar9 = puVar10;
        } while ((uVar6 & 0x80808080) == 0x80808080);
        uVar6 = uVar6 & 0x80808080 ^ 0x80808080;
      }
      uVar8 = (uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                            (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3;
      uVar12 = puVar7[uVar8 * -6 + -2];
      puVar13 = (undefined4 *)puVar7[uVar8 * -6 + -1];
      pcVar5 = (code *)*puVar13;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar12);
      }
      if (puVar13[1] != 0) {
        thunk_FUN_016d3fb4(uVar12);
      }
      iVar4 = iVar4 + -1;
      uVar6 = uVar6 - 1 & uVar6;
    } while (iVar4 != 0);
    uVar6 = 0;
    uVar8 = param_1[9];
    if (uVar8 != 0) {
      FUN_016dd606(param_1[8],0xff,uVar8 + 5);
      uVar6 = uVar8;
      if (7 < uVar8) {
        uVar6 = (uVar8 + 1 & 0xfffffff8) - (uVar8 + 1 >> 3);
      }
    }
    param_1[10] = uVar6;
    param_1[0xb] = 0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

