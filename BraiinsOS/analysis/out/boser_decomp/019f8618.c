// FUN_019f8618 @ 019f8618 size=192 calls_out=4 calls_in=6
// strings: 

void FUN_019f8618(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  int *local_18;
  byte local_14;
  
  do {
    if (*param_1 != 0) {
      ClearExclusiveLocal();
      FUN_0197ade4(param_1);
      goto LAB_019f864c;
    }
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = 1;
  DataMemoryBarrier(0xb);
LAB_019f864c:
  local_14 = 0;
  if ((DAT_01d51b08 & 0x7fffffff) != 0) {
    local_14 = FUN_0197ac0c();
    local_14 = local_14 ^ 1;
  }
  if ((char)param_1[1] != '\0') {
    local_18 = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_18,&DAT_01d29990,&DAT_01d29a30);
  }
  param_1[2] = param_3;
  param_1[3] = param_4;
  FUN_00a97e8c(param_1);
  return;
}

