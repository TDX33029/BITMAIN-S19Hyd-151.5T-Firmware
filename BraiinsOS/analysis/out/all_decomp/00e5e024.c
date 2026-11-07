// FUN_00e5e024 @ 00e5e024 size=524 calls_out=8 calls_in=2
// strings: PowerTarget | HashrateTargetinit_delaymax_chip_frequency_changewait_per_mhz_of_frequency_after_changewait_after_rampdowntemperature_sensor_buildersOnControlBoardi2c_addressOnHashboardDirectViaPic

int FUN_00e5e024(char *param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 local_28;
  undefined4 local_24;
  
  if (*param_1 != '\0') {
    local_28 = 10;
    iVar1 = FUN_0157c50c(&local_28,0,0);
    return iVar1;
  }
  iVar1 = FUN_00e5b230(param_1);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
  }
  puVar5 = *(undefined4 **)(param_1 + 4);
  piVar4 = (int *)*puVar5;
  iVar1 = piVar4[2];
  if ((uint)(*piVar4 - iVar1) < 2) {
    FUN_00edff4c(piVar4,iVar1,2,1,1);
    iVar1 = piVar4[2];
  }
  uVar2 = *param_4;
  uVar3 = param_4[1];
  piVar4[2] = iVar1 + 2;
  *(undefined2 *)(piVar4[1] + iVar1) = 0x203a;
  iVar1 = 2;
  if ((uint)(uVar2 < 5) <= -uVar3) {
    iVar1 = uVar2 - 5;
  }
  if (iVar1 == 0) {
    piVar4 = (int *)*puVar5;
    iVar1 = piVar4[2];
    if (*piVar4 == iVar1) {
      FUN_00edff4c(piVar4,iVar1,1,1,1);
      iVar1 = piVar4[2];
    }
    *(undefined1 *)(piVar4[1] + iVar1) = 0x22;
    piVar4[2] = iVar1 + 1;
    local_28 = CONCAT31(local_28._1_3_,4);
    FUN_00e57bb4(&local_28,piVar4,&DAT_005699f0,8);
    if ((char)local_28 == '\x04') {
      iVar1 = piVar4[2];
      if (*piVar4 == iVar1) {
        FUN_00edff4c(piVar4,iVar1,1,1,1);
        iVar1 = piVar4[2];
      }
      *(undefined1 *)(piVar4[1] + iVar1) = 0x22;
      piVar4[2] = iVar1 + 1;
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_0157c4a0(local_28,local_24);
    }
  }
  else if (iVar1 == 1) {
    iVar1 = FUN_00e5e48c((int)*(undefined8 *)(param_4 + 2),puVar5,"PowerTarget",0xb);
  }
  else {
    iVar1 = FUN_00e5e7d8(puVar5,
                         "HashrateTargetinit_delaymax_chip_frequency_changewait_per_mhz_of_frequency_after_changewait_after_rampdowntemperature_sensor_buildersOnControlBoardi2c_addressOnHashboardDirectViaPic"
                         ,0xe,param_4);
  }
  if (iVar1 == 0) {
    *(undefined1 *)(puVar5 + 4) = 1;
    iVar1 = 0;
  }
  return iVar1;
}

