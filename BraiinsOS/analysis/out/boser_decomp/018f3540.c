// FUN_018f3540 @ 018f3540 size=96 calls_out=4 calls_in=1
// strings: 

void FUN_018f3540(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 8);
  FUN_018ea644(param_2,param_1,0x80000000);
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar2,uVar1,uVar1,&DAT_01d23e30);
  }
  FUN_0191e164(*(undefined4 *)(param_1 + 0xc),*(int *)(param_1 + 4) + uVar2,uVar1 - uVar2);
  FUN_018f26d4(param_2);
  return;
}

