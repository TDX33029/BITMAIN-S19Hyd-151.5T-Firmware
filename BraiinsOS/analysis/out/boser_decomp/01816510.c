// FUN_01816510 @ 01816510 size=544 calls_out=7 calls_in=3
// strings: 

undefined4 FUN_01816510(int *param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  char *pcVar8;
  uint local_30;
  uint local_2c;
  int local_28;
  
  iVar4 = param_1[7];
  *(int *)(param_2 + 0x10) = param_1[6];
  *(int *)(param_2 + 0x14) = iVar4;
  uVar7 = *(uint *)(param_2 + *(int *)(*(int *)(param_2 + 8) + 0x24));
  pcVar8 = (char *)(*param_1 + (param_1[5] & uVar7) * 0xc);
  if (*pcVar8 == '\0') {
    bVar2 = (bool)hasExclusiveAccess(pcVar8);
    if (bVar2) {
      *pcVar8 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_0181657c;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(pcVar8);
LAB_0181657c:
  FUN_0165098c(pcVar8);
  DataMemoryBarrier(0xb);
  if ((char)param_1[8] == '\0') {
    piVar5 = param_1 + 4;
    puVar6 = (uint *)(param_1 + 2);
    local_2c = *(uint *)(param_2 + *(int *)(*(int *)(param_2 + 8) + 0x24));
    local_30 = uVar7;
    if (uVar7 != local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_01304210(0,&local_2c,&local_30,0);
    }
    iVar4 = *(int *)(pcVar8 + 4);
    local_28 = param_2;
    if (param_2 == iVar4) {
      FUN_017db8cc(pcVar8 + 4,&local_28);
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1816730);
      (*pcVar1)();
    }
    iVar3 = *(int *)(*(int *)(param_2 + 8) + 0x1c);
    *(int *)(pcVar8 + 4) = param_2;
    *(int *)(param_2 + iVar3 + 4) = iVar4;
    *(undefined4 *)(param_2 + *(int *)(*(int *)(param_2 + 8) + 0x1c)) = 0;
    if (iVar4 != 0) {
      *(int *)(iVar4 + *(int *)(*(int *)(iVar4 + 8) + 0x1c)) = param_2;
    }
    if (*(int *)(pcVar8 + 8) == 0) {
      *(int *)(pcVar8 + 8) = param_2;
    }
    do {
      uVar7 = *puVar6;
      bVar2 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar2);
    *puVar6 = uVar7 + 1;
    param_1[3] = param_1[3] + (uint)(0xfffffffe < uVar7);
    do {
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = *piVar5 + 1;
    FUN_01650a90(pcVar8);
    if (*pcVar8 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(pcVar8);
        if (bVar2) {
          *pcVar8 = '\0';
          return param_3;
        }
      } while (*pcVar8 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(pcVar8);
  }
  else {
    FUN_01650a90(pcVar8);
    if (*pcVar8 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(pcVar8);
        if (bVar2) {
          *pcVar8 = '\0';
          goto LAB_018165d8;
        }
      } while (*pcVar8 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(pcVar8);
LAB_018165d8:
    (**(code **)(*(int *)(param_2 + 8) + 0x18))(param_2);
    FUN_019d8858(param_3);
    param_3 = 0;
  }
  return param_3;
}

