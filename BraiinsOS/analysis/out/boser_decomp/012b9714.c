// FUN_012b9714 @ 012b9714 size=184 calls_out=0 calls_in=1
// strings: 

void FUN_012b9714(uint *param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = param_2[10];
  if (*param_2 == 0) {
    uVar4 = 1;
    if (iVar5 == 0) {
      uVar2 = 0;
      uVar3 = 0;
    }
    else {
      uVar2 = (uint)(param_2[0xb] - iVar5) >> 3;
      uVar3 = uVar2;
    }
  }
  else {
    uVar3 = 0;
    if (param_2[3] != 0) {
      uVar3 = (uint)(param_2[4] - param_2[3]) >> 4;
    }
    if (param_2[5] != 0) {
      uVar3 = uVar3 + ((uint)(param_2[6] - param_2[5]) >> 4);
    }
    bVar1 = param_2[7] == 0 || param_2[8] == param_2[7];
    uVar4 = (uint)bVar1;
    if (iVar5 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uint)(param_2[0xb] - iVar5) >> 3;
      uVar4 = (uint)(bVar1 && !CARRY4(uVar3,uVar2));
      uVar3 = uVar3 + uVar2;
    }
  }
  *param_1 = uVar2;
  param_1[1] = uVar4;
  param_1[2] = uVar3;
  return;
}

