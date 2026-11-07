// FUN_01433b9c @ 01433b9c size=144 calls_out=2 calls_in=2
// strings: 

void FUN_01433b9c(undefined4 *param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint uStack_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  uint uStack_30;
  uint local_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  puVar2 = (uint *)thunk_FUN_01be5118(0x38);
  if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x38);
  }
  *puVar2 = 1;
  puVar2[1] = 1;
  puVar2[2] = uStack_48;
  puVar2[3] = uStack_44;
  puVar2[4] = local_40;
  puVar2[5] = uStack_3c;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = uStack_30;
  puVar2[9] = local_2c;
  puVar2[10] = uStack_28;
  puVar2[0xb] = uStack_24;
  puVar2[0xc] = uStack_20;
  puVar2[0xd] = uStack_1c;
  do {
    uVar3 = *puVar2;
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = uVar3 + 1;
  if (uVar3 < 0x80000000) {
    *param_1 = puVar2;
    param_1[1] = 1;
  }
  if ((int)uVar3 < 0) {
    software_udf(0xfdee,0x1433c1c);
    return;
  }
  param_1[2] = puVar2;
  return;
}

