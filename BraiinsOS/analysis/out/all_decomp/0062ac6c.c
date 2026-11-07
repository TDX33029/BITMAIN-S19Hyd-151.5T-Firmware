// FUN_0062ac6c @ 0062ac6c size=736 calls_out=10 calls_in=1
// strings: 

void FUN_0062ac6c(uint *param_1)

{
  bool bVar1;
  undefined4 **ppuVar2;
  int *piVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined4 ***local_50;
  code **local_4c;
  undefined4 **local_48;
  code *local_44;
  undefined4 ***local_40;
  undefined *local_3c;
  undefined4 uStack_38;
  undefined4 ***local_30;
  undefined4 *local_2c;
  undefined4 **local_28;
  
  local_44 = FUN_0062ac6c;
  local_2c = (undefined4 *)&DAT_00000004;
  local_28 = (undefined4 **)0x0;
  local_30 = (undefined4 ***)0x0;
  uVar9 = FUN_0061d4dc();
  piVar3 = (int *)uVar9;
  local_3c = &DAT_01857934;
  local_40 = &local_50;
  local_4c = &local_44;
  local_50 = &local_30;
  FUN_0184241c(FUN_0062d6dc,&local_40);
  uVar4 = (uint)(uVar9 >> 0x20) & 0xff;
  if (uVar4 != 2) {
    uVar10 = thunk_FUN_016de0ee(uVar4,0xa8);
    pcVar5 = (char *)((int)uVar10 + (int)((ulonglong)uVar10 >> 0x20));
    if (pcVar5[1] == '\0') {
      pcVar5[0] = '\0';
      pcVar5[1] = '\x01';
    }
    if (*pcVar5 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_0033db1e,0x1c,&DAT_018578e0);
    }
    *pcVar5 = '\0';
    if ((((uVar9 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar6 = FUN_015bf3f8(), iVar6 == 0)) {
      *(undefined1 *)(piVar3 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = 0;
    if (iVar6 == 2) {
      FUN_016d6968(0xf0,piVar3,0x81,1);
    }
  }
  ppuVar2 = local_28;
  if (local_28 < local_30) {
    if (local_28 == (undefined4 **)0x0) {
      thunk_FUN_016d3fb4(local_2c);
      puVar7 = (undefined4 *)&DAT_00000004;
    }
    else {
      iVar6 = (int)local_28 * 0x1c;
      puVar7 = (undefined4 *)thunk_FUN_016d4ea4(local_2c,iVar6);
      if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,iVar6);
      }
    }
    local_30 = (undefined4 ***)ppuVar2;
    local_2c = puVar7;
  }
  puVar7 = local_2c;
  local_48 = local_28;
  local_4c = (code **)local_2c;
  local_50 = local_30;
  if (local_28 != (undefined4 **)0x0) {
    puVar8 = local_2c + (int)local_28 * 7;
    uVar10 = thunk_FUN_016de0ee((int)local_28 * 7,0xa8);
    pcVar5 = (char *)((int)uVar10 + (int)((ulonglong)uVar10 >> 0x20));
    do {
      if (puVar7[4] == -0x80000000) {
        local_28 = (undefined4 **)0x0;
        local_2c = (undefined4 *)0x4;
        local_30 = (undefined4 ***)0x0;
        uVar9 = FUN_0061d4dc();
        piVar3 = (int *)uVar9;
        local_40 = &local_30;
        FUN_00620fd0(*puVar7,puVar7[1],&local_40);
        if (((uint)(uVar9 >> 0x20) & 0xff) != 2) {
          if (pcVar5[1] == '\0') {
            pcVar5[0] = '\0';
            pcVar5[1] = '\x01';
          }
          if (*pcVar5 == '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464(&DAT_0033db1e,0x1c,&DAT_018578e0);
          }
          *pcVar5 = '\0';
          if ((((uVar9 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
             (iVar6 = FUN_015bf3f8(), iVar6 == 0)) {
            *(undefined1 *)(piVar3 + 1) = 1;
          }
          DataMemoryBarrier(0xb);
          do {
            iVar6 = *piVar3;
            bVar1 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar1);
          *piVar3 = 0;
          if (iVar6 == 2) {
            FUN_016d6968(0xf0,piVar3,0x81,1);
          }
        }
        local_40 = local_30;
        local_3c = (undefined *)local_2c;
        uStack_38 = local_28;
        puVar7[4] = local_30;
        puVar7[5] = local_2c;
        puVar7[6] = local_28;
      }
      puVar7 = puVar7 + 7;
    } while (puVar7 != puVar8);
  }
  *param_1 = (uint)local_50;
  param_1[1] = (uint)local_4c;
  param_1[2] = (uint)local_48;
  return;
}

