// FUN_0123e4c8 @ 0123e4c8 size=280 calls_out=3 calls_in=1
// strings: 

void FUN_0123e4c8(int *param_1,uint *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  uVar4 = *param_2;
  uVar1 = 0x15;
  if ((int)uVar4 < 0) {
    uVar1 = uVar4 ^ 0x80000000;
  }
  if (uVar1 != 0x10) {
    if (uVar1 == 0x11) {
      uVar1 = param_2[1];
      FUN_0122f75c(&local_50);
      if (local_50 == 2) {
        piVar2 = (int *)((uint)&local_50 | 4);
        iVar3 = piVar2[1];
        iVar5 = piVar2[2];
        param_1[1] = *piVar2;
        param_1[2] = iVar3;
        param_1[3] = iVar5;
        *param_1 = 2;
      }
      else {
        *param_1 = local_50;
        param_1[1] = iStack_4c;
        param_1[2] = iStack_48;
        param_1[3] = iStack_44;
        param_1[4] = iStack_40;
        param_1[5] = iStack_3c;
        param_1[6] = local_38;
        param_1[7] = iStack_34;
        param_1[8] = iStack_30;
        param_1[9] = iStack_2c;
        param_1[10] = iStack_28;
        param_1[0xb] = iStack_24;
      }
      thunk_FUN_01be4678(uVar1);
      goto LAB_0123e5c0;
    }
    if (uVar1 != 0x12) {
      FUN_0122f75c(&local_50,param_2);
      if (local_50 == 2) {
        piVar2 = (int *)((uint)&local_50 | 4);
        iVar3 = piVar2[1];
        iVar5 = piVar2[2];
        param_1[1] = *piVar2;
        param_1[2] = iVar3;
        param_1[3] = iVar5;
        *param_1 = 2;
        return;
      }
      *param_1 = local_50;
      param_1[1] = iStack_4c;
      param_1[2] = iStack_48;
      param_1[3] = iStack_44;
      param_1[4] = iStack_40;
      param_1[5] = iStack_3c;
      param_1[6] = local_38;
      param_1[7] = iStack_34;
      param_1[8] = iStack_30;
      param_1[9] = iStack_2c;
      param_1[10] = iStack_28;
      param_1[0xb] = iStack_24;
      return;
    }
  }
  *param_1 = 2;
  param_1[1] = 2;
LAB_0123e5c0:
  if (uVar4 == 0x80000011) {
    return;
  }
  FUN_012222e0(param_2);
  return;
}

