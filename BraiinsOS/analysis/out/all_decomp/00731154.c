// FUN_00731154 @ 00731154 size=204 calls_out=2 calls_in=3
// strings: 

void FUN_00731154(byte *param_1)

{
  byte bVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar5 = (uint)*param_1;
  if (7 < uVar5) {
    FUN_0073102c(param_1 + 4);
    return;
  }
  if ((1 << uVar5 & 0xd7U) != 0) {
    return;
  }
  if (uVar5 != 3) {
                    /* WARNING: Could not recover jumptable at 0x007311bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 4) + 0x10))
              (param_1 + 0x10,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    return;
  }
  uVar5 = *(uint *)(param_1 + 4);
  uVar7 = 2;
  if ((int)uVar5 < 0) {
    uVar7 = uVar5 ^ 0x80000000;
  }
  if (uVar7 == 0) {
    if (param_1[8] == 3) {
      puVar3 = *(undefined4 **)(param_1 + 0xc);
      uVar12 = *puVar3;
      puVar14 = (undefined4 *)puVar3[1];
      pcVar6 = (code *)*puVar14;
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(uVar12);
      }
      if (puVar14[1] != 0) {
        thunk_FUN_016d3fb4(uVar12);
      }
      goto LAB_014b47f4;
    }
  }
  else if (uVar7 != 1 && uVar5 != 0) {
    puVar3 = *(undefined4 **)(param_1 + 8);
LAB_014b47f4:
    if (puVar3 == (undefined4 *)0x0) {
      return;
    }
    iVar4 = FUN_016d3bc8();
    uVar5 = *(byte *)((int)puVar3 + -3) & 0x1f;
    if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
       (uVar7 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar8 = uVar7 - 0x10, uVar7 == 0)) {
      iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4
      ;
    }
    uVar7 = (uint)(*(byte *)((int)puVar3 + -3) >> 5);
    iVar13 = *(int *)(iVar4 + 8) + 0x10;
    iVar10 = iVar8 * uVar5 + iVar8 + -4;
    iVar8 = iVar13 + iVar10;
    if (4 < uVar7) {
      if (uVar7 != 5) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar6)();
      }
      uVar7 = *(uint *)(iVar8 + -4);
      if (uVar7 < 5) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar6)();
      }
      if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar6 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar6)();
      }
    }
    if ((uint)(iVar8 - (int)puVar3) < uVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar6)();
    }
    if (*(char *)(iVar8 - uVar7) != '\0') {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar6)();
    }
    if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar6)();
    }
    bVar1 = *(byte *)(iVar4 + 0x14);
    uVar7 = 1 << uVar5;
    *(undefined1 *)((int)puVar3 + -3) = 0xff;
    *(undefined2 *)((int)puVar3 + -2) = 0;
    do {
      uVar11 = *(uint *)(iVar4 + 0x10);
      uVar9 = *(uint *)(iVar4 + 0xc) | uVar11;
      if ((uVar7 & uVar9) != 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar6)();
      }
      if ((uVar11 == 0) || (uVar9 + uVar7 == (2 << (bVar1 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar4,uVar5);
        FUN_016dddc0(&DAT_018ddd48);
        if (iStack_24 == 0) {
          return;
        }
        puVar3 = (undefined4 *)FUN_016d2bc8();
        uVar12 = *puVar3;
        FUN_016d6ac4(uStack_28,iStack_24);
        *puVar3 = uVar12;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar4 + 0x10) = uVar7 + uVar11;
        return;
      }
      puVar15 = (uint *)(iVar4 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar15);
        uVar9 = *puVar15;
        if (uVar11 != uVar9) goto LAB_016d409c;
        bVar2 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar2);
      *puVar15 = uVar7 + uVar11;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar11 == uVar9) {
        return;
      }
    } while( true );
  }
  return;
}

