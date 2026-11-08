// FUN_0168e8d8 @ 0168e8d8 size=228 calls_out=4 calls_in=1
// strings: 

void FUN_0168e8d8(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_68 [72];
  
  iVar4 = param_3 * 0x48;
  if (0x1c71c71 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar4);
  }
  if (iVar4 == 0) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = param_3;
    return;
  }
  uVar1 = thunk_FUN_016d4a50(iVar4);
  if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,iVar4);
  }
  if (param_3 != 0) {
    uVar2 = 0;
    uVar3 = uVar1;
    do {
      if (iVar4 == 0) break;
      FUN_01676758(auStack_68,param_2);
      FUN_016dd1aa(uVar3,auStack_68,0x48);
      uVar2 = uVar2 + 1;
      uVar3 = uVar3 + 0x48;
      iVar4 = iVar4 + -0x48;
      param_2 = param_2 + 0x48;
    } while (param_3 != uVar2);
  }
  *param_1 = param_3;
  param_1[1] = uVar1;
  param_1[2] = param_3;
  return;
}

