// FUN_01b43b6c @ 01b43b6c size=412 calls_out=9 calls_in=0
// strings: ec_GFp_nistp384_cmp_x_coordinate | /aws-lc/crypto/fipsmodule/ec/p384.c | group->field.N.width == group->order.N.width

void FUN_01b43b6c(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_f8 [48];
  undefined1 auStack_c8 [48];
  undefined1 auStack_98 [48];
  undefined1 auStack_68 [68];
  uint local_24;
  
  local_24 = DAT_01d53560;
  uVar3 = FUN_01b42c7c();
  uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if ((int)uVar3 == 0) {
    FUN_01b19bd0(auStack_f8,param_2 + 0x88);
    FUN_01b108b0(auStack_f8,auStack_f8,auStack_f8);
    FUN_01b19bd0(auStack_c8,param_3);
    FUN_01b108b0(auStack_c8,auStack_c8,auStack_f8);
    FUN_01b19bd0(auStack_98,param_2);
    FUN_01b17f88(auStack_98,auStack_98);
    uVar3 = FUN_01bed842(auStack_c8,auStack_98,0x30);
    uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 == 0) {
      bVar1 = true;
      goto LAB_01b43bbc;
    }
    if (*(int *)(param_1 + 0x11c) != *(int *)(param_1 + 0xec)) {
                    /* WARNING: Subroutine does not return */
      FUN_01be3310("group->field.N.width == group->order.N.width",
                   "/aws-lc/crypto/fipsmodule/ec/p384.c",0x1bf,"ec_GFp_nistp384_cmp_x_coordinate");
    }
    uVar3 = FUN_01b30190(auStack_68,param_3,*(undefined4 *)(param_1 + 0xe8));
    uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if (((int)uVar3 == 0) &&
       (uVar3 = FUN_01b2bee0(auStack_68,*(undefined4 *)(param_1 + 0x118),
                             *(undefined4 *)(param_1 + 0x11c)),
       uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20), (int)uVar3 != 0)) {
      FUN_01b19bd0(auStack_c8,auStack_68);
      FUN_01b108b0(auStack_c8,auStack_c8,auStack_f8);
      uVar3 = FUN_01bed842(auStack_c8,auStack_98,0x30);
      uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
      bVar1 = (int)uVar3 == 0;
      goto LAB_01b43bbc;
    }
  }
  bVar1 = false;
LAB_01b43bbc:
  if ((local_24 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(bVar1,uVar2,local_24 ^ DAT_01d53560,0);
  }
  return;
}

