// FUN_01624528 @ 01624528 size=336 calls_out=5 calls_in=3
// strings: 

void FUN_01624528(int *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  uint uVar4;
  uint local_24;
  
  if (param_4 < 0xf) {
    uVar4 = (param_4 & 8) + 8;
    if (param_4 < 4) {
      uVar4 = 4;
    }
  }
  else {
    if (0x1fffffff < param_4) goto LAB_016245ac;
    iVar2 = (int)((ulonglong)(param_4 << 3) * 0x24924925 >> 0x20);
    uVar4 = (0xffffffffU >> LZCOUNT((iVar2 + (param_4 * 8 - iVar2 >> 1) >> 2) - 1)) + 1;
  }
  uVar1 = (uint)((ulonglong)uVar4 * (ulonglong)param_2);
  if ((int)((ulonglong)uVar4 * (ulonglong)param_2 >> 0x20) != 0) {
LAB_016245ac:
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
  }
  uVar3 = param_3 - 1;
  if (!CARRY4(uVar3,uVar1)) {
    unaff_r5 = uVar4 + 4;
    unaff_r4 = uVar3 + uVar1 & -param_3;
    unaff_r6 = unaff_r5 + unaff_r4;
  }
  if ((CARRY4(uVar3,uVar1) || CARRY4(unaff_r5,unaff_r4)) || (0x80000000 - param_3 < unaff_r6))
  goto LAB_016245ac;
  if (unaff_r6 == 0) {
    uVar1 = param_3;
  }
  else {
    if (unaff_r6 < param_3) {
      local_24 = 0;
      iVar2 = FUN_016d51b0(&local_24,param_3,unaff_r6);
      if (iVar2 != 0) goto LAB_0162466c;
      uVar1 = local_24;
    }
    else {
      uVar1 = thunk_FUN_016d4a50(unaff_r6);
    }
    if (uVar1 == 0) {
LAB_0162466c:
                    /* WARNING: Subroutine does not return */
      FUN_00600874(param_3,unaff_r6);
    }
  }
  FUN_016dd606(uVar1 + unaff_r4,0xff,unaff_r5);
  uVar3 = uVar4 - 1;
  param_1[1] = uVar3;
  if (7 < uVar3) {
    uVar3 = (uVar4 & 0xfffffff8) - (uVar4 >> 3);
  }
  *param_1 = uVar1 + unaff_r4;
  param_1[2] = uVar3;
  param_1[3] = 0;
  return;
}

