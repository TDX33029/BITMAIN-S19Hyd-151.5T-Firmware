// FUN_0199b314 @ 0199b314 size=192 calls_out=2 calls_in=1
// strings: 

void FUN_0199b314(int *param_1)

{
  bool bVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  uint local_48 [3];
  int local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24 [2];
  int local_1c;
  
  iVar4 = *param_1;
  if (iVar4 == 0) {
    local_28 = 0;
  }
  else {
    local_3c = param_1[1];
    local_28 = param_1[2];
    local_34 = 0;
    local_48[1] = 0;
    local_48[2] = iVar4;
    local_30 = iVar4;
    local_2c = local_3c;
  }
  local_48[0] = (uint)(iVar4 != 0);
  local_38 = local_48[0];
  while (FUN_0199b3ec(local_24,local_48), local_24[0] != 0) {
    pcVar2 = (char *)(local_24[0] + local_1c * 0x10);
    if (*pcVar2 == 'R') {
      piVar3 = *(int **)(pcVar2 + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01989ae8(*(undefined4 *)(pcVar2 + 4));
      }
    }
  }
  return;
}

