// FUN_016224c8 @ 016224c8 size=240 calls_out=5 calls_in=2
// strings: 

void FUN_016224c8(int *param_1,int param_2,undefined4 param_3,uint param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_24;
  
  iVar1 = 1;
  iVar4 = (int)((ulonglong)param_4 * (ulonglong)param_5);
  iVar3 = 4;
  iVar2 = 0;
  if (((int)((ulonglong)param_4 * (ulonglong)param_5 >> 0x20) != 0) || (iVar4 < 0))
  goto LAB_016225a8;
  if (param_2 == 0) {
    if ((iVar4 != 0) && (iVar1 = thunk_FUN_016d4a50(iVar4), iVar1 == 0)) goto LAB_01622598;
LAB_0162258c:
    param_1[1] = iVar1;
    iVar1 = 0;
  }
  else {
    if (iVar4 == 0) {
      local_24 = 0;
      iVar2 = FUN_016d51b0(&local_24,4,0);
      iVar1 = local_24;
      if ((iVar2 != 0) || (local_24 == 0)) goto LAB_01622598;
      FUN_016dd1aa(local_24,param_3,param_5 * param_2);
      thunk_FUN_016d3fb4(param_3);
      goto LAB_0162258c;
    }
    iVar1 = thunk_FUN_016d4ea4(param_3,iVar4);
    if (iVar1 != 0) goto LAB_0162258c;
LAB_01622598:
    iVar1 = 1;
    param_1[1] = 1;
  }
  iVar3 = 8;
  iVar2 = iVar4;
LAB_016225a8:
  *(int *)((int)param_1 + iVar3) = iVar2;
  *param_1 = iVar1;
  return;
}

