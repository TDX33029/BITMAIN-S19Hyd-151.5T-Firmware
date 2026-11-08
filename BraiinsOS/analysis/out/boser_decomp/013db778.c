// FUN_013db778 @ 013db778 size=176 calls_out=1 calls_in=1
// strings: 

void FUN_013db778(undefined2 *param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(uint *)(param_2 + 0xc) < 2) {
    local_14 = 2;
    local_18 = 0;
    local_1c[0] = 0;
    uVar4 = FUN_013e677c(local_1c);
    *(undefined4 *)(param_1 + 2) = uVar4;
    uVar3 = 1;
  }
  else {
    uVar1 = **(ushort **)(param_2 + 8);
    *(ushort **)(param_2 + 8) = *(ushort **)(param_2 + 8) + 1;
    uVar2 = (uint)uVar1 << 0x18 | (uint)(uVar1 >> 8) << 0x10;
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) - 2;
    uVar6 = (uVar2 >> 0x10) + 1 & 0xffff;
    if (uVar6 < 8) {
      uVar5 = *(undefined2 *)(&DAT_00568ea8 + uVar6 * 2);
    }
    else {
      uVar5 = 9;
      if (((uVar2 >> 0x10) + 0x100 & 0xffff) < 0xff) {
        uVar5 = 7;
      }
    }
    param_1[2] = (short)(uVar2 >> 0x10);
    uVar3 = 0;
    param_1[1] = uVar5;
  }
  *param_1 = uVar3;
  return;
}

