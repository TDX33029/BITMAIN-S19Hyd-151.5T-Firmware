// FUN_01b70cf4 @ 01b70cf4 size=156 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_01b70cf4(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (DAT_01d53408 == '\x01') {
    FUN_01b7076c(&DAT_01d5340c);
    uVar1 = DAT_01d53404;
    *(undefined4 *)param_1 = DAT_01d53400;
    *(undefined4 *)((int)param_1 + 4) = uVar1;
    FUN_01b707cc(&DAT_01d5340c);
  }
  else {
    lVar2 = FUN_01b70bc0();
    if (lVar2 == 0) {
      return 0;
    }
    *param_1 = lVar2;
  }
  return 1;
}

