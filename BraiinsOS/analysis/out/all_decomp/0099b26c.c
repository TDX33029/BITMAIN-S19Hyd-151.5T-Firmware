// FUN_0099b26c @ 0099b26c size=332 calls_out=1 calls_in=0
// strings: Atomic

undefined4 FUN_0099b26c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 local_30;
  int iStack_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
  iVar2 = *param_1;
  iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,"Atomic",6);
  uVar3 = (uint)*(byte *)(iVar2 + 8);
  DataMemoryBarrier(0xb);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    uVar5 = *param_2;
    pcVar4 = *(code **)(param_2[1] + 0xc);
    iVar1 = (*pcVar4)(uVar5,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (*pcVar4)(uVar5,*(undefined4 *)(&DAT_018b092c + uVar3 * 4),
                      *(undefined4 *)(&DAT_0041ec50 + uVar3 * 4));
  }
  else {
    uVar5 = *param_2;
    iVar2 = param_2[1];
    iVar1 = (**(code **)(iVar2 + 0xc))(uVar5,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_28 = &local_21;
    local_21 = 1;
    local_30 = uVar5;
    iStack_2c = iVar2;
    iVar1 = FUN_00fb1f64(&local_30,*(undefined4 *)(&DAT_018b0958 + uVar3 * 4),
                         *(undefined4 *)(&DAT_0041ec7c + uVar3 * 4));
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
  }
  if (iVar1 == 0) {
    uVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
    return uVar5;
  }
  return 1;
}

