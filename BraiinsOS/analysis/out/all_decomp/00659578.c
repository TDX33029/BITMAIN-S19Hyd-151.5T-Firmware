// FUN_00659578 @ 00659578 size=248 calls_out=3 calls_in=2
// strings: 

void FUN_00659578(int param_1)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  cVar1 = *(char *)(param_1 + 0x48);
  if (cVar1 == '\0') {
    if (*(int *)(param_1 + 0x28) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2c));
    }
    if ((*(uint *)(param_1 + 0x34) & 0x7fffffff) == 0) {
      return;
    }
    iVar5 = *(int *)(param_1 + 0x38);
    if (iVar5 == 0) {
      return;
    }
    iVar6 = FUN_016d3bc8();
    uVar16 = *(byte *)(iVar5 + -3) & 0x1f;
    if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
       (uVar12 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar8 = uVar12 - 0x10, uVar12 == 0)) {
      iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4
      ;
    }
    uVar12 = (uint)(*(byte *)(iVar5 + -3) >> 5);
    iVar15 = *(int *)(iVar6 + 8) + 0x10;
    iVar13 = iVar8 * uVar16 + iVar8 + -4;
    iVar8 = iVar15 + iVar13;
    if (4 < uVar12) {
      if (uVar12 != 5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar2)();
      }
      uVar12 = *(uint *)(iVar8 + -4);
      if (uVar12 < 5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar2)();
      }
      if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar2)();
      }
    }
    if ((uint)(iVar8 - iVar5) < uVar12) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar2)();
    }
    if (*(char *)(iVar8 - uVar12) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar2)();
    }
    if (*(char *)(iVar15 + iVar13) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar2)();
    }
    bVar3 = *(byte *)(iVar6 + 0x14);
    uVar12 = 1 << uVar16;
    *(undefined1 *)(iVar5 + -3) = 0xff;
    *(undefined2 *)(iVar5 + -2) = 0;
    do {
      uVar14 = *(uint *)(iVar6 + 0x10);
      uVar9 = *(uint *)(iVar6 + 0xc) | uVar14;
      if ((uVar12 & uVar9) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar2)();
      }
      if ((uVar14 == 0) || (uVar9 + uVar12 == (2 << (bVar3 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar6,uVar16);
        FUN_016dddc0(&DAT_018ddd48);
        if (iStack_24 == 0) {
          return;
        }
        puVar7 = (undefined4 *)FUN_016d2bc8();
        uVar10 = *puVar7;
        FUN_016d6ac4(uStack_28,iStack_24);
        *puVar7 = uVar10;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar6 + 0x10) = uVar12 + uVar14;
        return;
      }
      puVar17 = (uint *)(iVar6 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar17);
        uVar9 = *puVar17;
        if (uVar14 != uVar9) goto LAB_016d409c;
        bVar4 = (bool)hasExclusiveAccess(puVar17);
      } while (!bVar4);
      *puVar17 = uVar12 + uVar14;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar14 == uVar9) {
        return;
      }
    } while( true );
  }
  if (cVar1 == '\x03') {
    FUN_007aaae4(param_1 + 0x50);
    FUN_005c3320(param_1 + 0x50);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0xb0) == '\x03') {
      piVar11 = (int *)(param_1 + 0x80);
      iVar5 = *piVar11;
    }
    else {
      if (*(char *)(param_1 + 0xb0) != '\0') goto LAB_006595fc;
      piVar11 = (int *)(param_1 + 0x58);
      iVar5 = *piVar11;
    }
    if (iVar5 != 0) {
      thunk_FUN_016d3fb4(piVar11[1]);
    }
    if ((piVar11[3] & 0x7fffffffU) != 0) {
      thunk_FUN_016d3fb4(piVar11[4]);
    }
  }
LAB_006595fc:
  *(undefined1 *)(param_1 + 0x4a) = 0;
  if (*(char *)(param_1 + 0x49) != '\0') {
    FUN_005c3320(param_1);
  }
  *(undefined1 *)(param_1 + 0x4b) = 0;
  *(undefined1 *)(param_1 + 0x49) = 0;
  return;
}

