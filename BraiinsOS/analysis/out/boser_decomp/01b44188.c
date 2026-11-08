// FUN_01b44188 @ 01b44188 size=200 calls_out=4 calls_in=1
// strings: 

void FUN_01b44188(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [68];
  uint local_1c;
  
  local_1c = DAT_01d53560;
  uVar3 = FUN_01b42c7c();
  uVar1 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if ((int)uVar3 == 0) {
    uVar3 = FUN_01b3e9a0(param_1,auStack_60,param_2);
    uVar1 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
      uVar3 = FUN_01b41b48(param_1,auStack_60,param_3);
      uVar1 = (undefined4)((ulonglong)uVar3 >> 0x20);
      bVar2 = (int)uVar3 != 0;
      goto LAB_01b441d8;
    }
  }
  bVar2 = false;
LAB_01b441d8:
  if ((local_1c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(bVar2,uVar1,local_1c ^ DAT_01d53560,0);
  }
  return;
}

