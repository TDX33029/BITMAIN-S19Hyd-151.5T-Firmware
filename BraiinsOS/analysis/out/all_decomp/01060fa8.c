// FUN_01060fa8 @ 01060fa8 size=156 calls_out=4 calls_in=1
// strings: 

void FUN_01060fa8(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_24 [2];
  uint local_1c;
  
  uVar2 = param_3 & 0xffff;
  if (*(uint *)(param_2 + 0xc) < uVar2) {
    local_24[0] = 0;
    local_1c = uVar2;
    uVar2 = FUN_0104f1e0(local_24);
    *param_1 = 0x80000000;
    param_1[1] = uVar2;
    return;
  }
  iVar3 = *(int *)(param_2 + 8);
  *(uint *)(param_2 + 8) = iVar3 + uVar2;
  *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) - uVar2;
  uVar1 = thunk_FUN_016d4a50(uVar2);
  if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,uVar2);
  }
  FUN_016dd1aa(uVar1,iVar3,uVar2);
  param_1[2] = uVar2;
  *param_1 = param_3 & 0xffff;
  param_1[1] = uVar1;
  return;
}

