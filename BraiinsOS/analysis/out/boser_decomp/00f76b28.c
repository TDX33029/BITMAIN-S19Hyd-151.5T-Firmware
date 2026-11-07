// FUN_00f76b28 @ 00f76b28 size=288 calls_out=2 calls_in=0
// strings: ExecutionIdFirmwareAndPackagesPreparingDownloadFailed

undefined4 FUN_00f76b28(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uStack_54;
  int iStack_50;
  undefined1 *local_4c;
  undefined1 local_45;
  undefined1 auStack_44 [36];
  
  uVar4 = *param_2;
  iVar5 = param_2[1];
  pcVar3 = *(code **)(iVar5 + 0xc);
  iVar1 = (*pcVar3)(uVar4,"ExecutionIdFirmwareAndPackagesPreparingDownloadFailed",0xb);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar3)(uVar4,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    FUN_01ae1bfc(auStack_44,param_1);
    iVar1 = (*pcVar3)(uVar4,auStack_44,0x24);
  }
  else {
    iVar1 = (*pcVar3)(uVar4,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_4c = &local_45;
    local_45 = 1;
    uStack_54 = uVar4;
    iStack_50 = iVar5;
    FUN_01ae1bfc(auStack_44,param_1);
    iVar1 = FUN_01302620(&uStack_54,auStack_44,0x24);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_01302620(&uStack_54,&DAT_005312e2,2);
  }
  uVar2 = 1;
  if (iVar1 == 0) {
    uVar2 = (*pcVar3)(uVar4,&DAT_0053341b,1);
  }
  return uVar2;
}

