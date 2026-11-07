// FUN_000618b0 @ 000618b0  size=164  callers=0
// program: bmminer


undefined4 FUN_000618b0(int param_1,int param_2)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  void *__buf;
  undefined4 uVar4;
  
  iVar1 = FUN_0005f330(*(undefined4 *)(param_1 + 0x1878));
  if (iVar1 == 0) {
    __buf = (void *)**(undefined4 **)(param_2 + 0x1c);
    sVar2 = write(*(int *)(param_1 + 0x1864),__buf,
                  (*(undefined4 **)(param_2 + 0x1c))[1] - (int)__buf);
    uVar4 = 0;
    if (sVar2 < 0) {
      piVar3 = __errno_location();
      uVar4 = 0xffffffff;
      FUN_000658a8(2,"src/rule.c",0x160,"write fail, errno[%d]",*piVar3);
    }
  }
  else {
    FUN_000658a8(2,"src/rule.c",0x159,"zlog_format_gen_msg fail");
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

