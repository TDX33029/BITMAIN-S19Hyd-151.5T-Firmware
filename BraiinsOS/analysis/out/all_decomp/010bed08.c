// FUN_010bed08 @ 010bed08 size=272 calls_out=5 calls_in=5
// strings: 

void FUN_010bed08(uint *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  if ((char)*param_1 != '\x04') {
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    *(undefined1 *)(puVar1 + 2) = 0xb;
    *puVar1 = 0;
    local_30 = *param_1;
    local_2c = param_1[1];
    local_28 = param_1[2];
    uStack_24 = param_1[3];
    uStack_20 = param_1[4];
    uStack_1c = param_1[5];
    FUN_010bee58();
    return;
  }
  local_30 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uStack_24 = param_1[3];
  uStack_20 = param_1[4];
  uStack_1c = param_1[5];
  local_2c = uVar2;
  local_28 = uVar3;
  if ((local_30 & 0xff) == 4) {
    if ((uVar2 & 0xff) != 4) {
      puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      *(undefined1 *)(puVar1 + 2) = 6;
      *puVar1 = 0;
      local_30 = uVar2;
      local_2c = uVar3;
      FUN_010beab8(puVar1,&local_30);
      return;
    }
  }
  else if ((local_30 & 0xff) == 1) {
    (**(code **)(uVar3 + 0x10))(&uStack_1c,uStack_24,uStack_20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb74b8(&DAT_005648f0,0x10,&DAT_01884c30);
}

