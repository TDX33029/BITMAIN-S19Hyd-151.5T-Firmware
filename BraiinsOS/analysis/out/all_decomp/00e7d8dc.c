// FUN_00e7d8dc @ 00e7d8dc size=528 calls_out=6 calls_in=2
// strings: 

void FUN_00e7d8dc(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  undefined8 uVar8;
  int local_30;
  int iStack_2c;
  char *local_28;
  int local_24;
  
  uVar8 = thunk_FUN_016de0ee(param_1,0x40);
  iVar5 = (int)uVar8 + (int)((ulonglong)uVar8 >> 0x20);
  if (*(char *)(iVar5 + 0x38) == '\x01') {
LAB_00e7d930:
    cVar6 = *(char *)(iVar5 + 0x31);
    cVar7 = *(char *)(iVar5 + 0x30);
    cVar2 = cVar6;
    if (cVar7 == '\x01') {
      if (cVar6 == '\0') {
        FUN_016455a4(*param_3,param_3[1]);
        *param_1 = 3;
        param_1[1] = 0;
        return;
      }
      cVar2 = cVar6 + -1;
    }
    *(char *)(iVar5 + 0x31) = cVar2;
  }
  else {
    cVar7 = '\0';
    cVar6 = '\0';
    if (*(char *)(iVar5 + 0x38) != '\x02') {
      FUN_015e8e6c(iVar5,FUN_005bc49c);
      *(undefined1 *)(iVar5 + 0x38) = 1;
      goto LAB_00e7d930;
    }
  }
  FUN_00a94f40(&local_30,*param_2,param_2 + 1,param_3);
  if (local_30 == 3 && iStack_2c == 0) {
    *param_1 = ((byte)local_28[0x14] & 0x7f) << 1;
    param_1[1] = 0;
    piVar4 = (int *)(local_28 + 0x10);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar3 + -1;
    DataMemoryBarrier(0xb);
    if (iVar3 == 1) {
      local_28[0x14] = '\0';
    }
    FUN_01282570(local_28);
    if (*local_28 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(local_28);
        if (bVar1) {
          *local_28 = '\0';
          goto LAB_00e7da3c;
        }
      } while (*local_28 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(local_28);
  }
  else {
    if (local_30 != 0) {
      if (local_30 == 1) {
        *param_1 = 0;
        param_1[1] = 0;
        if (*param_1 != 3 || param_1[1] != 0) {
          return;
        }
      }
      else {
        *param_1 = 1;
        param_1[1] = 0;
        param_1[2] = (int)local_28;
        param_1[3] = local_24;
        if (*param_1 != 3 || param_1[1] != 0) {
          return;
        }
      }
      goto LAB_00e7da4c;
    }
    *param_1 = 3;
    param_1[1] = 0;
  }
LAB_00e7da3c:
  if (*param_1 != 3 || param_1[1] != 0) {
    return;
  }
LAB_00e7da4c:
  if (cVar7 == '\0') {
    return;
  }
  if (*(char *)(iVar5 + 0x38) != '\x01') {
    if (*(char *)(iVar5 + 0x38) == '\x02') {
      return;
    }
    FUN_015e8e6c(iVar5,FUN_01655ec4);
    *(undefined1 *)(iVar5 + 0x38) = 1;
  }
  *(char *)(iVar5 + 0x31) = cVar6;
  *(undefined1 *)(iVar5 + 0x30) = 1;
  return;
}

