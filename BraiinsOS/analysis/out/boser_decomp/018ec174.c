// FUN_018ec174 @ 018ec174 size=152 calls_out=3 calls_in=2
// strings: 

void FUN_018ec174(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 local_28;
  uint local_24;
  uint uStack_20;
  uint uStack_1c;
  
  FUN_0190de90(&local_28);
  if ((char)local_28 == '\x18') {
    if ((local_28 & 0x100) == 0) {
      FUN_0191d6e4(&local_28,param_2);
      param_1[1] = local_24;
      param_1[2] = uStack_20;
      param_1[3] = uStack_1c;
      uVar1 = local_28;
    }
    else {
      *(undefined1 *)(param_1 + 1) = 4;
      uVar1 = 1;
    }
  }
  else {
    FUN_01bed4e2((int)param_1 + 7,(uint)&local_28 | 3,9);
    *(undefined1 *)((int)param_1 + 6) = local_28._2_1_;
    uVar1 = 1;
    *(undefined1 *)((int)param_1 + 5) = local_28._1_1_;
    *(char *)(param_1 + 1) = (char)local_28;
  }
  *param_1 = uVar1;
  return;
}

