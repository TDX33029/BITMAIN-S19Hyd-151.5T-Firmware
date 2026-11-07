// FUN_00eddad8 @ 00eddad8 size=312 calls_out=5 calls_in=4
// strings: 

void FUN_00eddad8(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  uint uVar4;
  bool bVar5;
  int local_1c;
  
  if (param_3 < 8) {
    uVar4 = (param_3 & 4) + 4;
  }
  else {
    if (0x1fffffff < param_3) goto LAB_00eddb50;
    iVar2 = (int)((ulonglong)(param_3 << 3) * 0x24924925 >> 0x20);
    uVar4 = (0xffffffffU >> LZCOUNT((iVar2 + (param_3 * 8 - iVar2 >> 1) >> 2) - 1)) + 1;
  }
  uVar1 = (uint)((ulonglong)uVar4 * (ulonglong)param_2);
  if ((int)((ulonglong)uVar4 * (ulonglong)param_2 >> 0x20) != 0) {
LAB_00eddb50:
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_0187c1ec);
  }
  bVar5 = 0xfffffffb < uVar1;
  if (uVar1 < 0xfffffffd) {
    unaff_r5 = uVar4 + 4;
    unaff_r4 = uVar1 + 3 & 0xfffffffc;
    bVar5 = CARRY4(unaff_r5,unaff_r4);
    unaff_r6 = unaff_r5 + unaff_r4;
  }
  if ((bVar5) || (0x7ffffffc < unaff_r6)) goto LAB_00eddb50;
  if (unaff_r6 == 0) {
    iVar2 = 4;
  }
  else {
    if (unaff_r6 < 4) {
      local_1c = 0;
      iVar2 = FUN_016d51b0(&local_1c,4,unaff_r6);
      if (iVar2 != 0) goto LAB_00eddc04;
      iVar2 = local_1c;
    }
    else {
      iVar2 = thunk_FUN_016d4a50(unaff_r6);
    }
    if (iVar2 == 0) {
LAB_00eddc04:
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,unaff_r6);
    }
  }
  FUN_016dd606(iVar2 + unaff_r4,0xff,unaff_r5);
  iVar3 = uVar4 - 1;
  param_1[1] = iVar3;
  if (8 < uVar4) {
    iVar3 = (uVar4 & 0xfffffff8) - (uVar4 >> 3);
  }
  *param_1 = iVar2 + unaff_r4;
  param_1[2] = iVar3;
  param_1[3] = 0;
  return;
}

