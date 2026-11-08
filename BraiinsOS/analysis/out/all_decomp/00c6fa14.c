// FUN_00c6fa14 @ 00c6fa14 size=488 calls_out=5 calls_in=5
// strings: 

void FUN_00c6fa14(undefined4 *param_1,int *param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int unaff_r4;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 *puVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  uint *puVar24;
  int local_4c;
  int local_48;
  int local_44;
  undefined1 auStack_40 [24];
  undefined4 uStack_28;
  
  iVar5 = *param_2;
  iVar8 = param_2[1];
  iVar7 = param_2[2];
  iVar10 = iVar8 + iVar7 * 0x38;
  iVar16 = iVar8;
  iVar12 = iVar8;
  if (iVar7 != 0) {
    iVar16 = 0;
    do {
      iVar12 = iVar8 + iVar16;
      uVar13 = *(undefined4 *)(iVar12 + 0x18);
      uVar22 = *(undefined4 *)(iVar12 + 0x20);
      uVar19 = *(undefined4 *)(iVar12 + 0x24);
      uVar23 = *(undefined4 *)(iVar12 + 0x28);
      uVar21 = *(undefined4 *)(iVar12 + 0x30);
      uVar1 = *(undefined1 *)(iVar12 + 0x34);
      FUN_016dd1aa((uint)auStack_40 | 3,iVar12,0x18);
      *(undefined1 *)(iVar12 + 0x1c) = uVar1;
      *(undefined4 *)(iVar12 + 0x18) = uVar21;
      *(undefined4 *)(iVar8 + iVar16) = uVar13;
      *(undefined4 *)(iVar12 + 8) = uVar22;
      *(undefined4 *)(iVar12 + 0xc) = uVar19;
      *(undefined4 *)(iVar12 + 0x10) = uVar23;
      FUN_016dd1aa(iVar12 + 0x1d,auStack_40,0x1b);
      iVar16 = iVar16 + 0x38;
    } while (iVar7 * 0x38 != iVar16);
    iVar16 = iVar8 + iVar16;
    iVar12 = iVar10;
  }
  iVar7 = 0;
  while (iVar7 != ((uint)(iVar10 - iVar12) >> 3) * -0x49249249) {
    iVar6 = iVar12 + iVar7 * 0x38;
    iVar17 = *(int *)(iVar6 + 0xc);
    puVar20 = (undefined4 *)(iVar17 + 0x10);
    for (iVar18 = *(int *)(iVar6 + 0x10); iVar18 != 0; iVar18 = iVar18 + -1) {
      if (puVar20[-4] != 0) {
        thunk_FUN_016d3fb4(puVar20[-3]);
      }
      if (puVar20[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar20);
      }
      puVar20 = puVar20 + 6;
    }
    iVar7 = iVar7 + 1;
    if (*(int *)(iVar6 + 8) != 0) {
      thunk_FUN_016d3fb4(iVar17);
    }
  }
  uVar9 = iVar16 - iVar8;
  local_44 = (uVar9 >> 3) * -0x49249249;
  local_4c = iVar5;
  local_48 = iVar8;
  if (uVar9 == 0) {
    param_1[2] = 0;
    *param_1 = 0;
    if (iVar5 != 0) {
      if (iVar8 == 0) {
        return;
      }
      iVar16 = FUN_016d3bc8();
      uVar9 = *(byte *)(iVar8 + -3) & 0x1f;
      if (((*(byte *)(iVar16 + 0x14) & 0x1f) != 0) ||
         (uVar14 = *(uint *)(iVar16 + 0x14) & 0xfffff000, iVar12 = uVar14 - 0x10, uVar14 == 0)) {
        iVar12 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar16 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar14 = (uint)(*(byte *)(iVar8 + -3) >> 5);
      iVar7 = *(int *)(iVar16 + 8) + 0x10;
      iVar5 = iVar12 * uVar9 + iVar12 + -4;
      iVar12 = iVar7 + iVar5;
      if (4 < uVar14) {
        if (uVar14 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar14 = *(uint *)(iVar12 + -4);
        if (uVar14 < 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar2)();
        }
        if (*(char *)(iVar12 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar2)();
        }
      }
      if ((uint)(iVar12 - iVar8) < uVar14) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar12 - uVar14) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar7 + iVar5) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar16 + 0x14);
      uVar14 = 1 << uVar9;
      *(undefined1 *)(iVar8 + -3) = 0xff;
      *(undefined2 *)(iVar8 + -2) = 0;
      do {
        uVar15 = *(uint *)(iVar16 + 0x10);
        uVar11 = *(uint *)(iVar16 + 0xc) | uVar15;
        if ((uVar14 & uVar11) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar15 == 0) || (uVar11 + uVar14 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar16,uVar9);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar20 = (undefined4 *)FUN_016d2bc8();
          uVar13 = *puVar20;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar20 = uVar13;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar16 + 0x10) = uVar14 + uVar15;
          return;
        }
        puVar24 = (uint *)(iVar16 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar24);
          uVar11 = *puVar24;
          if (uVar15 != uVar11) goto LAB_016d409c;
          bVar4 = (bool)hasExclusiveAccess(puVar24);
        } while (!bVar4);
        *puVar24 = uVar14 + uVar15;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar15 == uVar11) {
          return;
        }
      } while( true );
    }
  }
  else {
    if (uVar9 != 0x38) {
      if (uVar9 >> 3 < 0x93) {
        FUN_00b5e164();
      }
      else {
        FUN_00cd900c();
      }
    }
    FUN_00c3bab4(param_1,&local_4c);
  }
  return;
}

