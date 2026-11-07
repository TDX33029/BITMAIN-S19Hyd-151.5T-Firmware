// FUN_00f4f630 @ 00f4f630 size=76 calls_out=1 calls_in=0
// strings: 

void FUN_00f4f630(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 == -0x80000000) {
                    /* WARNING: Could not recover jumptable at 0x00f4f664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)param_1[1])();
    return;
  }
  if (iVar1 == -0x7fffffff) {
    iVar1 = param_1[1];
    iVar2 = param_1[2];
  }
  else {
    FUN_019bb7e0(iVar1,param_1[1]);
    iVar1 = param_1[3];
    iVar2 = param_1[4];
  }
  FUN_019bb7e0(iVar1,iVar2);
  return;
}

