// FUN_01b4425c @ 01b4425c size=452 calls_out=9 calls_in=0
// strings: 

void FUN_01b4425c(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined1 auStack_f0 [68];
  undefined1 auStack_ac [68];
  undefined1 auStack_68 [68];
  uint local_24;
  
  local_24 = DAT_01d53560;
  if ((*(int *)(param_1 + 0x1d8) == 0) || (*(int *)(param_1 + 0x11c) != *(int *)(param_1 + 0xec))) {
    FUN_01b44188(param_1,param_2,param_3,0);
    return;
  }
  uVar3 = FUN_01b42c7c();
  uVar1 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if ((int)uVar3 == 0) {
    FUN_01b3369c(param_1,auStack_ac,param_2 + 0x88);
    FUN_01b26974(auStack_f0,param_3,*(int *)(param_1 + 0x11c) << 2);
    FUN_01b3369c(param_1,auStack_f0,auStack_f0,auStack_ac);
    FUN_01b3265c(auStack_68,*(undefined4 *)(param_1 + 0x11c),param_2,
                 *(undefined4 *)(param_1 + 0x11c),param_1 + 0x104);
    uVar3 = FUN_01b3ffb0(param_1,auStack_f0,auStack_68);
    uVar1 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
      bVar2 = true;
      goto LAB_01b44308;
    }
    uVar3 = FUN_01b30190(auStack_f0,param_3,*(undefined4 *)(param_1 + 0xe8),
                         *(undefined4 *)(param_1 + 0x11c));
    uVar1 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 == 0) {
      uVar3 = FUN_01b2bee0(auStack_f0,*(undefined4 *)(param_1 + 0x118),
                           *(undefined4 *)(param_1 + 0x11c));
      uVar1 = (undefined4)((ulonglong)uVar3 >> 0x20);
      if ((int)uVar3 != 0) {
        FUN_01b3369c(param_1,auStack_f0,auStack_f0,auStack_ac);
        uVar3 = FUN_01b3ffb0(param_1,auStack_f0,auStack_68);
        uVar1 = (undefined4)((ulonglong)uVar3 >> 0x20);
        bVar2 = (int)uVar3 != 0;
        goto LAB_01b44308;
      }
    }
  }
  bVar2 = false;
LAB_01b44308:
  if ((local_24 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(bVar2,uVar1,local_24 ^ DAT_01d53560,0);
  }
  return;
}

