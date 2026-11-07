// FUN_0072be18 @ 0072be18 size=408 calls_out=4 calls_in=2
// strings: 

void FUN_0072be18(int *param_1)

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
  
  switch((char)param_1[0x78]) {
  case '\0':
    goto switchD_0072be34_caseD_0;
  default:
    goto switchD_0072be34_caseD_1;
  case '\x03':
    break;
  case '\x04':
    if ((char)param_1[0x86] == '\x03') {
      if ((short)param_1[0x7e] == 3) {
        piVar4 = (int *)param_1[0x7f];
        if (*piVar4 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar1 = (bool)hasExclusiveAccess(piVar4);
          if (bVar1) {
            *piVar4 = 0x84;
            goto LAB_0072bf84;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        (**(code **)(piVar4[2] + 0x10))();
      }
    }
    else if (((char)param_1[0x86] == '\0') && (param_1[0x7a] != 0)) {
      thunk_FUN_016d3fb4(param_1[0x7b]);
    }
LAB_0072bf84:
    if (param_1[0x87] != 0) {
      thunk_FUN_016d3fb4(param_1[0x88]);
    }
    break;
  case '\x05':
    if ((char)param_1[0x2a9] == '\x03') {
      FUN_0072c1f4(param_1 + 0xec);
      *(undefined1 *)((int)param_1 + 0xaa5) = 0;
    }
    else if (((char)param_1[0x2a9] == '\0') && (param_1[0x7e] != 0)) {
      thunk_FUN_016d3fb4(param_1[0x7f]);
    }
    iVar7 = param_1[0x7a];
    iVar5 = 0x1ec;
    goto joined_r0x0072bf6c;
  case '\x06':
    if ((char)param_1[0x23b] == '\x03') {
      FUN_0072c1f4(param_1 + 0x7e);
      *(undefined1 *)((int)param_1 + 0x8ed) = 0;
    }
    else if (((char)param_1[0x23b] == '\0') && (param_1[0x7a] != 0)) {
      thunk_FUN_016d3fb4(param_1[0x7b]);
    }
    iVar7 = param_1[0x23c];
    iVar5 = 0x8f4;
joined_r0x0072bf6c:
    if (iVar7 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)((int)param_1 + iVar5));
    }
    if (param_1[0xe] != 3) {
      FUN_0072c2ec();
    }
  }
  iVar5 = param_1[0xc];
  FUN_00a07b4c(iVar5);
  thunk_FUN_016d3fb4(iVar5);
  param_1 = param_1 + 4;
switchD_0072be34_caseD_0:
  if (*param_1 != 0) {
    iVar5 = param_1[1];
    if (iVar5 == 0) {
      return;
    }
    iVar7 = FUN_016d3bc8();
    uVar15 = *(byte *)(iVar5 + -3) & 0x1f;
    if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
       (uVar11 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar8 = uVar11 - 0x10, uVar11 == 0)) {
      iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2) << 4
      ;
    }
    uVar11 = (uint)(*(byte *)(iVar5 + -3) >> 5);
    iVar14 = *(int *)(iVar7 + 8) + 0x10;
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
    bVar3 = *(byte *)(iVar7 + 0x14);
    uVar11 = 1 << uVar15;
    *(undefined1 *)(iVar5 + -3) = 0xff;
    *(undefined2 *)(iVar5 + -2) = 0;
    do {
      uVar13 = *(uint *)(iVar7 + 0x10);
      uVar9 = *(uint *)(iVar7 + 0xc) | uVar13;
      if ((uVar11 & uVar9) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar2)();
      }
      if ((uVar13 == 0) || (uVar9 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar7,uVar15);
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
        *(uint *)(iVar7 + 0x10) = uVar11 + uVar13;
        return;
      }
      puVar16 = (uint *)(iVar7 + 0x10);
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
switchD_0072be34_caseD_1:
  return;
}

