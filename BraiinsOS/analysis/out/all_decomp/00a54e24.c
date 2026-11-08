// FUN_00a54e24 @ 00a54e24 size=304 calls_out=2 calls_in=1
// strings: 

void FUN_00a54e24(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  ushort uVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint *puVar16;
  bool bVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  cVar1 = *(char *)(param_1 + 0x54);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x50) == '\x03') {
      uVar4 = *(ushort *)(param_1 + 0x30);
      bVar17 = uVar4 == 3;
      if (bVar17) {
        uVar4 = (ushort)*(byte *)(param_1 + 0x34);
      }
      if (bVar17 && uVar4 == 3) {
        puVar8 = *(undefined4 **)(param_1 + 0x38);
        uVar12 = *puVar8;
        puVar14 = (undefined4 *)puVar8[1];
        if ((code *)*puVar14 != (code *)0x0) {
          (*(code *)*puVar14)(uVar12);
        }
        goto LAB_00a54ef0;
      }
    }
  }
  else {
    if (cVar1 == '\x03') {
      if (*(char *)(param_1 + 0xe8) == '\x03') {
        uVar4 = *(ushort *)(param_1 + 200);
        bVar17 = uVar4 == 3;
        if (bVar17) {
          uVar4 = (ushort)*(byte *)(param_1 + 0xcc);
        }
        if (bVar17 && uVar4 == 3) {
          puVar8 = *(undefined4 **)(param_1 + 0xd0);
          uVar12 = *puVar8;
          puVar14 = (undefined4 *)puVar8[1];
          pcVar5 = (code *)*puVar14;
          if (pcVar5 != (code *)0x0) {
            (*pcVar5)(uVar12);
          }
          if (puVar14[1] != 0) {
            thunk_FUN_016d3fb4(uVar12);
          }
          thunk_FUN_016d3fb4(puVar8);
          FUN_00a07b4c(param_1 + 0x58);
          return;
        }
      }
      FUN_00a07b4c(param_1 + 0x58);
      return;
    }
    bVar17 = cVar1 == '\x04';
    if (bVar17) {
      cVar1 = *(char *)(param_1 + 0x98);
    }
    if (!bVar17 || cVar1 != '\x03') {
      return;
    }
    uVar4 = *(ushort *)(param_1 + 0x78);
    bVar17 = uVar4 == 3;
    if (bVar17) {
      uVar4 = (ushort)*(byte *)(param_1 + 0x7c);
    }
    if (bVar17 && uVar4 == 3) {
      puVar8 = *(undefined4 **)(param_1 + 0x80);
      uVar12 = *puVar8;
      puVar14 = (undefined4 *)puVar8[1];
      if ((code *)*puVar14 != (code *)0x0) {
        (*(code *)*puVar14)(uVar12);
      }
LAB_00a54ef0:
      if (puVar14[1] != 0) {
        thunk_FUN_016d3fb4(uVar12);
      }
      if (puVar8 == (undefined4 *)0x0) {
        return;
      }
      iVar3 = FUN_016d3bc8();
      uVar15 = *(byte *)((int)puVar8 + -3) & 0x1f;
      if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar6 = uVar9 - 0x10, uVar9 == 0)) {
        iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar9 = (uint)(*(byte *)((int)puVar8 + -3) >> 5);
      iVar13 = *(int *)(iVar3 + 8) + 0x10;
      iVar10 = iVar6 * uVar15 + iVar6 + -4;
      iVar6 = iVar13 + iVar10;
      if (4 < uVar9) {
        if (uVar9 != 5) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar5)();
        }
        uVar9 = *(uint *)(iVar6 + -4);
        if (uVar9 < 5) {
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
      if ((uint)(iVar6 - (int)puVar8) < uVar9) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar5)();
      }
      if (*(char *)(iVar6 - uVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar5)();
      }
      if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar5)();
      }
      bVar2 = *(byte *)(iVar3 + 0x14);
      uVar9 = 1 << uVar15;
      *(undefined1 *)((int)puVar8 + -3) = 0xff;
      *(undefined2 *)((int)puVar8 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar3 + 0x10);
        uVar7 = *(uint *)(iVar3 + 0xc) | uVar11;
        if ((uVar9 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar5)();
        }
        if ((uVar11 == 0) || (uVar7 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar3,uVar15);
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
          *(uint *)(iVar3 + 0x10) = uVar9 + uVar11;
          return;
        }
        puVar16 = (uint *)(iVar3 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar16);
          uVar7 = *puVar16;
          if (uVar11 != uVar7) goto LAB_016d409c;
          bVar17 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar17);
        *puVar16 = uVar9 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar7) {
          return;
        }
      } while( true );
    }
  }
  return;
}

