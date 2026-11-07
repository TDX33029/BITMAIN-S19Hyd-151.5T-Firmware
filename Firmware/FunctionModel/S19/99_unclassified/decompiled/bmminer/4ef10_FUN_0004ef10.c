// FUN_0004ef10 @ 0004ef10  size=212  callers=1
// program: bmminer


undefined4 FUN_0004ef10(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int extraout_r2;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;
  char acStack_6e [74];
  
  lVar4 = CONCAT44(param_4,param_3);
  acStack_6e[2] = '\0';
  acStack_6e[3] = '\0';
  acStack_6e[4] = '\0';
  acStack_6e[5] = '\0';
  memset(acStack_6e + 6,0,0x3d);
  pcVar2 = acStack_6e + 2;
  do {
    uVar1 = (undefined4)((ulonglong)lVar4 >> 0x20);
    FUN_00067ad0((int)lVar4,uVar1,0x24,0);
    pcVar3 = pcVar2 + 1;
    *pcVar2 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZbitmain_power_version"[extraout_r2];
    lVar4 = FUN_00067ad0((int)lVar4,uVar1,0x24,0);
    pcVar2 = pcVar3;
  } while (pcVar3 != acStack_6e + param_2 + 1);
  if (lVar4 == 0) {
    pcVar3 = (char *)(param_1 + -1);
    pcVar2 = acStack_6e + param_2;
    do {
      pcVar3 = pcVar3 + 1;
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + -1;
    } while (pcVar3 != (char *)(param_1 + param_2 + -2));
    uVar1 = 1;
    *(undefined1 *)(param_1 + param_2 + -1) = 0;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

