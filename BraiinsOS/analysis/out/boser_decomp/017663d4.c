// FUN_017663d4 @ 017663d4 size=136 calls_out=6 calls_in=5
// strings: 

void FUN_017663d4(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_28 [16];
  
  FUN_01710904(auStack_28,param_2 + 0x10);
  uVar1 = FUN_01728908(auStack_28);
  FUN_017664ac(param_1,param_2 + 0x10,uVar1);
  FUN_01710ba4(param_2 + 0x10);
  FUN_01af7af8(param_2[0x10],param_2[0x11],4,0x10);
  if (*param_2 == 3 && param_2[1] == 0) {
    return;
  }
  FUN_0142e6dc(param_2);
  return;
}

