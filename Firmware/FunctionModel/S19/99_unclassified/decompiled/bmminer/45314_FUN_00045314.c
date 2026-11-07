// FUN_00045314 @ 00045314  size=244  callers=0
// program: bmminer


undefined4 FUN_00045314(int param_1)

{
  int __fd;
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 local_830;
  undefined1 local_82c;
  undefined1 uStack_81f;
  undefined1 local_81e [14];
  char local_810 [8];
  undefined4 uStack_808;
  
  __fd = socket(2,1,0);
  if (__fd < 0) {
    builtin_strncpy(local_810,"error so",8);
    uStack_808 = CONCAT13(uStack_808._3_1_,0x6b63);
    FUN_00032218(0,local_810);
    uVar2 = 0xffffffff;
  }
  else {
    local_830 = 0x30687465;
    local_82c = 0;
    iVar1 = ioctl(__fd,0x8927,&local_830);
    if (iVar1 < 0) {
      builtin_strncpy(local_810,"error io",8);
      uStack_808._0_1_ = 'c';
      uStack_808._1_1_ = 't';
      uStack_808._2_1_ = 'l';
      uStack_808._3_1_ = '\0';
      FUN_00032218(0,local_810);
      close(__fd);
      uVar2 = 0xfffffffe;
    }
    else {
      puVar3 = &uStack_81f;
      puVar4 = (undefined1 *)(param_1 + -1);
      do {
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
        *puVar4 = *puVar3;
      } while (puVar4 != (undefined1 *)(param_1 + 5));
      close(__fd);
      uVar2 = 0;
    }
  }
  return uVar2;
}

