// FUN_016a7640 @ 016a7640 size=208 calls_out=2 calls_in=0
// strings: invalid match span

void FUN_016a7640(undefined4 *param_1,int param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  int local_1c;
  uint local_18;
  uint local_14;
  
  uVar3 = param_4[4];
  uVar4 = 0;
  if ((uint)param_4[5] < uVar3) goto LAB_016a76dc;
  if (*param_4 - 1U < 2) {
    if ((uint)param_4[3] <= uVar3) goto LAB_016a76dc;
    cVar1 = *(char *)(param_2 + 4);
    cVar2 = *(char *)(param_4[2] + uVar3);
    bVar5 = cVar1 != cVar2;
    if (bVar5) {
      cVar1 = *(char *)(param_2 + 5);
    }
    if ((bVar5 && cVar1 != cVar2) && (*(char *)(param_2 + 6) != cVar2)) goto LAB_016a76dc;
    local_14 = uVar3 + 1;
  }
  else {
    FUN_0167cf14(&local_1c,param_2 + 4,param_4[2],param_4[3],uVar3,param_4[5]);
    if (local_1c != 1) goto LAB_016a76dc;
    if (local_14 < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("invalid match span",0x25,&DAT_01d08164);
    }
  }
  uVar4 = 1;
  param_1[1] = 0;
  param_1[2] = local_14;
LAB_016a76dc:
  *param_1 = uVar4;
  return;
}

