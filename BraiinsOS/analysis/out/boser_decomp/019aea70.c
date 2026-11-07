// FUN_019aea70 @ 019aea70 size=296 calls_out=4 calls_in=0
// strings: 

void FUN_019aea70(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined2 local_1bc;
  uint local_1b8;
  undefined4 *local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined1 local_1a4;
  int local_2c;
  undefined4 local_28;
  
  param_1 = (undefined4 *)*param_1;
  puVar4 = (undefined4 *)*param_1;
  puVar3 = (uint *)param_1[1];
  *param_1 = 0;
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d27c9c);
  }
  local_1c8 = 0;
  uStack_1c4 = 0x1b6;
  local_1c0 = 1;
  local_1bc = 0;
  local_1a8 = 0x6d6f646e;
  local_1a4 = 0;
  local_1ac = 0x6172752f;
  local_1b0 = 0x7665642f;
  FUN_012fbc58(&local_2c,&local_1b0,0xd);
  if (local_2c == 1) {
    local_1b8 = 2;
    local_1b4 = &DAT_01d27a70;
  }
  else {
    FUN_01980058(&local_1b8,local_28,&local_1c8);
    if ((char)local_1b8 == '\x04') goto LAB_019aeb80;
  }
  puVar2 = local_1b4;
  uVar1 = local_1b8;
  if ((local_1b8 & 0xff) != 4) {
    if ((char)*puVar3 != '\x04') {
      FUN_0197acb4(puVar3);
    }
    *puVar3 = uVar1;
    *param_2 = 2;
    puVar3[1] = (uint)puVar2;
    return;
  }
LAB_019aeb80:
  *puVar4 = local_1b4;
  return;
}

