// FUN_00ab0a30 @ 00ab0a30 size=112 calls_out=2 calls_in=2
// strings: 

void FUN_00ab0a30(uint *param_1)

{
  uint uVar1;
  bool bVar2;
  uint in_fpscr;
  double dVar3;
  ulonglong uVar4;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_009c98e8(&local_18);
  if (local_18 == 1) {
    uVar4 = CONCAT44(local_14,1);
  }
  else {
    uVar4 = FUN_00736c0c(local_10,local_c);
  }
  uVar1 = (uint)(uVar4 >> 0x20);
  bVar2 = (uVar4 & 1) == 0;
  if (bVar2) {
    dVar3 = (double)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
    *(double *)(param_1 + 2) = dVar3 / 1000.0;
  }
  else {
    param_1[1] = uVar1;
  }
  *param_1 = (uint)!bVar2;
  return;
}

