// FUN_0156447c @ 0156447c size=276 calls_out=1 calls_in=3
// strings: 

void FUN_0156447c(int *param_1)

{
  byte bVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar12 = *param_1;
  if (iVar12 != -0x80000000) {
    if ((param_1[10] & 0x7fffffffU) == 0) {
      iVar10 = param_1[0x18];
    }
    else {
      thunk_FUN_016d3fb4(param_1[0xb]);
      iVar10 = param_1[0x18];
    }
    if (iVar10 != 0) {
      puVar13 = (undefined4 *)param_1[0x19];
      pcVar3 = (code *)*puVar13;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(iVar10);
      }
      if (puVar13[1] != 0) {
        thunk_FUN_016d3fb4(iVar10);
      }
    }
    if (iVar12 != 0) {
      thunk_FUN_016d3fb4(param_1[1]);
    }
    iVar12 = param_1[0x16];
    puVar13 = (undefined4 *)param_1[0x17];
    pcVar3 = (code *)*puVar13;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(iVar12);
    }
    if (puVar13[1] != 0) {
      thunk_FUN_016d3fb4(iVar12);
    }
    if (((char)param_1[0xf] == '\0') && ((param_1[0x10] & 0x7fffffffU) != 0)) {
      thunk_FUN_016d3fb4(param_1[0x11]);
      iVar12 = param_1[4];
    }
    else {
      iVar12 = param_1[4];
    }
    if (iVar12 != 0) {
      thunk_FUN_016d3fb4(param_1[5]);
    }
    if (param_1[7] != 0) {
      iVar12 = param_1[8];
      if (iVar12 == 0) {
        return;
      }
      iVar10 = FUN_016d3bc8();
      uVar14 = *(byte *)(iVar12 + -3) & 0x1f;
      if (((*(byte *)(iVar10 + 0x14) & 0x1f) != 0) ||
         (uVar7 = *(uint *)(iVar10 + 0x14) & 0xfffff000, iVar4 = uVar7 - 0x10, uVar7 == 0)) {
        iVar4 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar10 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar7 = (uint)(*(byte *)(iVar12 + -3) >> 5);
      iVar11 = *(int *)(iVar10 + 8) + 0x10;
      iVar8 = iVar4 * uVar14 + iVar4 + -4;
      iVar4 = iVar11 + iVar8;
      if (4 < uVar7) {
        if (uVar7 != 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar3)();
        }
        uVar7 = *(uint *)(iVar4 + -4);
        if (uVar7 < 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar3)();
        }
        if (*(char *)(iVar4 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar3)();
        }
      }
      if ((uint)(iVar4 - iVar12) < uVar7) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar3)();
      }
      if (*(char *)(iVar4 - uVar7) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar3)();
      }
      if (*(char *)(iVar11 + iVar8) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar3)();
      }
      bVar1 = *(byte *)(iVar10 + 0x14);
      uVar7 = 1 << uVar14;
      *(undefined1 *)(iVar12 + -3) = 0xff;
      *(undefined2 *)(iVar12 + -2) = 0;
      do {
        uVar9 = *(uint *)(iVar10 + 0x10);
        uVar5 = *(uint *)(iVar10 + 0xc) | uVar9;
        if ((uVar7 & uVar5) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar3)();
        }
        if ((uVar9 == 0) || (uVar5 + uVar7 == (2 << (bVar1 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar10,uVar14);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar13 = (undefined4 *)FUN_016d2bc8();
          uVar6 = *puVar13;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar13 = uVar6;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar10 + 0x10) = uVar7 + uVar9;
          return;
        }
        puVar15 = (uint *)(iVar10 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar5 = *puVar15;
          if (uVar9 != uVar5) goto LAB_016d409c;
          bVar2 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar2);
        *puVar15 = uVar7 + uVar9;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar9 == uVar5) {
          return;
        }
      } while( true );
    }
  }
  return;
}

