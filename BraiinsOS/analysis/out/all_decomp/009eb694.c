// FUN_009eb694 @ 009eb694 size=344 calls_out=2 calls_in=1
// strings: 

void FUN_009eb694(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int unaff_r4;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined4 local_30;
  undefined4 *local_2c;
  code *local_28;
  
  iVar15 = param_1[1];
  iVar4 = param_1[3];
  iVar5 = 0;
LAB_009eb6c8:
  if (iVar5 != ((uint)(iVar4 - iVar15) >> 3) * -0x55555555) {
    iVar13 = iVar5 + 1;
    iVar16 = iVar15 + iVar5 * 0x18;
    puVar7 = (uint *)(*(int *)(iVar16 + 8) + 0x38);
    DataMemoryBarrier(0xb);
    uVar14 = *(uint *)(*(int *)(iVar16 + 8) + 0x38);
    do {
      if ((uVar14 & 3) == 2) {
        local_30 = 2;
        local_28 = FUN_00facc48;
        local_2c = &local_30;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_0041504f,&local_2c,&DAT_018ae754);
      }
      uVar11 = (uVar14 & 0x3fffffff) >> 2;
      uVar9 = uVar14 & 3 ^ 1;
      uVar8 = uVar14 & 0xc0000000 | 3;
      uVar12 = uVar11 ^ 1;
      if (uVar9 != 0 || uVar12 != 0) {
        uVar8 = uVar11 * 4 - 4 | uVar14 & 0xc0000003;
      }
      uVar11 = *puVar7;
      if (uVar11 == uVar14) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar7);
          if (bVar1) {
            *puVar7 = uVar8;
            DataMemoryBarrier(0xb);
            iVar5 = iVar13;
            if (uVar9 == 0 && uVar12 == 0) {
              FUN_009ebe80(*(undefined4 *)(iVar16 + 0xc),*(undefined4 *)(iVar16 + 0x10));
            }
            goto LAB_009eb6c8;
          }
          uVar11 = *puVar7;
        } while (uVar11 == uVar14);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      uVar14 = uVar11;
    } while( true );
  }
  if (param_1[2] == 0) {
    return;
  }
  iVar5 = *param_1;
  if (iVar5 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar14 = *(byte *)(iVar5 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar15 = uVar8 - 0x10, uVar8 == 0)) {
    iVar15 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar8 = (uint)(*(byte *)(iVar5 + -3) >> 5);
  iVar16 = *(int *)(iVar4 + 8) + 0x10;
  iVar13 = iVar15 * uVar14 + iVar15 + -4;
  iVar15 = iVar16 + iVar13;
  if (4 < uVar8) {
    if (uVar8 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar8 = *(uint *)(iVar15 + -4);
    if (uVar8 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar15 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar15 - iVar5) < uVar8) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar15 - uVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar16 + iVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar4 + 0x14);
  uVar8 = 1 << uVar14;
  *(undefined1 *)(iVar5 + -3) = 0xff;
  *(undefined2 *)(iVar5 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar4 + 0x10);
    uVar9 = *(uint *)(iVar4 + 0xc) | uVar11;
    if ((uVar8 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar11 == 0) || (uVar9 + uVar8 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar4,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar6;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar6 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar8 + uVar11;
      return;
    }
    puVar7 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar7);
      uVar9 = *puVar7;
      if (uVar11 != uVar9) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar7);
    } while (!bVar1);
    *puVar7 = uVar8 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar9) {
      return;
    }
  } while( true );
}

