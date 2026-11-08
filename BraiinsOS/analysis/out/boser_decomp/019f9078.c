// FUN_019f9078 @ 019f9078 size=96 calls_out=2 calls_in=3
// strings: overflow when adding duration to instant

void FUN_019f9078(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint local_18;
  uint uStack_14;
  int local_10;
  
  FUN_019ac130(&local_18,1);
  uVar1 = uStack_14 + (0xc79bf6ff < local_18);
  uVar2 = (uStack_14 ^ uVar1) & ~uStack_14;
  if (uVar2 < 0x80000000) {
    *param_1 = local_18 + 0x38640900;
    param_1[1] = uVar1;
    param_1[2] = local_10;
  }
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("overflow when adding duration to instant",0x28,&DAT_01d281d4);
  }
  return;
}

