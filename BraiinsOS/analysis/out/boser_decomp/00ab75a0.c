// FUN_00ab75a0 @ 00ab75a0 size=384 calls_out=2 calls_in=1
// strings: Invalid versionevent open/boser/boser/src/bosminer.rs:189

void FUN_00ab75a0(undefined1 *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  do {
    uVar3 = param_3 - uVar4;
    if (uVar3 < 8) {
      uVar2 = 0;
      if (uVar3 == 0) {
        uVar5 = 0;
      }
      else {
        do {
          if ((param_2 + uVar4)[uVar2] == 0x2e) {
            uVar5 = CONCAT44(uVar2,1);
            goto LAB_00ab7610;
          }
          uVar2 = uVar2 + 1;
        } while (uVar3 != uVar2);
        uVar5 = (ulonglong)uVar3 << 0x20;
      }
    }
    else {
      uVar5 = FUN_01307168(0x2e,param_2 + uVar4);
    }
LAB_00ab7610:
    if ((uVar5 & 1) == 0) break;
    uVar4 = uVar4 + (int)(uVar5 >> 0x20);
    if ((uVar4 < param_3) && (param_2[uVar4] == 0x2e)) {
      param_3 = uVar4;
      break;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 <= param_3);
  if (param_3 != 0) {
    if (param_3 == 1) {
      bVar1 = *param_2;
      if (bVar1 == 0x2b || bVar1 == 0x2d) goto LAB_00ab7704;
    }
    else {
      bVar1 = *param_2;
    }
    if (bVar1 == 0x2b) {
      param_2 = param_2 + 1;
      param_3 = param_3 - 1;
    }
    if (param_3 < 9) {
      uVar4 = 0;
      for (; param_3 != 0; param_3 = param_3 - 1) {
        bVar1 = *param_2;
        if (9 < bVar1 - 0x30) goto LAB_00ab7704;
        param_2 = param_2 + 1;
        uVar4 = (bVar1 - 0x30) + uVar4 * 10;
      }
LAB_00ab76b0:
      *(uint *)(param_1 + 4) = uVar4;
      *param_1 = 4;
      return;
    }
    uVar4 = 0;
    while( true ) {
      if (param_3 == 0) goto LAB_00ab76b0;
      uVar3 = (uint)((ulonglong)uVar4 * 10);
      if ((int)((ulonglong)uVar4 * 10 >> 0x20) != 0) break;
      uVar2 = *param_2 - 0x30;
      uVar4 = uVar2 + uVar3;
      if ((9 < uVar2) || (param_3 = param_3 - 1, param_2 = param_2 + 1, CARRY4(uVar2,uVar3))) break;
    }
  }
LAB_00ab7704:
  FUN_019a18a8(param_1,0x15,"Invalid versionevent open/boser/boser/src/bosminer.rs:189",0xf);
  return;
}

