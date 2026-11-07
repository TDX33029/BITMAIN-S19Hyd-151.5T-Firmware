// FUN_0004e544 @ 0004e544  size=240  callers=0
// program: bmminer


uint FUN_0004e544(void)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 local_830;
  undefined2 local_82c;
  undefined1 auStack_828 [4];
  undefined1 local_824;
  undefined1 local_823;
  undefined1 local_822;
  undefined1 local_821;
  undefined4 local_808;
  char acStack_804 [2044];
  
  uVar2 = DAT_0050fac0 - 100;
  bVar6 = 0x61 < DAT_0050fac0;
  bVar4 = DAT_0050fac0 == 0x62;
  if (!bVar4) {
    bVar6 = 1 < uVar2;
  }
  bVar5 = uVar2 != 2;
  if (!bVar6 || (bVar4 || !bVar5)) {
    uVar2 = 1;
  }
  if (bVar6 && (!bVar4 && bVar5)) {
    uVar2 = 0;
  }
  if (!bVar6 || (bVar4 || !bVar5)) {
    local_830 = 0x404aa55;
    local_82c = 0x404;
    memset(auStack_828,0,0x20);
    iVar3 = FUN_0004e2c4(DAT_0050fab8,&local_830,6,auStack_828,10);
    if (iVar3 != 0) {
      local_808._0_1_ = 'G';
      local_808._1_1_ = 'e';
      local_808._2_1_ = 't';
      local_808._3_1_ = ' ';
      builtin_strncpy(acStack_804,"power dc_volt value failed\n",0x1c);
      FUN_00032218(3,&local_808,0);
      return 0;
    }
    local_808 = (float)CONCAT13(local_821,CONCAT12(local_822,CONCAT11(local_823,local_824)));
    fVar1 = local_808 * 100.0 + 1e-05;
    uVar2 = (uint)(0.0 < fVar1) * (int)(longlong)fVar1;
  }
  return uVar2;
}

