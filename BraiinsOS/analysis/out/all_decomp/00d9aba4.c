// FUN_00d9aba4 @ 00d9aba4 size=308 calls_out=4 calls_in=4
// strings: 

void FUN_00d9aba4(int param_1)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  cVar1 = *(char *)(param_1 + 0x97);
  if (cVar1 != '\0') {
    if (cVar1 == '\x03') {
      FUN_005e4e58(param_1 + 0x98);
      FUN_005c3320(param_1 + 0x98);
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_00d9cfd8(param_1 + 0x98);
    }
    *(undefined1 *)(param_1 + 0x95) = 0;
    if (*(char *)(param_1 + 0x94) != '\0') {
      FUN_005c3320(param_1);
    }
    *(undefined1 *)(param_1 + 0x96) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    return;
  }
  uVar5 = *(uint *)(param_1 + 0x20);
  uVar9 = 0xf;
  if ((int)uVar5 < 0) {
    uVar9 = uVar5 ^ 0x80000000;
  }
  if (uVar9 == 0x17) {
    if (*(int *)(param_1 + 0x24) != 0) {
      iVar6 = *(int *)(param_1 + 0x28);
      goto LAB_014b47f4;
    }
  }
  else if (uVar9 == 0xf) {
    if (uVar5 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x24));
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x30));
    }
    if (*(int *)(param_1 + 0x38) != -0x80000000 && *(int *)(param_1 + 0x38) != 0) {
      iVar6 = *(int *)(param_1 + 0x3c);
      goto LAB_014b47f4;
    }
  }
  else {
    if (uVar9 != 0xe) {
      return;
    }
    if (*(int *)(param_1 + 0x24) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x28));
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x34));
    }
    if (*(int *)(param_1 + 0x3c) != -0x80000000 && *(int *)(param_1 + 0x3c) != 0) {
      iVar6 = *(int *)(param_1 + 0x40);
LAB_014b47f4:
      if (iVar6 == 0) {
        return;
      }
      iVar7 = FUN_016d3bc8();
      uVar5 = *(byte *)(iVar6 + -3) & 0x1f;
      if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar10 = uVar9 - 0x10, uVar9 == 0)) {
        iVar10 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar9 = (uint)(*(byte *)(iVar6 + -3) >> 5);
      iVar15 = *(int *)(iVar7 + 8) + 0x10;
      iVar13 = iVar10 * uVar5 + iVar10 + -4;
      iVar10 = iVar15 + iVar13;
      if (4 < uVar9) {
        if (uVar9 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar9 = *(uint *)(iVar10 + -4);
        if (uVar9 < 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar2)();
        }
        if (*(char *)(iVar10 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar2)();
        }
      }
      if ((uint)(iVar10 - iVar6) < uVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar10 - uVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar15 + iVar13) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar7 + 0x14);
      uVar9 = 1 << uVar5;
      *(undefined1 *)(iVar6 + -3) = 0xff;
      *(undefined2 *)(iVar6 + -2) = 0;
      do {
        uVar14 = *(uint *)(iVar7 + 0x10);
        uVar11 = *(uint *)(iVar7 + 0xc) | uVar14;
        if ((uVar9 & uVar11) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar14 == 0) || (uVar11 + uVar9 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar7,uVar5);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar8 = (undefined4 *)FUN_016d2bc8();
          uVar12 = *puVar8;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar8 = uVar12;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar7 + 0x10) = uVar9 + uVar14;
          return;
        }
        puVar16 = (uint *)(iVar7 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar16);
          uVar11 = *puVar16;
          if (uVar14 != uVar11) goto LAB_016d409c;
          bVar4 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar4);
        *puVar16 = uVar9 + uVar14;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar14 == uVar11) {
          return;
        }
      } while( true );
    }
  }
  return;
}

