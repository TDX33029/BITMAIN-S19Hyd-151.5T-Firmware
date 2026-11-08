// FUN_0004d27c @ 0004d27c  size=164  callers=2
// program: bmminer


undefined4 FUN_0004d27c(uint *param_1,uint *param_2)

{
  int iVar1;
  ssize_t sVar2;
  undefined2 local_14;
  
  FUN_0004d228(0,&DAT_00a6c850);
  iVar1 = access(&DAT_00a6c850,0);
  if ((iVar1 != -1) && (DAT_00a6c89c = open(&DAT_00a6c850,0), DAT_00a6c89c != -1)) {
    local_14 = 0;
    sVar2 = read(DAT_00a6c89c,&local_14,2);
    if (sVar2 == 2) {
      *param_1 = (uint)(byte)local_14;
      *param_2 = (uint)local_14._1_1_;
      close(DAT_00a6c89c);
      return 1;
    }
  }
  return 0;
}

