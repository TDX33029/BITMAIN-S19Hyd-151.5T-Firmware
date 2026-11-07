// FUN_00931c50 @ 00931c50 size=308 calls_out=1 calls_in=1
// strings: update | setFixedShareRatio | addPool | setQuotaDenver 2 | removePool

undefined4 FUN_00931c50(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 8;
  if (param_2 - 4U < 0xf) {
    param_1 = param_1 + 8;
    switch(param_2) {
    case 4:
      iVar1 = thunk_FUN_01bed842(param_1,&DAT_0056dc6c,4);
      uVar2 = 8;
      if (iVar1 == 0) {
        uVar2 = 7;
      }
      break;
    case 6:
      iVar1 = thunk_FUN_01bed842(param_1,"update",6);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      break;
    case 7:
      iVar1 = thunk_FUN_01bed842(param_1,"addPool",7);
      if (iVar1 == 0) {
        uVar2 = 3;
      }
      break;
    case 8:
      iVar1 = thunk_FUN_01bed842(param_1,"setQuotaDenver 2",8);
      if (iVar1 == 0) {
        uVar2 = 1;
      }
      else {
        iVar1 = thunk_FUN_01bed842(param_1,&DAT_00571020,8);
        if (iVar1 == 0) {
          uVar2 = 5;
        }
      }
      break;
    case 10:
      iVar1 = thunk_FUN_01bed842(param_1,"removePool",10);
      if (iVar1 == 0) {
        uVar2 = 4;
      }
      break;
    case 0x10:
      iVar1 = thunk_FUN_01bed842(param_1,&DAT_0056ac58,0x10);
      uVar2 = 8;
      if (iVar1 == 0) {
        uVar2 = 6;
      }
      break;
    case 0x12:
      iVar1 = thunk_FUN_01bed842(param_1,"setFixedShareRatio",0x12);
      if (iVar1 == 0) {
        uVar2 = 2;
      }
    }
  }
  return uVar2;
}

