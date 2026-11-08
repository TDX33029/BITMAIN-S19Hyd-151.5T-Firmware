// FUN_00ba0520 @ 00ba0520 size=300 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_00ba0520(short *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 8;
  switch(param_2) {
  case 2:
    if (*param_1 == 0x3373) {
      return 0;
    }
    uVar2 = 4;
    if (*param_1 != 0x7466) {
      uVar2 = 8;
    }
    return uVar2;
  case 3:
    iVar1 = thunk_FUN_016dd50a(param_1,&DAT_0034fc63,3);
    if (iVar1 == 0) {
      return 1;
    }
    break;
  case 5:
    uVar2 = 5;
    iVar1 = thunk_FUN_016dd50a(param_1,&DAT_0034fc6d,5);
    if (iVar1 != 0) {
      iVar1 = thunk_FUN_016dd50a(param_1,&DAT_0034ff32,5);
      uVar2 = 8;
      if (iVar1 == 0) {
        uVar2 = 7;
      }
      return uVar2;
    }
    break;
  case 7:
    iVar1 = thunk_FUN_016dd50a(param_1,&DAT_0034fc66,7);
    uVar2 = 8;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    return uVar2;
  case 8:
    iVar1 = thunk_FUN_016dd50a(param_1,&DAT_00569ef0,8);
    if (iVar1 == 0) {
      return 3;
    }
    break;
  case 10:
    iVar1 = thunk_FUN_016dd50a(param_1,&DAT_0034fc72,10);
    uVar2 = 8;
    if (iVar1 == 0) {
      uVar2 = 6;
    }
    return uVar2;
  }
  return uVar2;
}

