// FUN_0003eb34 @ 0003eb34  size=80  callers=0
// program: bmminer


void FUN_0003eb34(void)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fpscr;
  double dVar3;
  
  uVar1 = FUN_00025728();
  dVar3 = (double)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  if (dVar3 * 0.95 <= DAT_00aaa900) {
    return;
  }
  iVar2 = FUN_0003d1e8();
  if (iVar2 == 0) {
    return;
  }
  FUN_0004e8c8(0xb,"Unbalance happened, reboot!\n");
  return;
}

