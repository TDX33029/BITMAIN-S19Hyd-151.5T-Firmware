// FUN_015ffbd8 @ 015ffbd8 size=76 calls_out=1 calls_in=0
// strings: 

void FUN_015ffbd8(uint *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (1 < *param_1) {
    FUN_016dffb2(param_1[1]);
  }
  if (1 < param_1[2]) {
    FUN_016dffb2(param_1[3]);
  }
  if (param_1[4] < 2) {
    return;
  }
  uVar1 = FUN_016dac50(param_1[5]);
  iVar2 = thunk_FUN_016dde14(6,uVar1,0,0,0,0,0);
  if (iVar2 == -4) {
    iVar2 = 0;
  }
  FUN_016d3496(iVar2);
  return;
}

