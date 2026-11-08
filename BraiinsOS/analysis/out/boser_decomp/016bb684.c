// FUN_016bb684 @ 016bb684 size=472 calls_out=2 calls_in=0
// strings: HybridEnginePikeVMEngineOnePassEngine | Regex | forward | reverse | Regex | forward

undefined4 FUN_016bb684(int *param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  
  uVar4 = *param_2;
  iVar5 = param_2[1];
  iVar3 = *param_1;
  pcVar2 = *(code **)(iVar5 + 0xc);
  iVar1 = (*pcVar2)(uVar4,"HybridEnginePikeVMEngineOnePassEngine",0xc);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar2)(uVar4,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    local_34 = (undefined4 *)(iVar3 + 0x288);
    iVar1 = FUN_01303d90(param_2,"Regex",5,"forward",7,iVar3,FUN_016bb13c,"reverse",7,&local_34,
                         FUN_016c6760);
    if (iVar1 != 0) {
      return 1;
    }
    uVar4 = *param_2;
    pcVar2 = *(code **)(param_2[1] + 0xc);
  }
  else {
    iVar1 = (*pcVar2)(uVar4,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_3c = &local_35;
    local_35 = 1;
    local_2c = param_2[2];
    local_28 = param_2[3];
    local_24 = iVar3 + 0x288;
    local_30 = &DAT_01ce45f8;
    local_34 = &local_44;
    local_44 = uVar4;
    local_40 = iVar5;
    iVar1 = FUN_01303d90(&local_34,"Regex",5,"forward",7,iVar3,FUN_016bb13c,"reverse",7,&local_24,
                         FUN_016c6760);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  uVar4 = (*pcVar2)(uVar4,&DAT_0053341b,1);
  return uVar4;
}

