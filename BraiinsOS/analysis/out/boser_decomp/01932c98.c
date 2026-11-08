// FUN_01932c98 @ 01932c98 size=244 calls_out=5 calls_in=0
// strings: 

void FUN_01932c98(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_a0 [64];
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint local_54;
  uint local_20;
  
  FUN_01bed93e(auStack_a0,0,0x40);
  uVar2 = *(uint *)(*(int *)(param_2 + 0x4c) + 0xc);
  if (0x40 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar2,0x40,&DAT_01d257ac);
  }
  if (uVar2 <= (uint)(*(int *)(*(int *)(param_2 + 0x48) + 0xc) * 0xff)) {
    local_60 = param_2;
    local_5c = param_3;
    local_58 = param_4;
    local_54 = uVar2;
    iVar1 = FUN_01932da8(&local_60,auStack_a0,uVar2);
    if (iVar1 == 0) {
      FUN_01bed93e(&local_60,0,0x40);
      local_20 = uVar2;
      FUN_01bed4e2(&local_60,auStack_a0,uVar2);
      FUN_01bed4e2(param_1,&local_60,0x44);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_013073dc(&DAT_00533467,0x2b,&local_60,&DAT_01d25810,&DAT_01d257bc);
}

