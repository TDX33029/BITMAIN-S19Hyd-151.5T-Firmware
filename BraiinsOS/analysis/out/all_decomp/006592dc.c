// FUN_006592dc @ 006592dc size=220 calls_out=3 calls_in=1
// strings: 

void FUN_006592dc(int param_1)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  cVar1 = *(char *)(param_1 + 0x47);
  if (cVar1 == '\0') {
    if (*(int *)(param_1 + 0x24) == 0) {
      return;
    }
    iVar6 = *(int *)(param_1 + 0x20);
    if (iVar6 == 0) {
      return;
    }
    iVar7 = FUN_016d3bc8();
    uVar15 = *(byte *)(iVar6 + -3) & 0x1f;
    if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
       (uVar11 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar8 = uVar11 - 0x10, uVar11 == 0)) {
      iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2) << 4
      ;
    }
    uVar11 = (uint)(*(byte *)(iVar6 + -3) >> 5);
    iVar14 = *(int *)(iVar7 + 8) + 0x10;
    iVar12 = iVar8 * uVar15 + iVar8 + -4;
    iVar8 = iVar14 + iVar12;
    if (4 < uVar11) {
      if (uVar11 != 5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar2)();
      }
      uVar11 = *(uint *)(iVar8 + -4);
      if (uVar11 < 5) {
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
    if ((uint)(iVar8 - iVar6) < uVar11) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar2)();
    }
    if (*(char *)(iVar8 - uVar11) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar2)();
    }
    if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar2)();
    }
    bVar3 = *(byte *)(iVar7 + 0x14);
    uVar11 = 1 << uVar15;
    *(undefined1 *)(iVar6 + -3) = 0xff;
    *(undefined2 *)(iVar6 + -2) = 0;
    do {
      uVar13 = *(uint *)(iVar7 + 0x10);
      uVar9 = *(uint *)(iVar7 + 0xc) | uVar13;
      if ((uVar11 & uVar9) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar2)();
      }
      if ((uVar13 == 0) || (uVar9 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar7,uVar15);
        FUN_016dddc0(&DAT_018ddd48);
        if (iStack_24 == 0) {
          return;
        }
        puVar5 = (undefined4 *)FUN_016d2bc8();
        uVar10 = *puVar5;
        FUN_016d6ac4(uStack_28,iStack_24);
        *puVar5 = uVar10;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar7 + 0x10) = uVar11 + uVar13;
        return;
      }
      puVar16 = (uint *)(iVar7 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar16);
        uVar9 = *puVar16;
        if (uVar13 != uVar9) goto LAB_016d409c;
        bVar4 = (bool)hasExclusiveAccess(puVar16);
      } while (!bVar4);
      *puVar16 = uVar11 + uVar13;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar13 == uVar9) {
        return;
      }
    } while( true );
  }
  if (cVar1 == '\x03') {
    FUN_007aa944(param_1 + 0x48);
    FUN_005c3320(param_1 + 0x48);
    goto LAB_00659390;
  }
  if (cVar1 != '\x04') {
    return;
  }
  if (*(char *)(param_1 + 0xe0) == '\x03') {
    if (*(char *)(param_1 + 0xdc) != '\0') goto LAB_00659390;
    if (*(int *)(param_1 + 0xc0) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xbc));
    }
    if (*(int *)(param_1 + 0xac) == 0) goto LAB_00659390;
    puVar5 = (undefined4 *)(param_1 + 0xb0);
  }
  else {
    if ((*(char *)(param_1 + 0xe0) != '\0') || (*(int *)(param_1 + 0x4c) == 0)) goto LAB_00659390;
    puVar5 = (undefined4 *)(param_1 + 0x48);
  }
  thunk_FUN_016d3fb4(*puVar5);
LAB_00659390:
  *(undefined1 *)(param_1 + 0x45) = 0;
  if (*(char *)(param_1 + 0x44) != '\0') {
    FUN_005c3320(param_1);
  }
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  return;
}

