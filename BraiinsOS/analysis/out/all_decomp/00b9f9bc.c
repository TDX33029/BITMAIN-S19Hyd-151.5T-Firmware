// FUN_00b9f9bc @ 00b9f9bc size=408 calls_out=4 calls_in=7
// strings: 

void FUN_00b9f9bc(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint *puVar15;
  bool bVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  switch(*(undefined1 *)(param_1 + 0x40)) {
  case 3:
    if (*(int *)(param_1 + 0x48) == 0) {
      return;
    }
    FUN_00c8204c(*(int *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),1);
    return;
  case 4:
    if (*(char *)(param_1 + 0x68) == '\x04') {
      uVar11 = *(undefined4 *)(param_1 + 0x70);
      puVar13 = *(undefined4 **)(param_1 + 0x74);
      if ((code *)*puVar13 != (code *)0x0) {
        (*(code *)*puVar13)(uVar11);
      }
LAB_00b9fb18:
      if (puVar13[1] != 0) goto LAB_00b9fb28;
    }
    else if (*(char *)(param_1 + 0x68) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x10c);
      bVar16 = cVar1 == '\x03';
      if (bVar16) {
        cVar1 = *(char *)(param_1 + 0x104);
      }
      if (bVar16 && cVar1 == '\x03') {
        FUN_0081c020(param_1 + 0xb0);
      }
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0x70) == '\x03') {
      uVar11 = *(undefined4 *)(param_1 + 0x68);
      puVar13 = *(undefined4 **)(param_1 + 0x6c);
      if ((code *)*puVar13 != (code *)0x0) {
        (*(code *)*puVar13)(uVar11);
      }
      goto LAB_00b9fb18;
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0x70) == '\x03') {
      uVar11 = *(undefined4 *)(param_1 + 0x68);
      puVar13 = *(undefined4 **)(param_1 + 0x6c);
      pcVar5 = (code *)*puVar13;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar11);
      }
      if (puVar13[1] != 0) {
        thunk_FUN_016d3fb4(uVar11);
      }
    }
    if (*(int *)(param_1 + 0x7c) != 0) {
      uVar11 = *(undefined4 *)(param_1 + 0x74);
LAB_00b9fb28:
      thunk_FUN_016d3fb4(uVar11);
    }
    break;
  case 7:
    if (*(int *)(param_1 + 0x54) != 0) {
      FUN_00c8204c(*(int *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),1);
    }
    if (*(int *)(param_1 + 0x48) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x4c));
    }
    *(undefined1 *)(param_1 + 0x3f) = 0;
    break;
  case 8:
    FUN_00a07b4c(param_1 + 0x48);
    break;
  default:
    goto switchD_00b9f9dc_default;
  }
  bVar16 = *(char *)(param_1 + 0x3e) != '\0';
  iVar3 = 0;
  if (bVar16) {
    iVar3 = *(int *)(param_1 + 0x28);
  }
  if (bVar16 && iVar3 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2c));
  }
  *(undefined1 *)(param_1 + 0x3e) = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar3 = *(int *)(param_1 + 0x1c);
    if (iVar3 == 0) {
      return;
    }
    iVar4 = FUN_016d3bc8();
    uVar14 = *(byte *)(iVar3 + -3) & 0x1f;
    if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
       (uVar8 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar6 = uVar8 - 0x10, uVar8 == 0)) {
      iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4
      ;
    }
    uVar8 = (uint)(*(byte *)(iVar3 + -3) >> 5);
    iVar12 = *(int *)(iVar4 + 8) + 0x10;
    iVar9 = iVar6 * uVar14 + iVar6 + -4;
    iVar6 = iVar12 + iVar9;
    if (4 < uVar8) {
      if (uVar8 != 5) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar5)();
      }
      uVar8 = *(uint *)(iVar6 + -4);
      if (uVar8 < 5) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar5)();
      }
      if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar5)();
      }
    }
    if ((uint)(iVar6 - iVar3) < uVar8) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar5)();
    }
    if (*(char *)(iVar6 - uVar8) != '\0') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar5)();
    }
    if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar5)();
    }
    bVar2 = *(byte *)(iVar4 + 0x14);
    uVar8 = 1 << uVar14;
    *(undefined1 *)(iVar3 + -3) = 0xff;
    *(undefined2 *)(iVar3 + -2) = 0;
    do {
      uVar10 = *(uint *)(iVar4 + 0x10);
      uVar7 = *(uint *)(iVar4 + 0xc) | uVar10;
      if ((uVar8 & uVar7) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar5)();
      }
      if ((uVar10 == 0) || (uVar7 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar4,uVar14);
        FUN_016dddc0(&DAT_018ddd48);
        if (iStack_24 == 0) {
          return;
        }
        puVar13 = (undefined4 *)FUN_016d2bc8();
        uVar11 = *puVar13;
        FUN_016d6ac4(uStack_28,iStack_24);
        *puVar13 = uVar11;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar4 + 0x10) = uVar8 + uVar10;
        return;
      }
      puVar15 = (uint *)(iVar4 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar15);
        uVar7 = *puVar15;
        if (uVar10 != uVar7) goto LAB_016d409c;
        bVar16 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar16);
      *puVar15 = uVar8 + uVar10;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar10 == uVar7) {
        return;
      }
    } while( true );
  }
switchD_00b9f9dc_default:
  return;
}

