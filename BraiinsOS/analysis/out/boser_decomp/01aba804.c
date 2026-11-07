// FUN_01aba804 @ 01aba804 size=308 calls_out=3 calls_in=1
// strings: 

void FUN_01aba804(uint *param_1,uint *param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  uint *local_40;
  uint local_3c;
  uint uStack_38;
  uint local_34;
  uint *local_30;
  uint local_2c;
  uint uStack_28;
  
  uVar7 = FUN_01ab9f74(param_3);
  piVar2 = (int *)((ulonglong)uVar7 >> 0x20);
  iVar4 = *(int *)((int)uVar7 + 8);
  if (iVar4 == 0) {
    param_3 = 0;
  }
  else {
    uVar3 = *param_2;
    uVar5 = param_2[1];
    iVar6 = iVar4 * -0x10;
    piVar1 = (int *)(*(int *)((int)uVar7 + 4) + iVar4 * 0x10);
    do {
      if ((char)piVar1[-2] == '\0') {
        FUN_01ab440c(&local_30,param_3,piVar1[-4] + -1);
        if (local_30 != (uint *)0x0) {
          local_3c = local_2c;
          uStack_38 = uStack_28;
          local_40 = local_30;
          if ((*local_30 & uVar3) == 0 && (local_30[1] & uVar5) == 0) {
            *param_1 = uVar3;
            param_1[1] = uVar5;
            param_1[2] = (uint)local_30;
            param_1[3] = local_2c;
            param_1[4] = uStack_28;
            goto LAB_01aba920;
          }
          local_34 = param_3;
          FUN_01ab4580(&local_40);
        }
      }
      iVar6 = iVar6 + 0x10;
      piVar1 = piVar1 + -4;
    } while (iVar6 != 0);
    param_3 = 0;
  }
LAB_01aba920:
  iVar4 = *piVar2;
  param_1[5] = param_3;
  *piVar2 = iVar4 + -1;
  return;
}

