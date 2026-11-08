// FUN_01667800 @ 01667800 size=300 calls_out=4 calls_in=2
// strings: Hash table capacity overflow

void FUN_01667800(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint unaff_r5;
  uint unaff_r6;
  uint uVar4;
  uint unaff_r10;
  
  if (param_5 < 0xf) {
    uVar4 = (param_5 & 8) + 8;
    if (param_5 < 4) {
      uVar4 = 4;
    }
  }
  else {
    if (0x1fffffff < param_5) goto LAB_01667894;
    iVar2 = (int)((ulonglong)(param_5 << 3) * 0x24924925 >> 0x20);
    uVar4 = (0xffffffffU >> LZCOUNT((iVar2 + (param_5 * 8 - iVar2 >> 1) >> 2) - 1)) + 1;
  }
  uVar1 = (uint)((ulonglong)uVar4 * (ulonglong)param_3);
  if ((int)((ulonglong)uVar4 * (ulonglong)param_3 >> 0x20) == 0) {
    uVar3 = param_4 - 1;
    if (!CARRY4(uVar1,uVar3)) {
      unaff_r10 = uVar4 + 4;
      unaff_r5 = uVar1 + uVar3 & -param_4;
      unaff_r6 = unaff_r10 + unaff_r5;
    }
    if ((!CARRY4(uVar1,uVar3) && !CARRY4(unaff_r10,unaff_r5)) && (unaff_r6 <= 0x80000000U - param_4)
       ) {
      if (unaff_r6 == 0) {
        iVar2 = param_4;
      }
      else {
        iVar2 = FUN_01298504(unaff_r6,param_4);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(param_4,unaff_r6);
        }
      }
      FUN_01bed93e(iVar2 + unaff_r5,0xff,unaff_r10);
      uVar1 = uVar4 - 1;
      param_1[4] = uVar1;
      if (7 < uVar1) {
        uVar1 = (uVar4 & 0xfffffff8) - (uVar4 >> 3);
      }
      *param_1 = param_2;
      param_1[1] = param_3;
      param_1[2] = param_4;
      param_1[3] = iVar2 + unaff_r5;
      param_1[5] = uVar1;
      param_1[6] = 0;
      return;
    }
  }
LAB_01667894:
                    /* WARNING: Subroutine does not return */
  FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01d30868);
}

