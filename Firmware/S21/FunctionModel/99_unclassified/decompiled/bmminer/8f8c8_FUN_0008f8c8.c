// FUN_0008f8c8 @ 0008f8c8  size=236  callers=0
// program: bmminer


undefined4 FUN_0008f8c8(int param_1,int param_2)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_0008bbbc(*(undefined4 *)(param_1 + 0x1878),param_2);
  if (iVar1 == 0) {
    sVar2 = write(*(int *)(param_1 + 0x1864),(void *)**(undefined4 **)(param_2 + 0x1c),
                  *(int *)(*(int *)(param_2 + 0x1c) + 4) - **(int **)(param_2 + 0x1c));
    if (sVar2 < 0) {
      piVar3 = __errno_location();
      FUN_00095b4c(2,"src/rule.c",0x160,"write fail, errno[%d]",*piVar3);
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    FUN_00095b4c(2,"src/rule.c",0x159,"zlog_format_gen_msg fail");
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

