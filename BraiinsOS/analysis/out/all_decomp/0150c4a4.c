// FUN_0150c4a4 @ 0150c4a4 size=240 calls_out=3 calls_in=1
// strings: 

void FUN_0150c4a4(char *param_1,int param_2,int *param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined *puStack_28;
  undefined4 uStack_24;
  int *local_20;
  int local_1c;
  
  iVar3 = param_3[2];
  iVar4 = iVar3;
  if (*param_3 == iVar3) {
    FUN_0154e5f8(param_3,iVar3,1,1,1);
    iVar4 = param_3[2];
  }
  iVar1 = param_3[1];
  *(undefined1 *)(iVar1 + iVar4) = 0xff;
  iVar4 = iVar4 + 1;
  param_3[2] = iVar4;
  local_30 = 0x18;
  uStack_2c = 0x16;
  puStack_28 = &DAT_0040bab7;
  uStack_24 = 0xe;
  local_20 = param_3;
  local_1c = iVar3;
  if (param_2 != 0) {
    pcVar5 = param_1 + param_2 * 2;
    do {
      cVar2 = param_1[1];
      if (*param_1 != '\x03') {
        cVar2 = *param_1;
      }
      if (iVar4 == *param_3) {
        FUN_006029c0(param_3);
        iVar1 = param_3[1];
      }
      *(char *)(iVar1 + iVar4) = cVar2;
      iVar4 = iVar4 + 1;
      param_1 = param_1 + 2;
      param_3[2] = iVar4;
    } while (param_1 != pcVar5);
  }
  FUN_0152f8f8(&local_30);
  return;
}

