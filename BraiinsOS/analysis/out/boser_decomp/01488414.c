// FUN_01488414 @ 01488414 size=228 calls_out=4 calls_in=12
// strings: 

void FUN_01488414(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_4c8 [2];
  undefined1 auStack_4c0 [1180];
  
  iVar4 = param_1[2];
  if ((uint)(*param_1 - iVar4) < (uint)(param_2[1] - *param_2)) {
    FUN_0132b898(param_1,iVar4,param_2[1] - *param_2,8,0x188);
    iVar4 = param_1[2];
  }
  iVar1 = param_1[1];
  FUN_01bed4e2(local_4c8,param_2,0x4a0);
  if (local_4c8[0] != local_4c8[1]) {
    iVar1 = iVar4 * 0x188 + iVar1;
    iVar4 = (iVar4 + local_4c8[1]) - local_4c8[0];
    iVar2 = local_4c8[0] * 0x188 + 8;
    iVar3 = local_4c8[0];
    do {
      FUN_01bed864(iVar1,(int)local_4c8 + iVar2,0x188);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x188;
      iVar1 = iVar1 + 0x188;
    } while (local_4c8[1] != iVar3);
    local_4c8[0] = local_4c8[1];
  }
  param_1[2] = iVar4;
  FUN_01499330(auStack_4c0,local_4c8[0],local_4c8[1]);
  return;
}

