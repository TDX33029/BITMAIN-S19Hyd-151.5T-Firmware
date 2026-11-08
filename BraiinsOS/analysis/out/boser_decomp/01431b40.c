// FUN_01431b40 @ 01431b40 size=60 calls_out=2 calls_in=99
// strings: 

void FUN_01431b40(int *param_1)

{
  int iVar1;
  bool bVar2;
  
  FUN_019f1850();
  FUN_00668d74(param_1 + 0xc);
  iVar1 = param_1[1];
  bVar2 = *param_1 == 0 && iVar1 == 0;
  if (*param_1 != 0 || iVar1 != 0) {
    iVar1 = param_1[8];
    bVar2 = iVar1 == 0;
  }
  if (bVar2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01431b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(param_1[9]);
  return;
}

