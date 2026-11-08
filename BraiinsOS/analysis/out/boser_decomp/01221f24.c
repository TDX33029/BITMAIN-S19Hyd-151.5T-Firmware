// FUN_01221f24 @ 01221f24 size=136 calls_out=1 calls_in=7
// strings: BUG: missing hashes time means | BUG: cannot find given time intervalthe group index is out of rangedifferent client UIDthe client status is unchangedstruct FanControl with 6 elementsstruct PoolConfig with 4 elementsstruct Autotuning with 4 elementsstruct Management with 2 elementsstruct PauseConfig with 2 elementsstruct TempControl with 5 elementsstruct FanControlV2 with 3 elementsstruct TempControlV2 with 5 elementsstruct PerformanceScaling with 9 elementsstruct AutotuningV1 with 2 elementsstruct PowerScalingV1 with 5 elementsstruct ModelDetection with 1 elementstruct PerformanceScalingV2 with 7 elementsstruct PerformanceScalingV3 with 8 elementsstruct Miner with 6 elementsstruct BosminerModel with 2 elementsstruct MinerHashboard with 6 elementsstruct VoltageRange with 2 elementsstruct MinerPerfVariant with 3 elementsstruct HashboardTopology with 6 elementsstruct ConfigDescriptor with 2 elementsstruct PlusConfigDescriptor with 9 elementsstruct ConfigDescriptorCommon with 17 elementsstruct DefaultTemperatureDescriptor with 6 elements

uint * FUN_01221f24(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  bool bVar5;
  
  if (*(int *)(param_1 + 0x18) == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("BUG: missing hashes time means",0x1e,&DAT_01c245c4);
  }
  iVar2 = *(int *)(param_1 + 0x20) * 0x28;
  puVar1 = (uint *)(*(int *)(param_1 + 0x1c) + 0x20);
  do {
    puVar4 = puVar1;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("BUG: cannot find given time intervalthe group index is out of rangedifferent client UIDthe client status is unchangedstruct FanControl with 6 elementsstruct PoolConfig with 4 elementsstruct Autotuning with 4 elementsstruct Management with 2 elementsstruct PauseConfig with 2 elementsstruct TempControl with 5 elementsstruct FanControlV2 with 3 elementsstruct TempControlV2 with 5 elementsstruct PerformanceScaling with 9 elementsstruct AutotuningV1 with 2 elementsstruct PowerScalingV1 with 5 elementsstruct ModelDetection with 1 elementstruct PerformanceScalingV2 with 7 elementsstruct PerformanceScalingV3 with 8 elementsstruct Miner with 6 elementsstruct BosminerModel with 2 elementsstruct MinerHashboard with 6 elementsstruct VoltageRange with 2 elementsstruct MinerPerfVariant with 3 elementsstruct HashboardTopology with 6 elementsstruct ConfigDescriptor with 2 elementsstruct PlusConfigDescriptor with 9 elementsstruct ConfigDescriptorCommon with 17 elementsstruct DefaultTemperatureDescriptor with 6 elements"
                   ,0x24,&DAT_01c245d4);
    }
    iVar2 = iVar2 + -0x28;
    uVar3 = puVar4[-2] ^ param_3 | puVar4[-1] ^ param_4;
    bVar5 = uVar3 != 0;
    if (!bVar5) {
      uVar3 = *puVar4;
    }
    puVar1 = puVar4 + 10;
  } while (bVar5 || uVar3 != 0);
  return puVar4 + -8;
}

