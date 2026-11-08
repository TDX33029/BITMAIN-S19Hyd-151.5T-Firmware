// FUN_0151d2b8 @ 0151d2b8 size=576 calls_out=4 calls_in=0
// strings: 

void FUN_0151d2b8(uint *param_1)

{
  bool bVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar7 = *param_1;
  if (uVar7 == 0x80000029) {
    uVar12 = param_1[1];
    puVar14 = (undefined4 *)param_1[2];
    pcVar3 = (code *)*puVar14;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar12);
    }
    uVar7 = puVar14[1];
joined_r0x0151d500:
    if (uVar7 != 0) {
LAB_014b47f4:
      if (uVar12 == 0) {
        return;
      }
      iVar4 = FUN_016d3bc8();
      uVar7 = *(byte *)(uVar12 - 3) & 0x1f;
      if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar6 = uVar9 - 0x10, uVar9 == 0)) {
        iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar9 = (uint)(*(byte *)(uVar12 - 3) >> 5);
      iVar13 = *(int *)(iVar4 + 8) + 0x10;
      iVar10 = iVar6 * uVar7 + iVar6 + -4;
      iVar6 = iVar13 + iVar10;
      if (4 < uVar9) {
        if (uVar9 != 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar3)();
        }
        uVar9 = *(uint *)(iVar6 + -4);
        if (uVar9 < 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar3)();
        }
        if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar3)();
        }
      }
      if (iVar6 - uVar12 < uVar9) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar3)();
      }
      if (*(char *)(iVar6 - uVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar3)();
      }
      if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar3)();
      }
      bVar2 = *(byte *)(iVar4 + 0x14);
      uVar9 = 1 << uVar7;
      *(undefined1 *)(uVar12 - 3) = 0xff;
      *(undefined2 *)(uVar12 - 2) = 0;
      do {
        uVar11 = *(uint *)(iVar4 + 0x10);
        uVar12 = *(uint *)(iVar4 + 0xc) | uVar11;
        if ((uVar9 & uVar12) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar3)();
        }
        if ((uVar11 == 0) || (uVar12 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar4,uVar7);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar14 = (undefined4 *)FUN_016d2bc8();
          uVar8 = *puVar14;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar14 = uVar8;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar4 + 0x10) = uVar9 + uVar11;
          return;
        }
        puVar15 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar12 = *puVar15;
          if (uVar11 != uVar12) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar1);
        *puVar15 = uVar9 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar12) {
          return;
        }
      } while( true );
    }
  }
  else {
    iVar4 = 0xb;
    if (0x80000012 < uVar7) {
      iVar4 = uVar7 + 0x7fffffed;
    }
    switch(iVar4) {
    case 0:
    case 1:
    case 0xd:
      if (param_1[1] == 0) {
        return;
      }
      uVar12 = param_1[2];
      goto LAB_014b47f4;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 9:
    case 10:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
      break;
    case 8:
      uVar7 = param_1[1];
      if ((int)uVar7 < -0x7fffffea) {
        return;
      }
      uVar12 = param_1[2];
      uVar9 = uVar12;
      for (uVar11 = param_1[3]; uVar11 != 0; uVar11 = uVar11 - 1) {
        FUN_01496be4(uVar9);
        uVar9 = uVar9 + 0x3c;
      }
      goto joined_r0x0151d500;
    case 0xb:
      uVar12 = 0xe;
      if ((int)uVar7 < 0) {
        uVar12 = uVar7 ^ 0x80000000;
      }
      if (uVar12 < 0xe) {
        return;
      }
      switch(uVar12) {
      case 0xe:
        if (((char)param_1[3] == '\0') && ((param_1[4] & 0x7fffffff) != 0)) {
          thunk_FUN_016d3fb4(param_1[5]);
        }
        uVar12 = param_1[1];
        puVar14 = (undefined4 *)(uVar12 + 4);
        for (uVar9 = param_1[2]; uVar9 != 0; uVar9 = uVar9 - 1) {
          if (puVar14[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar14);
          }
          puVar14 = puVar14 + 3;
        }
        goto joined_r0x0151d500;
      case 0xf:
      case 0x11:
        break;
      case 0x10:
        if ((-0x7fffffff < (int)param_1[4]) && (param_1[4] != 0)) {
          thunk_FUN_016d3fb4(param_1[5]);
        }
        uVar12 = param_1[2];
        FUN_01498e88(uVar12,param_1[3]);
        if (param_1[1] != 0) goto LAB_014b47f4;
        break;
      default:
        piVar5 = (int *)param_1[1];
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar5;
          bVar1 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar1);
        *piVar5 = iVar4 + -1;
        goto LAB_0151d3e4;
      }
      break;
    case 0xc:
      if (param_1[1] == 5) {
        piVar5 = (int *)param_1[2];
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar5;
          bVar1 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar1);
        *piVar5 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_015614d8(param_1[2],param_1[3]);
          return;
        }
      }
      break;
    default:
      piVar5 = (int *)param_1[1];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar5;
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = iVar4 + -1;
LAB_0151d3e4:
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015614d8(param_1[1],param_1[2]);
        return;
      }
    }
  }
  return;
}

