// FUN_013d3a18 @ 013d3a18 size=196 calls_out=1 calls_in=2
// strings: 

void FUN_013d3a18(undefined2 *param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(uint *)(param_2 + 0xc) < 2) {
    local_14 = 2;
    local_18 = 0;
    local_1c[0] = 0;
    uVar5 = FUN_013e677c(local_1c);
    *(undefined4 *)(param_1 + 2) = uVar5;
    uVar4 = 1;
  }
  else {
    uVar2 = **(ushort **)(param_2 + 8);
    *(ushort **)(param_2 + 8) = *(ushort **)(param_2 + 8) + 1;
    uVar3 = (uint)uVar2 << 0x18 | (uint)(uVar2 >> 8) << 0x10;
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) - 2;
    uVar6 = 6;
    uVar1 = uVar3 >> 0x10;
    if (uVar1 < 4) {
      if (uVar1 == 1) {
        uVar6 = 0;
      }
      else if (uVar1 == 3) {
        uVar6 = 1;
      }
    }
    else if (uVar1 == 4) {
      uVar6 = 2;
    }
    else if (uVar1 == 0xfe) {
      uVar6 = 3;
    }
    else if (uVar1 == 0xff) {
      uVar6 = 4;
    }
    param_1[2] = (short)(uVar3 >> 0x10);
    uVar4 = 0;
    param_1[1] = uVar6;
  }
  *param_1 = uVar4;
  return;
}

