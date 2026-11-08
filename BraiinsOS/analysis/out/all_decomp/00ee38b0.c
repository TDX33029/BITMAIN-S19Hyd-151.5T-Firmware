// FUN_00ee38b0 @ 00ee38b0 size=372 calls_out=5 calls_in=3
// strings: 

void FUN_00ee38b0(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint unaff_r4;
  uint unaff_r5;
  uint uVar3;
  uint unaff_r7;
  bool bVar4;
  int local_1c;
  
  if (param_3 == 0) {
    *param_1 = (int)&DAT_005674cc;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  if (param_3 < 0xf) {
    uVar3 = (param_3 & 8) + 8;
    if (param_3 < 4) {
      uVar3 = 4;
    }
  }
  else {
    if (0x1fffffff < param_3) goto LAB_00ee3960;
    iVar1 = (int)((ulonglong)(param_3 << 3) * 0x24924925 >> 0x20);
    unaff_r7 = 1;
    uVar3 = (0xffffffffU >> LZCOUNT((iVar1 + (param_3 * 8 - iVar1 >> 1) >> 2) - 1)) + 1;
  }
  uVar2 = (uint)((ulonglong)uVar3 * (ulonglong)param_2);
  if ((int)((ulonglong)uVar3 * (ulonglong)param_2 >> 0x20) != 0) {
LAB_00ee3960:
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
  }
  bVar4 = 0xfffffff7 < uVar2;
  if (uVar2 < 0xfffffff9) {
    unaff_r4 = uVar3 + 4;
    unaff_r7 = uVar2 + 7 & 0xfffffff8;
    bVar4 = CARRY4(unaff_r4,unaff_r7);
    unaff_r5 = unaff_r4 + unaff_r7;
  }
  if ((bVar4) || (0x7ffffff8 < unaff_r5)) goto LAB_00ee3960;
  if (unaff_r5 == 0) {
    iVar1 = 8;
  }
  else {
    if (unaff_r5 < 8) {
      local_1c = 0;
      iVar1 = FUN_016d51b0(&local_1c,8,unaff_r5);
      if (iVar1 != 0) goto LAB_00ee3a18;
      iVar1 = local_1c;
    }
    else {
      iVar1 = thunk_FUN_016d4a50(unaff_r5);
    }
    if (iVar1 == 0) {
LAB_00ee3a18:
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,unaff_r5);
    }
  }
  FUN_016dd606(iVar1 + unaff_r7,0xff,unaff_r4);
  uVar2 = uVar3 - 1;
  param_1[1] = uVar2;
  if (7 < uVar2) {
    uVar2 = (uVar3 & 0xfffffff8) - (uVar3 >> 3);
  }
  *param_1 = iVar1 + unaff_r7;
  param_1[2] = uVar2;
  param_1[3] = 0;
  return;
}

