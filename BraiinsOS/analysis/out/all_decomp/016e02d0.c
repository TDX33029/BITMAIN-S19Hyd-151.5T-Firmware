// FUN_016e02d0 @ 016e02d0 size=60 calls_out=1 calls_in=0
// strings: 

void FUN_016e02d0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (-1 < param_1[4]) {
    iVar1 = *param_1;
    software_interrupt(0);
    if ((iVar1 != 0) && (param_1[4] == 0)) {
      FUN_016da47c(0,param_1[1],param_1[2],param_1[3],param_4);
      software_interrupt(0);
      software_interrupt(0);
    }
    param_1[4] = iVar1;
  }
  return;
}

