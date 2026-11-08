// FUN_019b0140 @ 019b0140 size=276 calls_out=2 calls_in=9
// strings: 

void FUN_019b0140(int *param_1,char *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = param_1[2];
  if (iVar1 == 0) {
    bVar4 = false;
    if (param_3 != 0) goto LAB_019b018c;
LAB_019b019c:
    iVar2 = *param_1;
    if (!bVar4) goto LAB_019b01d0;
    if (iVar2 == iVar1) {
      FUN_0197ac30(param_1,iVar1,1,1,1);
      iVar1 = param_1[2];
    }
    iVar3 = iVar1 + 1;
    *(undefined1 *)(param_1[1] + iVar1) = 0x2f;
  }
  else {
    bVar4 = *(char *)(param_1[1] + iVar1 + -1) != '/';
    if (param_3 == 0) goto LAB_019b019c;
LAB_019b018c:
    iVar3 = 0;
    if (*param_2 != '/') goto LAB_019b019c;
  }
  iVar2 = *param_1;
  param_1[2] = iVar3;
  iVar1 = iVar3;
LAB_019b01d0:
  if ((uint)(iVar2 - iVar1) < param_3) {
    FUN_0197ac30(param_1,iVar1,param_3,1,1);
    iVar1 = param_1[2];
  }
  FUN_01bed4e2(param_1[1] + iVar1,param_2,param_3);
  param_1[2] = iVar1 + param_3;
  return;
}

