// FUN_0113db4c @ 0113db4c size=76 calls_out=3 calls_in=3
// strings: 

void FUN_0113db4c(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  iVar1 = 1;
  if ((uint)(uVar2 < 4) <= -param_1[1]) {
    iVar1 = uVar2 - 4;
  }
  if (iVar1 == 0) {
    FUN_00640288(param_1 + 2,-(param_1[1] + (uint)(uVar2 >= 4)));
  }
  else {
    if (iVar1 != 1) {
      return;
    }
    FUN_00640398(param_1);
  }
  FUN_01834abc(param_1 + 0x90);
  return;
}

