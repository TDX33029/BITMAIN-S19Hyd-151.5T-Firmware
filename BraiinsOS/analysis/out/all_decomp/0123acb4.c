// FUN_0123acb4 @ 0123acb4 size=432 calls_out=3 calls_in=2
// strings: 

undefined4 FUN_0123acb4(undefined4 param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_70;
  undefined1 auStack_6c [6];
  undefined2 local_66 [17];
  undefined1 *local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined1 **local_28;
  undefined4 *local_24;
  
  iVar6 = 10;
  if (9999 < param_2) {
    uVar5 = param_2;
    iVar3 = 0;
    do {
      iVar6 = iVar3;
      param_2 = uVar5 / 10000;
      uVar2 = (uint)((short)(uVar5 % 10000 >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)((int)local_66 + iVar6) = *(undefined2 *)(&DAT_0040f4ca + uVar2 * 2);
      *(undefined2 *)((int)local_66 + iVar6 + 2) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar5 % 10000 + uVar2 * -100 & 0xffff) * 2);
      bVar1 = 99999999 < uVar5;
      uVar5 = param_2;
      iVar3 = iVar6 + -4;
    } while (bVar1);
    iVar6 = iVar6 + 6;
  }
  if (99 < param_2) {
    uVar5 = (uint)((short)((param_2 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)(auStack_6c + iVar6 + -2) =
         *(undefined2 *)(&DAT_0040f4ca + (param_2 + uVar5 * -100 & 0xffff) * 2);
    iVar6 = iVar6 + -2;
    param_2 = uVar5;
  }
  if (param_2 < 10) {
    iVar3 = iVar6 + -1;
    auStack_6c[iVar6 + -1] = (byte)param_2 | 0x30;
  }
  else {
    iVar3 = iVar6 + -2;
    *(undefined2 *)(auStack_6c + iVar6 + -2) = *(undefined2 *)(&DAT_0040f4ca + param_2 * 2);
  }
  local_40 = 10 - iVar3;
  local_44 = auStack_6c + iVar3;
  local_28 = &local_44;
  local_2c = &LAB_011df930;
  local_24 = &DAT_0157d360;
  local_70 = param_1;
  local_30 = (undefined1 *)&local_70;
  FUN_00600d2c(&local_3c,&DAT_0058b76c,&local_30);
  uVar4 = FUN_011e1508(local_38,local_34);
  if (local_3c != 0) {
    thunk_FUN_016d3fb4(local_38);
  }
  return uVar4;
}

