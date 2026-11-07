// FUN_00a51fd4 @ 00a51fd4 size=60 calls_out=1 calls_in=1
// strings: 

void FUN_00a51fd4(void)

{
  int *in_r3;
  int iVar1;
  int iVar2;
  
  iVar1 = in_r3[1];
  iVar2 = in_r3[2];
  FUN_019a63c0();
                    /* WARNING: Could not recover jumptable at 0x00a5200c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_r3 + 0x10))(in_r3 + 3,iVar1,iVar2);
  return;
}

