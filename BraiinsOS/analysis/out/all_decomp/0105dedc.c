// FUN_0105dedc @ 0105dedc size=256 calls_out=5 calls_in=3
// strings: 

int FUN_0105dedc(int *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined2 local_60 [2];
  uint local_5c;
  
  uVar3 = param_4 + param_3;
  if (uVar3 <= param_2) {
    uVar4 = param_1[2];
    if (uVar4 < uVar3) {
      uVar3 = uVar3 - uVar4;
      if (*param_1 - uVar4 < uVar3) {
        FUN_0104e980(param_1,uVar4,uVar3,1,1);
        uVar4 = param_1[2];
        iVar1 = param_1[1];
        puVar2 = (undefined1 *)(iVar1 + uVar4);
      }
      else {
        iVar1 = param_1[1];
        puVar2 = (undefined1 *)(iVar1 + uVar4);
      }
      if (1 < uVar3) {
        FUN_016dd606(puVar2,0,uVar3 - 1);
        uVar4 = (uVar3 - 1) + uVar4;
        puVar2 = (undefined1 *)(iVar1 + uVar4);
      }
      *puVar2 = 0;
      uVar3 = uVar4 + 1;
    }
    param_1[2] = uVar3;
    return 0;
  }
  local_60[0] = 0xe;
  local_5c = param_2;
  iVar1 = thunk_FUN_016d4a50(0x44);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x44);
  }
  FUN_016dd1aa(iVar1,local_60,0x44);
  return iVar1;
}

