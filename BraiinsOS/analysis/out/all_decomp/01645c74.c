// FUN_01645c74 @ 01645c74 size=244 calls_out=4 calls_in=1
// strings: inner has gone away | inner has gone away

void FUN_01645c74(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *param_2;
  if (iVar2 == 3) {
    param_2 = param_2 + 1;
    iVar2 = *param_2;
    if (iVar2 == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("inner has gone away",0x13,&DAT_018aca20);
    }
  }
  else if (iVar2 == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("inner has gone away",0x13,&DAT_018aca30);
  }
  if (iVar2 != 0) {
    *(undefined1 *)param_1 = 4;
    return;
  }
  if (param_2[3] == -1) {
    iVar2 = FUN_016da4c8(param_2[2],9);
    if (iVar2 == -1) {
      puVar1 = (undefined4 *)FUN_016d2bc8();
      uVar3 = *puVar1;
      *param_1 = 0;
      param_1[1] = uVar3;
      return;
    }
  }
  else {
    iVar2 = FUN_016d6968(0x1a8,param_2[3],9,0,0);
    if (iVar2 == -1) {
      puVar1 = (undefined4 *)FUN_016d2bc8();
      uVar3 = *puVar1;
      *param_1 = 0;
      param_1[1] = uVar3;
      return;
    }
  }
  *(undefined1 *)param_1 = 4;
  return;
}

