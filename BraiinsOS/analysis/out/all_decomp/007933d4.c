// FUN_007933d4 @ 007933d4 size=276 calls_out=3 calls_in=2
// strings: 

void FUN_007933d4(int *param_1,int param_2)

{
  undefined2 uVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar13 = *(int *)(param_2 + 8);
  if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar13);
  }
  uVar9 = *(undefined4 *)(param_2 + 4);
  if (iVar13 == 0) {
    pcVar5 = &DAT_00000001;
    FUN_016dd1aa(1,uVar9,0);
    iVar10 = 0;
  }
  else {
    pcVar5 = (char *)thunk_FUN_016d4a50(iVar13);
    if (pcVar5 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar13);
    }
    FUN_016dd1aa(pcVar5,uVar9,iVar13);
    if (((*pcVar5 == '[') && (iVar13 != 1)) && (pcVar5[iVar13 + -1] == ']')) {
      iVar13 = iVar13 + -2;
      if (iVar13 == 0) {
        iVar6 = 1;
        iVar10 = 0;
      }
      else {
        iVar6 = thunk_FUN_016d4a50(iVar13);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar13);
        }
        iVar10 = iVar13;
      }
      FUN_016dd1aa(iVar6,pcVar5 + 1,iVar13);
      *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 0xc);
      *param_1 = iVar10;
      param_1[1] = iVar6;
      param_1[2] = iVar13;
      if (pcVar5 == (char *)0x0) {
        return;
      }
      iVar13 = FUN_016d3bc8();
      uVar15 = (byte)pcVar5[-3] & 0x1f;
      if (((*(byte *)(iVar13 + 0x14) & 0x1f) != 0) ||
         (uVar11 = *(uint *)(iVar13 + 0x14) & 0xfffff000, iVar10 = uVar11 - 0x10, uVar11 == 0)) {
        iVar10 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar13 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar11 = (uint)((byte)pcVar5[-3] >> 5);
      iVar14 = *(int *)(iVar13 + 8) + 0x10;
      iVar6 = iVar10 * uVar15 + iVar10 + -4;
      iVar10 = iVar14 + iVar6;
      if (4 < uVar11) {
        if (uVar11 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar11 = *(uint *)(iVar10 + -4);
        if (uVar11 < 5) {
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
      if ((uint)(iVar10 - (int)pcVar5) < uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar10 - uVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar14 + iVar6) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar13 + 0x14);
      uVar11 = 1 << uVar15;
      pcVar5[-3] = -1;
      pcVar5[-0xffffffff00000002] = '\0';
      pcVar5[-0xffffffff00000001] = '\0';
      do {
        uVar12 = *(uint *)(iVar13 + 0x10);
        uVar8 = *(uint *)(iVar13 + 0xc) | uVar12;
        if ((uVar11 & uVar8) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar12 == 0) || (uVar8 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar13,uVar15);
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
          *(uint *)(iVar13 + 0x10) = uVar11 + uVar12;
          return;
        }
        puVar16 = (uint *)(iVar13 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar16);
          uVar8 = *puVar16;
          if (uVar12 != uVar8) goto LAB_016d409c;
          bVar4 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar4);
        *puVar16 = uVar11 + uVar12;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar12 == uVar8) {
          return;
        }
      } while( true );
    }
    iVar10 = iVar13;
  }
  uVar1 = *(undefined2 *)(param_2 + 0xc);
  *param_1 = iVar10;
  param_1[1] = (int)pcVar5;
  param_1[2] = iVar13;
  *(undefined2 *)(param_1 + 3) = uVar1;
  return;
}

