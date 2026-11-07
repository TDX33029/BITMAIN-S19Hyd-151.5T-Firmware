// FUN_01669480 @ 01669480 size=236 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01669480(byte *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_lr;
  
  if (param_2 != 0) {
    param_4 = (uint)*param_1;
  }
  uVar2 = 0;
  if (param_2 != 0 && param_4 != 0x2b) {
    if (param_4 == 0x30) {
      if (param_2 != 1) goto LAB_0166949c;
    }
    else {
      if (param_2 == 0) {
        uVar2 = 0;
        goto LAB_0166949c;
      }
      if (param_2 == 1) {
        if ((param_4 == 0x2b) || (param_4 == 0x2d)) goto LAB_0166949c;
      }
      else if (8 < param_2) {
        unaff_lr = 0;
        while( true ) {
          if (param_2 == 0) goto LAB_01669514;
          uVar3 = (uint)((ulonglong)unaff_lr * 10);
          if ((int)((ulonglong)unaff_lr * 10 >> 0x20) != 0) break;
          uVar4 = *param_1 - 0x30;
          uVar2 = 0;
          unaff_lr = uVar4 + uVar3;
          if ((9 < uVar4) || (param_2 = param_2 - 1, param_1 = param_1 + 1, CARRY4(uVar4,uVar3)))
          goto LAB_0166949c;
        }
        uVar2 = 0;
        goto LAB_0166949c;
      }
    }
    unaff_lr = 0;
    do {
      bVar1 = *param_1;
      if (9 < bVar1 - 0x30) goto LAB_0166949c;
      param_1 = param_1 + 1;
      param_2 = param_2 - 1;
      unaff_lr = (bVar1 - 0x30) + unaff_lr * 10;
    } while (param_2 != 0);
LAB_01669514:
    uVar2 = 1;
  }
LAB_0166949c:
  return CONCAT44(unaff_lr,uVar2);
}

