// FUN_008c4c68 @ 008c4c68 size=156 calls_out=1 calls_in=0
// strings: 

void FUN_008c4c68(undefined4 *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *local_18;
  undefined4 **local_14;
  
  DataMemoryBarrier(0xb);
  if (DAT_018cd728 != 0) {
    local_14 = &local_18;
    local_18 = &DAT_018cd728;
    FUN_015eedc4(&DAT_018cd728,1,&local_14,&DAT_01864204,&DAT_018ac9b8);
  }
  do {
    puVar4 = DAT_018cd72c;
    uVar5 = *DAT_018cd72c;
    uVar6 = uVar5 + 1;
    bVar2 = (bool)hasExclusiveAccess(DAT_018cd72c);
  } while (!bVar2);
  *DAT_018cd72c = uVar6;
  puVar3 = DAT_018cd72c;
  if (uVar5 < 0x80000000) {
    uVar6 = 0x100;
    puVar4 = (uint *)0x1366;
  }
  if ((int)uVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x8c4cc4);
    (*pcVar1)();
  }
  *(short *)(param_1 + 2) = (short)puVar4;
  *param_1 = puVar3;
  param_1[1] = uVar6 & 0xffff | 0x3020000;
  return;
}

