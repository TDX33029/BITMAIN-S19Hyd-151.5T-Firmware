// FUN_01276d58 @ 01276d58 size=140 calls_out=4 calls_in=32
// strings: 

void FUN_01276d58(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    switch((char)param_1[2]) {
    case '\0':
    case '\x01':
    case '\x02':
    case '\x06':
      goto switchD_01276d80_caseD_0;
    case '\x03':
      iVar1 = param_1[3];
      iVar2 = param_1[4];
      goto LAB_01276dc4;
    case '\x04':
      iVar1 = param_1[4];
      FUN_0196b060(iVar1,param_1[5]);
      FUN_0134aee0(param_1[3],iVar1,8,0x18);
      return;
    default:
      FUN_0196afa8(param_1 + 3);
      return;
    }
  }
  FUN_0196afa8(param_1 + 1);
  iVar1 = param_1[4];
  if (iVar1 == -0x80000000) {
switchD_01276d80_caseD_0:
    return;
  }
  iVar2 = param_1[5];
LAB_01276dc4:
  FUN_019bb7e0(iVar1,iVar2);
  return;
}

