// FUN_01896024 @ 01896024 size=236 calls_out=1 calls_in=4
// strings: 

void FUN_01896024(uint *param_1,int param_2,undefined1 *param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  undefined1 *puVar3;
  int local_5c;
  int local_58;
  undefined1 local_54 [4];
  int local_50;
  int local_4c;
  uint local_48 [5];
  uint *local_34;
  uint *local_30;
  int local_2c;
  undefined1 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_58 = param_2 << 2;
  if (param_4 != param_2 * 4) {
    local_5c = param_4;
                    /* WARNING: Subroutine does not return */
    FUN_01304210(0,&local_5c,&local_58,0);
  }
  local_30 = param_1 + param_2;
  bVar1 = false;
  local_1c = 0;
  local_20 = 0;
  local_24 = param_3 + param_4;
  local_2c = param_4;
  local_34 = param_1;
  local_48[1] = 0;
  if (param_4 != 0) {
    puVar3 = local_54;
    do {
      if (!bVar1) goto LAB_01896098;
      while (local_4c == local_50) {
        local_4c = local_50;
LAB_01896098:
        if (param_1 == local_30) {
          bVar1 = false;
          goto LAB_018960cc;
        }
        local_30 = local_30 + -1;
        uVar2 = *local_30;
        local_48[0] = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
                      uVar2 >> 0x18;
        local_50 = 0;
        local_4c = 4;
      }
      puVar3 = (undefined1 *)(uint)*(byte *)((int)local_48 + local_50);
      local_50 = local_50 + 1;
      bVar1 = true;
LAB_018960cc:
      if (!bVar1) {
        return;
      }
      param_4 = param_4 + -1;
      *param_3 = (char)puVar3;
      param_3 = param_3 + 1;
    } while (param_4 != 0);
  }
  return;
}

