// FUN_01623ddc @ 01623ddc size=144 calls_out=1 calls_in=1
// strings: 

void FUN_01623ddc(undefined4 *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puStack_24;
  int iStack_20;
  int local_1c;
  int *local_18;
  code *local_14;
  uint **local_10;
  undefined1 *local_c;
  
  if (param_3 == 4) {
    uVar2 = *param_2;
    *param_1 = 0x80000000;
    uVar1 = (uVar2 >> 0x10 & 0xff) << 8;
    param_1[1] = (uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | uVar1) >> 0xc;
    param_1[2] = ((uVar1 & 0x1ff) >> 8) << 0x10 | (uVar2 >> 0x18) << 8 | (uVar1 & 0xfff) >> 9;
  }
  else {
    local_10 = &puStack_24;
    local_18 = &local_1c;
    local_c = &LAB_0141634c;
    local_14 = FUN_012fd02c;
    puStack_24 = param_2;
    iStack_20 = param_3;
    local_1c = param_3;
    FUN_00664898(param_1,&DAT_005a6a3a,&local_18);
  }
  return;
}

