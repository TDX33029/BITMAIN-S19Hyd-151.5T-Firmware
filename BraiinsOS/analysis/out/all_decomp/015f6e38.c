// FUN_015f6e38 @ 015f6e38 size=488 calls_out=12 calls_in=0
// strings: 

undefined4 FUN_015f6e38(undefined4 *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined *puVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  undefined8 uVar13;
  int *local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 uStack_25;
  
  piVar11 = (int *)*param_1;
  do {
    iVar3 = *piVar11;
    bVar2 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar2);
  *piVar11 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x15f701c);
    (*pcVar1)();
  }
  uVar13 = thunk_FUN_016de0ee(iVar3,0x248);
  piVar10 = (int *)((int)uVar13 + (int)((ulonglong)uVar13 >> 0x20));
  local_38 = piVar11;
  if (*piVar10 != 0) {
LAB_015f6eb8:
    local_48 = piVar11;
    FUN_015bee18(&local_38,&uStack_25,&DAT_004109ec,0xab);
    if (((uint)local_38 & 0xff) != 4) {
      FUN_015bf4a0(&local_38);
    }
                    /* WARNING: Subroutine does not return */
    FUN_015bef44();
  }
  uVar13 = thunk_FUN_016de0ee(0,0x240);
  piVar4 = (int *)((int)uVar13 + (int)((ulonglong)uVar13 >> 0x20));
  piVar12 = piVar11 + 2;
  iVar3 = piVar11[3];
  if (*piVar4 == 0 && piVar4[1] == 0) {
    *piVar4 = *piVar12;
    piVar4[1] = iVar3;
  }
  else if (*piVar4 != *piVar12 || piVar4[1] != iVar3) goto LAB_015f6eb8;
  FUN_015e8f5c();
  puVar8 = (undefined *)piVar11[4];
  *piVar10 = (int)piVar12;
  if (puVar8 == (undefined *)0x0) {
    ClearExclusiveLocal();
    if ((DAT_018dd9a0 == 0 && DAT_018dd9a4 == 0) ||
       (DAT_018dd9a0 != *piVar12 || DAT_018dd9a4 != piVar11[3])) goto LAB_015f6fa4;
    uVar9 = 4;
    puVar8 = &DAT_0058d26d;
LAB_015f6f7c:
    local_2c = 0;
    local_30 = 0;
    local_34 = 0;
    local_38 = (int *)0x0;
    if (0xe < uVar9) {
      uVar9 = 0xf;
    }
    FUN_016dd1aa(&local_38,puVar8,uVar9);
  }
  else {
    local_2c = 0;
    local_30 = 0;
    local_34 = 0;
    local_38 = (int *)0x0;
    uVar9 = piVar11[5] - 1;
    if (uVar9 != 0) goto LAB_015f6f7c;
  }
  local_48 = local_38;
  uStack_44 = local_34;
  uStack_40 = local_30;
  uStack_3c = local_2c;
  uVar5 = FUN_016df688();
  FUN_016df6b0(uVar5,&local_48);
LAB_015f6fa4:
  uVar5 = param_1[1];
  iVar3 = param_1[2];
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar11;
    bVar2 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar2);
  *piVar11 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015e92c0(*param_1);
  }
  thunk_FUN_016d3fb4(param_1);
  uVar7 = FUN_015f0744(0);
  (**(code **)(iVar3 + 0xc))(uVar5);
  if (*(int *)(iVar3 + 4) != 0) {
    thunk_FUN_016d3fb4(uVar5);
  }
  FUN_015f22a4(uVar7);
  return 0;
}

