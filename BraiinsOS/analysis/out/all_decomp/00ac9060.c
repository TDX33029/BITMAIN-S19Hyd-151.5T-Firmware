// FUN_00ac9060 @ 00ac9060 size=388 calls_out=4 calls_in=6
// strings: 

void FUN_00ac9060(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint *puVar14;
  bool bVar15;
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
      uVar10 = *(undefined4 *)(param_1 + 0x70);
      puVar12 = *(undefined4 **)(param_1 + 0x74);
      if ((code *)*puVar12 != (code *)0x0) {
        (*(code *)*puVar12)(uVar10);
      }
LAB_00ac91a8:
      if (puVar12[1] != 0) goto LAB_00ac91b8;
    }
    else if (*(char *)(param_1 + 0x68) == '\x03') {
      FUN_00ac9e9c(param_1 + 0x70);
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0x70) == '\x03') {
      uVar10 = *(undefined4 *)(param_1 + 0x68);
      puVar12 = *(undefined4 **)(param_1 + 0x6c);
      if ((code *)*puVar12 != (code *)0x0) {
        (*(code *)*puVar12)(uVar10);
      }
      goto LAB_00ac91a8;
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0x70) == '\x03') {
      uVar10 = *(undefined4 *)(param_1 + 0x68);
      puVar12 = *(undefined4 **)(param_1 + 0x6c);
      pcVar4 = (code *)*puVar12;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar10);
      }
      if (puVar12[1] != 0) {
        thunk_FUN_016d3fb4(uVar10);
      }
    }
    if (*(int *)(param_1 + 0x7c) != 0) {
      uVar10 = *(undefined4 *)(param_1 + 0x74);
LAB_00ac91b8:
      thunk_FUN_016d3fb4(uVar10);
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
    goto switchD_00ac9080_default;
  }
  bVar15 = *(char *)(param_1 + 0x3e) != '\0';
  iVar2 = 0;
  if (bVar15) {
    iVar2 = *(int *)(param_1 + 0x28);
  }
  if (bVar15 && iVar2 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2c));
  }
  *(undefined1 *)(param_1 + 0x3e) = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar2 = *(int *)(param_1 + 0x1c);
    if (iVar2 == 0) {
      return;
    }
    iVar3 = FUN_016d3bc8();
    uVar13 = *(byte *)(iVar2 + -3) & 0x1f;
    if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
       (uVar7 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar5 = uVar7 - 0x10, uVar7 == 0)) {
      iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) << 4
      ;
    }
    uVar7 = (uint)(*(byte *)(iVar2 + -3) >> 5);
    iVar11 = *(int *)(iVar3 + 8) + 0x10;
    iVar8 = iVar5 * uVar13 + iVar5 + -4;
    iVar5 = iVar11 + iVar8;
    if (4 < uVar7) {
      if (uVar7 != 5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar4)();
      }
      uVar7 = *(uint *)(iVar5 + -4);
      if (uVar7 < 5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar4)();
      }
      if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar4)();
      }
    }
    if ((uint)(iVar5 - iVar2) < uVar7) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar4)();
    }
    if (*(char *)(iVar5 - uVar7) != '\0') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar4)();
    }
    if (*(char *)(iVar11 + iVar8) != '\0') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar4)();
    }
    bVar1 = *(byte *)(iVar3 + 0x14);
    uVar7 = 1 << uVar13;
    *(undefined1 *)(iVar2 + -3) = 0xff;
    *(undefined2 *)(iVar2 + -2) = 0;
    do {
      uVar9 = *(uint *)(iVar3 + 0x10);
      uVar6 = *(uint *)(iVar3 + 0xc) | uVar9;
      if ((uVar7 & uVar6) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar4)();
      }
      if ((uVar9 == 0) || (uVar6 + uVar7 == (2 << (bVar1 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar3,uVar13);
        FUN_016dddc0(&DAT_018ddd48);
        if (iStack_24 == 0) {
          return;
        }
        puVar12 = (undefined4 *)FUN_016d2bc8();
        uVar10 = *puVar12;
        FUN_016d6ac4(uStack_28,iStack_24);
        *puVar12 = uVar10;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar3 + 0x10) = uVar7 + uVar9;
        return;
      }
      puVar14 = (uint *)(iVar3 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar14);
        uVar6 = *puVar14;
        if (uVar9 != uVar6) goto LAB_016d409c;
        bVar15 = (bool)hasExclusiveAccess(puVar14);
      } while (!bVar15);
      *puVar14 = uVar7 + uVar9;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar9 == uVar6) {
        return;
      }
    } while( true );
  }
switchD_00ac9080_default:
  return;
}

