// FUN_01be39f8 @ 01be39f8 size=128 calls_out=0 calls_in=2
// strings: 

void FUN_01be39f8(undefined4 *param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  *param_1 = 0x6f72702f;
  param_1[1] = &DAT_65732f63;
  *(undefined2 *)(param_1 + 3) = 0x2f64;
  param_1[2] = 0x662f666c;
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  if (param_2 == 0) {
    *(undefined2 *)((int)param_1 + 0xe) = 0x30;
  }
  else {
    iVar2 = 0xe;
    uVar3 = param_2;
    do {
      iVar2 = iVar2 + 1;
      bVar1 = 9 < uVar3;
      uVar3 = uVar3 / 10;
    } while (bVar1);
    pcVar4 = (char *)((int)param_1 + iVar2);
    *(undefined1 *)((int)param_1 + iVar2) = 0;
    do {
      pcVar4 = pcVar4 + -1;
      *pcVar4 = (char)param_2 + (char)(param_2 / 10) * -10 + '0';
      bVar1 = 9 < param_2;
      param_2 = param_2 / 10;
    } while (bVar1);
  }
  return;
}

