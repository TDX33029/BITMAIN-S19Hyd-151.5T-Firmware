// FUN_019f7c78 @ 019f7c78 size=236 calls_out=4 calls_in=11
// strings: RNG seed generator is internally corrupt

undefined8 FUN_019f7c78(int *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *local_20;
  byte local_1c;
  
  do {
    if (*param_1 != 0) {
      ClearExclusiveLocal();
      FUN_0197ade4(param_1);
      goto LAB_019f7ca4;
    }
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = 1;
  DataMemoryBarrier(0xb);
LAB_019f7ca4:
  local_1c = 0;
  if ((DAT_01d51b08 & 0x7fffffff) != 0) {
    local_1c = FUN_0197ac0c();
    local_1c = local_1c ^ 1;
  }
  if ((char)param_1[1] != '\0') {
    local_20 = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("RNG seed generator is internally corrupt",0x28,&local_20,&DAT_01d29980,
                 &DAT_01d299a0);
  }
  uVar4 = param_1[3];
  uVar2 = param_1[2] ^ param_1[2] << 0x11;
  uVar2 = uVar4 >> 0x10 ^ uVar2 >> 7 ^ uVar4 ^ uVar2;
  uVar3 = uVar4 ^ uVar4 << 0x11;
  uVar3 = uVar3 >> 7 ^ uVar2 >> 0x10 ^ uVar3 ^ uVar2;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_00a97e8c(param_1);
  return CONCAT44(uVar3 + uVar2,uVar2 + uVar4);
}

