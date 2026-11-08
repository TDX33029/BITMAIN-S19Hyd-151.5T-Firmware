// FUN_0146ca84 @ 0146ca84 size=272 calls_out=4 calls_in=1
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers.

void FUN_0146ca84(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  bool bVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (param_1 == (uint *)0x0) {
    return;
  }
  if ((*param_1 & 1) != 0) {
    iVar6 = 0x180;
    if (param_1[0xc] != 0) {
      iVar6 = 0xb8;
    }
    if (*(undefined1 **)(param_1[0xd] + iVar6 + 0x90) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                   ,0x73,&DAT_018aceec);
    }
    FUN_0165b454(param_1[0xd] + iVar6 + 0x58,param_1 + 2);
  }
  if (param_1[0xc] == 0) {
    piVar3 = (int *)param_1[0xd];
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar15 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar15);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01659344(param_1[0xd]);
    }
  }
  else {
    piVar3 = (int *)param_1[0xd];
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar15 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar15);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_016586fc(param_1[0xd]);
    }
  }
  bVar15 = *param_1 != 0 || param_1[1] != 0;
  uVar4 = 0;
  if (bVar15) {
    uVar4 = param_1[8];
  }
  if (bVar15 && uVar4 != 0) {
    (**(code **)(uVar4 + 0xc))(param_1[9]);
  }
  if (param_1 == (uint *)0x0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar4 = *(byte *)((int)param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar7 = uVar10 - 0x10, uVar10 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)((int)param_1 + -3) >> 5);
  iVar13 = *(int *)(iVar6 + 8) + 0x10;
  iVar11 = iVar7 * uVar4 + iVar7 + -4;
  iVar7 = iVar13 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar10 = *(uint *)(iVar7 + -4);
    if (uVar10 < 5) {
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
  if ((uint)(iVar7 - (int)param_1) < uVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar7 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar6 + 0x14);
  uVar10 = 1 << uVar4;
  *(undefined1 *)((int)param_1 + -3) = 0xff;
  *(undefined2 *)((int)param_1 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar6 + 0x10);
    uVar8 = *(uint *)(iVar6 + 0xc) | uVar12;
    if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar8 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar6,uVar4);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar5;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar5 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar6 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar14 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar8 = *puVar14;
      if (uVar12 != uVar8) goto LAB_016d409c;
      bVar15 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar15);
    *puVar14 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar8) {
      return;
    }
  } while( true );
}

