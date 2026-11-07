// FUN_00b6ca30 @ 00b6ca30 size=452 calls_out=9 calls_in=2
// strings: daemonize | /usr/bin/factory_config_reset.shhashrate_target field is missing | --wipe-network | /usr/bin/bos-toolsevent open/boser/boser-buildroot/src/bos.rs:250

void FUN_00b6ca30(int *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x2ee)) {
  case 0:
    cVar1 = *(char *)((int)param_2 + 0x2ef);
    *param_2 = param_2[0xba];
    *(undefined1 *)((int)param_2 + 0x2ed) = 0;
    *(char *)(param_2 + 0xbb) = cVar1;
    puVar3 = (undefined4 *)thunk_FUN_01be5118(0x18);
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x18);
    }
    puVar3[2] = &DAT_004cfd3b;
    *puVar3 = "daemonize";
    puVar3[1] = 9;
    iVar5 = 3;
    puVar3[3] = 2;
    puVar3[4] = "/usr/bin/factory_config_reset.shhashrate_target field is missing";
    puVar3[5] = 0x20;
    param_2[1] = 3;
    param_2[2] = (int)puVar3;
    param_2[3] = 3;
    if (cVar1 != '\0') {
      FUN_015f5ab8();
      iVar5 = param_2[2];
      *(char **)(iVar5 + 0x18) = "--wipe-network";
      *(undefined4 *)(iVar5 + 0x1c) = 0xe;
      puVar3 = (undefined4 *)param_2[2];
      iVar5 = 4;
      param_2[3] = 4;
    }
    *(undefined1 *)(param_2 + 0xb8) = 0;
    param_2[4] = (int)"/usr/bin/bos-toolsevent open/boser/boser-buildroot/src/bos.rs:250";
    param_2[5] = 0x12;
    param_2[6] = (int)puVar3;
    param_2[7] = iVar5;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c13400);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c13400);
  }
  FUN_00b6cd44(&local_50,param_2 + 4,param_3);
  if (local_50 == -0x7fffffe9) {
    *param_1 = -0x7fffffe9;
    uVar2 = 3;
  }
  else {
    local_38 = local_50;
    iStack_34 = iStack_4c;
    iStack_30 = iStack_48;
    iStack_2c = iStack_44;
    iStack_28 = iStack_40;
    iStack_24 = iStack_3c;
    cVar1 = (char)param_2[0xb8];
    bVar6 = cVar1 == '\x03';
    if (bVar6) {
      cVar1 = (char)param_2[0xb7];
    }
    if (bVar6 && cVar1 == '\x03') {
      FUN_00b6cd04(param_2 + 0xc);
    }
    FUN_0134aee0(param_2[1],param_2[2],4,8);
    piVar4 = (int *)*param_2;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(piVar4 + 2) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar6 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar6);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(*param_2);
    }
    *param_1 = local_38;
    param_1[1] = iStack_34;
    param_1[2] = iStack_30;
    param_1[3] = iStack_2c;
    param_1[4] = iStack_28;
    param_1[5] = iStack_24;
    uVar2 = 1;
  }
  *(undefined1 *)((int)param_2 + 0x2ee) = uVar2;
  return;
}

