// FUN_015e125c @ 015e125c size=152 calls_out=2 calls_in=1
// strings: 

void FUN_015e125c(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint local_14;
  uint *local_10;
  code *local_c;
  
  local_14 = *(uint *)(param_2 + 8);
  uVar2 = *(uint *)(param_2 + 0x4c);
  if (local_14 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar2,local_14,local_14,&DAT_01cfd3b8);
  }
  local_14 = local_14 - uVar2;
  if (local_14 < 2) {
    local_c = FUN_012fd02c;
    local_10 = &local_14;
    FUN_00664898(param_1 + 1,&DAT_0057aac6,&local_10);
    uVar3 = 2;
  }
  else {
    *(uint *)(param_2 + 0x4c) = uVar2 + 2;
    uVar1 = *(ushort *)(*(int *)(param_2 + 4) + uVar2);
    *(ushort *)(param_1 + 1) = uVar1 << 8 | uVar1 >> 8;
    uVar3 = 4;
  }
  *param_1 = uVar3;
  return;
}

