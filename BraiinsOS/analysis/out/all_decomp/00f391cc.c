// FUN_00f391cc @ 00f391cc size=288 calls_out=4 calls_in=2
// strings: 

void FUN_00f391cc(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_2 == 0) {
    *param_1 = (int)&DAT_005674cc;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  if (param_2 < 0xf) {
    uVar4 = (param_2 & 8) + 8;
    if (param_2 < 4) {
      uVar4 = 4;
    }
  }
  else {
    if (0x1fffffff < param_2) goto LAB_00f392c8;
    iVar1 = (int)((ulonglong)(param_2 << 3) * 0x24924925 >> 0x20);
    uVar4 = (0xffffffffU >> LZCOUNT((iVar1 + (param_2 * 8 - iVar1 >> 1) >> 2) - 1)) + 1;
  }
  uVar5 = (uint)((ulonglong)uVar4 * 0x28);
  if ((int)((ulonglong)uVar4 * 0x28 >> 0x20) == 0) {
    uVar2 = uVar4 + 4;
    uVar3 = uVar2 + uVar5;
    if ((!CARRY4(uVar2,uVar5)) && (uVar3 < 0x7ffffff9)) {
      iVar1 = thunk_FUN_016d4a50(uVar3);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,uVar3);
      }
      FUN_016dd606(iVar1 + uVar5,0xff,uVar2);
      uVar2 = uVar4 - 1;
      param_1[1] = uVar2;
      if (7 < uVar2) {
        uVar2 = (uVar4 & 0xfffffff8) - (uVar4 >> 3);
      }
      *param_1 = iVar1 + uVar5;
      param_1[2] = uVar2;
      param_1[3] = 0;
      return;
    }
  }
LAB_00f392c8:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
}

