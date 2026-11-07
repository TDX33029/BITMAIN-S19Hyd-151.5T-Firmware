// FUN_01412c2c @ 01412c2c size=180 calls_out=3 calls_in=21
// strings: Hash table capacity overflow

void FUN_01412c2c(int *param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r7;
  
  uVar1 = (uint)((ulonglong)param_4 * (ulonglong)param_2);
  if ((int)((ulonglong)param_4 * (ulonglong)param_2 >> 0x20) == 0) {
    uVar4 = param_3 - 1;
    uVar2 = uVar1 + uVar4;
    if (!CARRY4(uVar1,uVar4)) {
      unaff_r5 = uVar2 & -param_3;
      uVar2 = param_4 + 4;
      unaff_r7 = uVar2 + unaff_r5;
      unaff_r4 = param_4;
    }
    if ((!CARRY4(uVar1,uVar4) && !CARRY4(uVar2,unaff_r5)) && (unaff_r7 <= 0x80000000U - param_3)) {
      if (unaff_r7 == 0) {
        iVar3 = param_3;
      }
      else {
        iVar3 = FUN_01298504(unaff_r7,param_3);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(param_3,unaff_r7);
        }
      }
      iVar5 = unaff_r4 - 1;
      *param_1 = iVar3 + unaff_r5;
      param_1[1] = iVar5;
      if (8 < unaff_r4) {
        iVar5 = (unaff_r4 & 0xfffffff8) - (unaff_r4 >> 3);
      }
      param_1[2] = iVar5;
      param_1[3] = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
}

