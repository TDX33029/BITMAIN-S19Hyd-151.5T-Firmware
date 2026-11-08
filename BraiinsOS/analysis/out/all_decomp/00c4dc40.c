// FUN_00c4dc40 @ 00c4dc40 size=388 calls_out=5 calls_in=11
// strings: 

void FUN_00c4dc40(int *param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  uint uVar4;
  uint local_24;
  
  if (param_4 == 0) {
    *param_1 = (int)&DAT_005674cc;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  if (param_4 < 0xf) {
    uVar4 = (param_4 & 8) + 8;
    if (param_4 < 4) {
      uVar4 = 4;
    }
  }
  else {
    if (0x1fffffff < param_4) goto LAB_00c4dcf4;
    iVar1 = (int)((ulonglong)(param_4 << 3) * 0x24924925 >> 0x20);
    unaff_r6 = 1;
    uVar4 = (0xffffffffU >> LZCOUNT((iVar1 + (param_4 * 8 - iVar1 >> 1) >> 2) - 1)) + 1;
  }
  uVar2 = (uint)((ulonglong)uVar4 * (ulonglong)param_2);
  if ((int)((ulonglong)uVar4 * (ulonglong)param_2 >> 0x20) != 0) {
LAB_00c4dcf4:
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
  }
  uVar3 = param_3 - 1;
  if (!CARRY4(uVar3,uVar2)) {
    unaff_r4 = uVar4 + 4;
    unaff_r6 = uVar3 + uVar2 & -param_3;
    unaff_r5 = unaff_r4 + unaff_r6;
  }
  if ((CARRY4(uVar3,uVar2) || CARRY4(unaff_r4,unaff_r6)) || (0x80000000 - param_3 < unaff_r5))
  goto LAB_00c4dcf4;
  if (unaff_r5 == 0) {
    uVar2 = param_3;
  }
  else {
    if (unaff_r5 < param_3) {
      local_24 = 0;
      iVar1 = FUN_016d51b0(&local_24,param_3,unaff_r5);
      if (iVar1 != 0) goto LAB_00c4ddb8;
      uVar2 = local_24;
    }
    else {
      uVar2 = thunk_FUN_016d4a50(unaff_r5);
    }
    if (uVar2 == 0) {
LAB_00c4ddb8:
                    /* WARNING: Subroutine does not return */
      FUN_00600874(param_3,unaff_r5);
    }
  }
  FUN_016dd606(uVar2 + unaff_r6,0xff,unaff_r4);
  uVar3 = uVar4 - 1;
  param_1[1] = uVar3;
  if (7 < uVar3) {
    uVar3 = (uVar4 & 0xfffffff8) - (uVar4 >> 3);
  }
  *param_1 = uVar2 + unaff_r6;
  param_1[2] = uVar3;
  param_1[3] = 0;
  return;
}

