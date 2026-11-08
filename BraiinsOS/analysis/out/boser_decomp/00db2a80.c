// FUN_00db2a80 @ 00db2a80 size=308 calls_out=5 calls_in=2
// strings: autoupgrade

void FUN_00db2a80(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_220 [256];
  int local_120;
  undefined4 local_11c;
  int local_118;
  int local_114 [46];
  int local_5c;
  undefined4 local_58;
  int *local_50;
  
  iVar4 = *(int *)(param_2 + 4);
  iVar3 = *(int *)(param_2 + 0xc);
  if (iVar4 == iVar3) {
    local_120 = -0x80000000;
  }
  else {
    do {
      FUN_01bed4e2(auStack_220,iVar4,0xfc);
      iVar4 = iVar4 + 0xfc;
      *(int *)(param_2 + 4) = iVar4;
      FUN_01bed4e2(&local_120,auStack_220,0xfc);
      if ((local_118 == 0xb) &&
         (iVar2 = thunk_FUN_01bed842(local_11c,"autoupgrade",0xb), iVar2 == 0)) {
        if (local_120 != -0x80000000) {
          FUN_01bed4e2(param_1 + 1,(uint)auStack_220 | 4,0xf8);
          goto LAB_00db2ba8;
        }
      }
      else {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *local_50;
          bVar1 = (bool)hasExclusiveAccess(local_50);
        } while (!bVar1);
        *local_50 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0195b288(local_50);
        }
        if (local_114[0] != -0x80000000) {
          FUN_01a2affc(local_114);
        }
        FUN_019bb7e0(local_120,local_11c);
        if (local_5c != -0x80000000) {
          FUN_019bb7e0(local_5c,local_58);
        }
        iVar4 = *(int *)(param_2 + 4);
        iVar3 = *(int *)(param_2 + 0xc);
      }
    } while (iVar4 != iVar3);
    local_120 = -0x80000000;
  }
LAB_00db2ba8:
  *param_1 = local_120;
  return;
}

