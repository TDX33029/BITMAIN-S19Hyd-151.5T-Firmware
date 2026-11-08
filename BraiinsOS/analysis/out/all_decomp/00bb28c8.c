// FUN_00bb28c8 @ 00bb28c8 size=192 calls_out=4 calls_in=1
// strings: 

void FUN_00bb28c8(undefined1 *param_1,char *param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  undefined1 uStack_19;
  
  if (*param_2 == '\x03') {
    iVar12 = *(int *)(param_2 + 4);
    iVar14 = *(int *)(param_2 + 8);
    if (iVar12 != -0x80000000) {
      cVar4 = FUN_00ba0520(iVar14,*(undefined4 *)(param_2 + 0xc));
      if (cVar4 == '\b') {
        uVar5 = FUN_00c5af0c();
        *(undefined4 *)(param_1 + 4) = uVar5;
        *param_1 = 1;
      }
      else {
        param_1[1] = cVar4;
        *param_1 = 0;
      }
      if (iVar12 == 0) {
        return;
      }
      if (iVar14 == 0) {
        return;
      }
      iVar12 = FUN_016d3bc8();
      uVar15 = *(byte *)(iVar14 + -3) & 0x1f;
      if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar7 = uVar9 - 0x10, uVar9 == 0)) {
        iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar9 = (uint)(*(byte *)(iVar14 + -3) >> 5);
      iVar13 = *(int *)(iVar12 + 8) + 0x10;
      iVar10 = iVar7 * uVar15 + iVar7 + -4;
      iVar7 = iVar13 + iVar10;
      if (4 < uVar9) {
        if (uVar9 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar9 = *(uint *)(iVar7 + -4);
        if (uVar9 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar7 - iVar14) < uVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar7 - uVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar12 + 0x14);
      uVar9 = 1 << uVar15;
      *(undefined1 *)(iVar14 + -3) = 0xff;
      *(undefined2 *)(iVar14 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar12 + 0x10);
        uVar8 = *(uint *)(iVar12 + 0xc) | uVar11;
        if ((uVar9 & uVar8) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar11 == 0) || (uVar8 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar12,uVar15);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar6 = (undefined4 *)FUN_016d2bc8();
          uVar5 = *puVar6;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar6 = uVar5;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar12 + 0x10) = uVar9 + uVar11;
          return;
        }
        puVar16 = (uint *)(iVar12 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar16);
          uVar8 = *puVar16;
          if (uVar11 != uVar8) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar3);
        *puVar16 = uVar9 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar8) {
          return;
        }
      } while( true );
    }
  }
  else {
    iVar14 = FUN_00f36124(param_2,&uStack_19,&DAT_01873de8);
    FUN_00c01f94(param_2);
  }
  *(int *)(param_1 + 4) = iVar14;
  *param_1 = 1;
  return;
}

