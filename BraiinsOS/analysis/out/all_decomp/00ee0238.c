// FUN_00ee0238 @ 00ee0238 size=640 calls_out=7 calls_in=15
// strings: assertion failed: prev.ref_count() >= 1

uint * FUN_00ee0238(int *param_1,int param_2,uint *param_3)

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
      goto LAB_00ee02a4;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(pcVar8);
LAB_00ee02a4:
  FUN_0128236c(pcVar8);
  DataMemoryBarrier(0xb);
  if ((char)param_1[8] == '\0') {
    piVar5 = param_1 + 4;
    puVar6 = (uint *)(param_1 + 2);
    local_2c = *(uint *)(param_2 + *(int *)(*(int *)(param_2 + 8) + 0x24));
    local_30 = uVar7;
    if (uVar7 != local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb3aac(0,&local_2c,&local_30,0);
    }
    iVar4 = *(int *)(pcVar8 + 4);
    local_28 = param_2;
    if (iVar4 == param_2) {
      FUN_01446ab0(pcVar8 + 4,&local_28,&DAT_018ac72c);
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xee04b8);
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
    FUN_01282570(pcVar8);
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
    FUN_01280a5c(pcVar8);
    return param_3;
  }
  FUN_01282570(pcVar8);
  if (*pcVar8 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(pcVar8);
      if (bVar2) {
        *pcVar8 = '\0';
        goto LAB_00ee0300;
      }
    } while (*pcVar8 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar8);
LAB_00ee0300:
  (**(code **)(*(int *)(param_2 + 8) + 0x18))(param_2);
  DataMemoryBarrier(0xb);
  do {
    uVar7 = *param_3;
    bVar2 = (bool)hasExclusiveAccess(param_3);
  } while (!bVar2);
  *param_3 = uVar7 - 0x40;
  DataMemoryBarrier(0xb);
  if (uVar7 < 0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: prev.ref_count() >= 1",0x27,&DAT_018ad2bc);
  }
  if ((uVar7 & 0xffffffc0) == 0x40) {
    (**(code **)(param_3[2] + 8))(param_3);
  }
  return (uint *)0x0;
}

