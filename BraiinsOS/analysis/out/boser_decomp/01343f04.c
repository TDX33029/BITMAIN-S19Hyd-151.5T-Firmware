// FUN_01343f04 @ 01343f04 size=248 calls_out=2 calls_in=2
// strings: 

undefined4 FUN_01343f04(int param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  uVar3 = 2;
  if (param_2 == 0) {
    return 2;
  }
  uVar5 = FUN_01343b04(param_1,param_2,0x2e);
  if ((int)uVar5 == 0) {
    uVar1 = CONCAT44(param_2,param_1);
    if (param_2 < 3) goto LAB_01343f8c;
    iVar2 = thunk_FUN_01bed842(&DAT_005327b3,param_1,3);
    uVar5 = CONCAT44(param_2 - 3,param_1 + 3);
    if ((iVar2 != 0) &&
       (iVar2 = thunk_FUN_01bed842(&DAT_005327b0,param_1,3), uVar1 = CONCAT44(param_2,param_1),
       iVar2 != 0)) goto LAB_01343f8c;
  }
  uVar1 = uVar5;
  if ((int)((ulonglong)uVar5 >> 0x20) == 0) {
    return 0;
  }
LAB_01343f8c:
  iVar2 = (int)((ulonglong)uVar1 >> 0x20);
  pcVar4 = (char *)uVar1;
  if (iVar2 == 3) {
    iVar2 = thunk_FUN_01bed842(pcVar4,&DAT_005327b3,3);
    if ((iVar2 == 0) || (iVar2 = thunk_FUN_01bed842(pcVar4,&DAT_005327b0,3), iVar2 == 0)) {
      uVar3 = 1;
    }
  }
  else if ((iVar2 == 1) && (*pcVar4 == '.')) {
    uVar3 = 1;
  }
  return uVar3;
}

