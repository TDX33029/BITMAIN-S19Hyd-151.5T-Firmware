// FUN_00a6bd58 @ 00a6bd58 size=364 calls_out=5 calls_in=7
// strings: a Display implementation returned an error unexpectedly

undefined8 FUN_00a6bd58(uint param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int *local_30;
  undefined *local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  
  param_1 = param_1 & 0xff;
  iVar1 = param_1 * 8;
  puVar8 = (uint *)(&DAT_018db768 + iVar1);
  do {
    uVar9 = *puVar8;
    uVar4 = *(undefined8 *)puVar8;
    uVar3 = *(undefined8 *)puVar8;
    bVar2 = (bool)hasExclusiveAccess(puVar8);
  } while (!bVar2);
  *puVar8 = uVar9 + param_2;
  *(uint *)(&DAT_018db76c + iVar1) = *(int *)(&DAT_018db76c + iVar1) + (uint)CARRY4(uVar9,param_2);
  DataMemoryBarrier(0xb);
  if (DAT_018d7d14 == 0) {
    local_34 = 0;
    local_28 = &DAT_60000020;
    local_30 = &local_3c;
    local_38 = 1;
    local_3c = 0;
    local_24 = 0;
    local_2c = &DAT_0186d4ec;
    iVar6 = FUN_00faace8(&local_30,(&PTR_DAT_018b0b64)[param_1],
                         *(undefined4 *)(&DAT_0041ee00 + param_1 * 4));
    uVar5 = local_38;
    iVar1 = local_3c;
    if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_44,
                   &DAT_0186d504,&DAT_018af130);
    }
    local_40 = local_34;
    local_44 = local_38;
    piVar7 = (int *)FUN_00a63b14(DAT_018d7d6c,&local_44,1);
    puVar8 = (uint *)(piVar7 + 2);
    do {
      uVar9 = *puVar8;
      bVar2 = (bool)hasExclusiveAccess(puVar8);
    } while (!bVar2);
    *puVar8 = uVar9 + param_2;
    piVar7[3] = piVar7[3] + (uint)CARRY4(uVar9,param_2);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar7;
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_012c0df4();
    }
    if (iVar1 != 0) {
      thunk_FUN_016d3fb4(uVar5);
      return uVar4;
    }
  }
  return uVar3;
}

