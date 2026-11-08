// FUN_0076cf30 @ 0076cf30 size=172 calls_out=3 calls_in=1
// strings: 

void FUN_0076cf30(undefined4 *param_1,uint *param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar7 = param_2[2];
  if (uVar7 < 0x100) {
    uVar9 = param_2[1];
    if (uVar7 < *param_2) {
      if (uVar7 == 0) {
        thunk_FUN_016d3fb4(uVar9);
        uVar9 = 1;
      }
      else {
        uVar9 = thunk_FUN_016d4ea4(uVar9,uVar7);
        if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,uVar7);
        }
      }
    }
    param_1[1] = uVar9;
    param_1[2] = uVar7;
    *param_1 = 0;
  }
  else {
    uVar9 = *param_2;
    *param_1 = 1;
    param_1[1] = uVar7;
    param_1[2] = 0;
    param_1[3] = 0xff;
    if (uVar9 != 0) {
      uVar7 = param_2[1];
      if (uVar7 == 0) {
        return;
      }
      iVar4 = FUN_016d3bc8();
      uVar9 = *(byte *)(uVar7 - 3) & 0x1f;
      if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
         (uVar10 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar6 = uVar10 - 0x10, uVar10 == 0)) {
        iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar10 = (uint)(*(byte *)(uVar7 - 3) >> 5);
      iVar13 = *(int *)(iVar4 + 8) + 0x10;
      iVar11 = iVar6 * uVar9 + iVar6 + -4;
      iVar6 = iVar13 + iVar11;
      if (4 < uVar10) {
        if (uVar10 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar10 = *(uint *)(iVar6 + -4);
        if (uVar10 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if (iVar6 - uVar7 < uVar10) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar6 - uVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar4 + 0x14);
      uVar10 = 1 << uVar9;
      *(undefined1 *)(uVar7 - 3) = 0xff;
      *(undefined2 *)(uVar7 - 2) = 0;
      do {
        uVar12 = *(uint *)(iVar4 + 0x10);
        uVar7 = *(uint *)(iVar4 + 0xc) | uVar12;
        if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar12 == 0) || (uVar7 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar4,uVar9);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar8 = *puVar5;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar5 = uVar8;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar4 + 0x10) = uVar10 + uVar12;
          return;
        }
        puVar14 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar14);
          uVar7 = *puVar14;
          if (uVar12 != uVar7) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar14);
        } while (!bVar3);
        *puVar14 = uVar10 + uVar12;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar12 == uVar7) {
          return;
        }
      } while( true );
    }
  }
  return;
}

