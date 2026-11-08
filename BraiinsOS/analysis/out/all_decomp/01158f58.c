// FUN_01158f58 @ 01158f58 size=260 calls_out=3 calls_in=9
// strings: 

void FUN_01158f58(uint *param_1,int param_2,undefined4 *param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  uint unaff_r4;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  uint local_40;
  int *piStack_3c;
  uint uStack_38;
  int local_30;
  int local_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar3 = (*(code *)param_3[3])(param_2);
  if (iVar3 != 0) {
    local_30 = iVar3;
    (*(code *)param_3[4])(&local_2c,param_2);
    uVar6 = local_2c + 1;
    uVar4 = 0;
    if (local_2c == -1) {
      uVar6 = 0xffffffff;
    }
    uVar10 = uVar6;
    if (uVar6 < 5) {
      uVar10 = 4;
    }
    if ((uVar6 < 0x40000000) && (unaff_r4 = uVar10 * 4, unaff_r4 < 0x7ffffffd)) {
      piStack_3c = (int *)thunk_FUN_016d4a50(unaff_r4);
      if (piStack_3c != (int *)0x0) {
        *piStack_3c = iVar3;
        uStack_38 = 1;
        local_40 = uVar10;
        FUN_011590bc(&local_40,param_2,param_3);
        *param_1 = local_40;
        param_1[1] = (uint)piStack_3c;
        param_1[2] = uStack_38;
        return;
      }
      uVar4 = 4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar4,unaff_r4);
  }
  *param_1 = 0;
  param_1[1] = 4;
  pcVar7 = (code *)*param_3;
  param_1[2] = 0;
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(param_2);
  }
  if (param_3[1] == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  iVar3 = FUN_016d3bc8();
  uVar6 = *(byte *)(param_2 + -3) & 0x1f;
  if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar8 = uVar10 - 0x10, uVar10 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(param_2 + -3) >> 5);
  iVar13 = *(int *)(iVar3 + 8) + 0x10;
  iVar11 = iVar8 * uVar6 + iVar8 + -4;
  iVar8 = iVar13 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar7)();
    }
    uVar10 = *(uint *)(iVar8 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar7)();
    }
    if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar7)();
    }
  }
  if ((uint)(iVar8 - param_2) < uVar10) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar7)();
  }
  if (*(char *)(iVar8 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar7 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar7)();
  }
  if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar7 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar7)();
  }
  bVar1 = *(byte *)(iVar3 + 0x14);
  uVar10 = 1 << uVar6;
  *(undefined1 *)(param_2 + -3) = 0xff;
  *(undefined2 *)(param_2 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar3 + 0x10);
    uVar9 = *(uint *)(iVar3 + 0xc) | uVar12;
    if ((uVar10 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar7)();
    }
    if ((uVar12 == 0) || (uVar9 + uVar10 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar3,uVar6);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar4 = *puVar5;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar5 = uVar4;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar3 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar14 = (uint *)(iVar3 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar9 = *puVar14;
      if (uVar12 != uVar9) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar2);
    *puVar14 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar9) {
      return;
    }
  } while( true );
}

