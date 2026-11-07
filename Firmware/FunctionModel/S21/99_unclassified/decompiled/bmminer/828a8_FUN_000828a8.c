// FUN_000828a8 @ 000828a8  size=316  callers=1
// program: bmminer


/* WARNING: Removing unreachable block (ram,0x000813c4) */

void FUN_000828a8(undefined4 param_1,int param_2)

{
  int iVar1;
  uint local_20;
  undefined4 local_1c;
  
  FUN_000835dc(0,param_1,0,0xa8,&local_20);
  FUN_000835dc(0,param_1,0,0x18,&local_1c);
  if (param_2 == 0) {
    local_20 = local_20 & 0xfffffff0;
    local_1c._0_3_ = (uint3)local_1c & 0xf0ffff;
    local_1c = CONCAT13(0xf0,(uint3)local_1c);
  }
  else {
    local_20 = local_20 | 0x10f;
    local_1c._0_3_ = (uint3)local_1c & 0xf0ffff;
    local_1c = (uint)(uint3)local_1c;
  }
  iVar1 = FUN_00081200(param_1,1,0,0xa8,local_20);
  if (iVar1 == 0) {
    FUN_00081200(param_1,1,0,0x18,local_1c);
  }
  return;
}

