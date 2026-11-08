// FUN_013d96e4 @ 013d96e4 size=116 calls_out=2 calls_in=2
// strings: 

void FUN_013d96e4(ushort *param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort extraout_r1;
  undefined1 local_1c [8];
  undefined4 local_14;
  
  uVar2 = *(uint *)(param_2 + 0xc);
  if (uVar2 < 2) {
    local_1c[0] = 0;
    local_14 = 2;
    uVar3 = FUN_013e677c(local_1c);
    *(undefined4 *)(param_1 + 2) = uVar3;
  }
  else {
    uVar1 = **(ushort **)(param_2 + 8);
    *(ushort **)(param_2 + 8) = *(ushort **)(param_2 + 8) + 1;
    *(uint *)(param_2 + 0xc) = uVar2 - 2;
    uVar1 = FUN_013d9450(((uint)uVar1 << 0x18 | (uint)(uVar1 >> 8) << 0x10) >> 0x10);
    param_1[1] = uVar1;
    param_1[2] = extraout_r1;
  }
  *param_1 = (ushort)(uVar2 < 2);
  return;
}

