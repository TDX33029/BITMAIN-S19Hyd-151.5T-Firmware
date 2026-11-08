// FUN_00ac9344 @ 00ac9344 size=260 calls_out=5 calls_in=4
// strings: 

void FUN_00ac9344(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if ((char)param_1[0x13] == '\0') {
    if (*param_1 != 0) {
      iVar7 = param_1[1];
      if (iVar7 == 0) {
        return;
      }
      iVar5 = FUN_016d3bc8();
      uVar15 = *(byte *)(iVar7 + -3) & 0x1f;
      if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
         (uVar11 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar8 = uVar11 - 0x10, uVar11 == 0)) {
        iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar11 = (uint)(*(byte *)(iVar7 + -3) >> 5);
      iVar14 = *(int *)(iVar5 + 8) + 0x10;
      iVar12 = iVar8 * uVar15 + iVar8 + -4;
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
      if ((uint)(iVar8 - iVar7) < uVar11) {
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
      bVar3 = *(byte *)(iVar5 + 0x14);
      uVar11 = 1 << uVar15;
      *(undefined1 *)(iVar7 + -3) = 0xff;
      *(undefined2 *)(iVar7 + -2) = 0;
      do {
        uVar13 = *(uint *)(iVar5 + 0x10);
        uVar9 = *(uint *)(iVar5 + 0xc) | uVar13;
        if ((uVar11 & uVar9) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar13 == 0) || (uVar9 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar5,uVar15);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar6 = (undefined4 *)FUN_016d2bc8();
          uVar10 = *puVar6;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar6 = uVar10;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar5 + 0x10) = uVar11 + uVar13;
          return;
        }
        puVar16 = (uint *)(iVar5 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar16);
          uVar9 = *puVar16;
          if (uVar13 != uVar9) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar1);
        *puVar16 = uVar11 + uVar13;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar13 == uVar9) {
          return;
        }
      } while( true );
    }
  }
  else {
    if ((char)param_1[0x13] != '\x03') {
      return;
    }
    if ((char)param_1[0x12] == '\x03') {
      if (param_1[0x10] != 0) {
        FUN_00c8204c(param_1[0x10],param_1[0x11],1);
      }
      FUN_00ac9c30(param_1 + 0xd);
      FUN_00648e64(param_1 + 9);
      piVar4 = (int *)param_1[8];
      *(undefined1 *)((int)param_1 + 0x49) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00790cd0(param_1[8]);
      }
    }
    else if ((char)param_1[0x12] == '\0') {
      piVar4 = (int *)param_1[7];
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00790cd0(param_1[7]);
      }
      if (param_1[4] != 0) {
        thunk_FUN_016d3fb4(param_1[5]);
        *(undefined1 *)((int)param_1 + 0x4d) = 0;
        return;
      }
    }
    *(undefined1 *)((int)param_1 + 0x4d) = 0;
  }
  return;
}

