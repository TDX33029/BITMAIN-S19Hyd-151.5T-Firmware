// FUN_008ab588 @ 008ab588 size=604 calls_out=4 calls_in=2
// strings: 

void FUN_008ab588(int *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint *puVar15;
  bool bVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 != 0 || param_1[1] != 0) {
    FUN_00a07b4c();
    return;
  }
  cVar1 = (char)param_1[0x4d];
  bVar16 = cVar1 == '\x03';
  if (bVar16) {
    cVar1 = *(char *)((int)param_1 + 0x122);
  }
  if (!bVar16 || cVar1 != '\x03') {
    return;
  }
  if ((char)param_1[0x44] == '\0') {
    if (param_1[2] == 0) {
      return;
    }
    iVar3 = param_1[3];
LAB_014b47f4:
    if (iVar3 == 0) {
      return;
    }
    iVar5 = FUN_016d3bc8();
    uVar14 = *(byte *)(iVar3 + -3) & 0x1f;
    if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
       (uVar9 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar6 = uVar9 - 0x10, uVar9 == 0)) {
      iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4
      ;
    }
    uVar9 = (uint)(*(byte *)(iVar3 + -3) >> 5);
    iVar12 = *(int *)(iVar5 + 8) + 0x10;
    iVar10 = iVar6 * uVar14 + iVar6 + -4;
    iVar6 = iVar12 + iVar10;
    if (4 < uVar9) {
      if (uVar9 != 5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar4)();
      }
      uVar9 = *(uint *)(iVar6 + -4);
      if (uVar9 < 5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar4)();
      }
      if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar4)();
      }
    }
    if ((uint)(iVar6 - iVar3) < uVar9) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar4)();
    }
    if (*(char *)(iVar6 - uVar9) != '\0') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar4)();
    }
    if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar4)();
    }
    bVar2 = *(byte *)(iVar5 + 0x14);
    uVar9 = 1 << uVar14;
    *(undefined1 *)(iVar3 + -3) = 0xff;
    *(undefined2 *)(iVar3 + -2) = 0;
    do {
      uVar11 = *(uint *)(iVar5 + 0x10);
      uVar7 = *(uint *)(iVar5 + 0xc) | uVar11;
      if ((uVar9 & uVar7) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar4)();
      }
      if ((uVar11 == 0) || (uVar7 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar5,uVar14);
        FUN_016dddc0(&DAT_018ddd48);
        if (iStack_24 == 0) {
          return;
        }
        puVar13 = (undefined4 *)FUN_016d2bc8();
        uVar8 = *puVar13;
        FUN_016d6ac4(uStack_28,iStack_24);
        *puVar13 = uVar8;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar5 + 0x10) = uVar9 + uVar11;
        return;
      }
      puVar15 = (uint *)(iVar5 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar15);
        uVar7 = *puVar15;
        if (uVar11 != uVar7) goto LAB_016d409c;
        bVar16 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar16);
      *puVar15 = uVar9 + uVar11;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar11 == uVar7) {
        return;
      }
    } while( true );
  }
  if ((char)param_1[0x44] != '\x03') {
    return;
  }
  switch((char)param_1[0x1a]) {
  case '\0':
    if (param_1[0xc] != 0) {
      iVar3 = param_1[0xd];
      goto LAB_014b47f4;
    }
  default:
    return;
  case '\x03':
    if ((char)param_1[0x2a] == '\x03') {
      cVar1 = (char)param_1[0x29];
      bVar16 = cVar1 == '\x03';
      if (bVar16) {
        cVar1 = (char)param_1[0x20];
      }
      if (bVar16 && cVar1 == '\x04') {
        FUN_0163c790(param_1 + 0x21);
        if (param_1[0x22] != 0) {
          (**(code **)(param_1[0x22] + 0xc))(param_1[0x23]);
        }
      }
    }
    goto LAB_008ab7dc;
  case '\x04':
    if (*(char *)((int)param_1 + 0xa1) == '\x04') {
      if ((char)param_1[0x2c] == '\x04') {
        if (*(char *)((int)param_1 + 0xd9) == '\x03') {
          iVar3 = param_1[0x2f];
          puVar13 = (undefined4 *)param_1[0x30];
          pcVar4 = (code *)*puVar13;
          if (pcVar4 != (code *)0x0) {
            (*pcVar4)(iVar3);
          }
          if (puVar13[1] != 0) {
            thunk_FUN_016d3fb4(iVar3);
          }
          *(undefined1 *)(param_1 + 0x36) = 0;
        }
      }
      else if ((char)param_1[0x2c] == '\x03') {
        FUN_00a07b4c(param_1 + 0x2e);
      }
      if ((undefined4 *)param_1[0x26] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[0x26])();
      }
    }
    else {
      if (*(char *)((int)param_1 + 0xa1) != '\x03') break;
      if (*(char *)((int)param_1 + 0xc9) == '\x03') {
        iVar3 = param_1[0x2b];
        puVar13 = (undefined4 *)param_1[0x2c];
        pcVar4 = (code *)*puVar13;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(iVar3);
        }
        if (puVar13[1] != 0) {
          thunk_FUN_016d3fb4(iVar3);
        }
        *(undefined1 *)(param_1 + 0x32) = 0;
      }
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
    break;
  case '\x05':
    FUN_00a07b4c(param_1 + 0x1c);
    goto LAB_008ab7d4;
  case '\x06':
    cVar1 = (char)param_1[0x2c];
    bVar16 = cVar1 != '\x03';
    if (!bVar16) {
      cVar1 = (char)param_1[0x2b];
    }
    if (bVar16 || cVar1 != '\x03') goto LAB_008ab7d4;
    iVar3 = param_1[0x29];
    puVar13 = (undefined4 *)param_1[0x2a];
    pcVar4 = (code *)*puVar13;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(iVar3);
    }
    if (puVar13[1] != 0) {
      thunk_FUN_016d3fb4(iVar3);
    }
    iVar5 = param_1[0x24];
    iVar3 = 0x94;
    goto LAB_008ab7c4;
  case '\a':
    FUN_00a07b4c(param_1 + 0x20);
  }
  iVar5 = param_1[0x1c];
  iVar3 = 0x74;
LAB_008ab7c4:
  if (iVar5 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)((int)param_1 + iVar3));
  }
LAB_008ab7d4:
  FUN_008672e4(param_1[0x19]);
LAB_008ab7dc:
  bVar16 = *(char *)((int)param_1 + 0x69) != '\0';
  iVar3 = 0;
  if (bVar16) {
    iVar3 = param_1[0x2b];
  }
  if (bVar16 && iVar3 != 0) {
    thunk_FUN_016d3fb4(param_1[0x2c]);
  }
  *(undefined1 *)((int)param_1 + 0x69) = 0;
  return;
}

