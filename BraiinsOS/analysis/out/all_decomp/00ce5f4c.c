// FUN_00ce5f4c @ 00ce5f4c size=464 calls_out=6 calls_in=0
// strings: 

void FUN_00ce5f4c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int unaff_r4;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  int local_80;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  int *local_5c;
  int local_58;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_30;
  int local_2c;
  int iStack_28;
  
  local_68 = 0;
  local_6c = 0;
  local_70 = param_2;
  local_64 = param_3;
  FUN_00ce617c(&local_50,&local_70);
  if (local_50 == -0x80000000) {
    local_80 = 0;
    iVar10 = 0;
    piVar4 = (int *)&DAT_00000004;
  }
  else {
    piVar4 = (int *)thunk_FUN_016d4a50(0x30);
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,0x30);
    }
    *piVar4 = local_50;
    piVar4[2] = local_48;
    piVar4[1] = local_4c;
    local_60 = 4;
    iVar10 = 0xc;
    local_58 = 1;
    local_40 = local_70;
    uStack_3c = local_6c;
    uStack_38 = local_68;
    uStack_34 = local_64;
    local_5c = piVar4;
    while (iVar7 = local_58, FUN_00ce617c(&local_30,&local_40), local_30 != -0x80000000) {
      if (iVar7 == local_60) {
        FUN_00d653ec(&local_60,iVar7,1,4,0xc);
        piVar4 = local_5c;
      }
      local_58 = iVar7 + 1;
      piVar6 = (int *)((int)piVar4 + iVar10);
      *piVar6 = local_30;
      iVar10 = iVar10 + 0xc;
      piVar6[1] = local_2c;
      piVar6[2] = iStack_28;
    }
    local_80 = local_60;
    iVar10 = local_58;
    piVar4 = local_5c;
  }
  FUN_00c4406c(&local_40,piVar4,iVar10,&DAT_0041950f,2);
  piVar6 = piVar4 + 1;
  *param_1 = local_40;
  param_1[1] = uStack_3c;
  param_1[2] = uStack_38;
  for (; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (piVar6[-1] != 0) {
      thunk_FUN_016d3fb4(*piVar6);
    }
    piVar6 = piVar6 + 3;
  }
  if (local_80 == 0) {
    return;
  }
  if (piVar4 == (int *)0x0) {
    return;
  }
  iVar10 = FUN_016d3bc8();
  uVar15 = *(byte *)((int)piVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar10 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar10 + 0x14) & 0xfffff000, iVar7 = uVar11 - 0x10, uVar11 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar10 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)((int)piVar4 + -3) >> 5);
  iVar14 = *(int *)(iVar10 + 8) + 0x10;
  iVar12 = iVar7 * uVar15 + iVar7 + -4;
  iVar7 = iVar14 + iVar12;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar11 = *(uint *)(iVar7 + -4);
    if (uVar11 < 5) {
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
  if ((uint)(iVar7 - (int)piVar4) < uVar11) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar7 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar10 + 0x14);
  uVar11 = 1 << uVar15;
  *(undefined1 *)((int)piVar4 + -3) = 0xff;
  *(undefined2 *)((int)piVar4 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar10 + 0x10);
    uVar8 = *(uint *)(iVar10 + 0xc) | uVar13;
    if ((uVar11 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar13 == 0) || (uVar8 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&iStack_28,iVar10,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar5;
      FUN_016d6ac4(iStack_28,unaff_r4);
      *puVar5 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar10 + 0x10) = uVar11 + uVar13;
      return;
    }
    puVar16 = (uint *)(iVar10 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar8 = *puVar16;
      if (uVar13 != uVar8) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar3);
    *puVar16 = uVar11 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar8) {
      return;
    }
  } while( true );
}

