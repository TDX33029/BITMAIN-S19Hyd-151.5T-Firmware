// FUN_01584edc @ 01584edc size=276 calls_out=5 calls_in=1
// strings: 

void FUN_01584edc(undefined4 *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined1 uVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    uVar14 = 0x28;
    switch(*(undefined4 *)(param_2 + 4)) {
    case 2:
    case 6:
    case 0xd:
    case 0x10:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x28:
      uVar14 = 0x2a;
      break;
    case 4:
      uVar14 = 0x23;
      break;
    case 0xb:
      uVar14 = 0xd;
      break;
    case 0x16:
    case 0x24:
      uVar14 = 0x2b;
    }
    FUN_01584c70(param_1);
    *(undefined1 *)(param_1 + 3) = uVar14;
    return;
  }
  iVar4 = thunk_FUN_016d4a50(0x28);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x28);
  }
  iVar5 = FUN_016dd1aa(iVar4,&DAT_0041d900,0x28);
  if (cVar1 != '\x03') {
    if (cVar1 == '\x02') {
      iVar5 = *(int *)(param_2 + 4);
    }
    *param_1 = 0x28;
    param_1[1] = iVar4;
    if (cVar1 == '\x02') {
      param_2 = (char *)(iVar5 + 8);
    }
    else {
      param_2 = param_2 + 1;
    }
    param_1[2] = 0x28;
    *(char *)(param_1 + 3) = *param_2;
    return;
  }
  puVar8 = *(undefined4 **)(param_2 + 4);
  *param_1 = 0x28;
  param_1[1] = iVar4;
  param_1[2] = 0x28;
  uVar12 = *puVar8;
  puVar15 = (undefined4 *)puVar8[1];
  pcVar6 = (code *)*puVar15;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(puVar8 + 2);
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(uVar12);
  }
  if (puVar15[1] != 0) {
    thunk_FUN_016d3fb4(uVar12);
  }
  if (puVar8 == (undefined4 *)0x0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar16 = *(byte *)((int)puVar8 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar5 = uVar9 - 0x10, uVar9 == 0)) {
    iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)((int)puVar8 + -3) >> 5);
  iVar13 = *(int *)(iVar4 + 8) + 0x10;
  iVar10 = iVar5 * uVar16 + iVar5 + -4;
  iVar5 = iVar13 + iVar10;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar6)();
    }
    uVar9 = *(uint *)(iVar5 + -4);
    if (uVar9 < 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar6)();
    }
    if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar6)();
    }
  }
  if ((uint)(iVar5 - (int)puVar8) < uVar9) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar6)();
  }
  if (*(char *)(iVar5 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar6)();
  }
  if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar6)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar9 = 1 << uVar16;
  *(undefined1 *)((int)puVar8 + -3) = 0xff;
  *(undefined2 *)((int)puVar8 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar4 + 0x10);
    uVar7 = *(uint *)(iVar4 + 0xc) | uVar11;
    if ((uVar9 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar6)();
    }
    if ((uVar11 == 0) || (uVar7 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar16);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar8 = (undefined4 *)FUN_016d2bc8();
      uVar12 = *puVar8;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar8 = uVar12;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar9 + uVar11;
      return;
    }
    puVar17 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar7 = *puVar17;
      if (uVar11 != uVar7) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar3);
    *puVar17 = uVar9 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar7) {
      return;
    }
  } while( true );
}

