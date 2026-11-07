// FUN_000828c8 @ 000828c8  size=276  callers=3
// program: bmminer


/* WARNING: Removing unreachable block (ram,0x0008159c) */

void FUN_000828c8(undefined4 param_1,undefined4 param_2)

{
  uint3 uVar1;
  int iVar2;
  uint local_18;
  uint3 local_14;
  undefined1 uStack_11;
  
  FUN_000835dc(1,param_1,param_2,0xa8,&local_18);
  FUN_000835dc(1,param_1,param_2,0x18,&local_14);
  local_18 = local_18 | 0x1f0;
  uVar1 = (uint3)_local_14;
  _local_14 = CONCAT13(0xf0,uVar1 & 0xf0ffff);
  iVar2 = FUN_00081200(param_1,0,param_2,0xa8,local_18);
  if (iVar2 == 0) {
    usleep(10000);
    FUN_00081200(param_1,0,param_2,0x18,_local_14);
  }
  return;
}

