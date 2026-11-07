// FUN_007b3cd4 @ 007b3cd4 size=304 calls_out=4 calls_in=10
// strings: 

void FUN_007b3cd4(byte *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int unaff_r4;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  uint local_4c [3];
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int iStack_24;
  
  bVar1 = *param_1;
  if (2 < bVar1) {
    if (bVar1 == 3) {
      if (*(int *)(param_1 + 4) != 0) {
        iVar13 = *(int *)(param_1 + 8);
        goto LAB_014b47f4;
      }
    }
    else {
      if (bVar1 != 4) {
        iVar13 = *(int *)(param_1 + 4);
        if (iVar13 == 0) {
          local_2c = 0;
        }
        else {
          local_40 = *(undefined4 *)(param_1 + 8);
          local_2c = *(undefined4 *)(param_1 + 0xc);
          local_38 = 0;
          local_4c[1] = 0;
          local_4c[2] = iVar13;
          local_34 = iVar13;
          local_30 = local_40;
        }
        local_4c[0] = (uint)(iVar13 != 0);
        local_3c = local_4c[0];
        while( true ) {
          FUN_00a40f64(&local_28,local_4c);
          iVar13 = local_28;
          if (local_28 == 0) break;
          iVar4 = local_28 + unaff_r4 * 0xc;
          if (*(int *)(iVar4 + 0x10c) != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(iVar4 + 0x110));
          }
          FUN_00726fcc(iVar13 + unaff_r4 * 0x18);
        }
        return;
      }
      iVar13 = *(int *)(param_1 + 8);
      iVar12 = *(int *)(param_1 + 0xc) + 1;
      iVar4 = iVar13;
      while (iVar12 = iVar12 + -1, iVar12 != 0) {
        FUN_007b3cd4(iVar4);
        iVar4 = iVar4 + 0x18;
      }
      if (*(int *)(param_1 + 4) != 0) {
LAB_014b47f4:
        if (iVar13 == 0) {
          return;
        }
        iVar4 = FUN_016d3bc8();
        uVar14 = *(byte *)(iVar13 + -3) & 0x1f;
        if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
           (uVar8 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar12 = uVar8 - 0x10, uVar8 == 0)) {
          iVar12 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2)
                   << 4;
        }
        uVar8 = (uint)(*(byte *)(iVar13 + -3) >> 5);
        iVar11 = *(int *)(iVar4 + 8) + 0x10;
        iVar9 = iVar12 * uVar14 + iVar12 + -4;
        iVar12 = iVar11 + iVar9;
        if (4 < uVar8) {
          if (uVar8 != 5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar2)();
          }
          uVar8 = *(uint *)(iVar12 + -4);
          if (uVar8 < 5) {
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
        if ((uint)(iVar12 - iVar13) < uVar8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar2)();
        }
        if (*(char *)(iVar12 - uVar8) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar2)();
        }
        if (*(char *)(iVar11 + iVar9) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar2)();
        }
        bVar1 = *(byte *)(iVar4 + 0x14);
        uVar8 = 1 << uVar14;
        *(undefined1 *)(iVar13 + -3) = 0xff;
        *(undefined2 *)(iVar13 + -2) = 0;
        do {
          uVar10 = *(uint *)(iVar4 + 0x10);
          uVar6 = *(uint *)(iVar4 + 0xc) | uVar10;
          if ((uVar8 & uVar6) != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar2)();
          }
          if ((uVar10 == 0) || (uVar6 + uVar8 == (2 << (bVar1 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&local_28,iVar4,uVar14);
            FUN_016dddc0(&DAT_018ddd48);
            if (iStack_24 == 0) {
              return;
            }
            puVar5 = (undefined4 *)FUN_016d2bc8();
            uVar7 = *puVar5;
            FUN_016d6ac4(local_28,iStack_24);
            *puVar5 = uVar7;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar4 + 0x10) = uVar8 + uVar10;
            return;
          }
          puVar15 = (uint *)(iVar4 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar15);
            uVar6 = *puVar15;
            if (uVar10 != uVar6) goto LAB_016d409c;
            bVar3 = (bool)hasExclusiveAccess(puVar15);
          } while (!bVar3);
          *puVar15 = uVar8 + uVar10;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar10 == uVar6) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
}

