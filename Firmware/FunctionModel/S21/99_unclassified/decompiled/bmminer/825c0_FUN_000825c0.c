// FUN_000825c0 @ 000825c0  size=116  callers=0
// program: bmminer


undefined4 FUN_000825c0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 local_14 [2];
  
  iVar1 = FUN_000835dc(0,param_1,0,0x18,local_14);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (param_2 == 0) {
      bVar3 = (byte)local_14[0] & 0x7f;
    }
    else {
      bVar3 = (byte)local_14[0] | 0x80;
    }
    local_14[0] = CONCAT31(local_14[0]._1_3_,bVar3);
    uVar2 = FUN_00081200(param_1,1,0,0x18,local_14[0]);
  }
  return uVar2;
}

