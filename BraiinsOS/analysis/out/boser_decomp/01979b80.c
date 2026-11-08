// FUN_01979b80 @ 01979b80 size=96 calls_out=3 calls_in=1
// strings: 

void FUN_01979b80(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_01be9c4e(param_2,0x80003);
  if (iVar1 == -1) {
    puVar2 = (undefined4 *)FUN_01be3244();
    uVar3 = *puVar2;
    *param_1 = 0;
    param_1[1] = uVar3;
    return;
  }
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01979f74(&DAT_005258fe,0x2d,&DAT_01d275a8);
  }
  param_1[1] = iVar1;
  *(undefined1 *)param_1 = 4;
  return;
}

