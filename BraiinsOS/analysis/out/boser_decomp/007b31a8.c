// FUN_007b31a8 @ 007b31a8 size=260 calls_out=1 calls_in=0
// strings: boser | errors

undefined4 FUN_007b31a8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(param_2) {
  case 5:
    iVar1 = thunk_FUN_01bed842(param_1,"boser",5);
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    else {
      iVar1 = thunk_FUN_01bed842(param_1,&DAT_003f35d3,5);
      uVar2 = 6;
      if (iVar1 == 0) {
        uVar2 = 5;
      }
    }
    break;
  case 6:
    uVar2 = 6;
    iVar1 = thunk_FUN_01bed842(param_1,"errors",6);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = thunk_FUN_01bed842(param_1,&DAT_003f35cd,6);
      if (iVar1 == 0) {
        uVar2 = 4;
      }
    }
    break;
  case 7:
    iVar1 = thunk_FUN_01bed842(param_1,&DAT_003f35c6,7);
    uVar2 = 6;
    if (iVar1 == 0) {
      uVar2 = 3;
    }
    break;
  case 8:
    iVar1 = thunk_FUN_01bed842(param_1,&DAT_00570fa0,8);
    uVar2 = 6;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    break;
  default:
    uVar2 = 6;
  }
  return uVar2;
}

