// FUN_01b6deb4 @ 01b6deb4 size=204 calls_out=3 calls_in=1
// strings: 

void FUN_01b6deb4(undefined4 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_1c [8];
  uint local_14;
  
  local_14 = DAT_01d53560;
  uVar3 = FUN_01afd684();
  uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if ((int)uVar3 == 0) {
    bVar1 = true;
  }
  else {
    uVar3 = FUN_01afddc0(param_1,auStack_1c,5);
    uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if (((int)uVar3 == 0) ||
       (uVar3 = FUN_01afd684(auStack_1c), uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20),
       (int)uVar3 != 0)) {
      bVar1 = false;
    }
    else {
      uVar3 = FUN_01afd684(param_1);
      uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
      bVar1 = (int)uVar3 == 0;
    }
  }
  if ((local_14 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(bVar1,uVar2,local_14 ^ DAT_01d53560,0);
  }
  return;
}

