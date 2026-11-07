// FUN_00d79268 @ 00d79268 size=288 calls_out=2 calls_in=0
// strings: 

void FUN_00d79268(uint *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar3 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar3 = 2;
  }
  switch(iVar3) {
  case 0:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    uVar4 = param_1[1];
    break;
  case 1:
    FUN_00f3d3b0(param_1[1]);
    return;
  case 2:
    if (param_1[3] != 0) {
      thunk_FUN_016d3fb4(param_1[4]);
    }
    if (param_1[9] != 0x80000000 && param_1[9] != 0) {
      thunk_FUN_016d3fb4(param_1[10]);
    }
    puVar5 = (undefined4 *)param_1[7];
    puVar14 = puVar5 + 1;
    for (uVar4 = param_1[8]; uVar4 != 0; uVar4 = uVar4 - 1) {
      if (puVar14[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar14);
      }
      puVar14 = puVar14 + 3;
    }
    if (param_1[6] == 0) {
      return;
    }
    goto LAB_014b47f4;
  case 3:
    uVar4 = param_1[1];
    if ((int)uVar4 < -0x7ffffffb) {
      return;
    }
    break;
  case 4:
    if ((char)param_1[1] == '\x03') {
      puVar5 = (undefined4 *)param_1[2];
      uVar12 = *puVar5;
      puVar14 = (undefined4 *)puVar5[1];
      pcVar6 = (code *)*puVar14;
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(uVar12);
      }
      if (puVar14[1] != 0) {
        thunk_FUN_016d3fb4(uVar12);
      }
      goto LAB_014b47f4;
    }
  default:
    goto switchD_00d7928c_default;
  }
  if (uVar4 != 0) {
    puVar5 = (undefined4 *)param_1[2];
LAB_014b47f4:
    if (puVar5 == (undefined4 *)0x0) {
      return;
    }
    iVar3 = FUN_016d3bc8();
    uVar4 = *(byte *)((int)puVar5 - 3) & 0x1f;
    if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
       (uVar9 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar7 = uVar9 - 0x10, uVar9 == 0)) {
      iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) << 4
      ;
    }
    uVar9 = (uint)(*(byte *)((int)puVar5 - 3) >> 5);
    iVar13 = *(int *)(iVar3 + 8) + 0x10;
    iVar10 = iVar7 * uVar4 + iVar7 + -4;
    iVar7 = iVar13 + iVar10;
    if (4 < uVar9) {
      if (uVar9 != 5) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar6)();
      }
      uVar9 = *(uint *)(iVar7 + -4);
      if (uVar9 < 5) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar6)();
      }
      if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar6 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar6)();
      }
    }
    if ((uint)(iVar7 - (int)puVar5) < uVar9) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar6)();
    }
    if (*(char *)(iVar7 - uVar9) != '\0') {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar6)();
    }
    if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar6)();
    }
    bVar1 = *(byte *)(iVar3 + 0x14);
    uVar9 = 1 << uVar4;
    *(undefined1 *)((int)puVar5 - 3) = 0xff;
    *(undefined2 *)((int)puVar5 - 2) = 0;
    do {
      uVar11 = *(uint *)(iVar3 + 0x10);
      uVar8 = *(uint *)(iVar3 + 0xc) | uVar11;
      if ((uVar9 & uVar8) != 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar6)();
      }
      if ((uVar11 == 0) || (uVar8 + uVar9 == (2 << (bVar1 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar3,uVar4);
        FUN_016dddc0(&DAT_018ddd48);
        if (iStack_24 == 0) {
          return;
        }
        puVar5 = (undefined4 *)FUN_016d2bc8();
        uVar12 = *puVar5;
        FUN_016d6ac4(uStack_28,iStack_24);
        *puVar5 = uVar12;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar3 + 0x10) = uVar9 + uVar11;
        return;
      }
      puVar15 = (uint *)(iVar3 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar15);
        uVar8 = *puVar15;
        if (uVar11 != uVar8) goto LAB_016d409c;
        bVar2 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar2);
      *puVar15 = uVar9 + uVar11;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar11 == uVar8) {
        return;
      }
    } while( true );
  }
switchD_00d7928c_default:
  return;
}

