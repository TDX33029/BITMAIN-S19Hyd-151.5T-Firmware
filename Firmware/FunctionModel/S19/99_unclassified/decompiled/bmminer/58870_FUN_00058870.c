// FUN_00058870 @ 00058870  size=124  callers=0
// program: bmminer


void FUN_00058870(undefined4 param_1)

{
  uint uVar1;
  undefined4 local_c;
  
  FUN_000592ec(0,param_1,0,0x90,&local_c);
  uVar1 = CONCAT31((int3)(local_c >> 8),~(~(byte)local_c & 0x77)) & 0xfffffffd;
  local_c._0_1_ = (byte)uVar1;
  local_c = CONCAT22((short)(uVar1 >> 0x10),CONCAT11(local_c._1_1_,(byte)local_c)) & 0xfffff7ff |
            0x8000000;
  FUN_000571b0(param_1,1,0,0x90,local_c);
  return;
}

