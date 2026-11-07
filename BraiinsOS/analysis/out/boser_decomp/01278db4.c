// FUN_01278db4 @ 01278db4 size=168 calls_out=3 calls_in=2
// strings: Hash table capacity overflow

void FUN_01278db4(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  bool bVar4;
  
  uVar1 = (uint)((ulonglong)param_3 * (ulonglong)param_2);
  if ((int)((ulonglong)param_3 * (ulonglong)param_2 >> 0x20) == 0) {
    bVar4 = 0xfffffffb < uVar1;
    if (uVar1 < 0xfffffffd) {
      unaff_r7 = uVar1 + 3 & 0xfffffffc;
      bVar4 = CARRY4(param_3 + 4,unaff_r7);
      unaff_r6 = param_3 + 4 + unaff_r7;
      unaff_r5 = param_3;
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
      iVar3 = unaff_r5 - 1;
      *param_1 = iVar2 + unaff_r7;
      param_1[1] = iVar3;
      if (8 < unaff_r5) {
        iVar3 = (unaff_r5 & 0xfffffff8) - (unaff_r5 >> 3);
      }
      param_1[2] = iVar3;
      param_1[3] = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
}

