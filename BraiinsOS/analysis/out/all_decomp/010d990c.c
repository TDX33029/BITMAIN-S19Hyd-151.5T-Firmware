// FUN_010d990c @ 010d990c size=124 calls_out=4 calls_in=2
// strings: capacity overflow | capacity overflow

void FUN_010d990c(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0xf0);
  if ((uVar2 < 0x3c) || (uVar2 = *(uint *)(param_1 + 4), uVar2 != 0xffffffff)) {
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = 0xffffffff >> LZCOUNT(uVar2);
    }
    if (uVar3 != 0xffffffff) {
      iVar1 = FUN_010d974c(param_1,uVar3 + 1);
      if (iVar1 == -0x7fffffff) {
        return;
      }
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("capacity overflow",0x11,&DAT_0188b950);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00600874();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb74b8("capacity overflow",0x11,&DAT_0188b960);
}

