// FUN_00fbe8c8 @ 00fbe8c8 size=384 calls_out=5 calls_in=1
// strings: 

void FUN_00fbe8c8(uint *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  char *pcVar6;
  char *pcVar7;
  uint local_28;
  char *local_24;
  uint local_20;
  
  if (*(int *)(param_2 + 8) == 0) {
    local_24 = (char *)thunk_FUN_016d4a50(1);
    if (local_24 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(1,1);
    }
    local_20 = 1;
    *local_24 = '\0';
    local_28 = 1;
  }
  else {
    FUN_01278c38(&local_28,*(undefined4 *)(param_2 + 4));
    uVar3 = local_20 >> 1;
    if (uVar3 != 0) {
      pcVar7 = local_24 + local_20;
      pcVar6 = local_24;
      do {
        pcVar7 = pcVar7 + -1;
        cVar1 = *pcVar7;
        uVar3 = uVar3 - 1;
        *pcVar7 = *pcVar6;
        *pcVar6 = cVar1;
        pcVar6 = pcVar6 + 1;
      } while (uVar3 != 0);
    }
    if (local_20 == 0) goto LAB_00fbe9e8;
  }
  uVar3 = local_20;
  pcVar6 = local_24;
  if (0x7fffffff < (uint)(int)*local_24) {
    if ((int)*local_24 == 0xffffff80) {
      uVar4 = 1;
      do {
        if (local_20 == uVar4) {
          if (*(char *)(param_2 + 0xc) == '\0') goto LAB_00fbe9dc;
          break;
        }
        pcVar7 = local_24 + uVar4;
        uVar4 = uVar4 + 1;
      } while (*pcVar7 == '\0');
    }
    if (local_20 == local_28) {
      FUN_006029c0(&local_28);
    }
    pcVar6 = local_24;
    FUN_016dd52c(local_24 + 1,local_24,uVar3);
    local_20 = uVar3 + 1;
    *pcVar6 = '\0';
  }
LAB_00fbe9dc:
  if (*(char *)(param_2 + 0xc) == '\0') {
    bVar5 = true;
    uVar3 = local_20;
    do {
      bVar2 = pcVar6[uVar3 - 1];
      pcVar6[uVar3 - 1] = ~bVar2;
      if (bVar5) {
        pcVar6[uVar3 - 1] = -bVar2;
      }
      bVar5 = bVar5 && bVar2 == 0;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
LAB_00fbe9e8:
  *param_1 = local_28;
  param_1[1] = (uint)local_24;
  param_1[2] = local_20;
  return;
}

