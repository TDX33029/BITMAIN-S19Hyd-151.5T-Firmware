// FUN_0123b998 @ 0123b998 size=524 calls_out=6 calls_in=1
// strings: 

undefined4 FUN_0123b998(uint param_1)

{
  bool bVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte abStack_54 [6];
  undefined2 local_4e [17];
  int local_2c;
  undefined1 *puStack_28;
  int iStack_24;
  
  iVar5 = 10;
  if (9999 < param_1) {
    uVar6 = param_1;
    iVar7 = 0;
    do {
      iVar5 = iVar7;
      param_1 = uVar6 / 10000;
      uVar2 = (uint)((short)(uVar6 % 10000 >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)((int)local_4e + iVar5) = *(undefined2 *)(&DAT_0040f4ca + uVar2 * 2);
      *(undefined2 *)((int)local_4e + iVar5 + 2) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar6 % 10000 + uVar2 * -100 & 0xffff) * 2);
      bVar1 = 99999999 < uVar6;
      uVar6 = param_1;
      iVar7 = iVar5 + -4;
    } while (bVar1);
    iVar5 = iVar5 + 6;
  }
  if (99 < param_1) {
    uVar6 = (uint)((short)((param_1 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)(abStack_54 + iVar5 + -2) =
         *(undefined2 *)(&DAT_0040f4ca + (param_1 + uVar6 * -100 & 0xffff) * 2);
    iVar5 = iVar5 + -2;
    param_1 = uVar6;
  }
  if (param_1 < 10) {
    iVar7 = iVar5 + -1;
    abStack_54[iVar5 + -1] = (byte)param_1 | 0x30;
  }
  else {
    iVar7 = iVar5 + -2;
    *(undefined2 *)(abStack_54 + iVar5 + -2) = *(undefined2 *)(&DAT_0040f4ca + param_1 * 2);
  }
  iVar5 = 0xb - iVar7;
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar5);
  }
  bVar1 = false;
  puStack_28 = &DAT_00000001;
  local_2c = 0;
  if (iVar7 != 0xb) {
    puStack_28 = (undefined1 *)thunk_FUN_016d4a50(iVar5);
    if (puStack_28 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar5);
    }
    local_2c = iVar5;
  }
  uVar6 = 10 - iVar7;
  *puStack_28 = 0x2f;
  iStack_24 = 1;
  if (local_2c - 1U < uVar6) {
    FUN_011cf828(&local_2c,1,uVar6,1,1);
    bVar1 = local_2c == 0;
  }
  iVar5 = iStack_24;
  puVar3 = puStack_28;
  FUN_016dd1aa(puStack_28 + iStack_24,abStack_54 + iVar7,uVar6);
  uVar4 = FUN_011e1508(puVar3,iVar5 + uVar6);
  if (!bVar1) {
    thunk_FUN_016d3fb4(puVar3);
  }
  return uVar4;
}

