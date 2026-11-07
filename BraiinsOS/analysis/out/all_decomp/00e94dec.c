// FUN_00e94dec @ 00e94dec size=104 calls_out=1 calls_in=1
// strings: 

int FUN_00e94dec(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = *(int *)(param_2 + 4);
  uVar6 = *(uint *)(param_2 + 8);
  iVar4 = uVar6 * 0x2e0;
  uVar1 = 5;
  if (uVar6 < 0x10000) {
    uVar1 = 3;
  }
  uVar3 = *param_1;
  if (uVar6 < 0xfb) {
    uVar1 = 1;
  }
  *param_1 = uVar1 + uVar3;
  param_1[1] = param_1[1] + (uint)CARRY4(uVar1,uVar3);
  do {
    if (iVar4 == 0) {
      return 0;
    }
    iVar2 = FUN_00e66e54(iVar5,param_1);
    iVar4 = iVar4 + -0x2e0;
    iVar5 = iVar5 + 0x2e0;
  } while (iVar2 == 0);
  return iVar2;
}

