// FUN_006144d8 @ 006144d8 size=188 calls_out=2 calls_in=3
// strings: 

void FUN_006144d8(int *param_1)

{
  bool bVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  uint local_40 [3];
  int local_34;
  uint local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c [2];
  int local_14;
  
  iVar4 = *param_1;
  if (iVar4 == 0) {
    local_20 = 0;
  }
  else {
    local_34 = param_1[1];
    local_20 = param_1[2];
    local_2c = 0;
    local_40[1] = 0;
    local_40[2] = iVar4;
    local_28 = iVar4;
    local_24 = local_34;
  }
  local_40[0] = (uint)(iVar4 != 0);
  local_30 = local_40[0];
  while (FUN_006145ac(local_1c,local_40), local_1c[0] != 0) {
    pcVar2 = (char *)(local_1c[0] + local_14 * 0x10);
    if (*pcVar2 == 'O') {
      piVar3 = *(int **)(pcVar2 + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00614130(*(undefined4 *)(pcVar2 + 4));
      }
    }
  }
  return;
}

