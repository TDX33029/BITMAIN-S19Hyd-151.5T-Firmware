// FUN_0165a798 @ 0165a798 size=488 calls_out=10 calls_in=58
// strings: 

void FUN_0165a798(undefined4 *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined *local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  
  DataMemoryBarrier(0xb);
  if (DAT_018dd938 == '\0') {
    FUN_015f3b0c(&local_30,1);
    *param_1 = local_30;
    param_1[1] = local_2c;
    param_1[2] = local_28;
    return;
  }
  uVar9 = thunk_FUN_016de0ee(DAT_018dd938,0x40);
  puVar7 = (uint *)((int)uVar9 + (int)((ulonglong)uVar9 >> 0x20));
  if ((char)puVar7[0xe] != '\x01') {
    if ((char)puVar7[0xe] == '\x02') {
      local_2c = &DAT_0157d360;
      local_30 = &DAT_018ad30c;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00590e71,&local_30,&DAT_018ad314);
    }
    FUN_015e8e6c(puVar7,FUN_01655ec4);
    *(undefined1 *)(puVar7 + 0xe) = 1;
  }
  uVar3 = *puVar7;
  if (0x7ffffffe < uVar3) {
    uVar5 = FUN_00fb71b0(&DAT_018accb0);
    FUN_0164fe38();
                    /* WARNING: Subroutine does not return */
    FUN_01842e60(uVar5);
  }
  uVar8 = puVar7[1];
  *puVar7 = uVar3 + 1;
  if (uVar8 == 2) {
    *puVar7 = uVar3;
    FUN_015f3b0c(&local_30,1);
  }
  else {
    piVar6 = (int *)puVar7[2];
    do {
      iVar4 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar4 + 1;
    if (iVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x165a8b8);
      (*pcVar1)();
    }
    *puVar7 = *puVar7 - 1;
    iVar4 = 0x180;
    if ((uVar8 & 1) != 0) {
      iVar4 = 0xb8;
    }
    FUN_0165a9a4(&local_30,(int)piVar6 + iVar4);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar4 + -1;
    if ((uVar8 & 1) == 0) {
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01659344(piVar6);
        *param_1 = local_30;
        param_1[1] = local_2c;
        param_1[2] = local_28;
        return;
      }
    }
    else if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_016586fc(piVar6);
      *param_1 = local_30;
      param_1[1] = local_2c;
      param_1[2] = local_28;
      return;
    }
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  return;
}

