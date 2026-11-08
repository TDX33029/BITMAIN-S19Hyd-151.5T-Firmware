// FUN_016a77f8 @ 016a77f8 size=228 calls_out=2 calls_in=0
// strings: invalid match span

undefined4 FUN_016a77f8(int param_1,undefined4 param_2,int *param_3,int *param_4,uint param_5)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  int local_24;
  uint local_20;
  uint local_1c;
  
  uVar3 = param_3[4];
  if ((uint)param_3[5] < uVar3) {
    return 0;
  }
  if (*param_3 - 1U < 2) {
    if ((uint)param_3[3] <= uVar3) {
      return 0;
    }
    cVar1 = *(char *)(param_1 + 4);
    cVar2 = *(char *)(param_3[2] + uVar3);
    bVar4 = cVar1 != cVar2;
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 5);
    }
    if ((bVar4 && cVar1 != cVar2) && (*(char *)(param_1 + 6) != cVar2)) {
      return 0;
    }
    local_1c = uVar3 + 1;
    local_20 = uVar3;
  }
  else {
    FUN_0167cf14(&local_24,param_1 + 4,param_3[2],param_3[3],uVar3,param_3[5]);
    if (local_24 != 1) {
      return 0;
    }
    if (local_1c < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("invalid match span",0x25,&DAT_01d08164);
    }
  }
  if (param_5 != 0) {
    *param_4 = local_20 + 1;
  }
  if (1 < param_5) {
    param_4[1] = local_1c + 1;
  }
  return 1;
}

