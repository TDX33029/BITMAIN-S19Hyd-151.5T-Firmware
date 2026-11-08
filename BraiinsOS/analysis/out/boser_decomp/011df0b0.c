// FUN_011df0b0 @ 011df0b0 size=180 calls_out=3 calls_in=5
// strings: 

void FUN_011df0b0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_24;
  int *local_20;
  undefined4 local_1c;
  
  iVar1 = param_2[1];
  if (*param_2 != 3 || iVar1 != 0) {
    *param_1 = *param_2;
    param_1[1] = iVar1;
    iVar1 = param_2[3];
    iVar2 = param_2[4];
    iVar3 = param_2[5];
    iVar4 = param_2[6];
    param_1[2] = param_2[2];
    param_1[3] = iVar1;
    param_1[4] = iVar2;
    param_1[5] = iVar3;
    param_1[6] = iVar4;
    iVar1 = param_2[8];
    iVar2 = param_2[9];
    iVar3 = param_2[10];
    iVar4 = param_2[0xb];
    param_1[7] = param_2[7];
    param_1[8] = iVar1;
    param_1[9] = iVar2;
    param_1[10] = iVar3;
    param_1[0xb] = iVar4;
    iVar1 = param_2[0xd];
    iVar2 = param_2[0xe];
    iVar3 = param_2[0xf];
    iVar4 = param_2[0x10];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = iVar1;
    param_1[0xe] = iVar2;
    param_1[0xf] = iVar3;
    param_1[0x10] = iVar4;
    FUN_01bed4e2(param_1 + 0x11,param_2 + 0x11,0x4c);
    return;
  }
  local_20 = (int *)thunk_FUN_01be5118(0x3c);
  if (local_20 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x3c);
  }
  iVar1 = param_2[3];
  iVar2 = param_2[4];
  iVar3 = param_2[5];
  iVar4 = param_2[6];
  *local_20 = param_2[2];
  local_20[1] = iVar1;
  local_20[2] = iVar2;
  local_20[3] = iVar3;
  local_20[4] = iVar4;
  iVar1 = param_2[8];
  iVar2 = param_2[9];
  iVar3 = param_2[10];
  iVar4 = param_2[0xb];
  local_20[5] = param_2[7];
  local_20[6] = iVar1;
  local_20[7] = iVar2;
  local_20[8] = iVar3;
  local_20[9] = iVar4;
  iVar1 = param_2[0xd];
  iVar2 = param_2[0xe];
  iVar3 = param_2[0xf];
  iVar4 = param_2[0x10];
  local_20[10] = param_2[0xc];
  local_20[0xb] = iVar1;
  local_20[0xc] = iVar2;
  local_20[0xd] = iVar3;
  local_20[0xe] = iVar4;
  local_1c = 1;
  local_24 = 1;
  FUN_006c9d1c(param_1,&local_24);
  return;
}

