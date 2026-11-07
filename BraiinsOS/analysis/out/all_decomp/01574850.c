// FUN_01574850 @ 01574850 size=316 calls_out=3 calls_in=2
// strings: 

void FUN_01574850(undefined1 *param_1,int *param_2)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  bool bVar16;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  char local_38;
  undefined2 uStack_37;
  undefined1 uStack_35;
  undefined1 local_34;
  undefined2 uStack_33;
  undefined1 uStack_31;
  undefined1 uStack_30;
  undefined2 local_2f;
  undefined1 uStack_2d;
  undefined1 uStack_2c;
  undefined2 local_2b;
  undefined1 uStack_29;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  uint uStack_1c;
  
  iVar12 = param_2[1];
  uVar14 = param_2[2];
  iVar3 = FUN_015746e4(iVar12,uVar14);
  if (iVar3 == 0) {
    iVar12 = param_2[1];
    iVar3 = *param_2;
    uStack_2d = (undefined1)param_2[2];
    uStack_31 = (undefined1)iVar12;
    uStack_35 = (undefined1)iVar3;
    *(int *)(param_1 + 0xc) = param_2[2];
    *param_1 = 0;
    *(uint *)(param_1 + 1) = CONCAT13(uStack_35,CONCAT21(uStack_37,local_38));
    *(uint *)(param_1 + 5) = CONCAT13(uStack_31,(int3)((uint)iVar3 >> 8));
    *(uint *)(param_1 + 9) = CONCAT13(uStack_2d,(int3)((uint)iVar12 >> 8));
    return;
  }
  if (uVar14 < 0x10) {
    local_34 = (undefined1)uVar14;
    uStack_33 = (undefined2)(uVar14 >> 8);
    uStack_31 = (undefined1)(uVar14 >> 0x18);
    local_38 = (char)iVar12;
    uStack_37 = (undefined2)((uint)iVar12 >> 8);
    uStack_35 = (undefined1)((uint)iVar12 >> 0x18);
    FUN_01572350(&local_20,&local_38);
    bVar16 = (CONCAT13(uStack_31,CONCAT21(uStack_33,local_34)) == 0 & (byte)local_20) != 0;
    uVar8 = 0;
    if (bVar16) {
      uVar8 = CONCAT13((undefined1)uStack_1c,local_20._1_3_);
    }
    uVar5 = 0;
    if (!bVar16) goto LAB_015748b8;
  }
  else {
LAB_015748b8:
    local_20 = iVar12;
    uStack_1c = uVar14;
    FUN_01572950(&local_38,&local_20);
    if (local_38 != '\0') {
      *param_1 = 2;
      iVar3 = *param_2;
      goto joined_r0x015748e8;
    }
    uVar8 = CONCAT13(local_34,CONCAT12(uStack_35,uStack_37));
    local_48 = CONCAT13(uStack_30,CONCAT12(uStack_31,uStack_33));
    uStack_44 = CONCAT13(uStack_2c,CONCAT12(uStack_2d,local_2f));
    uStack_40 = CONCAT13((undefined1)uStack_28,CONCAT12(uStack_29,local_2b));
    uVar5 = 1;
  }
  *(undefined4 *)(param_1 + 2) = uVar8;
  param_1[1] = uVar5;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 6) = local_48;
  *(undefined4 *)(param_1 + 10) = uStack_44;
  *(undefined4 *)(param_1 + 0xe) = uStack_40;
  iVar3 = *param_2;
joined_r0x015748e8:
  if (iVar3 == 0) {
    return;
  }
  if (iVar12 == 0) {
    return;
  }
  iVar3 = FUN_016d3bc8();
  uVar14 = *(byte *)(iVar12 + -3) & 0x1f;
  if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar6 = uVar9 - 0x10, uVar9 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)(iVar12 + -3) >> 5);
  iVar13 = *(int *)(iVar3 + 8) + 0x10;
  iVar10 = iVar6 * uVar14 + iVar6 + -4;
  iVar6 = iVar13 + iVar10;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar9 = *(uint *)(iVar6 + -4);
    if (uVar9 < 5) {
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
  if ((uint)(iVar6 - iVar12) < uVar9) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar6 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar3 + 0x14);
  uVar9 = 1 << uVar14;
  *(undefined1 *)(iVar12 + -3) = 0xff;
  *(undefined2 *)(iVar12 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar3 + 0x10);
    uVar7 = *(uint *)(iVar3 + 0xc) | uVar11;
    if ((uVar9 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar11 == 0) || (uVar7 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar3,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar4;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar4 = uVar8;
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
      uVar7 = *puVar15;
      if (uVar11 != uVar7) goto LAB_016d409c;
      bVar16 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar16);
    *puVar15 = uVar9 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar7) {
      return;
    }
  } while( true );
}

