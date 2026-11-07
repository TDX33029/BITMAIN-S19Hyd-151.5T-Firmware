// FUN_016e25e0 @ 016e25e0 size=324 calls_out=2 calls_in=6
// strings: 

void FUN_016e25e0(undefined4 *param_1,uint param_2)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  byte local_2e;
  byte local_2d;
  undefined4 local_2c;
  undefined4 uStack_28;
  uint local_24;
  
  local_2c = *param_1;
  uStack_28 = param_1[1];
  local_24 = DAT_018ddaf8;
  uVar5 = FUN_016e1f3c(&local_2c,&local_2e,&PTR_018bc3f4,0);
  uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if ((int)uVar5 != 0) {
    uVar4 = local_2e & 0x1f;
    if (uVar4 == 0x1f) {
      uVar4 = 0;
      uVar3 = 0;
      do {
        uVar5 = FUN_016e1f3c(&local_2c,&local_2d);
        uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
        if ((((int)uVar5 == 0) || (uVar3 >> 0x19 != 0)) ||
           ((uVar4 == 0 && uVar3 == 0 && (local_2d == 0x80)))) goto LAB_016e26fc;
        uVar3 = uVar3 << 7 | uVar4 >> 0x19;
        uVar4 = local_2d & 0x7f | uVar4 << 7;
      } while ((local_2d & 0x80) != 0);
      if ((uVar3 != 0 || uVar3 < (0x1fffffff < uVar4)) || (uVar3 == 0 && (0x1e < uVar4) <= uVar3))
      goto LAB_016e26fc;
    }
    uVar4 = (local_2e & 0xe0) << 0x18 | uVar4;
    if ((uVar4 & 0xdfffffff) != 0) {
      bVar1 = param_2 == uVar4;
      goto LAB_016e2668;
    }
  }
LAB_016e26fc:
  bVar1 = false;
LAB_016e2668:
  if ((local_24 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(bVar1,uVar2,local_24 ^ DAT_018ddaf8,0);
  }
  return;
}

