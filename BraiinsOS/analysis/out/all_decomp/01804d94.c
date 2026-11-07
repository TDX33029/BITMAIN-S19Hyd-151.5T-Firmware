// FUN_01804d94 @ 01804d94 size=208 calls_out=0 calls_in=1
// strings: 

int * FUN_01804d94(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = param_2 + param_1[2];
  if (uVar1 == 0) {
    param_1[2] = 0;
    return (int *)0x0;
  }
  uVar5 = param_1[1];
  uVar4 = param_1[3];
  iVar6 = uVar5 * 0xc;
  do {
    if (uVar4 < uVar5 || uVar4 == uVar5) {
      if (uVar4 != uVar5) {
        return param_1;
      }
      break;
    }
    uVar5 = uVar5 + 1;
    iVar2 = *param_1 + iVar6;
    iVar6 = iVar6 + 0xc;
    uVar3 = *(int *)(iVar2 + 4) + *(int *)(iVar2 + 8);
    if (uVar1 < uVar3) {
      param_1[2] = uVar1;
      return (int *)0x0;
    }
    uVar1 = uVar1 - uVar3;
    param_1[1] = uVar5;
  } while (uVar1 != 0);
  param_1[2] = 0;
  return (int *)0x0;
}

