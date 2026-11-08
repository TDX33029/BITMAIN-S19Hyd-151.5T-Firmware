// FUN_01519280 @ 01519280 size=1624 calls_out=13 calls_in=1
// strings: array | boolean | integer | number | objectSingle | string

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01519280(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  byte bVar31;
  int *piVar32;
  undefined4 uVar33;
  int *piVar34;
  undefined4 *puVar35;
  int iVar36;
  undefined4 uVar37;
  undefined *puVar38;
  byte bVar39;
  undefined4 uVar40;
  undefined8 uVar41;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  uVar37 = *(undefined4 *)(param_2 + 0x38);
  uVar40 = *(undefined4 *)(param_2 + 0x3c);
  uVar41 = FUN_015345a4(uVar37,uVar40,&DAT_0056df8c,4);
  uVar33 = (undefined4)((ulonglong)uVar41 >> 0x20);
  piVar32 = (int *)uVar41;
  if (*param_4 == '\x03') {
    uVar37 = *(undefined4 *)(param_4 + 8);
    uVar40 = *(undefined4 *)(param_4 + 0xc);
LAB_01519350:
    FUN_0157d5d8(param_1 + 1,uVar37,uVar40,piVar32,uVar33,param_4);
    *param_1 = 1;
    return;
  }
  if (*param_4 != '\x04') {
    uVar41 = FUN_015345a4(uVar37,uVar40,&DAT_0056df8c,4);
    uVar37 = (undefined4)((ulonglong)uVar41 >> 0x20);
    piVar34 = (int *)uVar41;
    do {
      iVar36 = *piVar34;
      bVar2 = (bool)hasExclusiveAccess(piVar34);
    } while (!bVar2);
    *piVar34 = iVar36 + 1;
    if (-1 < iVar36) {
      uVar41 = FUN_015321a0();
      uVar37 = FUN_01595a70(piVar34,uVar37,piVar34,uVar37,uVar41,param_4,0x41);
      *param_1 = 1;
      param_1[1] = 0;
      param_1[2] = uVar37;
      DataMemoryBarrier(0xb);
      do {
        iVar36 = *piVar32;
        bVar2 = (bool)hasExclusiveAccess(piVar32);
      } while (!bVar2);
      *piVar32 = iVar36 + -1;
      if (iVar36 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(piVar32,uVar33);
        return;
      }
      return;
    }
LAB_015198f4:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x15198f4);
    (*pcVar1)();
  }
  iVar36 = *(int *)(param_4 + 0xc);
  param_4 = *(char **)(param_4 + 8);
  if (iVar36 == 1) {
    if (*param_4 == '\x03') {
      uVar37 = *(undefined4 *)(param_4 + 8);
      uVar40 = *(undefined4 *)(param_4 + 0xc);
      goto LAB_01519350;
    }
    do {
      iVar36 = *piVar32;
      bVar2 = (bool)hasExclusiveAccess(piVar32);
    } while (!bVar2);
    *piVar32 = iVar36 + 1;
    if (-1 < iVar36) {
      uVar41 = FUN_015321a0();
      uVar33 = FUN_015956e0(piVar32,uVar33,piVar32,uVar33,uVar41,param_4,0x40);
      *param_1 = 1;
      param_1[1] = 0;
      param_1[2] = uVar33;
      return;
    }
    goto LAB_015198f4;
  }
  if (iVar36 == 0) {
    bVar39 = 0;
  }
  else {
    bVar39 = 0;
    iVar36 = iVar36 * 0x18;
    do {
      if (*param_4 != '\x03') goto LAB_01519468;
      bVar31 = FUN_01596fc0(*(undefined4 *)(param_4 + 8),*(undefined4 *)(param_4 + 0xc));
      if (bVar31 == 0) goto LAB_015194b4;
      bVar39 = bVar31 | bVar39;
      iVar36 = iVar36 + -0x18;
      param_4 = param_4 + 0x18;
    } while (iVar36 != 0);
  }
  puVar35 = (undefined4 *)thunk_FUN_01be5118(0xc);
  if (puVar35 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  puVar38 = &DAT_01cfb180;
  *puVar35 = piVar32;
  *(byte *)(puVar35 + 2) = bVar39;
  puVar35[1] = uVar33;
  goto LAB_01519758;
LAB_01519468:
  do {
    iVar36 = *piVar32;
    bVar2 = (bool)hasExclusiveAccess(piVar32);
  } while (!bVar2);
  *piVar32 = iVar36 + 1;
  if (iVar36 < 0) goto LAB_015198f4;
  uVar41 = FUN_015321a0();
  puVar38 = (undefined *)FUN_015956e0(piVar32,uVar33,piVar32,uVar33,uVar41,param_4,0x40);
  goto LAB_01519724;
LAB_015194b4:
  do {
    iVar36 = *piVar32;
    bVar2 = (bool)hasExclusiveAccess(piVar32);
  } while (!bVar2);
  *piVar32 = iVar36 + 1;
  if (iVar36 < 0) goto LAB_015198f4;
  uVar41 = FUN_015321a0();
  puVar35 = (undefined4 *)thunk_FUN_01be5118(0xa8);
  if (puVar35 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0xa8);
  }
  FUN_015383a0(&local_40,"array",5);
  uVar26 = uStack_2c;
  uVar21 = uStack_30;
  uVar16 = local_34;
  puVar11 = local_38;
  uVar40 = local_3c;
  uVar37 = local_40;
  if ((char)local_40 == '\x06') {
    local_58 = local_3c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_58,&DAT_01cfb5f0,&DAT_01cfb1a0);
  }
  FUN_015383a0(&local_40,"boolean",7);
  uVar27 = uStack_2c;
  uVar22 = uStack_30;
  uVar17 = local_34;
  puVar12 = local_38;
  uVar7 = local_3c;
  uVar3 = local_40;
  if ((char)local_40 == '\x06') {
    local_58 = local_3c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_58,&DAT_01cfb5f0,&DAT_01cfb1a0);
  }
  FUN_015383a0(&local_40,"integer",7);
  uVar28 = uStack_2c;
  uVar23 = uStack_30;
  uVar18 = local_34;
  puVar13 = local_38;
  uVar8 = local_3c;
  uVar4 = local_40;
  if ((char)local_40 == '\x06') {
    local_58 = local_3c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_58,&DAT_01cfb5f0,&DAT_01cfb1a0);
  }
  FUN_015383a0(&local_40,&DAT_0056d030,4);
  uVar29 = uStack_2c;
  uVar24 = uStack_30;
  uVar19 = local_34;
  puVar14 = local_38;
  uVar9 = local_3c;
  uVar5 = local_40;
  if ((char)local_40 == '\x06') {
    local_58 = local_3c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_58,&DAT_01cfb5f0,&DAT_01cfb1a0);
  }
  FUN_015383a0(&local_40,"number",6);
  uVar30 = uStack_2c;
  uVar25 = uStack_30;
  uVar20 = local_34;
  puVar15 = local_38;
  uVar10 = local_3c;
  uVar6 = local_40;
  if ((char)local_40 == '\x06') {
    local_58 = local_3c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_58,&DAT_01cfb5f0,&DAT_01cfb1a0);
  }
  FUN_015383a0(&local_40,"objectSingle",6);
  if ((char)local_40 == '\x06') {
    local_58 = local_3c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_58,&DAT_01cfb5f0,&DAT_01cfb1a0);
  }
  local_58 = local_40;
  uStack_54 = local_3c;
  uStack_50 = local_38;
  uStack_4c = local_34;
  uStack_48 = uStack_30;
  uStack_44 = uStack_2c;
  FUN_015383a0(&local_40,"string",6);
  if ((char)local_40 == '\x06') {
    local_28 = local_3c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_28,&DAT_01cfb5f0,&DAT_01cfb1a0);
  }
  puVar35[0x24] = local_40;
  puVar35[0x25] = local_3c;
  puVar35[0x26] = local_38;
  puVar35[0x27] = local_34;
  puVar35[0x28] = uStack_30;
  puVar35[0x29] = uStack_2c;
  *puVar35 = uVar37;
  puVar35[1] = uVar40;
  puVar35[2] = puVar11;
  puVar35[3] = uVar16;
  puVar35[4] = uVar21;
  puVar35[5] = uVar26;
  puVar35[6] = uVar3;
  puVar35[7] = uVar7;
  puVar35[8] = puVar12;
  puVar35[9] = uVar17;
  puVar35[10] = uVar22;
  puVar35[0xb] = uVar27;
  puVar35[0xc] = uVar4;
  puVar35[0xd] = uVar8;
  puVar35[0xe] = puVar13;
  puVar35[0xf] = uVar18;
  puVar35[0x10] = uVar23;
  puVar35[0x11] = uVar28;
  puVar35[0x12] = uVar5;
  puVar35[0x13] = uVar9;
  puVar35[0x14] = puVar14;
  puVar35[0x15] = uVar19;
  puVar35[0x16] = uVar24;
  puVar35[0x17] = uVar29;
  puVar35[0x18] = uVar6;
  puVar35[0x19] = uVar10;
  puVar35[0x1a] = puVar15;
  puVar35[0x1b] = uVar20;
  puVar35[0x1c] = uVar25;
  puVar35[0x1d] = uVar30;
  puVar35[0x1e] = local_58;
  puVar35[0x1f] = uStack_54;
  puVar35[0x20] = uStack_50;
  puVar35[0x21] = uStack_4c;
  puVar35[0x22] = uStack_48;
  puVar35[0x23] = uStack_44;
  local_34 = 7;
  local_3c = 7;
  local_40 = CONCAT31(local_40._1_3_,4);
  local_38 = puVar35;
  puVar38 = (undefined *)FUN_015941ec(piVar32,uVar33,piVar32,uVar33,uVar41,param_4,&local_40);
  FUN_00db4764(&local_40);
LAB_01519724:
  puVar35 = (undefined4 *)0x0;
LAB_01519758:
  param_1[1] = puVar35;
  param_1[2] = puVar38;
  *param_1 = 1;
  return;
}

