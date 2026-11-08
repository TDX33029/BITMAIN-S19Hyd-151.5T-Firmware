// FUN_01553334 @ 01553334 size=412 calls_out=8 calls_in=1
// strings: 

void FUN_01553334(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int unaff_r4;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uStack_28;
  
  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,(int)&uStack_28 + 3,&DAT_018a8014,&DAT_018a8a00);
  }
  uVar12 = *param_1;
  iVar4 = thunk_FUN_016d4a50(param_5);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,param_5);
  }
  FUN_016dd1aa(iVar4,param_4,param_5);
  if (param_3 != 0) {
    param_4 = FUN_016d38c8(param_3,1);
    if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_3);
    }
    uVar12 = FUN_00605900(uVar12);
    bVar3 = false;
    iVar5 = FUN_017793e0(uVar12,param_4,param_3,iVar4,param_5,param_6,param_7,param_8,param_9,0,0);
    if (iVar5 == 1) goto LAB_015533f8;
    thunk_FUN_016d3fb4(param_4);
  }
  bVar3 = true;
LAB_015533f8:
  iVar5 = 0;
  do {
    *(undefined1 *)(iVar4 + iVar5) = 0;
    iVar5 = iVar5 + 1;
  } while (param_5 != iVar5);
  thunk_FUN_016d3fb4(iVar4);
  if (bVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,(int)&uStack_28 + 3,&DAT_018a8014,&DAT_018a8a10);
  }
  FUN_016dd1aa(param_2,param_4,param_3);
  if (param_3 == 0) {
    return;
  }
  iVar4 = 0;
  do {
    *(undefined1 *)(param_4 + iVar4) = 0;
    iVar4 = iVar4 + 1;
  } while (param_3 != iVar4);
  if (param_4 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar13 = *(byte *)(param_4 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar5 = uVar8 - 0x10, uVar8 == 0)) {
    iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar8 = (uint)(*(byte *)(param_4 + -3) >> 5);
  iVar11 = *(int *)(iVar4 + 8) + 0x10;
  iVar9 = iVar5 * uVar13 + iVar5 + -4;
  iVar5 = iVar11 + iVar9;
  if (4 < uVar8) {
    if (uVar8 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar8 = *(uint *)(iVar5 + -4);
    if (uVar8 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar5 - param_4) < uVar8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar5 - uVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar11 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar8 = 1 << uVar13;
  *(undefined1 *)(param_4 + -3) = 0xff;
  *(undefined2 *)(param_4 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar4 + 0x10);
    uVar7 = *(uint *)(iVar4 + 0xc) | uVar10;
    if ((uVar8 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar10 == 0) || (uVar7 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar13);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar12 = *puVar6;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar6 = uVar12;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar8 + uVar10;
      return;
    }
    puVar14 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar7 = *puVar14;
      if (uVar10 != uVar7) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar3);
    *puVar14 = uVar8 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar7) {
      return;
    }
  } while( true );
}

