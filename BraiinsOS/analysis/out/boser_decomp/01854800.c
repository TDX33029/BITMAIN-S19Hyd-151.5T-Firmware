// FUN_01854800 @ 01854800 size=348 calls_out=5 calls_in=0
// strings: 

void FUN_01854800(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_210;
  int iStack_20c;
  undefined1 auStack_208 [160];
  undefined1 auStack_168 [160];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 auStack_c0 [160];
  
  FUN_01823438(&local_210,param_2,param_4);
  if (local_210 == 5 && iStack_20c == 0) {
    puVar6 = (undefined4 *)(param_3 + 8);
    DataMemoryBarrier(0xb);
    do {
      uVar3 = *puVar6;
      bVar1 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar1);
    *puVar6 = 1;
    DataMemoryBarrier(0xb);
    cVar2 = FUN_01ae6348(uVar3);
    if (cVar2 == '\x02') {
      pcVar4 = (char *)(param_3 + 0x14);
      do {
        DataMemoryBarrier(0xb);
        do {
          cVar2 = *pcVar4;
          bVar1 = (bool)hasExclusiveAccess(pcVar4);
        } while (!bVar1);
        *pcVar4 = '\x01';
        DataMemoryBarrier(0xb);
      } while (cVar2 != '\0');
      iVar5 = *(int *)(param_3 + 0xc);
      *(undefined4 *)(param_3 + 0xc) = 0;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(param_3 + 0x14) = 0;
      DataMemoryBarrier(0xb);
      if (iVar5 != 0) {
        (**(code **)(iVar5 + 4))(*(undefined4 *)(param_3 + 0x10));
      }
    }
    *param_1 = 4;
    param_1[1] = 0;
  }
  else {
    if (local_210 == 4 && iStack_20c == 0) {
      iStack_20c = 0;
      local_210 = 3;
    }
    else {
      FUN_01bed4e2(auStack_c0,auStack_208,0xa0);
      local_c4 = 0;
      local_c8 = 3;
      if (local_210 == 3 && iStack_20c == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c(&DAT_0050d974,0x14,&DAT_01d1f120);
      }
      FUN_01bed4e2(auStack_168,auStack_208,0xa0);
      FUN_01854528(&local_c8);
    }
    *param_1 = local_210;
    param_1[1] = iStack_20c;
    FUN_01bed4e2(param_1 + 2,auStack_168,0xa0);
  }
  return;
}

