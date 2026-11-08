// FUN_01bc00bc @ 01bc00bc size=248 calls_out=0 calls_in=2
// strings: 

int * FUN_01bc00bc(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = param_2 + param_1[2];
  if (uVar1 != 0) {
    uVar4 = param_1[1];
    if (uVar4 < (uint)param_1[3]) {
      do {
        iVar2 = uVar4 * 0xc + *param_1;
        uVar3 = *(int *)(iVar2 + 4) + *(int *)(iVar2 + 8);
        if (uVar1 < uVar3) {
          param_1[2] = uVar1;
          return (int *)0x0;
        }
        uVar1 = uVar1 - uVar3;
        param_1[1] = uVar4 + 1;
        if (uVar1 == 0) goto LAB_01bc0150;
        uVar4 = param_1[1];
      } while (uVar4 < (uint)param_1[3]);
      if (uVar4 != param_1[3]) {
        return param_1;
      }
LAB_01bc0150:
      param_1[2] = 0;
      return (int *)0x0;
    }
    if (uVar4 != param_1[3]) {
      return param_1;
    }
  }
  param_1[2] = 0;
  return (int *)0x0;
}

