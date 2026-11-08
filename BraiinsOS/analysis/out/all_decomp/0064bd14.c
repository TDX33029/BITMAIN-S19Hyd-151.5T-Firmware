// FUN_0064bd14 @ 0064bd14 size=312 calls_out=9 calls_in=3
// strings: 

void FUN_0064bd14(int *param_1)

{
  bool bVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 != 3 || param_1[1] != 0) {
    if (param_1[0xd4] != 0x3b9aca01) {
      piVar3 = (int *)param_1[0xd0];
      if (piVar3 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_010b53fc(param_1[0xd0]);
        }
      }
      FUN_0064cac8(param_1 + 0xd2);
    }
    FUN_00692c7c(param_1[200] + 8,param_1[0xc9] + 8,1);
    FUN_0064cc74(param_1);
    FUN_0148c9fc(param_1 + 0x8e);
    piVar3 = (int *)param_1[0xf0];
    if (piVar3 == (int *)0x0) {
      return;
    }
    iVar4 = *piVar3;
    if (iVar4 != 0) {
      puVar14 = (undefined4 *)piVar3[1];
      pcVar5 = (code *)*puVar14;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(iVar4);
      }
      if (puVar14[1] != 0) {
        thunk_FUN_016d3fb4(iVar4);
      }
    }
    if (piVar3 == (int *)0x0) {
      return;
    }
    iVar4 = FUN_016d3bc8();
    uVar6 = *(byte *)((int)piVar3 + -3) & 0x1f;
    if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
       (uVar10 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar7 = uVar10 - 0x10, uVar10 == 0)) {
      iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4
      ;
    }
    uVar10 = (uint)(*(byte *)((int)piVar3 + -3) >> 5);
    iVar13 = *(int *)(iVar4 + 8) + 0x10;
    iVar11 = iVar7 * uVar6 + iVar7 + -4;
    iVar7 = iVar13 + iVar11;
    if (4 < uVar10) {
      if (uVar10 != 5) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar5)();
      }
      uVar10 = *(uint *)(iVar7 + -4);
      if (uVar10 < 5) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar5)();
      }
      if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar5)();
      }
    }
    if ((uint)(iVar7 - (int)piVar3) < uVar10) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar5)();
    }
    if (*(char *)(iVar7 - uVar10) != '\0') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar5)();
    }
    if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar5)();
    }
    bVar2 = *(byte *)(iVar4 + 0x14);
    uVar10 = 1 << uVar6;
    *(undefined1 *)((int)piVar3 + -3) = 0xff;
    *(undefined2 *)((int)piVar3 + -2) = 0;
    do {
      uVar12 = *(uint *)(iVar4 + 0x10);
      uVar8 = *(uint *)(iVar4 + 0xc) | uVar12;
      if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar5)();
      }
      if ((uVar12 == 0) || (uVar8 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar4,uVar6);
        FUN_016dddc0(&DAT_018ddd48);
        if (iStack_24 == 0) {
          return;
        }
        puVar14 = (undefined4 *)FUN_016d2bc8();
        uVar9 = *puVar14;
        FUN_016d6ac4(uStack_28,iStack_24);
        *puVar14 = uVar9;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar4 + 0x10) = uVar10 + uVar12;
        return;
      }
      puVar15 = (uint *)(iVar4 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar15);
        uVar8 = *puVar15;
        if (uVar12 != uVar8) goto LAB_016d409c;
        bVar1 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar1);
      *puVar15 = uVar10 + uVar12;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar12 == uVar8) {
        return;
      }
    } while( true );
  }
  iVar4 = 1;
  uVar6 = param_1[2];
  if ((uint)(uVar6 < 4) <= (uint)-param_1[3]) {
    iVar4 = uVar6 - 4;
  }
  if (iVar4 == 0) {
    FUN_007ab1cc(param_1 + 4,0,uVar6,-(param_1[3] + (uint)(uVar6 >= 4)));
  }
  else {
    if (iVar4 != 1) goto LAB_0064be40;
    FUN_007aad34();
  }
  FUN_005c3320(param_1 + 0x92);
LAB_0064be40:
  FUN_005c3320(param_1 + 0xb4);
  return;
}

