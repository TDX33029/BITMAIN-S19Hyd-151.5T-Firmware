// FUN_00f30340 @ 00f30340 size=304 calls_out=4 calls_in=5
// strings: 

void FUN_00f30340(undefined1 *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int unaff_r4;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
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
  
  switch(*param_1) {
  case 0:
  case 1:
  case 2:
  case 6:
    break;
  case 3:
    if (*(int *)(param_1 + 4) != 0) {
      iVar4 = *(int *)(param_1 + 8);
LAB_014b47f4:
      if (iVar4 == 0) {
        return;
      }
      iVar6 = FUN_016d3bc8();
      uVar14 = *(byte *)(iVar4 + -3) & 0x1f;
      if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar13 = uVar9 - 0x10, uVar9 == 0)) {
        iVar13 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar9 = (uint)(*(byte *)(iVar4 + -3) >> 5);
      iVar12 = *(int *)(iVar6 + 8) + 0x10;
      iVar10 = iVar13 * uVar14 + iVar13 + -4;
      iVar13 = iVar12 + iVar10;
      if (4 < uVar9) {
        if (uVar9 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar9 = *(uint *)(iVar13 + -4);
        if (uVar9 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar13 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar13 - iVar4) < uVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar13 - uVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar6 + 0x14);
      uVar9 = 1 << uVar14;
      *(undefined1 *)(iVar4 + -3) = 0xff;
      *(undefined2 *)(iVar4 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar6 + 0x10);
        uVar7 = *(uint *)(iVar6 + 0xc) | uVar11;
        if ((uVar9 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar11 == 0) || (uVar7 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar6,uVar14);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar8 = *puVar5;
          FUN_016d6ac4(local_28,iStack_24);
          *puVar5 = uVar8;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar6 + 0x10) = uVar9 + uVar11;
          return;
        }
        puVar15 = (uint *)(iVar6 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar7 = *puVar15;
          if (uVar11 != uVar7) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar3);
        *puVar15 = uVar9 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar7) {
          return;
        }
      } while( true );
    }
    break;
  case 4:
    iVar4 = *(int *)(param_1 + 8);
    iVar13 = *(int *)(param_1 + 0xc) + 1;
    iVar6 = iVar4;
    while (iVar13 = iVar13 + -1, iVar13 != 0) {
      FUN_00f3615c(iVar6);
      iVar6 = iVar6 + 0x18;
    }
    if (*(int *)(param_1 + 4) != 0) goto LAB_014b47f4;
    break;
  default:
    iVar6 = *(int *)(param_1 + 4);
    if (iVar6 == 0) {
      local_2c = 0;
    }
    else {
      local_40 = *(undefined4 *)(param_1 + 8);
      local_2c = *(undefined4 *)(param_1 + 0xc);
      local_38 = 0;
      local_4c[1] = 0;
      local_4c[2] = iVar6;
      local_34 = iVar6;
      local_30 = local_40;
    }
    local_4c[0] = (uint)(iVar6 != 0);
    local_3c = local_4c[0];
    while( true ) {
      FUN_00f2cd78(&local_28,local_4c);
      iVar6 = local_28;
      if (local_28 == 0) break;
      iVar4 = local_28 + unaff_r4 * 0xc;
      if (*(int *)(iVar4 + 0x10c) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar4 + 0x110));
      }
      FUN_00f2cf28(iVar6 + unaff_r4 * 0x18);
    }
    return;
  }
  return;
}

