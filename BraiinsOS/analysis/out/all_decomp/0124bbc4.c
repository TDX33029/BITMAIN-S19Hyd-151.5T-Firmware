// FUN_0124bbc4 @ 0124bbc4 size=244 calls_out=1 calls_in=0
// strings: 

int FUN_0124bbc4(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_34;
  uint local_30;
  undefined4 local_28;
  
  if (*param_2 == '\x04') {
    uVar4 = *(uint *)(param_1 + 0x14);
    iVar2 = *(int *)(param_2 + 8);
    uVar5 = *(uint *)(param_2 + 0xc);
    if (uVar4 == 0) {
      iVar3 = iVar2;
      if (uVar5 != 0) {
LAB_0124bc04:
        local_34 = 0x80000001;
        local_30 = uVar4;
        local_28 = param_3;
        iVar1 = FUN_011d018c(param_1,iVar3,&local_34,param_4,param_5);
        if (iVar1 == 0) {
          do {
            iVar3 = iVar3 + 0x18;
            uVar4 = uVar4 + 1;
            if (iVar3 == iVar2 + uVar5 * 0x18) {
              return 0;
            }
            local_34 = 0x80000001;
            local_30 = uVar4;
            local_28 = param_3;
            iVar1 = FUN_011d018c(param_1,iVar3,&local_34,param_4,param_5);
          } while (iVar1 == 0);
        }
        return iVar1;
      }
    }
    else if (uVar4 < uVar5) {
      iVar3 = iVar2 + uVar4 * 0x18;
      goto LAB_0124bc04;
    }
  }
  return 0;
}

