// FUN_00fe8190 @ 00fe8190 size=376 calls_out=6 calls_in=3
// strings: 

void FUN_00fe8190(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  byte extraout_r3;
  byte bVar4;
  int iVar5;
  uint local_40;
  undefined4 local_3c;
  uint local_38;
  uint uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int local_28;
  
  FUN_00feb758(&local_40,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_40 == 2) {
    param_1[1] = local_3c;
    param_1[2] = local_38;
    param_1[3] = uStack_34;
    param_1[4] = uStack_30;
    param_1[5] = iStack_2c;
    *param_1 = 1;
    return;
  }
  if ((local_40 & 1) != 0) {
    FUN_0100406c(param_2,local_3c);
    if ((local_38 & 1) == 0) {
      uVar1 = *(uint *)(param_2 + 0x38) & 1;
      uStack_34 = 0;
      puVar3 = (undefined1 *)0x8000000a;
      bVar4 = extraout_r3;
    }
    else {
      bVar4 = (byte)*(uint *)(param_2 + 0x38) & 1;
      uVar1 = uStack_34 & 0xff;
      uStack_34 = uStack_34 & 0xffffff00;
      puVar3 = &DAT_8000000b;
    }
    *(byte *)(param_1 + 5) = bVar4;
    param_1[1] = uStack_30;
    param_1[2] = puVar3;
    param_1[3] = local_3c;
    param_1[4] = uStack_34 | uVar1;
    *param_1 = 0;
    return;
  }
  if (iStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_01881998);
  }
  if (local_28 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,local_28);
  }
  if (local_28 == 0) {
    iVar5 = 0;
    iVar2 = 1;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(local_28);
    iVar5 = local_28;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,local_28);
    }
  }
  FUN_016dd1aa(iVar2,iStack_2c,local_28);
  param_1[4] = local_28;
  param_1[1] = 0xf;
  param_1[2] = iVar5;
  param_1[3] = iVar2;
  param_1[5] = param_3;
  *param_1 = 1;
  return;
}

