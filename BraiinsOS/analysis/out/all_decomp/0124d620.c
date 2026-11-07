// FUN_0124d620 @ 0124d620 size=244 calls_out=1 calls_in=0
// strings: 

int FUN_0124d620(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_34;
  uint local_30;
  undefined4 local_28;
  
  if (*param_2 == '\x04') {
    local_30 = *(uint *)(param_1 + 0x14);
    iVar5 = *(int *)(param_2 + 8);
    uVar4 = *(uint *)(param_2 + 0xc);
    if (local_30 == 0) {
      iVar2 = 1;
      iVar3 = iVar5;
      if (uVar4 != 0) {
LAB_0124d664:
        local_34 = 0x80000001;
        local_28 = param_3;
        iVar1 = FUN_011d018c(param_1,iVar3,&local_34,param_4,param_5);
        if (iVar1 == 0) {
          do {
            iVar3 = iVar3 + 0x18;
            if (iVar3 == iVar5 + uVar4 * 0x18) {
              return 0;
            }
            local_34 = 0x80000001;
            local_30 = iVar2;
            local_28 = param_3;
            iVar1 = FUN_011d018c(param_1,iVar3,&local_34,param_4,param_5);
            iVar2 = iVar2 + 1;
          } while (iVar1 == 0);
        }
        return iVar1;
      }
    }
    else if (local_30 < uVar4) {
      iVar2 = local_30 + 1;
      iVar3 = iVar5 + local_30 * 0x18;
      goto LAB_0124d664;
    }
  }
  return 0;
}

