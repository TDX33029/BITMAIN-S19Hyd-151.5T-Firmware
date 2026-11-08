// FUN_00d98290 @ 00d98290 size=80 calls_out=2 calls_in=1
// strings: 

void FUN_00d98290(int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uStack_28;
  int iStack_24;
  
  if (param_1 != 0) {
    FUN_00f18170();
    iVar12 = param_2 + 1;
    iVar4 = param_1;
    while (iVar12 = iVar12 + -1, iVar12 != 0) {
      FUN_00f2c34c(iVar4);
      iVar4 = iVar4 + 0x14;
    }
    if (param_2 != 0) {
      if (param_1 == 0) {
        return;
      }
      iVar4 = FUN_016d3bc8();
      uVar13 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
         (uVar8 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar12 = uVar8 - 0x10, uVar8 == 0)) {
        iVar12 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar8 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar11 = *(int *)(iVar4 + 8) + 0x10;
      iVar9 = iVar12 * uVar13 + iVar12 + -4;
      iVar12 = iVar11 + iVar9;
      if (4 < uVar8) {
        if (uVar8 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar8 = *(uint *)(iVar12 + -4);
        if (uVar8 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar12 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar12 - param_1) < uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar12 - uVar8) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar11 + iVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar4 + 0x14);
      uVar8 = 1 << uVar13;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
      do {
        uVar10 = *(uint *)(iVar4 + 0x10);
        uVar6 = *(uint *)(iVar4 + 0xc) | uVar10;
        if ((uVar8 & uVar6) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar10 == 0) || (uVar6 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar4,uVar13);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar7 = *puVar5;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar5 = uVar7;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar4 + 0x10) = uVar8 + uVar10;
          return;
        }
        puVar14 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar14);
          uVar6 = *puVar14;
          if (uVar10 != uVar6) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar14);
        } while (!bVar3);
        *puVar14 = uVar8 + uVar10;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar10 == uVar6) {
          return;
        }
      } while( true );
    }
  }
  return;
}

