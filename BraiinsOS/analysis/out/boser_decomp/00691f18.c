// FUN_00691f18 @ 00691f18 size=148 calls_out=3 calls_in=1
// strings: Hash table capacity overflow

void FUN_00691f18(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)((ulonglong)param_2 * 0xa0);
  if ((((int)((ulonglong)param_2 * 0xa0 >> 0x20) != 0) ||
      (uVar2 = param_2 + 4 + uVar3, CARRY4(param_2 + 4,uVar3))) || (0x7ffffff8 < uVar2)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1734);
  }
  iVar1 = FUN_01298504(uVar2,8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,uVar2);
  }
  uVar2 = param_2 - 1;
  *param_1 = iVar1 + uVar3;
  param_1[1] = uVar2;
  if (7 < uVar2) {
    uVar2 = (param_2 & 0xfffffff8) - (param_2 >> 3);
  }
  param_1[2] = uVar2;
  param_1[3] = 0;
  return;
}

