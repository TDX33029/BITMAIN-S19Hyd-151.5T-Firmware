// FUN_01beafc8 @ 01beafc8 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_01beafc8(void)

{
  int *piVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined4 in_r3;
  int iVar2;
  
  piVar1 = (int *)FUN_01beb698();
  for (iVar2 = *piVar1; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x38)) {
    FUN_01beaf84(iVar2);
  }
  FUN_01beaf84(DAT_01d51100);
  FUN_01beaf84(DAT_01d537cc);
  FUN_01beaf84(DAT_01d51068,extraout_r1,extraout_r2,in_r3);
  return;
}

