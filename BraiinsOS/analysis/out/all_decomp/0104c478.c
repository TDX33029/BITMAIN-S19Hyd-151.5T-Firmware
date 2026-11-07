// FUN_0104c478 @ 0104c478 size=224 calls_out=4 calls_in=0
// strings: 

int FUN_0104c478(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 local_68 [2];
  undefined4 local_64;
  uint local_60;
  
  if (param_3 < 0x100) {
    iVar2 = *(int *)(param_1 + 0x14);
    uVar3 = *(undefined4 *)(param_1 + 0xc);
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    local_68[0] = CONCAT11(local_68[0]._1_1_,(char)param_3);
    iVar1 = FUN_0105dce0(uVar3,uVar4,iVar2,local_68,1);
    if (iVar1 == 0) {
      iVar2 = iVar2 + 1;
      *(int *)(param_1 + 0x14) = iVar2;
      iVar1 = FUN_0105dce0(uVar3,uVar4,iVar2,param_2,param_3);
      if (iVar1 == 0) {
        *(uint *)(param_1 + 0x14) = iVar2 + param_3;
        return 0;
      }
    }
    return iVar1;
  }
  local_64 = 0xff;
  local_68[0] = 5;
  local_60 = param_3;
  iVar1 = thunk_FUN_016d4a50(0x44);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x44);
  }
  FUN_016dd1aa(iVar1,local_68,0x44);
  return iVar1;
}

