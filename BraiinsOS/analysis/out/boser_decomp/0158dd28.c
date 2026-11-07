// FUN_0158dd28 @ 0158dd28 size=196 calls_out=1 calls_in=0
// strings: 

int FUN_0158dd28(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_34;
  uint local_30;
  undefined4 local_28;
  
  if (*param_2 == '\x04') {
    iVar5 = *(int *)(param_2 + 8);
    uVar3 = *(uint *)(param_1 + 0x14);
    iVar2 = iVar5 + *(int *)(param_2 + 0xc) * 0x18;
    uVar4 = uVar3;
    do {
      if (uVar3 == 0) {
        if (iVar5 == iVar2) goto LAB_0158dde0;
      }
      else {
        if (((uint)(iVar2 - iVar5) >> 3) * -0x55555555 <= uVar3) goto LAB_0158dde0;
        iVar5 = iVar5 + uVar3 * 0x18;
      }
      local_34 = 0x80000001;
      local_30 = uVar4;
      local_28 = param_3;
      iVar1 = FUN_015776f4(param_1,iVar5,&local_34,param_4,param_5);
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x18;
      uVar3 = 0;
    } while (iVar1 == 0);
  }
  else {
LAB_0158dde0:
    iVar1 = 0;
  }
  return iVar1;
}

