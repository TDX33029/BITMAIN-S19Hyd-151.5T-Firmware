// FUN_01912494 @ 01912494 size=352 calls_out=9 calls_in=1
// strings: 

void FUN_01912494(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined1 auStack_120 [120];
  undefined2 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  iVar1 = 1;
  local_128 = 0;
  local_12c = 1;
  local_130 = 0;
  uVar2 = 0;
  if (param_2 == 0) {
    if (param_5 != 0) {
      iVar1 = FUN_01298504(param_5,1);
      if (iVar1 == 0) goto LAB_019125e4;
      uVar2 = param_5;
    }
    FUN_01bed4e2(iVar1,param_4,param_5);
    local_a0 = CONCAT22(local_a0._2_2_,
                        (ushort)((param_5 & 0xff) << 8) | (ushort)(param_5 >> 8) & 0xff);
    FUN_01ac6cbc(&local_130,&local_a0,2);
    FUN_01ac6cbc(&local_130,iVar1,param_5);
  }
  else {
    if (param_5 != 0) {
      iVar1 = FUN_01298504(param_5,1);
      if (iVar1 == 0) {
LAB_019125e4:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,param_5);
      }
      uVar2 = param_5;
    }
    FUN_01bed4e2(iVar1,param_4,param_5);
    FUN_01935d5c(iVar1,param_5,&local_130);
  }
  FUN_0134bd64(uVar2,iVar1);
  local_9c = local_130;
  uStack_98 = local_12c;
  uStack_94 = local_128;
  local_a0 = 0x8000000d;
  FUN_0191d7c0(auStack_120);
  local_a8 = 4;
  FUN_0191e124(param_1,auStack_120);
  FUN_01bed4e2(&local_a0,auStack_120,0x7c);
  FUN_018f1fc4(param_3,&local_a0,0);
  return;
}

