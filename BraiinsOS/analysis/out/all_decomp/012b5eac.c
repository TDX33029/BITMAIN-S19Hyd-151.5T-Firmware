// FUN_012b5eac @ 012b5eac size=320 calls_out=5 calls_in=3
// strings: 

void FUN_012b5eac(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  uint uVar3;
  bool bVar4;
  int local_1c;
  
  if (param_3 < 0xf) {
    uVar3 = (param_3 & 8) + 8;
    if (param_3 < 4) {
      uVar3 = 4;
    }
  }
  else {
    if (0x1fffffff < param_3) goto LAB_012b5f2c;
    iVar2 = (int)((ulonglong)(param_3 << 3) * 0x24924925 >> 0x20);
    uVar3 = (0xffffffffU >> LZCOUNT((iVar2 + (param_3 * 8 - iVar2 >> 1) >> 2) - 1)) + 1;
  }
  uVar1 = (uint)((ulonglong)uVar3 * (ulonglong)param_2);
  if ((int)((ulonglong)uVar3 * (ulonglong)param_2 >> 0x20) != 0) {
LAB_012b5f2c:
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
  }
  bVar4 = 0xfffffff7 < uVar1;
  if (uVar1 < 0xfffffff9) {
    unaff_r5 = uVar3 + 4;
    unaff_r4 = uVar1 + 7 & 0xfffffff8;
    bVar4 = CARRY4(unaff_r5,unaff_r4);
    unaff_r6 = unaff_r5 + unaff_r4;
  }
  if ((bVar4) || (0x7ffffff8 < unaff_r6)) goto LAB_012b5f2c;
  if (unaff_r6 == 0) {
    iVar2 = 8;
  }
  else {
    if (unaff_r6 < 8) {
      local_1c = 0;
      iVar2 = FUN_016d51b0(&local_1c,8,unaff_r6);
      if (iVar2 != 0) goto LAB_012b5fe0;
      iVar2 = local_1c;
    }
    else {
      iVar2 = thunk_FUN_016d4a50(unaff_r6);
    }
    if (iVar2 == 0) {
LAB_012b5fe0:
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,unaff_r6);
    }
  }
  FUN_016dd606(iVar2 + unaff_r4,0xff,unaff_r5);
  uVar1 = uVar3 - 1;
  param_1[1] = uVar1;
  if (7 < uVar1) {
    uVar1 = (uVar3 & 0xfffffff8) - (uVar3 >> 3);
  }
  *param_1 = iVar2 + unaff_r4;
  param_1[2] = uVar1;
  param_1[3] = 0;
  return;
}

