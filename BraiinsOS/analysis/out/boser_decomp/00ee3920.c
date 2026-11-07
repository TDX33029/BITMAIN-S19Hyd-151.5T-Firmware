// FUN_00ee3920 @ 00ee3920 size=348 calls_out=7 calls_in=2
// strings: created | measured_hashrate | estimated_power_consumption

void FUN_00ee3920(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_38;
  int *local_34;
  undefined4 local_30;
  int *local_2c;
  
  iVar4 = *param_2;
  pcVar3 = "{";
  uVar2 = 1;
  while( true ) {
    uVar5 = *(uint *)(iVar4 + 4);
    uVar1 = uVar5 ^ 0x7fffffff;
    if (uVar2 < uVar1) {
      uVar1 = uVar2;
    }
    FUN_01284394(iVar4,pcVar3,uVar1);
    if (uVar5 == 0x7fffffff) break;
    pcVar3 = pcVar3 + uVar1;
    uVar2 = uVar2 - uVar1;
    if (uVar2 == 0) {
      local_38 = 0x100;
      local_34 = param_2;
      iVar4 = FUN_00ebf420(&local_38,"created",7,param_1);
      if ((((iVar4 == 0) &&
           (iVar4 = FUN_00ede3a4((int)*(undefined8 *)(param_1 + 0x20),&local_38,&DAT_00531484,6,
                                 *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x18),
                                 *(undefined4 *)(param_1 + 0x1c)), iVar4 == 0)) &&
          (iVar4 = FUN_00ee35d0((int)*(undefined8 *)(param_1 + 0x30),&local_38,"measured_hashrate",
                                0x11,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x28)
                                ,*(undefined4 *)(param_1 + 0x2c)), iVar4 == 0)) &&
         (iVar4 = FUN_00ede5e8(&local_38,"estimated_power_consumption",0x1b,
                               *(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x38),
                               *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                               *(undefined4 *)(param_1 + 0x44)), iVar4 == 0)) {
        local_30 = local_38;
        local_2c = local_34;
        FUN_00d57dc0(&local_30);
      }
      return;
    }
  }
  FUN_01966f50(2,&DAT_01d2e7b8);
  return;
}

