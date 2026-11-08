// FUN_018f66d4 @ 018f66d4 size=148 calls_out=3 calls_in=2
// strings: Hash table capacity overflow

void FUN_018f66d4(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)((ulonglong)param_2 * 0x90);
  if ((((int)((ulonglong)param_2 * 0x90 >> 0x20) != 0) ||
      (uVar3 = param_2 + 4 + uVar4, CARRY4(param_2 + 4,uVar4))) || (0x7ffffff8 < uVar3)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
  }
  iVar1 = FUN_01298504(uVar3,8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,uVar3);
  }
  iVar2 = param_2 - 1;
  *param_1 = iVar1 + uVar4;
  param_1[1] = iVar2;
  if (8 < param_2) {
    iVar2 = (param_2 & 0xfffffff8) - (param_2 >> 3);
  }
  param_1[2] = iVar2;
  param_1[3] = 0;
  return;
}

