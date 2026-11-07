// FUN_01292134 @ 01292134 size=208 calls_out=2 calls_in=9
// strings: 

uint FUN_01292134(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar3 = 0;
  if (!SCARRY4(param_1,0x16d)) {
    iVar4 = (param_1 + 0x16d) % 0x23ab1;
    iVar1 = iVar4;
    if (iVar4 < 0) {
      iVar1 = iVar4 + 0x23ab1;
    }
    uVar5 = FUN_01291d30(iVar1);
    iVar1 = (int)((ulonglong)uVar5 >> 0x20);
    uVar2 = (uint)uVar5;
    if (399 < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar2,400,&DAT_01c26490);
    }
    if (((0xfffffe91 < iVar1 - 0x16fU) &&
        (iVar4 = ((param_1 + 0x16d) / 0x23ab1 + (iVar4 >> 0x1f)) * 400 + uVar2,
        0xfff80001 < iVar4 - 0x3ffffU)) &&
       (uVar3 = iVar4 * 0x2000 | iVar1 << 4 | (uint)(byte)(&DAT_00405081)[uVar2],
       0x16e0 < (uVar3 & 0x1ff8))) {
      uVar3 = 0;
    }
  }
  return uVar3;
}

