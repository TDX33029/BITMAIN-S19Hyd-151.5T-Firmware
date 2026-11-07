// FUN_011f07a8 @ 011f07a8 size=236 calls_out=4 calls_in=2
// strings: 

int FUN_011f07a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 *puStack_74;
  undefined4 uStack_70;
  undefined1 local_50;
  undefined4 local_4c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  puStack_74 = (undefined4 *)thunk_FUN_016d4a50(0xf);
  if (puStack_74 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4();
  }
  uVar4 = *param_8;
  uVar2 = param_8[1];
  uVar3 = param_8[2];
  *(undefined4 *)((int)puStack_74 + 0xb) = *(undefined4 *)((int)param_8 + 0xb);
  puStack_74[1] = uVar2;
  puStack_74[2] = uVar3;
  *puStack_74 = uVar4;
  local_50 = 6;
  local_7c = 0;
  local_84 = 0;
  local_78 = 0xf;
  uStack_70 = 0xf;
  local_88 = 0x80000012;
  local_4c = param_7;
  local_80 = 1;
  local_34 = param_6;
  local_38 = param_5;
  local_a8 = 1;
  uStack_a4 = param_3;
  uStack_a0 = param_4;
  local_30 = param_1;
  local_2c = param_2;
  iVar1 = thunk_FUN_016d4a50(0x80);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  FUN_016dd1aa(iVar1,&local_a8,0x80);
  return iVar1;
}

