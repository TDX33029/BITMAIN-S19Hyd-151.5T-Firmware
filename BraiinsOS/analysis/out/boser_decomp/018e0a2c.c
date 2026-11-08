// FUN_018e0a2c @ 018e0a2c size=144 calls_out=4 calls_in=3
// strings: 

void FUN_018e0a2c(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined2 local_1a;
  
  local_20 = 0;
  local_28 = 0;
  uStack_24 = 1;
  FUN_018d8784(*(undefined1 *)(param_2 + 4),*(undefined1 *)((int)param_2 + 0x11),&local_28);
  FUN_018d8910(*(undefined2 *)(param_2 + 3),*(undefined2 *)((int)param_2 + 0xe),&local_28);
  uVar2 = param_2[2];
  local_1a = (ushort)((uVar2 & 0xff) << 8) | (ushort)(uVar2 >> 8) & 0xff;
  FUN_01ac6d2c(&local_28,&local_1a,(int)register0x00000054 + -0x18);
  iVar1 = param_2[1];
  FUN_01ac6d2c(&local_28,iVar1,iVar1 + uVar2);
  *param_1 = local_28;
  param_1[1] = uStack_24;
  param_1[2] = local_20;
  FUN_0134bd64(*param_2,iVar1);
  return;
}

