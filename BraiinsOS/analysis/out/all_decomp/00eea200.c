// FUN_00eea200 @ 00eea200 size=432 calls_out=1 calls_in=5
// strings: 

void FUN_00eea200(int param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(int *)(param_1 + 0x50) == -0x80000000 || *(int *)(param_1 + 0x50) == 0) {
    if (*(int *)(param_1 + 0x5c) != -0x80000000 && *(int *)(param_1 + 0x5c) != 0) goto LAB_00eea27c;
LAB_00eea228:
    if (*(int *)(param_1 + 0x68) != -0x80000000 && *(int *)(param_1 + 0x68) != 0) goto LAB_00eea294;
LAB_00eea238:
    if (*(int *)(param_1 + 0x74) != -0x80000000 && *(int *)(param_1 + 0x74) != 0) goto LAB_00eea2ac;
LAB_00eea248:
    if (*(int *)(param_1 + 0x80) != -0x80000000 && *(int *)(param_1 + 0x80) != 0) goto LAB_00eea2c4;
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x54));
    if (*(int *)(param_1 + 0x5c) == -0x80000000 || *(int *)(param_1 + 0x5c) == 0) goto LAB_00eea228;
LAB_00eea27c:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x60));
    if (*(int *)(param_1 + 0x68) == -0x80000000 || *(int *)(param_1 + 0x68) == 0) goto LAB_00eea238;
LAB_00eea294:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x6c));
    if (*(int *)(param_1 + 0x74) == -0x80000000 || *(int *)(param_1 + 0x74) == 0) goto LAB_00eea248;
LAB_00eea2ac:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x78));
    if (*(int *)(param_1 + 0x80) != -0x80000000 && *(int *)(param_1 + 0x80) != 0) {
LAB_00eea2c4:
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x84));
    }
  }
  uVar7 = *(uint *)(param_1 + 0x18);
  if (uVar7 == 0x11) {
    return;
  }
  iVar6 = 7;
  if (1 < uVar7) {
    iVar6 = uVar7 - 2;
  }
  iVar10 = 0xc;
  switch(iVar6) {
  case 0:
  case 1:
  case 10:
    goto switchD_00eea530_caseD_0;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    piVar4 = (int *)(param_1 + 0x1c);
    iVar6 = *piVar4;
    break;
  case 7:
    if (*(int *)(param_1 + 0x20) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x24));
    }
    piVar4 = (int *)(param_1 + 0x2c);
    iVar6 = *piVar4;
    break;
  case 8:
    if (*(int *)(param_1 + 0x1c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x20));
    }
    piVar4 = (int *)(param_1 + 0x28);
    iVar6 = *piVar4;
    break;
  case 0xb:
    iVar10 = 0x18;
    if (*(int *)(param_1 + 0x1c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x20));
    }
  default:
    piVar4 = (int *)(param_1 + 0x10 + iVar10);
    iVar6 = *piVar4;
    goto joined_r0x00eea5d8;
  }
  if (iVar6 != -0x80000000) {
joined_r0x00eea5d8:
    if (iVar6 != 0) {
      iVar6 = piVar4[1];
      if (iVar6 == 0) {
        return;
      }
      iVar10 = FUN_016d3bc8();
      uVar7 = *(byte *)(iVar6 + -3) & 0x1f;
      if (((*(byte *)(iVar10 + 0x14) & 0x1f) != 0) ||
         (uVar12 = *(uint *)(iVar10 + 0x14) & 0xfffff000, iVar8 = uVar12 - 0x10, uVar12 == 0)) {
        iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar10 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar12 = (uint)(*(byte *)(iVar6 + -3) >> 5);
      iVar15 = *(int *)(iVar10 + 8) + 0x10;
      iVar13 = iVar8 * uVar7 + iVar8 + -4;
      iVar8 = iVar15 + iVar13;
      if (4 < uVar12) {
        if (uVar12 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar12 = *(uint *)(iVar8 + -4);
        if (uVar12 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar8 - iVar6) < uVar12) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar8 - uVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar15 + iVar13) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar10 + 0x14);
      uVar12 = 1 << uVar7;
      *(undefined1 *)(iVar6 + -3) = 0xff;
      *(undefined2 *)(iVar6 + -2) = 0;
      do {
        uVar14 = *(uint *)(iVar10 + 0x10);
        uVar9 = *(uint *)(iVar10 + 0xc) | uVar14;
        if ((uVar12 & uVar9) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar14 == 0) || (uVar9 + uVar12 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar10,uVar7);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar11 = *puVar5;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar5 = uVar11;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar10 + 0x10) = uVar12 + uVar14;
          return;
        }
        puVar16 = (uint *)(iVar10 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar16);
          uVar9 = *puVar16;
          if (uVar14 != uVar9) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar3);
        *puVar16 = uVar12 + uVar14;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar14 == uVar9) {
          return;
        }
      } while( true );
    }
  }
switchD_00eea530_caseD_0:
  return;
}

