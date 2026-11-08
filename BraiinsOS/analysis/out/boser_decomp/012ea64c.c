// FUN_012ea64c @ 012ea64c size=704 calls_out=10 calls_in=5
// strings: 

void FUN_012ea64c(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  int local_38;
  int local_34;
  undefined1 local_30;
  int local_2c;
  undefined1 local_28;
  
  if (param_1 != 0) {
    if (param_1 == 1) {
      puVar5 = param_2 + 0x20;
      DataMemoryBarrier(0xb);
      do {
        uVar2 = *puVar5;
        bVar12 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar12);
      *puVar5 = uVar2 - 1;
      DataMemoryBarrier(0xb);
      if (uVar2 == 1) {
        puVar5 = param_2 + 8;
        DataMemoryBarrier(0xb);
        do {
          uVar2 = *puVar5;
          bVar12 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar12);
        *puVar5 = uVar2 | 1;
        DataMemoryBarrier(0xb);
        if ((uVar2 & 1) == 0) {
          FUN_01656cb0(&local_38,param_2 + 0x10);
          if (local_38 == 1) {
            local_28 = local_30;
            local_2c = local_34;
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_00533467,0x2b,&local_2c,&DAT_01ce3be0,&DAT_01cf3ab8);
          }
          iVar3 = *(int *)(local_34 + 0x10);
          if (iVar3 != 0) {
            piVar8 = *(int **)(local_34 + 0xc);
            piVar7 = piVar8;
            do {
              piVar9 = piVar7 + 3;
              piVar6 = (int *)(*piVar7 + 0x14);
              if (*piVar6 == 0) {
                DataMemoryBarrier(0xb);
LAB_012ea718:
                bVar12 = (bool)hasExclusiveAccess(piVar6);
                if (!bVar12) goto code_r0x012ea724;
                *piVar6 = 2;
                DataMemoryBarrier(0xb);
                DataMemoryBarrier(0xb);
                piVar7 = (int *)(*(int *)(*piVar7 + 0x10) + 0x18);
                do {
                  iVar4 = *piVar7;
                  bVar12 = (bool)hasExclusiveAccess(piVar7);
                } while (!bVar12);
                *piVar7 = 1;
                if (iVar4 == -1) {
                  FUN_01be6c3c(0xf0,piVar7,0x81,1);
                }
                goto LAB_012ea738;
              }
LAB_012ea730:
              ClearExclusiveLocal();
              DataMemoryBarrier(0xb);
LAB_012ea738:
              piVar7 = piVar9;
            } while (piVar9 != piVar8 + iVar3 * 3);
          }
          FUN_012eb96c(local_34 + 8);
          uVar2 = 0;
          bVar12 = *(int *)(local_34 + 0x10) == 0;
          if (bVar12) {
            uVar2 = *(uint *)(local_34 + 0x1c);
          }
          DataMemoryBarrier(0xb);
          if (bVar12) {
            uVar2 = (uint)(uVar2 == 0);
          }
          *(char *)(param_2 + 0x18) = (char)uVar2;
          DataMemoryBarrier(0xb);
          FUN_00a97e8c(local_34,local_30);
        }
        puVar5 = param_2 + 0x22;
        DataMemoryBarrier(0xb);
        do {
          uVar2 = *puVar5;
          bVar12 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar12);
        *(char *)puVar5 = '\x01';
        DataMemoryBarrier(0xb);
        if ((char)uVar2 != '\0') {
          FUN_012d8a40(param_2);
LAB_012ea8bc:
          thunk_FUN_01be4678(param_2);
          return;
        }
      }
    }
    else {
      DataMemoryBarrier(0xb);
      do {
        uVar2 = *param_2;
        bVar12 = (bool)hasExclusiveAccess(param_2);
      } while (!bVar12);
      *param_2 = uVar2 - 1;
      DataMemoryBarrier(0xb);
      if (uVar2 == 1) {
        FUN_012e9ce8(param_2 + 2);
        puVar5 = param_2 + 0x11;
        DataMemoryBarrier(0xb);
        do {
          uVar2 = *puVar5;
          bVar12 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar12);
        *(char *)puVar5 = '\x01';
        DataMemoryBarrier(0xb);
        if ((char)uVar2 != '\0') {
          FUN_012d8998(param_2 + 4);
          FUN_012d8998(param_2 + 10);
          goto LAB_012ea8bc;
        }
      }
    }
    return;
  }
  puVar5 = param_2 + 0x28;
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *puVar5;
    bVar12 = (bool)hasExclusiveAccess(puVar5);
  } while (!bVar12);
  *puVar5 = uVar2 - 1;
  DataMemoryBarrier(0xb);
  if (uVar2 != 1) {
    return;
  }
  FUN_012ec020(param_2);
  puVar5 = param_2 + 0x2a;
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *puVar5;
    bVar12 = (bool)hasExclusiveAccess(puVar5);
  } while (!bVar12);
  *(char *)puVar5 = '\x01';
  DataMemoryBarrier(0xb);
  if ((char)uVar2 == '\0') {
    return;
  }
  uVar10 = param_2[0x12] - 1;
  uVar2 = uVar10 & param_2[8];
  uVar10 = uVar10 & *param_2;
  if (uVar10 <= uVar2 && uVar2 != uVar10) {
    uVar2 = uVar2 - uVar10;
  }
  else if (uVar10 <= uVar2) {
    if ((param_2[8] & ~param_2[0x12]) == *param_2) goto LAB_012d8b50;
    uVar2 = param_2[0x10];
  }
  else {
    uVar2 = (uVar2 - uVar10) + param_2[0x10];
  }
  if (uVar2 != 0) {
    uVar11 = param_2[0x10];
    iVar3 = param_2[0x25] + uVar10 * 0x18;
    do {
      uVar1 = uVar11;
      if (uVar10 < uVar11) {
        uVar1 = 0;
      }
      iVar4 = iVar3 + uVar1 * -0x18;
      FUN_019bb7e0(*(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0xc));
      uVar10 = uVar10 + 1;
      iVar3 = iVar3 + 0x18;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
LAB_012d8b50:
  if (param_2[0x26] != 0) {
    thunk_FUN_01be4678(param_2[0x25]);
  }
  FUN_012d8998(param_2 + 0x15);
  FUN_012d8998(param_2 + 0x1e);
  thunk_FUN_01be4678(param_2);
  return;
code_r0x012ea724:
  if (*piVar6 != 0) goto LAB_012ea730;
  goto LAB_012ea718;
}

