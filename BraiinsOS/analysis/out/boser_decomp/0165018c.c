// FUN_0165018c @ 0165018c size=308 calls_out=4 calls_in=4
// strings: Hash table capacity overflow

void FUN_0165018c(undefined4 *param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint unaff_r7;
  uint unaff_r9;
  uint unaff_r10;
  
  if (param_4 == 0) {
    uVar1 = 0;
    uVar3 = 0;
    puVar4 = &DAT_0056d238;
LAB_016502ac:
    *param_1 = puVar4;
    param_1[1] = uVar3;
    param_1[2] = uVar1;
    param_1[3] = 0;
    return;
  }
  if (param_4 < 0xf) {
    uVar5 = (param_4 & 8) + 8;
    if (param_4 < 4) {
      uVar5 = 4;
    }
  }
  else {
    if (0x1fffffff < param_4) goto LAB_01650230;
    iVar2 = (int)((ulonglong)(param_4 << 3) * 0x24924925 >> 0x20);
    uVar5 = (0xffffffffU >> LZCOUNT((iVar2 + (param_4 * 8 - iVar2 >> 1) >> 2) - 1)) + 1;
  }
  uVar1 = (uint)((ulonglong)uVar5 * (ulonglong)param_2);
  if ((int)((ulonglong)uVar5 * (ulonglong)param_2 >> 0x20) == 0) {
    uVar3 = param_3 - 1;
    if (!CARRY4(uVar1,uVar3)) {
      unaff_r9 = uVar5 + 4;
      unaff_r10 = uVar1 + uVar3 & -param_3;
      unaff_r7 = unaff_r9 + unaff_r10;
    }
    if ((!CARRY4(uVar1,uVar3) && !CARRY4(unaff_r9,unaff_r10)) && (unaff_r7 <= 0x80000000U - param_3)
       ) {
      if (unaff_r7 == 0) {
        iVar2 = param_3;
      }
      else {
        iVar2 = FUN_01298504(unaff_r7,param_3);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(param_3,unaff_r7);
        }
      }
      puVar4 = (undefined4 *)(iVar2 + unaff_r10);
      FUN_01bed93e(puVar4,0xff,unaff_r9);
      uVar3 = uVar5 - 1;
      uVar1 = uVar3;
      if (7 < uVar3) {
        uVar1 = (uVar5 & 0xfffffff8) - (uVar5 >> 3);
      }
      goto LAB_016502ac;
    }
  }
LAB_01650230:
                    /* WARNING: Subroutine does not return */
  FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01d30868);
}

