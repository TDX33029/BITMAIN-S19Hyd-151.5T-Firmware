// FUN_01610954 @ 01610954 size=224 calls_out=3 calls_in=1
// strings: 

void FUN_01610954(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined2 *puVar15;
  uint uVar16;
  uint *puVar17;
  int local_2c;
  int iStack_28;
  int iStack_24;
  
  FUN_01622628(&local_2c);
  iVar5 = iStack_28;
  if (local_2c != -0x7ffffff6) {
    param_1[1] = local_2c;
    param_1[2] = iStack_28;
    param_1[3] = iStack_24;
    *param_1 = 1;
    return;
  }
  if (iStack_28 == 0) {
    FUN_01613578(param_1 + 1,0,&DAT_018ab9a8,&DAT_018ab990);
    *param_1 = 1;
  }
  else {
    puVar15 = (undefined2 *)*param_2;
    if (1 < (uint)(param_2[1] - (int)puVar15)) {
      local_2c = -0x7ffffffb;
      FUN_00f2cc28(&local_2c);
      uVar1 = *puVar15;
      *param_2 = puVar15 + 1;
      *param_1 = 0;
      param_1[1] = iStack_28;
      param_1[2] = iStack_24;
      *(undefined2 *)(param_1 + 3) = uVar1;
      return;
    }
    param_1[3] = 2;
    *param_1 = 1;
    param_1[1] = 0x80000005;
    *(short *)(param_1 + 2) = (short)puVar15;
    *(short *)((int)param_1 + 10) = (short)((uint)puVar15 >> 0x10);
    if (iStack_24 != 0) {
      if (iStack_28 == 0) {
        return;
      }
      iVar6 = FUN_016d3bc8();
      uVar16 = *(byte *)(iVar5 + -3) & 0x1f;
      if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
         (uVar11 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar8 = uVar11 - 0x10, uVar11 == 0)) {
        iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar11 = (uint)(*(byte *)(iVar5 + -3) >> 5);
      iVar14 = *(int *)(iVar6 + 8) + 0x10;
      iVar12 = iVar8 * uVar16 + iVar8 + -4;
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
      if ((uint)(iVar8 - iVar5) < uVar11) {
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
      uVar11 = 1 << uVar16;
      *(undefined1 *)(iVar5 + -3) = 0xff;
      *(undefined2 *)(iVar5 + -2) = 0;
      do {
        uVar13 = *(uint *)(iVar6 + 0x10);
        uVar9 = *(uint *)(iVar6 + 0xc) | uVar13;
        if ((uVar11 & uVar9) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar13 == 0) || (uVar9 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&iStack_28,iVar6,uVar16);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar7 = (undefined4 *)FUN_016d2bc8();
          uVar10 = *puVar7;
          FUN_016d6ac4(iStack_28,iStack_24);
          *puVar7 = uVar10;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar6 + 0x10) = uVar11 + uVar13;
          return;
        }
        puVar17 = (uint *)(iVar6 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar17);
          uVar9 = *puVar17;
          if (uVar13 != uVar9) goto LAB_016d409c;
          bVar4 = (bool)hasExclusiveAccess(puVar17);
        } while (!bVar4);
        *puVar17 = uVar11 + uVar13;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar13 == uVar9) {
          return;
        }
      } while( true );
    }
  }
  return;
}

