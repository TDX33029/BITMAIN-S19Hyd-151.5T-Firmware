// FUN_01291bd0 @ 01291bd0 size=340 calls_out=2 calls_in=4
// strings: 

uint FUN_01291bd0(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  
  uVar3 = (param_1 & 0x1fff) >> 4;
  uVar4 = uVar3 + param_2;
  if ((!SCARRY4(uVar3,param_2)) && (0 < (int)uVar4)) {
    uVar6 = 0x16d;
    if ((param_1 & 8) == 0) {
      uVar6 = 0x16e;
    }
    if (uVar4 <= uVar6) {
      return param_1 & 0xffffe00f | uVar4 * 0x10;
    }
  }
  uVar4 = 0;
  iVar5 = ((int)param_1 >> 0xd) % 400;
  iVar1 = iVar5;
  if (iVar5 < 0) {
    iVar1 = iVar5 + 400;
  }
  iVar1 = iVar1 * 0x16d + uVar3 + (uint)(byte)""[iVar1] + -1;
  iVar2 = iVar1 + param_2;
  if (!SCARRY4(iVar1,param_2)) {
    iVar7 = iVar2 % 0x23ab1;
    iVar1 = iVar7;
    if (iVar7 < 0) {
      iVar1 = iVar7 + 0x23ab1;
    }
    uVar8 = FUN_01291d30(iVar1);
    iVar1 = (int)((ulonglong)uVar8 >> 0x20);
    uVar3 = (uint)uVar8;
    if (399 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar3,400,&DAT_01c26490);
    }
    if (((0xfffffe91 < iVar1 - 0x16fU) &&
        (iVar5 = (((int)param_1 >> 0xd) / 400 + (iVar5 >> 0x1f) + iVar2 / 0x23ab1 + (iVar7 >> 0x1f))
                 * 400 + uVar3, 0xfff80001 < iVar5 - 0x3ffffU)) &&
       (uVar4 = iVar5 * 0x2000 | iVar1 << 4 | (uint)(byte)(&DAT_00405081)[uVar3],
       0x16e0 < (uVar4 & 0x1ff8))) {
      uVar4 = 0;
    }
  }
  return uVar4;
}

