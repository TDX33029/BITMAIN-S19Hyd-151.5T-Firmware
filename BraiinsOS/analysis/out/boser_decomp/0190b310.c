// FUN_0190b310 @ 0190b310 size=52 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_0190b310(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = *(uint *)(param_1 + 0xc);
  if (uVar1 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar2,uVar1,uVar1,&DAT_01d250a8);
  }
  return CONCAT44(uVar1 - uVar2,*(int *)(param_1 + 4) + uVar2);
}

