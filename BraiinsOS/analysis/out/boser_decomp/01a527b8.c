// FUN_01a527b8 @ 01a527b8 size=264 calls_out=4 calls_in=2
// strings: Hash table capacity overflow

void FUN_01a527b8(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  uint uVar3;
  bool bVar4;
  
  if (param_3 < 0xf) {
    uVar3 = (param_3 & 8) + 8;
    if (param_3 < 4) {
      uVar3 = 4;
    }
  }
  else {
    if (0x1fffffff < param_3) goto LAB_01a52834;
    iVar2 = (int)((ulonglong)(param_3 << 3) * 0x24924925 >> 0x20);
    uVar3 = (0xffffffffU >> LZCOUNT((iVar2 + (param_3 * 8 - iVar2 >> 1) >> 2) - 1)) + 1;
  }
  uVar1 = (uint)((ulonglong)uVar3 * (ulonglong)param_2);
  if ((int)((ulonglong)uVar3 * (ulonglong)param_2 >> 0x20) == 0) {
    bVar4 = 0xfffffffb < uVar1;
    if (uVar1 < 0xfffffffd) {
      unaff_r5 = uVar3 + 4;
      unaff_r4 = uVar1 + 3 & 0xfffffffc;
      bVar4 = CARRY4(unaff_r5,unaff_r4);
      unaff_r6 = unaff_r5 + unaff_r4;
    }
    if ((!bVar4) && (unaff_r6 < 0x7ffffffd)) {
      if (unaff_r6 == 0) {
        iVar2 = 4;
      }
      else {
        iVar2 = FUN_01298504(unaff_r6,4);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,unaff_r6);
        }
      }
      FUN_01bed93e(iVar2 + unaff_r4,0xff,unaff_r5);
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
  }
LAB_01a52834:
                    /* WARNING: Subroutine does not return */
  FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01d30868);
}

