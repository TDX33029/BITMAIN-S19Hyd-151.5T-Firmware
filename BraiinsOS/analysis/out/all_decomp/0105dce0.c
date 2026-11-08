// FUN_0105dce0 @ 0105dce0 size=476 calls_out=6 calls_in=8
// strings: 

int FUN_0105dce0(int *param_1,uint param_2,uint param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 local_68 [2];
  uint local_64;
  
  uVar3 = param_5 + param_3;
  if (param_2 < uVar3) {
    local_68[0] = 0xe;
    local_64 = param_2;
    iVar1 = thunk_FUN_016d4a50(0x44);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x44);
    }
    FUN_016dd1aa(iVar1,local_68,0x44);
    return iVar1;
  }
  uVar4 = param_1[2];
  if (param_3 == uVar4) {
    if (*param_1 - param_3 < param_5) {
      FUN_0104e980(param_1,param_3,param_5,1,1);
      param_3 = param_1[2];
    }
    FUN_016dd1aa(param_1[1] + param_3,param_4,param_5);
    param_1[2] = param_1[2] + param_5;
    return 0;
  }
  if (uVar4 < uVar3) {
    uVar5 = uVar3 - uVar4;
    if (*param_1 - uVar4 < uVar5) {
      FUN_0104e980(param_1,uVar4,uVar5,1,1);
      uVar4 = param_1[2];
      iVar1 = param_1[1];
      puVar2 = (undefined1 *)(iVar1 + uVar4);
    }
    else {
      iVar1 = param_1[1];
      puVar2 = (undefined1 *)(iVar1 + uVar4);
    }
    if (1 < uVar5) {
      FUN_016dd606(puVar2,0,uVar5 - 1);
      uVar4 = (uVar5 - 1) + uVar4;
      puVar2 = (undefined1 *)(iVar1 + uVar4);
    }
    uVar4 = uVar4 + 1;
    param_1[2] = uVar4;
    *puVar2 = 0;
  }
  if ((uVar3 < param_3) || (uVar4 < uVar3)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(param_3,uVar3,uVar4,&DAT_01883a68);
  }
  FUN_016dd1aa(param_1[1] + param_3,param_4,param_5);
  return 0;
}

