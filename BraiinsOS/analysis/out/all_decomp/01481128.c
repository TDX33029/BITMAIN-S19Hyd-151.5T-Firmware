// FUN_01481128 @ 01481128 size=396 calls_out=4 calls_in=1
// strings: 

void FUN_01481128(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  uint *puVar5;
  int local_210;
  int iStack_20c;
  undefined1 auStack_208 [160];
  uint local_168 [40];
  uint *local_c8;
  undefined1 *local_c4;
  undefined1 auStack_c0 [160];
  
  FUN_0148e164(&local_210,param_2,param_4);
  if (local_210 != 5 || iStack_20c != 0) {
    if (local_210 == 4 && iStack_20c == 0) {
      iStack_20c = 0;
      local_210 = 3;
    }
    else {
      FUN_016dd1aa(auStack_c0,auStack_208,0xa0);
      local_c4 = (undefined1 *)0x0;
      local_c8 = (uint *)0x3;
      if (local_210 == 3 && iStack_20c == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00408910,0x14,&DAT_018a4c30);
      }
      FUN_016dd1aa(local_168,auStack_208,0xa0);
    }
    *param_1 = local_210;
    param_1[1] = iStack_20c;
    FUN_016dd1aa(param_1 + 2,local_168,0xa0);
    return;
  }
  puVar5 = (uint *)(param_3 + 8);
  DataMemoryBarrier(0xb);
  do {
    local_168[0] = *puVar5;
    bVar2 = (bool)hasExclusiveAccess(puVar5);
  } while (!bVar2);
  *puVar5 = 1;
  DataMemoryBarrier(0xb);
  if (1 < local_168[0]) {
    if (local_168[0] == 2) {
      pcVar3 = (char *)(param_3 + 0x14);
      do {
        DataMemoryBarrier(0xb);
        do {
          cVar1 = *pcVar3;
          bVar2 = (bool)hasExclusiveAccess(pcVar3);
        } while (!bVar2);
        *pcVar3 = '\x01';
        DataMemoryBarrier(0xb);
      } while (cVar1 != '\0');
      iVar4 = *(int *)(param_3 + 0xc);
      *(undefined4 *)(param_3 + 0xc) = 0;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(param_3 + 0x14) = 0;
      DataMemoryBarrier(0xb);
      if (iVar4 != 0) {
        (**(code **)(iVar4 + 4))(*(undefined4 *)(param_3 + 0x10));
      }
    }
    else if (local_168[0] != 3) {
      local_c8 = local_168;
      local_c4 = &LAB_00fac484;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00570d95,&local_c8,&DAT_018af288);
    }
  }
  *param_1 = 4;
  param_1[1] = 0;
  return;
}

