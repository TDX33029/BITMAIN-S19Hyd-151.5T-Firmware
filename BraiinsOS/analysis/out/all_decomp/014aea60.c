// FUN_014aea60 @ 014aea60 size=220 calls_out=4 calls_in=0
// strings: 

void FUN_014aea60(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int unaff_r5;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  int local_30;
  int local_2c;
  undefined4 uStack_28;
  int local_24;
  int *local_20;
  int local_1c;
  
  (**(code **)(param_1[4] + 0x10))(param_1[3],param_2);
  if (*param_1 == -0x80000000) {
    iVar11 = -0x80000000;
  }
  else {
    unaff_r5 = param_1[2];
    if (unaff_r5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,unaff_r5);
    }
    iVar12 = param_1[1];
    if (unaff_r5 == 0) {
      param_1 = (int *)&DAT_00000001;
      iVar11 = 0;
    }
    else {
      param_1 = (int *)thunk_FUN_016d4a50(unaff_r5);
      if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,unaff_r5);
      }
      iVar11 = unaff_r5;
    }
    FUN_016dd1aa(param_1,iVar12,unaff_r5);
  }
  local_24 = iVar11;
  local_20 = param_1;
  local_1c = unaff_r5;
  FUN_0148cfcc(&local_30,param_2,&local_24);
  if ((local_30 < -0x7ffffffe) || (local_30 == 0)) {
    return;
  }
  if (local_2c == 0) {
    return;
  }
  iVar12 = FUN_016d3bc8();
  uVar13 = *(byte *)(local_2c + -3) & 0x1f;
  if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
     (uVar7 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar11 = uVar7 - 0x10, uVar7 == 0)) {
    iVar11 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar7 = (uint)(*(byte *)(local_2c + -3) >> 5);
  iVar10 = *(int *)(iVar12 + 8) + 0x10;
  iVar8 = iVar11 * uVar13 + iVar11 + -4;
  iVar11 = iVar10 + iVar8;
  if (4 < uVar7) {
    if (uVar7 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar7 = *(uint *)(iVar11 + -4);
    if (uVar7 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar11 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar11 - local_2c) < uVar7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar11 - uVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar10 + iVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar12 + 0x14);
  uVar7 = 1 << uVar13;
  *(undefined1 *)(local_2c + -3) = 0xff;
  *(undefined2 *)(local_2c + -2) = 0;
  do {
    uVar9 = *(uint *)(iVar12 + 0x10);
    uVar5 = *(uint *)(iVar12 + 0xc) | uVar9;
    if ((uVar7 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar9 == 0) || (uVar5 + uVar7 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar12,uVar13);
      iVar12 = local_24;
      FUN_016dddc0(&DAT_018ddd48);
      if (iVar12 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar6 = *puVar4;
      FUN_016d6ac4(uStack_28,iVar12);
      *puVar4 = uVar6;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar12 + 0x10) = uVar7 + uVar9;
      return;
    }
    puVar14 = (uint *)(iVar12 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar5 = *puVar14;
      if (uVar9 != uVar5) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar3);
    *puVar14 = uVar7 + uVar9;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar9 == uVar5) {
      return;
    }
  } while( true );
}

