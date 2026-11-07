// FUN_016c49b8 @ 016c49b8 size=208 calls_out=2 calls_in=5
// strings: 

void FUN_016c49b8(int param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  uint local_1c;
  uint *local_18;
  code *local_14;
  
  uVar2 = *(uint *)(param_2 + 0x7c);
  uVar3 = param_3 & 0x7ffffff;
  local_1c = param_3;
  if ((uVar3 < uVar2) &&
     (uVar5 = ~(-1 << (*(uint *)(param_1 + 0x27c) & 0x1f)), (uVar3 & uVar5) == 0)) {
    if (((param_5 & 0x7ffffff) < uVar2) && ((param_5 & 0x7ffffff & uVar5) == 0)) {
      if ((param_4 & 1) == 0) {
        param_4 = (uint)*(byte *)(param_1 + (param_4 >> 8 & 0xff) + 0x158);
      }
      else {
        param_4 = param_4 >> 0x10;
      }
      param_4 = param_4 + uVar3;
      if (uVar2 <= param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(param_4,uVar2,&DAT_01d093d0);
      }
      *(uint *)(*(int *)(param_2 + 0x78) + param_4 * 4) = param_5;
      return;
    }
    puVar1 = &DAT_005b0728;
    puVar4 = &DAT_01d093c0;
    local_18 = (uint *)register0x00000054;
  }
  else {
    local_18 = &local_1c;
    puVar1 = &DAT_0057dadd;
    puVar4 = &DAT_01d093b0;
  }
  local_14 = FUN_016c4bf0;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(puVar1,&local_18,puVar4);
}

