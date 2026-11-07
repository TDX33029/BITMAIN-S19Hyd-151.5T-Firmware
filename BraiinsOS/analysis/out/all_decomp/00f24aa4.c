// FUN_00f24aa4 @ 00f24aa4 size=372 calls_out=1 calls_in=1
// strings: 

void FUN_00f24aa4(int param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(int *)(param_1 + 0x50) == -0x80000000 || *(int *)(param_1 + 0x50) == 0) {
    if (*(int *)(param_1 + 0x5c) != -0x80000000 && *(int *)(param_1 + 0x5c) != 0) goto LAB_00f24b94;
LAB_00f24acc:
    if (*(int *)(param_1 + 0x68) != -0x80000000 && *(int *)(param_1 + 0x68) != 0) goto LAB_00f24bac;
LAB_00f24adc:
    if (*(int *)(param_1 + 0x74) != -0x80000000 && *(int *)(param_1 + 0x74) != 0) goto LAB_00f24bc4;
LAB_00f24aec:
    if (*(int *)(param_1 + 0x80) != -0x80000000 && *(int *)(param_1 + 0x80) != 0) goto LAB_00f24bdc;
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x54));
    if (*(int *)(param_1 + 0x5c) == -0x80000000 || *(int *)(param_1 + 0x5c) == 0) goto LAB_00f24acc;
LAB_00f24b94:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x60));
    if (*(int *)(param_1 + 0x68) == -0x80000000 || *(int *)(param_1 + 0x68) == 0) goto LAB_00f24adc;
LAB_00f24bac:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x6c));
    if (*(int *)(param_1 + 0x74) == -0x80000000 || *(int *)(param_1 + 0x74) == 0) goto LAB_00f24aec;
LAB_00f24bc4:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x78));
    if (*(int *)(param_1 + 0x80) != -0x80000000 && *(int *)(param_1 + 0x80) != 0) {
LAB_00f24bdc:
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x84));
    }
  }
  uVar6 = *(uint *)(param_1 + 0x18);
  if (uVar6 == 0x11) {
    return;
  }
  iVar4 = 7;
  if (1 < uVar6) {
    iVar4 = uVar6 - 2;
  }
  iVar11 = 0x1c;
  switch(iVar4) {
  case 0:
  case 1:
  case 10:
    goto switchD_00f24b28_caseD_0;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    piVar9 = (int *)(param_1 + 0x1c);
    iVar4 = *piVar9;
    break;
  case 7:
    if (*(int *)(param_1 + 0x20) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x24));
    }
    piVar9 = (int *)(param_1 + 0x2c);
    iVar4 = *piVar9;
    break;
  case 8:
    if (*(int *)(param_1 + 0x1c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x20));
    }
    piVar9 = (int *)(param_1 + 0x28);
    iVar4 = *piVar9;
    break;
  case 0xb:
    iVar11 = 0x28;
    if (*(int *)(param_1 + 0x1c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x20));
    }
  default:
    piVar9 = (int *)(param_1 + iVar11);
    iVar4 = *piVar9;
    goto joined_r0x00f24c24;
  }
  if (iVar4 != -0x80000000) {
joined_r0x00f24c24:
    if (iVar4 != 0) {
      iVar4 = piVar9[1];
      if (iVar4 == 0) {
        return;
      }
      iVar11 = FUN_016d3bc8();
      uVar6 = *(byte *)(iVar4 + -3) & 0x1f;
      if (((*(byte *)(iVar11 + 0x14) & 0x1f) != 0) ||
         (uVar12 = *(uint *)(iVar11 + 0x14) & 0xfffff000, iVar7 = uVar12 - 0x10, uVar12 == 0)) {
        iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar11 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar12 = (uint)(*(byte *)(iVar4 + -3) >> 5);
      iVar15 = *(int *)(iVar11 + 8) + 0x10;
      iVar13 = iVar7 * uVar6 + iVar7 + -4;
      iVar7 = iVar15 + iVar13;
      if (4 < uVar12) {
        if (uVar12 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar12 = *(uint *)(iVar7 + -4);
        if (uVar12 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar7 - iVar4) < uVar12) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar7 - uVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar15 + iVar13) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar11 + 0x14);
      uVar12 = 1 << uVar6;
      *(undefined1 *)(iVar4 + -3) = 0xff;
      *(undefined2 *)(iVar4 + -2) = 0;
      do {
        uVar14 = *(uint *)(iVar11 + 0x10);
        uVar8 = *(uint *)(iVar11 + 0xc) | uVar14;
        if ((uVar12 & uVar8) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar14 == 0) || (uVar8 + uVar12 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar11,uVar6);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar10 = *puVar5;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar5 = uVar10;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar11 + 0x10) = uVar12 + uVar14;
          return;
        }
        puVar16 = (uint *)(iVar11 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar16);
          uVar8 = *puVar16;
          if (uVar14 != uVar8) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar3);
        *puVar16 = uVar12 + uVar14;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar14 == uVar8) {
          return;
        }
      } while( true );
    }
  }
switchD_00f24b28_caseD_0:
  return;
}

