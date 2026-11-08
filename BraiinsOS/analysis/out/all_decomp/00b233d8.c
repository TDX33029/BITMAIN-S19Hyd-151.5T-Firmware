// FUN_00b233d8 @ 00b233d8 size=876 calls_out=11 calls_in=2
// strings: assertion failed: min <= maxmnamernameserialretryexpire

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00b23484 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00b233d8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5,int *param_6)

{
  uint uVar1;
  double dVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 extraout_r1;
  uint uVar10;
  undefined4 extraout_r2;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  undefined4 *puVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint in_fpscr;
  float fVar23;
  double dVar24;
  float fVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined8 uVar30;
  uint local_f0;
  uint local_d8;
  int local_b8;
  undefined4 *puStack_b4;
  int iStack_b0;
  int local_a8;
  undefined4 *local_a4;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  int local_70;
  undefined4 uStack_6c;
  int local_68;
  undefined4 local_64;
  
  if ((char)param_6[0xb] != '\0') {
    if ((char)param_6[0xb] == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0186f540);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186f540);
  }
  iVar5 = param_6[2];
  iVar6 = param_6[3];
  iVar7 = param_6[4];
  iVar3 = param_6[7];
  iVar8 = param_6[6];
  iVar20 = *param_6;
  iVar18 = param_6[10];
  fVar23 = (float)param_6[1];
  dVar24 = *(double *)(param_6 + 8);
  uVar22 = SUB84(dVar24,0);
  FUN_00b9fda0(uVar22,&local_98,iVar18);
  uVar4 = uStack_8c;
  uVar12 = local_90;
  if ((int)local_98 != 0) {
    uVar12 = 1;
    local_98._0_4_ = local_98._4_4_;
    local_98._4_4_ = extraout_r1;
    local_90 = extraout_r2;
    goto LAB_00b236d4;
  }
  dVar2 = (double)CONCAT44(uStack_8c,local_90);
  if (*(char *)(*(int *)(iVar18 + 0x58) + 0x40) == '\x01') {
    uVar30 = FUN_00ba9fd8(uVar22,param_2,local_90,param_4,fVar23,iVar18,iVar20);
    local_f0 = (uint)((ulonglong)uVar30 >> 0x20);
    local_d8 = (uint)uVar30;
    iVar17 = *(int *)(iVar18 + 0x2e8);
    if (iVar17 == 0) goto LAB_00b2369c;
LAB_00b2349c:
    iVar15 = *(int *)(iVar18 + 0x2e4);
    local_a4 = (undefined4 *)thunk_FUN_016d4a50(iVar17 * 0x38);
    if (local_a4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,iVar17 * 0x38);
    }
    iVar11 = 0;
    puVar13 = (undefined4 *)(iVar15 + 0x44);
    puVar19 = local_a4;
    local_a8 = iVar17;
    do {
      uVar22 = *puVar13;
      fVar25 = 60.0;
      if ((iVar20 != 2) && (fVar25 = fVar23, iVar20 != 1)) {
        fVar25 = *(float *)(iVar18 + 0x1d0);
      }
      if (*(int *)(*(int *)(iVar18 + 0x1d8) + 0xbc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faf2a4(&DAT_01879bd0);
      }
      iVar15 = *(int *)(iVar18 + 0x204);
      uVar14 = *(uint *)(iVar15 + 0x44);
      uVar16 = *(uint *)(iVar15 + 0x48);
      if (uVar16 < uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("assertion failed: min <= maxmnamernameserialretryexpire",0x1c,&DAT_01883e60);
      }
      uVar21 = *(undefined4 *)(*(int *)(iVar18 + 0x1d8) + 0xb8);
      uVar9 = FUN_018462e8(uVar21);
      dVar26 = (double)VectorUnsignedToFloat(uVar9,(byte)(in_fpscr >> 0x16) & 3);
      dVar26 = dVar2 / dVar26;
      dVar26 = dVar26 * dVar26;
      dVar28 = (double)VectorUnsignedToFloat(uVar21,(byte)(in_fpscr >> 0x16) & 3);
      dVar27 = dVar26 * (*(double *)(iVar18 + 0x1b8) * (double)fVar25 + 1.0);
      dVar29 = dVar27;
      if (((ulonglong)dVar27 & 0x7ff0000000000000) == 0) {
        dVar29 = dVar26;
      }
      if (SUB84(dVar27,0) != 0 || ((ulonglong)dVar27 & 0xfffff00000000) != 0) {
        dVar27 = dVar29;
      }
      dVar27 = (1.0 / *(double *)(iVar18 + 0x1a8)) *
               ((dVar24 * (1.0 / dVar28)) / dVar27 - *(double *)(iVar18 + 0x1b0)) * 1000000.0;
      uVar1 = (uint)(0.0 < dVar27) * (int)(longlong)dVar27;
      uVar10 = uVar1;
      if (local_f0 < uVar1) {
        uVar10 = local_f0;
      }
      if ((local_d8 & 1) == 0) {
        uVar10 = uVar1;
      }
      if (uVar10 < uVar16) {
        uVar16 = uVar10;
      }
      if (uVar10 < uVar14) {
        uVar16 = uVar14;
      }
      FUN_009d463c(&local_90,iVar15,uVar16);
      local_64 = CONCAT31(local_64._1_3_,(char)iVar3);
      *puVar19 = uVar12;
      puVar19[1] = uVar4;
      puVar19[2] = local_90;
      puVar19[3] = uStack_8c;
      puVar19[4] = local_88;
      puVar19[5] = uStack_84;
      puVar19[6] = uVar22;
      puVar19[7] = uStack_7c;
      puVar19[8] = iVar5;
      puVar19[9] = iVar6;
      puVar19[10] = iVar7;
      puVar19[0xb] = uStack_6c;
      puVar19[0xc] = iVar8;
      puVar19[0xd] = local_64;
      iVar11 = iVar11 + 1;
      puVar13 = puVar13 + 0x14;
      puVar19 = puVar19 + 0xe;
      local_98 = dVar2;
      local_80 = uVar22;
      local_70 = iVar7;
      local_68 = iVar8;
    } while (iVar17 != iVar11);
  }
  else {
    local_d8 = 0;
    iVar17 = *(int *)(iVar18 + 0x2e8);
    if (iVar17 != 0) goto LAB_00b2349c;
LAB_00b2369c:
    iVar17 = 0;
    local_a4 = (undefined4 *)&DAT_00000008;
    local_a8 = 0;
  }
  local_b8 = local_a8;
  puStack_b4 = local_a4;
  iStack_b0 = iVar17;
  FUN_00c6fa14(&local_98,&local_b8);
  uVar12 = 0;
LAB_00b236d4:
  *param_5 = uVar12;
  *(undefined1 *)(param_6 + 0xb) = 1;
  param_5[1] = (int)local_98;
  param_5[2] = local_98._4_4_;
  param_5[3] = local_90;
  return;
}

