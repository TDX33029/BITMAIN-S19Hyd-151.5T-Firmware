// FUN_00f6b330 @ 00f6b330 size=316 calls_out=1 calls_in=5
// strings: 

uint FUN_00f6b330(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (!SCARRY4(param_1,0x16d)) {
    uVar3 = (param_1 + 0x16d) % 0x23ab1;
    uVar5 = uVar3;
    if ((int)uVar3 < 0) {
      uVar5 = uVar3 + 0x23ab1;
    }
    uVar1 = uVar5 / 0x16d;
    uVar2 = uVar5 % 0x16d;
    if (uVar2 < (byte)(&DAT_0035cf22)[uVar5 / 0x16d]) {
      uVar5 = uVar1 - 1;
      if (400 < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(0xffffffff,0x191,&DAT_01880234);
      }
      uVar2 = (uVar2 - (byte)(&DAT_0035cf21)[uVar1]) + 0x16d;
    }
    else {
      if (0x23a4f < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar1,400,&DAT_01880254);
      }
      uVar2 = uVar2 - (byte)(&DAT_0035cf22)[uVar5 / 0x16d];
      uVar5 = uVar1;
    }
    if ((uVar2 >> 1 < 0xb7) &&
       (iVar4 = ((param_1 + 0x16d) / 0x23ab1 + ((int)uVar3 >> 0x1f)) * 400 + uVar5,
       0xfff80001 < iVar4 - 0x3ffffU)) {
      uVar5 = uVar2 * 0x10 + iVar4 * 0x2000 + 0x10 | (uint)(byte)(&DAT_0035d4d3)[uVar5];
      if (0x16e0 < (uVar5 & 0x1ff8)) {
        uVar5 = 0;
      }
      return uVar5;
    }
  }
  return 0;
}

