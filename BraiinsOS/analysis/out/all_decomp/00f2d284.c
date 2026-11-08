// FUN_00f2d284 @ 00f2d284 size=240 calls_out=6 calls_in=3
// strings: 

void FUN_00f2d284(int *param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 uStack_19;
  
  if (*param_2 != '\x03') {
    iVar1 = FUN_00f36124(param_2,&uStack_19,&DAT_0187e928);
    FUN_00f3615c(param_2);
    *param_1 = 0;
    param_1[1] = iVar1;
    return;
  }
  iVar1 = *(int *)(param_2 + 8);
  uVar2 = *(uint *)(param_2 + 0xc);
  if (0xffff < uVar2) {
    if (*(uint *)(param_2 + 4) != 0) {
      thunk_FUN_016d3fb4(iVar1);
    }
    iVar1 = FUN_00f2c2f0(uVar2,"",&DAT_018abad0);
    *param_1 = 0;
    param_1[1] = iVar1;
    return;
  }
  if (uVar2 < *(uint *)(param_2 + 4)) {
    if (uVar2 == 0) {
      thunk_FUN_016d3fb4(iVar1);
      *param_1 = 1;
      param_1[1] = 0;
      return;
    }
    iVar1 = thunk_FUN_016d4ea4(iVar1,uVar2);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar2);
    }
  }
  *param_1 = iVar1;
  param_1[1] = uVar2;
  return;
}

