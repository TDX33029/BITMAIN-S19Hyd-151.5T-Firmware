// FUN_00029b5c @ 00029b5c  size=80  callers=0
// program: bmminer


void FUN_00029b5c(void)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fpscr;
  double dVar3;
  
  uVar1 = FUN_0001d93c();
  dVar3 = (double)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  if (dVar3 * 0.95 <= DAT_00b2d250) {
    return;
  }
  iVar2 = FUN_000281e8();
  if (iVar2 == 0) {
    return;
  }
  FUN_00036380(0xb,"Unbalance happened, reboot!\n");
  return;
}

