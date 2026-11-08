// FUN_0159c478 @ 0159c478 size=240 calls_out=3 calls_in=2
// strings: 

void FUN_0159c478(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x68);
  iVar3 = param_1 + 0x28;
  uVar4 = 0x40 - uVar1;
  *(uint *)(param_1 + 0x20) = uVar2 + param_3 * 8;
  *(uint *)(param_1 + 0x24) =
       *(int *)(param_1 + 0x24) + (param_3 >> 0x1d) + (uint)CARRY4(uVar2,param_3 * 8);
  if (uVar4 <= param_3) {
    if (uVar1 != 0) {
      if (0x40 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar1,0x40,0x40,&DAT_018a9f7c);
      }
      FUN_016dd1aa(iVar3 + uVar1,param_2,uVar4);
      *(undefined4 *)(param_1 + 0x68) = 0;
      FUN_01590b9c(param_1,iVar3,1);
      param_2 = param_2 + uVar4;
      param_3 = param_3 - uVar4;
    }
    FUN_01590b9c(param_1,param_2,param_3 >> 6);
    FUN_016dd1aa(iVar3,param_2 + (param_3 & 0x7fffffc0),param_3 & 0x3f);
    *(uint *)(param_1 + 0x68) = param_3 & 0x3f;
    return;
  }
  if (CARRY4(uVar1,param_3) || 0x40 < uVar1 + param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar1,uVar1 + param_3,0x40,&DAT_018a9f8c);
  }
  FUN_016dd1aa(iVar3 + uVar1,param_2,param_3);
  *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + param_3;
  return;
}

