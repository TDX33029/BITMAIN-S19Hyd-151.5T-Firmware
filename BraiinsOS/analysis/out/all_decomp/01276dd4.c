// FUN_01276dd4 @ 01276dd4 size=368 calls_out=6 calls_in=1
// strings: Tried to shrink to a larger capacitymax line length exceeded

void FUN_01276dd4(uint *param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar6 = param_3 << 2;
  if (param_3 == 0) {
    FUN_016dd1aa(4,param_2,0);
LAB_01276f08:
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    param_1[3] = 1;
    return;
  }
  uVar5 = thunk_FUN_016d4a50(iVar6);
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,iVar6);
  }
  FUN_016dd1aa(uVar5,param_2,iVar6);
  uVar10 = param_3;
  if (*(int *)(uVar5 + param_3 * 4 + -4) == 0) {
    iVar6 = param_3 * -4;
    uVar11 = param_3;
    do {
      uVar10 = uVar11;
      if (iVar6 == 0) {
        uVar10 = 0;
        if (param_3 >> 2 != 0) goto LAB_01276e64;
        goto LAB_01276ebc;
      }
      piVar1 = (int *)((uVar5 - 4) - iVar6);
      iVar6 = iVar6 + 4;
      uVar11 = uVar10 - 1;
    } while (*piVar1 == 0);
    if (param_3 <= uVar10) {
      uVar10 = param_3;
    }
  }
  if (uVar10 < param_3 >> 2) {
LAB_01276e64:
    if (param_3 < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("Tried to shrink to a larger capacitymax line length exceeded",0x49,&DAT_018ad594
                  );
    }
    if (uVar10 == 0) {
      thunk_FUN_016d3fb4(uVar5);
      goto LAB_01276f08;
    }
    uVar5 = thunk_FUN_016d4ea4(uVar5,uVar10 << 2);
    param_3 = uVar10;
    if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar10 << 2);
    }
  }
  else {
LAB_01276ebc:
    if (uVar10 == 0) {
      param_1[3] = 1;
      *param_1 = 0;
      param_1[1] = 4;
      param_1[2] = 0;
      if (uVar5 == 0) {
        return;
      }
      iVar6 = FUN_016d3bc8();
      uVar10 = *(byte *)(uVar5 - 3) & 0x1f;
      if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
         (uVar11 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar8 = uVar11 - 0x10, uVar11 == 0)) {
        iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar11 = (uint)(*(byte *)(uVar5 - 3) >> 5);
      iVar14 = *(int *)(iVar6 + 8) + 0x10;
      iVar12 = iVar8 * uVar10 + iVar8 + -4;
      iVar8 = iVar14 + iVar12;
      if (4 < uVar11) {
        if (uVar11 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar11 = *(uint *)(iVar8 + -4);
        if (uVar11 < 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar2)();
        }
        if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar2)();
        }
      }
      if (iVar8 - uVar5 < uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar8 - uVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar6 + 0x14);
      uVar11 = 1 << uVar10;
      *(undefined1 *)(uVar5 - 3) = 0xff;
      *(undefined2 *)(uVar5 - 2) = 0;
      do {
        uVar13 = *(uint *)(iVar6 + 0x10);
        uVar5 = *(uint *)(iVar6 + 0xc) | uVar13;
        if ((uVar11 & uVar5) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar13 == 0) || (uVar5 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar6,uVar10);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar7 = (undefined4 *)FUN_016d2bc8();
          uVar9 = *puVar7;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar7 = uVar9;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar6 + 0x10) = uVar11 + uVar13;
          return;
        }
        puVar15 = (uint *)(iVar6 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar5 = *puVar15;
          if (uVar13 != uVar5) goto LAB_016d409c;
          bVar4 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar4);
        *puVar15 = uVar11 + uVar13;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar13 == uVar5) {
          return;
        }
      } while( true );
    }
  }
  *param_1 = param_3;
  *(undefined1 *)(param_1 + 3) = 2;
  param_1[1] = uVar5;
  param_1[2] = uVar10;
  return;
}

