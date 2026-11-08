// FUN_00b353d8 @ 00b353d8 size=1108 calls_out=9 calls_in=2
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00b3543c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8 FUN_00b353d8(int param_1,uint *param_2)

{
  char cVar1;
  uint *puVar2;
  double *pdVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  uint in_fpscr;
  undefined4 in_s3;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint local_ec;
  uint local_e8;
  undefined4 local_e4;
  undefined4 ***local_d8;
  int local_d4;
  undefined *local_b4;
  undefined4 **local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_90;
  double *local_8c;
  uint local_88;
  undefined4 **local_84;
  undefined4 local_80;
  undefined4 *local_7c;
  undefined4 *local_78;
  code *local_74;
  double *local_70;
  undefined1 *local_6c;
  double local_60;
  undefined4 *local_58;
  undefined **local_54;
  undefined *local_50;
  
  iVar4 = 2;
  uVar7 = *param_2;
  uVar8 = param_2[1];
  iVar5 = uVar8 + (uVar7 >= 5);
  if ((uint)(uVar7 < 5) <= -uVar8) {
    iVar4 = uVar7 - 5;
  }
  if (*(char *)(param_1 + 0x58) == '\0') {
    if (iVar4 == 0) {
      uVar8 = 0;
      uVar7 = 5;
      puVar2 = (uint *)thunk_FUN_016d4a50(0x18,0,0,-iVar5);
    }
    else {
      local_f8 = param_2[2];
      uStack_f4 = param_2[3];
      uStack_f0 = param_2[4];
      local_ec = param_2[5];
      puVar2 = (uint *)thunk_FUN_016d4a50(0x18);
    }
    if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x18);
    }
    *puVar2 = uVar7;
    puVar2[1] = uVar8;
    puVar2[2] = local_f8;
    puVar2[3] = uStack_f4;
    puVar2[4] = uStack_f0;
    puVar2[5] = local_ec;
    return CONCAT44(&UNK_0186fa50,puVar2);
  }
  if (iVar4 == 0) {
    return 0x186fa7000000001;
  }
  if (iVar4 != 1) {
    VectorUnsignedToFloat(*(undefined4 *)(param_1 + 0x54),(byte)(in_fpscr >> 0x16) & 3);
                    /* WARNING: Could not recover jumptable at 0x00b35560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar14 = (*(code *)(&DAT_00b35564 + *(int *)(&DAT_00b35564 + *(int *)(param_1 + 0x18) * 4)))
                       (*(undefined4 *)(param_1 + 0x54),param_1,*(undefined4 *)(param_1 + 0x24),
                        *(undefined4 *)(param_1 + 0x20));
    return uVar14;
  }
  dVar10 = *(double *)(param_2 + 2);
  dVar11 = (double)VectorUnsignedToFloat
                             (*(undefined4 *)(param_1 + 0x54),(byte)(in_fpscr >> 0x16) & 3);
  FUN_00c52e90((int)*(undefined8 *)(param_1 + 0x48),
               (int)((ulonglong)*(undefined8 *)(param_1 + 0x48) >> 0x20),SUB84(dVar10,0),in_s3,
               (int)*(undefined8 *)(param_1 + 0x40),&local_90);
  if (local_88 == 0) {
    uVar8 = 0;
  }
  else {
    iVar5 = local_88 << 3;
    uVar8 = 0;
    uVar7 = 0;
    dVar12 = INFINITY;
    pdVar3 = local_8c;
    do {
      dVar13 = *pdVar3;
      pdVar3 = pdVar3 + 1;
      dVar13 = ABS(dVar13 - dVar10 * (dVar11 / 100.0));
      if (dVar13 < dVar12) {
        uVar8 = uVar7;
        dVar12 = dVar13;
      }
      uVar7 = uVar7 + 1;
      iVar5 = iVar5 + -8;
    } while (iVar5 != 0);
  }
  if (local_88 - 1 < uVar8) {
    uVar8 = local_88 - 1;
  }
  if (local_88 <= uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar8,local_88,&DAT_01873878);
  }
  local_60 = local_8c[uVar8];
  if ((2 < DAT_018d9130) || (DAT_018d9c98 == '\0')) goto LAB_00b357d8;
  if (DAT_018d9c98 == '\x01') {
LAB_00b35618:
    DataMemoryBarrier(0xb);
    puVar6 = &DAT_018ae394;
    pcVar9 = s_SetGloba_00414c05;
    if ((DAT_018dd984 == 2) && (pcVar9 = DAT_018daa74, puVar6 = DAT_018daa78, DAT_018daa70 != 0)) {
      pcVar9 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    iVar5 = (**(code **)(puVar6 + 0x14))(pcVar9,DAT_018d9c90);
    if (iVar5 == 0) goto LAB_00b357d8;
  }
  else if (DAT_018d9c98 != '\x02') {
    cVar1 = FUN_0169ac90(&DAT_018d9c90);
    if (cVar1 == '\0') goto LAB_00b357d8;
    if (cVar1 != '\x02') goto LAB_00b35618;
  }
  local_d4 = DAT_018d9c90;
  if (*(int *)(DAT_018d9c90 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018736c8);
  }
  local_9c = *(undefined4 *)(DAT_018d9c90 + 0x28);
  local_a4 = *(undefined4 *)(DAT_018d9c90 + 0x20);
  local_a0 = *(undefined4 *)(DAT_018d9c90 + 0x24);
  local_58 = &local_a8;
  local_54 = &local_b4;
  local_7c = (undefined4 *)(DAT_018d9c90 + 0x1c);
  local_a8 = *local_7c;
  local_50 = &DAT_018abb78;
  local_b0 = &local_78;
  local_98 = 0;
  local_b4 = &DAT_00354709;
  local_70 = &local_60;
  local_74 = FUN_00c53060;
  local_84 = &local_58;
  local_d8 = &local_84;
  local_6c = &LAB_00fb1f30;
  local_80 = 1;
  local_e4 = 0;
  local_e8 = 1;
  DataMemoryBarrier(0xb);
  pcVar9 = s_SetGloba_00414c05;
  puVar6 = &DAT_018ae394;
  if ((DAT_018dd984 == 2) && (pcVar9 = DAT_018daa74, puVar6 = DAT_018daa78, DAT_018daa70 != 0)) {
    pcVar9 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
  }
  local_78 = &local_90;
  iVar5 = (**(code **)(puVar6 + 0x28))(pcVar9,&local_e8);
  if (iVar5 != 0) {
    (**(code **)(puVar6 + 0x2c))(pcVar9,&local_e8);
  }
LAB_00b357d8:
  dVar12 = local_60;
  local_e8 = local_88;
  pdVar3 = (double *)thunk_FUN_016d4a50(0x28);
  if (pdVar3 == (double *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x28);
  }
  *(undefined4 *)(pdVar3 + 3) = local_90;
  *(double **)((int)pdVar3 + 0x1c) = local_8c;
  *(uint *)(pdVar3 + 4) = local_e8;
  *(undefined4 *)((int)pdVar3 + 0x24) = local_e4;
  *pdVar3 = dVar12;
  pdVar3[1] = dVar10;
  pdVar3[2] = dVar11 / 100.0;
  return CONCAT44(&PTR_LAB_0186fa90,pdVar3);
}

