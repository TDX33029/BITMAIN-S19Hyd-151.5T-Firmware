// FUN_00824218 @ 00824218 size=164 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_00824218(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined1 auStack_178 [328];
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 uStack_28;
  
  if (*(char *)(param_1 + 0x140) != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00344c28,0x23,&DAT_0185ff00);
  }
  uVar1 = *(undefined2 *)(param_1 + 0x141);
  FUN_016dd1aa(auStack_178,param_1,0x148);
  local_30 = param_2;
  local_2c = param_3;
  uStack_28 = uVar1;
  iVar2 = thunk_FUN_016d4a50(0x158);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x158);
  }
  FUN_016dd1aa(iVar2,auStack_178,0x158);
  return CONCAT44(&UNK_0185ff10,iVar2);
}

