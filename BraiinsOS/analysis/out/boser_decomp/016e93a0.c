// FUN_016e93a0 @ 016e93a0 size=224 calls_out=1 calls_in=1
// strings: 

void FUN_016e93a0(undefined4 *param_1,int *param_2,uint *param_3)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  bVar2 = *(byte *)(*param_2 + 0x14);
  if ((bVar2 == 2) || ((bVar2 & 1) != 0)) {
    *(undefined1 *)(param_1 + 1) = 0;
    uVar4 = *param_3;
    *param_1 = 0x80000000;
    param_1[2] = uVar4;
  }
  else {
    uVar4 = *param_3;
    if (((char)param_3[7] == '\x04' && *(char *)((int)param_3 + 0x1d) == '\0') && uVar4 < 0x100) {
      cVar1 = (char)uVar4;
      if (cVar1 < 0) {
        if (*(char *)(*param_2 + 0x17) != '\0') {
          FUN_016e9480(param_1,param_2[1],param_2[2],param_3 + 1,1);
          return;
        }
        *(char *)((int)param_1 + 5) = cVar1;
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
        param_1[2] = (int)cVar1;
      }
      *(undefined1 *)(param_1 + 1) = uVar3;
    }
    else {
      param_1[2] = uVar4;
      *(undefined1 *)(param_1 + 1) = 0;
    }
    *param_1 = 0x80000000;
  }
  return;
}

