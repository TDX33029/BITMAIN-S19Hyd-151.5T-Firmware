// FUN_012933b4 @ 012933b4 size=348 calls_out=0 calls_in=1
// strings: 

void FUN_012933b4(undefined1 *param_1,byte *param_2,uint param_3)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_3 == 1) {
    bVar2 = *param_2;
    if (bVar2 == 0x2d || bVar2 == 0x2b) {
      param_1[1] = 1;
      *param_1 = 1;
      return;
    }
  }
  else {
    if (param_3 == 0) {
      param_1[1] = 0;
      *param_1 = 1;
      return;
    }
    bVar2 = *param_2;
  }
  if (bVar2 == 0x2b) {
    param_2 = param_2 + 1;
    param_3 = param_3 - 1;
  }
  if (param_3 < 0x11) {
    if (param_3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
      do {
        bVar2 = *param_2;
        if (9 < bVar2 - 0x30) goto LAB_012934fc;
        param_2 = param_2 + 1;
        param_3 = param_3 - 1;
        uVar1 = (uVar1 & 0xffffffff) * 10 + CONCAT44((int)(uVar1 >> 0x20) * 10,bVar2 - 0x30);
      } while (param_3 != 0);
    }
LAB_012934c0:
    *(ulonglong *)(param_1 + 8) = uVar1;
    *param_1 = 0;
    return;
  }
  uVar5 = 0;
  uVar3 = 0;
  while( true ) {
    uVar1 = CONCAT44(uVar3,uVar5);
    if (param_3 == 0) goto LAB_012934c0;
    uVar6 = (uint)((ulonglong)uVar5 * 10);
    uVar7 = (uint)((ulonglong)uVar5 * 10 >> 0x20);
    uVar5 = (uint)((ulonglong)uVar3 * 10);
    uVar4 = uVar7 + uVar5;
    if ((int)((ulonglong)uVar3 * 10 >> 0x20) != 0 || CARRY4(uVar7,uVar5)) break;
    uVar7 = *param_2 - 0x30;
    if (9 < uVar7) goto LAB_012934fc;
    uVar5 = uVar6 + uVar7;
    param_3 = param_3 - 1;
    uVar3 = uVar4 + CARRY4(uVar6,uVar7);
    param_2 = param_2 + 1;
    if (CARRY4(uVar4,(uint)CARRY4(uVar6,uVar7))) {
LAB_012934e4:
      param_1[1] = 2;
      *param_1 = 1;
      return;
    }
  }
  if (9 < *param_2 - 0x30) {
LAB_012934fc:
    param_1[1] = 1;
    *param_1 = 1;
    return;
  }
  goto LAB_012934e4;
}

