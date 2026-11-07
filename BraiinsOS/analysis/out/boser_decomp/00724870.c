// FUN_00724870 @ 00724870 size=96 calls_out=3 calls_in=1
// strings: 

void FUN_00724870(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_01d4b80c;
  if (DAT_01d4b80c == DAT_01d4b804) {
    FUN_00719374();
  }
  iVar1 = DAT_01d4b808;
  if (iVar2 != 0) {
    FUN_01bed864(DAT_01d4b808 + 0x158,DAT_01d4b808,iVar2 * 0x158);
  }
  FUN_01bed4e2(iVar1,param_1,0x158);
  DAT_01d4b80c = iVar2 + 1;
  return;
}

