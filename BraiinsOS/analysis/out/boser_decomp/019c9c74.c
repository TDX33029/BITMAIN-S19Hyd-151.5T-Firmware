// FUN_019c9c74 @ 019c9c74 size=176 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_019c9c74(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  do {
    uVar2 = param_2 - uVar3;
    if (uVar2 < 8) {
      uVar1 = 0;
      if (uVar2 == 0) {
        uVar4 = 0;
      }
      else {
        do {
          if (*(char *)(param_1 + uVar3 + uVar1) == 'p') {
            uVar4 = CONCAT44(uVar1,1);
            goto LAB_019c9ce4;
          }
          uVar1 = uVar1 + 1;
        } while (uVar2 != uVar1);
        uVar4 = (ulonglong)uVar2 << 0x20;
      }
    }
    else {
      uVar4 = FUN_01307168(0x70,param_1 + uVar3);
    }
LAB_019c9ce4:
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    uVar3 = uVar3 + (int)(uVar4 >> 0x20);
    if ((uVar3 < param_2) && (*(char *)(param_1 + uVar3) == 'p')) {
      return 1;
    }
    uVar3 = uVar3 + 1;
    if (param_2 < uVar3) {
      return 0;
    }
  } while( true );
}

