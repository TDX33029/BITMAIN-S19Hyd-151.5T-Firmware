// FUN_000828b8 @ 000828b8  size=16  callers=2
// program: bmminer


/* WARNING: Removing unreachable block (ram,0x00081494) */

void FUN_000828b8(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uStack_20;
  undefined4 uStack_1c;
  
  FUN_000835dc(1,param_1,param_2,0xa8,&uStack_20);
  FUN_000835dc(1,param_1,param_2,0x18,&uStack_1c);
  if (param_3 == 0) {
    uStack_20 = uStack_20 & 0xfffffff0;
    uStack_1c._0_3_ = (uint3)uStack_1c & 0xf0ffff;
    uStack_1c = CONCAT13(0xf0,(uint3)uStack_1c);
  }
  else {
    uStack_20 = uStack_20 | 0x10f;
    uStack_1c._0_3_ = (uint3)uStack_1c & 0xf0ffff;
    uStack_1c = (uint)(uint3)uStack_1c;
  }
  iVar1 = FUN_00081200(param_1,0,param_2,0xa8,uStack_20);
  if (iVar1 == 0) {
    FUN_00081200(param_1,0,param_2,0x18,uStack_1c);
  }
  return;
}

