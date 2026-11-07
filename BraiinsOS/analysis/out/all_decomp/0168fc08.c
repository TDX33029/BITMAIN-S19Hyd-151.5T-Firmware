// FUN_0168fc08 @ 0168fc08 size=224 calls_out=5 calls_in=1
// strings: 

void FUN_0168fc08(undefined4 *param_1,int param_2,uint param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_70 [76];
  
  if (param_3 <= param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00565b70,0x20,&DAT_018adec0);
  }
  iVar6 = param_4 + 1;
  iVar2 = 0;
  iVar3 = iVar6 * 0x48;
  if (iVar3 == 0) {
    iVar1 = 4;
    iVar5 = 0;
  }
  else {
    iVar1 = thunk_FUN_016d4a50(iVar3);
    iVar5 = iVar6;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar3);
    }
  }
  iVar4 = iVar1;
  do {
    if (iVar3 == 0) break;
    FUN_01676758(auStack_70,param_2);
    FUN_016dd1aa(iVar4,auStack_70,0x48);
    iVar2 = iVar2 + 1;
    iVar4 = iVar4 + 0x48;
    iVar3 = iVar3 + -0x48;
    param_2 = param_2 + 0x48;
  } while (iVar5 != iVar2);
  *param_1 = 0x80000000;
  param_1[1] = iVar5;
  param_1[2] = iVar1;
  param_1[3] = iVar6;
  param_1[4] = param_5;
  param_1[5] = param_6;
  return;
}

