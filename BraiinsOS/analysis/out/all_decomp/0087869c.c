// FUN_0087869c @ 0087869c size=192 calls_out=1 calls_in=0
// strings: 

void FUN_0087869c(int param_1)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  bool bVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(char *)(param_1 + 0x18) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x90);
    bVar16 = cVar1 == '\x03';
    if (bVar16) {
      cVar1 = *(char *)(param_1 + 0x8c);
    }
    if (bVar16 && cVar1 == '\x03') {
      if (*(char *)(param_1 + 0x88) == '\x03') {
        FUN_00875460(param_1 + 0x44);
        *(undefined1 *)(param_1 + 0x89) = 0;
        return;
      }
      if ((*(char *)(param_1 + 0x88) == '\0') && (*(int *)(param_1 + 0x34) != 0)) {
        iVar4 = *(int *)(param_1 + 0x38);
        goto LAB_014b47f4;
      }
    }
  }
  else if (*(char *)(param_1 + 0x18) == '\x04') {
    if (*(char *)(param_1 + 0x74) == '\x03') {
      FUN_00875460(param_1 + 0x30);
      *(undefined1 *)(param_1 + 0x75) = 0;
      return;
    }
    if (*(char *)(param_1 + 0x74) == '\0') {
      if (*(int *)(param_1 + 0x20) == 0) {
        return;
      }
      iVar4 = *(int *)(param_1 + 0x24);
LAB_014b47f4:
      if (iVar4 == 0) {
        return;
      }
      iVar5 = FUN_016d3bc8();
      uVar14 = *(byte *)(iVar4 + -3) & 0x1f;
      if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
         (uVar10 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar7 = uVar10 - 0x10, uVar10 == 0)) {
        iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar10 = (uint)(*(byte *)(iVar4 + -3) >> 5);
      iVar13 = *(int *)(iVar5 + 8) + 0x10;
      iVar11 = iVar7 * uVar14 + iVar7 + -4;
      iVar7 = iVar13 + iVar11;
      if (4 < uVar10) {
        if (uVar10 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar10 = *(uint *)(iVar7 + -4);
        if (uVar10 < 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar2)();
        }
        if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar2)();
        }
      }
      if ((uint)(iVar7 - iVar4) < uVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar7 - uVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar5 + 0x14);
      uVar10 = 1 << uVar14;
      *(undefined1 *)(iVar4 + -3) = 0xff;
      *(undefined2 *)(iVar4 + -2) = 0;
      do {
        uVar12 = *(uint *)(iVar5 + 0x10);
        uVar8 = *(uint *)(iVar5 + 0xc) | uVar12;
        if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar12 == 0) || (uVar8 + uVar10 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar5,uVar14);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar6 = (undefined4 *)FUN_016d2bc8();
          uVar9 = *puVar6;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar6 = uVar9;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar5 + 0x10) = uVar10 + uVar12;
          return;
        }
        puVar15 = (uint *)(iVar5 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar8 = *puVar15;
          if (uVar12 != uVar8) goto LAB_016d409c;
          bVar16 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar16);
        *puVar15 = uVar10 + uVar12;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar12 == uVar8) {
          return;
        }
      } while( true );
    }
  }
  return;
}

