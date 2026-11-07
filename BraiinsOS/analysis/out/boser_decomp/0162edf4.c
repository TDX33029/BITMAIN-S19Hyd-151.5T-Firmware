// FUN_0162edf4 @ 0162edf4 size=76 calls_out=3 calls_in=1
// strings: 

void FUN_0162edf4(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = 6;
  if ((int)uVar2 < 0) {
    uVar1 = uVar2 ^ 0x80000000;
  }
  switch(uVar1) {
  case 0:
  case 4:
    FUN_0134bd64(param_1[1],param_1[2]);
    return;
  case 1:
    FUN_0162ee58(param_1 + 1);
    return;
  case 2:
  case 5:
    return;
  case 3:
    FUN_0162ee9c(param_1 + 1);
    return;
  default:
    FUN_0134bd64(uVar2,param_1[1]);
    return;
  }
}

