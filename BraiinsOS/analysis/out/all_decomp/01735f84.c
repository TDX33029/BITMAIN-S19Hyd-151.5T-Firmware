// FUN_01735f84 @ 01735f84 size=524 calls_out=9 calls_in=0
// strings: 

void FUN_01735f84(int param_1,int param_2,undefined1 *param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined1 auStack_f0 [68];
  undefined1 auStack_ac [68];
  undefined1 auStack_68 [68];
  uint local_24;
  
  local_24 = DAT_018ddaf8;
  if ((*(int *)(param_1 + 0x1d8) == 0) || (*(int *)(param_1 + 0x11c) != *(int *)(param_1 + 0xec))) {
    FUN_01735eac(param_1,param_2,param_3);
    return;
  }
  uVar5 = FUN_017345b8();
  uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if ((int)uVar5 == 0) {
    FUN_0171e30c(param_1,auStack_ac,param_2 + 0x88);
    uVar1 = *(int *)(param_1 + 0x11c) * 4;
    if (uVar1 != 0) {
      if ((((auStack_f0 < param_3) && (param_3 < auStack_f0 + uVar1)) ||
          ((param_3 < auStack_f0 && (auStack_f0 < param_3 + uVar1)))) || (0x44 < uVar1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0,0x1736188);
        (*pcVar2)();
      }
      FUN_016dd1aa(auStack_f0,param_3);
    }
    FUN_0171e30c(param_1,auStack_f0,auStack_f0,auStack_ac);
    FUN_0171cba8(auStack_68,*(undefined4 *)(param_1 + 0x11c),param_2,
                 *(undefined4 *)(param_1 + 0x11c),param_1 + 0x104);
    uVar5 = FUN_017303ac(param_1,auStack_f0,auStack_68);
    uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if ((int)uVar5 != 0) {
      bVar4 = true;
      goto LAB_0173602c;
    }
    uVar5 = FUN_0171a054(auStack_f0,param_3,*(undefined4 *)(param_1 + 0xe8),
                         *(undefined4 *)(param_1 + 0x11c));
    uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if ((int)uVar5 == 0) {
      uVar5 = FUN_01715824(auStack_f0,*(undefined4 *)(param_1 + 0x118),
                           *(undefined4 *)(param_1 + 0x11c));
      uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
      if ((int)uVar5 != 0) {
        FUN_0171e30c(param_1,auStack_f0,auStack_f0,auStack_ac);
        uVar5 = FUN_017303ac(param_1,auStack_f0,auStack_68);
        uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
        bVar4 = (int)uVar5 != 0;
        goto LAB_0173602c;
      }
    }
  }
  bVar4 = false;
LAB_0173602c:
  if ((local_24 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(bVar4,uVar3,local_24 ^ DAT_018ddaf8,0);
  }
  return;
}

