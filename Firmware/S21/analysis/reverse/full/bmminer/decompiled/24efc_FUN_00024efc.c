// FUN_00024efc @ 00024efc  size=76  callers=8
// program: bmminer


undefined4 FUN_00024efc(void)

{
  int iVar1;
  uint in_fpscr;
  undefined4 uVar2;
  
  iVar1 = FUN_0002c3f4();
  if ((iVar1 == 0) || (iVar1 = FUN_0002c434(), iVar1 == 0)) {
    uVar2 = FUN_000708dc();
    return uVar2;
  }
  uVar2 = FUN_0002c5ac();
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  return uVar2;
}

