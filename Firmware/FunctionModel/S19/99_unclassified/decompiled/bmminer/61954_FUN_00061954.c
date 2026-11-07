// FUN_00061954 @ 00061954  size=148  callers=0
// program: bmminer


undefined4 FUN_00061954(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0005f330(*(undefined4 *)(param_1 + 0x1878));
  if (iVar1 == 0) {
    iVar1 = FUN_0005f684(*(undefined4 *)(DAT_00b2d318 + 0x2440),
                         *(undefined4 *)(*(int *)(param_2 + 8) + 0x124));
    **(undefined1 **)(*(int *)(param_2 + 0x1c) + 4) = 0;
    syslog(*(uint *)(param_1 + 0x1874) | *(uint *)(iVar1 + 0x80c),"%s",
           **(undefined4 **)(param_2 + 0x1c));
    uVar2 = 0;
  }
  else {
    FUN_000658a8(2,"src/rule.c",0x16c,"zlog_format_gen_msg fail");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

