// FUN_018efe38 @ 018efe38 size=240 calls_out=5 calls_in=0
// strings: 

void FUN_018efe38(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [64];
  uint local_20;
  
  FUN_01bed93e(auStack_a0,0,0x40);
  uVar2 = *(uint *)(*(int *)(param_2 + 0xa0) + 0x48);
  if (0x40 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar2,0x40,&DAT_01d23448);
  }
  if (uVar2 <= (uint)(*(int *)(*(int *)(param_2 + 0x48) + 0x48) * 0xff)) {
    iVar1 = FUN_01891c24(param_2,param_3,param_4,auStack_a0,uVar2,uVar2);
    if (iVar1 == 0) {
      FUN_01bed93e(auStack_60,0,0x40);
      local_20 = uVar2;
      FUN_01bed4e2(auStack_60,auStack_a0,uVar2);
      FUN_01bed4e2(param_1,auStack_60,0x44);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_013073dc(&DAT_00533467,0x2b,auStack_60,&DAT_01d23468,&DAT_01d23458);
}

