// FUN_00734d10 @ 00734d10 size=192 calls_out=1 calls_in=1
// strings: 

void FUN_00734d10(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  do {
    uVar2 = param_3 - uVar3;
    if (uVar2 < 8) {
      uVar1 = 0;
      if (uVar2 == 0) {
        uVar4 = 0;
      }
      else {
        do {
          if (*(char *)(param_2 + uVar3 + uVar1) == ':') {
            uVar4 = CONCAT44(uVar1,1);
            goto LAB_00734d80;
          }
          uVar1 = uVar1 + 1;
        } while (uVar2 != uVar1);
        uVar4 = (ulonglong)uVar2 << 0x20;
      }
    }
    else {
      uVar4 = FUN_01307168(0x3a,param_2 + uVar3);
    }
LAB_00734d80:
    if ((uVar4 & 1) == 0) break;
    uVar2 = uVar3 + (int)(uVar4 >> 0x20);
    uVar3 = uVar2 + 1;
    if ((uVar2 < param_3) && (*(char *)(param_2 + uVar2) == ':')) {
      *param_1 = param_2;
      param_1[1] = uVar2;
      param_1[2] = param_2 + uVar3;
      param_1[3] = param_3 - uVar3;
      return;
    }
  } while (uVar3 <= param_3);
  *param_1 = 0;
  return;
}

