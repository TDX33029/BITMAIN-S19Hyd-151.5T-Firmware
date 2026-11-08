// FUN_0168b9d4 @ 0168b9d4 size=464 calls_out=4 calls_in=0
// strings: 

void FUN_0168b9d4(undefined4 param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int unaff_r4;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined1 auStack_90 [20];
  int local_7c;
  int local_78;
  undefined4 uStack_28;
  
  iVar4 = *(int *)(param_2 + 0x1c);
  for (iVar8 = *(int *)(param_2 + 0x20) * 0xc0; iVar8 != 0; iVar8 = iVar8 + -0xc0) {
    FUN_016710dc(iVar4);
    iVar4 = iVar4 + 0xc0;
  }
  FUN_0167827c(auStack_90,param_2 + 8);
  for (iVar8 = 0; local_78 * 0xc0 != iVar8; iVar8 = iVar8 + 0xc0) {
    if (*(int *)(local_7c + iVar8) == 1) {
      iVar8 = local_7c + iVar8;
      if ((*(int *)(iVar8 + 0x88) != -0x7ffffffd) && (0 < *(int *)(iVar8 + 0x88))) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar8 + 0x8c));
      }
      *(undefined4 *)(iVar8 + 0x88) = 0x80000003;
      if ((*(int *)(iVar8 + 0x94) != -0x7ffffffd) && (0 < *(int *)(iVar8 + 0x94))) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar8 + 0x98));
      }
      *(undefined4 *)(iVar8 + 0x94) = 0x80000003;
      if ((*(int *)(iVar8 + 0xa0) != -0x7ffffffd) && (0 < *(int *)(iVar8 + 0xa0))) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar8 + 0xa4));
      }
      *(undefined4 *)(iVar8 + 0xa0) = 0x80000003;
      if ((*(int *)(iVar8 + 0xac) != -0x7ffffffd) && (0 < *(int *)(iVar8 + 0xac))) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar8 + 0xb0));
      }
      iVar4 = 6;
      *(undefined4 *)(iVar8 + 0xac) = 0x80000003;
      if (1 < *(uint *)(iVar8 + 0x5c)) {
        iVar4 = *(uint *)(iVar8 + 0x5c) - 2;
      }
                    /* WARNING: Could not recover jumptable at 0x0168bb00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_0168bb04 + *(int *)(&DAT_0168bb04 + iVar4 * 4)))();
      return;
    }
  }
  FUN_016dd1aa(param_1,auStack_90,0x68);
  if ((*(int *)(param_2 + 0x38) != -0x7ffffffd) && (0 < *(int *)(param_2 + 0x38))) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x3c));
  }
  if ((*(int *)(param_2 + 0x44) == -0x7ffffffd) || (*(int *)(param_2 + 0x44) < 1)) {
    return;
  }
  iVar8 = *(int *)(param_2 + 0x48);
  if (iVar8 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar14 = *(byte *)(iVar8 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar6 = uVar10 - 0x10, uVar10 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(iVar8 + -3) >> 5);
  iVar13 = *(int *)(iVar4 + 8) + 0x10;
  iVar11 = iVar6 * uVar14 + iVar6 + -4;
  iVar6 = iVar13 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar10 = *(uint *)(iVar6 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar6 - iVar8) < uVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar6 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar10 = 1 << uVar14;
  *(undefined1 *)(iVar8 + -3) = 0xff;
  *(undefined2 *)(iVar8 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar4 + 0x10);
    uVar7 = *(uint *)(iVar4 + 0xc) | uVar12;
    if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar7 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar5;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar5 = uVar9;
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
      uVar7 = *puVar15;
      if (uVar12 != uVar7) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar3);
    *puVar15 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar7) {
      return;
    }
  } while( true );
}

