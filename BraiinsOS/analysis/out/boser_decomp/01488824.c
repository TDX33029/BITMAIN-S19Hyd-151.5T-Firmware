// FUN_01488824 @ 01488824 size=180 calls_out=4 calls_in=18
// strings: 

void FUN_01488824(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int local_1b0;
  int local_1ac;
  undefined1 auStack_1a8 [392];
  
  iVar1 = param_1[2];
  if ((uint)(*param_1 - iVar1) < (uint)(param_2[1] - *param_2)) {
    FUN_0132b898(param_1,iVar1,param_2[1] - *param_2,8,0x188);
    iVar1 = param_1[2];
  }
  iVar2 = param_1[1];
  FUN_01bed4e2(&local_1b0,param_2,400);
  if (local_1b0 != local_1ac) {
    FUN_01bed864(iVar1 * 0x188 + iVar2,auStack_1a8,0x188);
    iVar1 = iVar1 + 1;
    local_1b0 = 1;
  }
  param_1[2] = iVar1;
  FUN_01499330(auStack_1a8,local_1b0,local_1ac);
  return;
}

