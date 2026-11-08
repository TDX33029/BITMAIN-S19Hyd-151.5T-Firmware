// FUN_01241b14 @ 01241b14 size=160 calls_out=1 calls_in=0
// strings: 

int FUN_01241b14(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_34;
  uint local_30;
  undefined4 local_28;
  
  if (*param_2 == '\x04') {
    uVar2 = *(uint *)(param_2 + 0xc);
    if (*(uint *)(param_1 + 8) < *(uint *)(param_2 + 0xc)) {
      uVar2 = *(uint *)(param_1 + 8);
    }
    if (uVar2 != 0) {
      iVar4 = *(int *)(param_2 + 8);
      iVar5 = *(int *)(param_1 + 4);
      uVar3 = 0;
      do {
        local_34 = 0x80000001;
        local_30 = uVar3;
        local_28 = param_3;
        iVar1 = FUN_011d018c(iVar5,iVar4,&local_34,param_4,param_5);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar3 = uVar3 + 1;
        iVar5 = iVar5 + 0x14;
        iVar4 = iVar4 + 0x18;
      } while (uVar2 != uVar3);
    }
  }
  return 0;
}

