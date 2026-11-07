// FUN_01735844 @ 01735844 size=496 calls_out=9 calls_in=0
// strings: ec_GFp_nistp384_cmp_x_coordinate | /aws-lc/crypto/fipsmodule/ec/p384.c | group->field.N.width == group->order.N.width

void FUN_01735844(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 auStack_c8 [48];
  undefined1 auStack_98 [48];
  undefined1 auStack_68 [68];
  uint local_24;
  
  local_24 = DAT_018ddaf8;
  uVar3 = FUN_017345b8();
  uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if ((int)uVar3 == 0) {
    local_f4 = *(undefined4 *)(param_2 + 0x8c);
    local_ec = *(undefined4 *)(param_2 + 0x94);
    local_e8 = *(undefined4 *)(param_2 + 0x98);
    local_e4 = *(undefined4 *)(param_2 + 0x9c);
    local_e0 = *(undefined4 *)(param_2 + 0xa0);
    local_dc = *(undefined4 *)(param_2 + 0xa4);
    local_d8 = *(undefined4 *)(param_2 + 0xa8);
    local_d4 = *(undefined4 *)(param_2 + 0xac);
    local_d0 = *(undefined4 *)(param_2 + 0xb0);
    local_f0 = *(undefined4 *)(param_2 + 0x90);
    local_cc = *(undefined4 *)(param_2 + 0xb4);
    local_f8 = *(undefined4 *)(param_2 + 0x88);
    FUN_016f5aec(&local_f8,&local_f8,&local_f8);
    FUN_016fe45c(auStack_c8,param_3);
    FUN_016f5aec(auStack_c8,auStack_c8,&local_f8);
    FUN_016fe45c(auStack_98,param_2);
    FUN_016fca9c(auStack_98,auStack_98);
    uVar3 = FUN_016dd50a(auStack_c8,auStack_98,0x30);
    uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 == 0) {
      bVar1 = true;
      goto LAB_01735894;
    }
    if (*(int *)(param_1 + 0x11c) != *(int *)(param_1 + 0xec)) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2c94("group->field.N.width == group->order.N.width",
                   "/aws-lc/crypto/fipsmodule/ec/p384.c",0x1bf,"ec_GFp_nistp384_cmp_x_coordinate");
    }
    uVar3 = FUN_0171a054(auStack_68,param_3,*(undefined4 *)(param_1 + 0xe8));
    uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if (((int)uVar3 == 0) &&
       (uVar3 = FUN_01715824(auStack_68,*(undefined4 *)(param_1 + 0x118),
                             *(undefined4 *)(param_1 + 0x11c)),
       uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20), (int)uVar3 != 0)) {
      FUN_016fe45c(auStack_c8,auStack_68);
      FUN_016f5aec(auStack_c8,auStack_c8,&local_f8);
      uVar3 = FUN_016dd50a(auStack_c8,auStack_98,0x30);
      uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
      bVar1 = (int)uVar3 == 0;
      goto LAB_01735894;
    }
  }
  bVar1 = false;
LAB_01735894:
  if ((local_24 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(bVar1,uVar2,local_24 ^ DAT_018ddaf8,0);
  }
  return;
}

