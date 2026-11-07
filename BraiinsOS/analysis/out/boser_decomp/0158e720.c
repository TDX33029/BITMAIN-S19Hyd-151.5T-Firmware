// FUN_0158e720 @ 0158e720 size=204 calls_out=1 calls_in=0
// strings: 

int FUN_0158e720(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_34;
  int local_30;
  undefined4 local_28;
  
  iVar1 = 0;
  if (*param_2 == '\x04') {
    iVar5 = *(int *)(param_2 + 8);
    uVar2 = *(uint *)(param_1 + 0x14);
    iVar3 = 0;
    iVar4 = iVar5 + *(int *)(param_2 + 0xc) * 0x18;
    do {
      if (uVar2 == 0) {
        if (iVar5 == iVar4) {
          return 0;
        }
      }
      else {
        if (((uint)(iVar4 - iVar5) >> 3) * -0x55555555 <= uVar2) {
          return 0;
        }
        iVar3 = uVar2 + iVar3;
        iVar5 = iVar5 + uVar2 * 0x18;
      }
      local_34 = 0x80000001;
      local_30 = iVar3;
      local_28 = param_3;
      iVar1 = FUN_015776f4(param_1,iVar5,&local_34,param_4,param_5);
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x18;
      uVar2 = 0;
    } while (iVar1 == 0);
  }
  return iVar1;
}

