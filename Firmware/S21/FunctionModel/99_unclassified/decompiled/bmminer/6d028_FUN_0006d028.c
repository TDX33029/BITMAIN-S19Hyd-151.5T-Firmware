// FUN_0006d028 @ 0006d028  size=168  callers=0
// program: bmminer


undefined4 FUN_0006d028(undefined4 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 local_10;
  
  bVar4 = FUN_0006cc84(param_1);
  uVar5 = FUN_0006c7d8();
  local_10._0_1_ = (byte)uVar5;
  bVar1 = (byte)local_10 & 0xc0;
  local_10._1_1_ = (byte)((uint)uVar5 >> 8);
  bVar2 = local_10._1_1_ & 0xc0;
  local_10._2_1_ = (byte)((uint)uVar5 >> 0x10);
  bVar3 = local_10._2_1_ & 0xc0;
  local_10._3_1_ = (byte)((uint)uVar5 >> 0x18);
  local_10 = CONCAT13(local_10._3_1_ & 0xc0 | bVar4 & 0x3f,
                      CONCAT12(bVar3 | bVar4 & 0x3f,
                               CONCAT11(bVar2 | bVar4 & 0x3f,bVar1 | bVar4 & 0x3f)));
  FUN_0006c80c(local_10);
  return 0;
}

