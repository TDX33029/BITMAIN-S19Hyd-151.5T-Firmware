// FUN_01b341a0 @ 01b341a0 size=168 calls_out=1 calls_in=5
// strings: 

ulonglong FUN_01b341a0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = FUN_01b33d3c(0,param_1,param_2,param_3,param_4);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      if (*(int *)(param_3 + 0xc) == 0) {
        iVar1 = 0x128;
      }
      else {
        iVar1 = 300;
      }
                    /* WARNING: Jumptable at 0x01b3421c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)((int)&PTR_01d3b2b0 + iVar1))(param_1,param_1,param_3);
      return uVar3;
    }
    uVar2 = 1;
  }
  return (ulonglong)uVar2;
}

