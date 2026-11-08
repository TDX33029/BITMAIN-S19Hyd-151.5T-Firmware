// FUN_0123aae8 @ 0123aae8 size=68 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_0123aae8(void)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  DataMemoryBarrier(0xb);
  if (DAT_018da8bc != 0) {
    FUN_0120d52c();
  }
  do {
    piVar2 = DAT_018da8b4;
    iVar3 = *DAT_018da8b4;
    bVar1 = (bool)hasExclusiveAccess(DAT_018da8b4);
  } while (!bVar1);
  *DAT_018da8b4 = iVar3 + 1;
  if (iVar3 < 0) {
    software_udf(0xfdee,0x123ab28);
    return CONCAT44(iVar3,piVar2);
  }
  return CONCAT44(DAT_018da8b8,DAT_018da8b4);
}

