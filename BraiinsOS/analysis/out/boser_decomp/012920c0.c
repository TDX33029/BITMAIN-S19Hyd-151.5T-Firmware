// FUN_012920c0 @ 012920c0 size=116 calls_out=0 calls_in=14
// strings: 

int FUN_012920c0(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)param_1 >> 0xd;
  iVar2 = iVar1 + -1;
  iVar3 = 0;
  if (iVar1 < 1) {
    iVar3 = (1U - iVar1) / 400 + 1;
    iVar2 = iVar3 * 400 + iVar2;
    iVar3 = iVar3 * -0x23ab1;
  }
  return ((iVar3 + ((param_1 & 0x1fff) >> 4)) - iVar2 / 100) + (iVar2 * 0x5b5 >> 2) +
         (iVar2 / 100 >> 2);
}

