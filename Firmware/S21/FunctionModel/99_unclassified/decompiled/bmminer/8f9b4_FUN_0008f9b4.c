// FUN_0008f9b4 @ 0008f9b4  size=228  callers=0
// program: bmminer


undefined4 FUN_0008f9b4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0008bbbc(*(undefined4 *)(param_1 + 0x1878),param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_0008c090(*(undefined4 *)(DAT_012a29e4 + 0x2440),
                         *(undefined4 *)(*(int *)(param_2 + 8) + 0x124));
    **(undefined1 **)(*(int *)(param_2 + 0x1c) + 4) = 0;
    syslog(*(uint *)(param_1 + 0x1874) | *(uint *)(iVar1 + 0x80c),"%s",
           **(undefined4 **)(param_2 + 0x1c));
    uVar2 = 0;
  }
  else {
    FUN_00095b4c(2,"src/rule.c",0x16c,"zlog_format_gen_msg fail");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

