// FUN_0161a7d0 @ 0161a7d0 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_0161a7d0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = 5;
  if ((int)uVar2 < 0) {
    uVar1 = uVar2 ^ 0x80000000;
  }
  switch(uVar1) {
  case 0:
  case 1:
  case 4:
    return;
  case 2:
  case 3:
    FUN_0161ac8c(param_1 + 1);
    return;
  default:
    FUN_0134bd64(uVar2,param_1[1]);
    return;
  }
}

