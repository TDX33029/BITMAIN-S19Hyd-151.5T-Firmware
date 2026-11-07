// FUN_0004e718 @ 0004e718  size=220  callers=0
// program: bmminer


undefined4 FUN_0004e718(void)

{
  int iVar1;
  bool bVar2;
  undefined4 local_830;
  undefined2 local_82c;
  undefined1 auStack_828 [4];
  undefined1 local_824;
  undefined1 local_823;
  undefined1 local_822;
  undefined1 local_821;
  undefined4 local_808;
  char acStack_804 [2044];
  
  bVar2 = 0x61 < DAT_0050fac0;
  if (DAT_0050fac0 != 0x62) {
    bVar2 = 1 < DAT_0050fac0 - 100;
  }
  if (bVar2 && (DAT_0050fac0 != 0x62 && DAT_0050fac0 - 100 != 2)) {
    return 0;
  }
  local_830 = 0x804aa55;
  local_82c = 0x804;
  memset(auStack_828,0,0x20);
  iVar1 = FUN_0004e2c4(DAT_0050fab8,&local_830,6,auStack_828,10);
  if (iVar1 == 0) {
    local_808 = CONCAT13(local_821,CONCAT12(local_822,CONCAT11(local_823,local_824)));
    return local_808;
  }
  local_808._0_1_ = 'G';
  local_808._1_1_ = 'e';
  local_808._2_1_ = 't';
  local_808._3_1_ = ' ';
  builtin_strncpy(acStack_804,"ac power failed\n",0x11);
  FUN_00032218(3,&local_808,0);
  return 0;
}

