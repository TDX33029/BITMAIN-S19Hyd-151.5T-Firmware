// FUN_01117068 @ 01117068 size=1092 calls_out=14 calls_in=1
// strings: internal error: entered unreachable code

void FUN_01117068(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  byte bVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  longlong lVar10;
  int *local_80;
  uint local_7c;
  int local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 local_2c;
  int local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 9)) {
  case 0:
    *(undefined2 *)((int)param_2 + 0x25) = 0x100;
    iVar8 = param_2[3];
    param_2[4] = iVar8;
    iVar7 = iVar8 + 0x14;
    param_2[5] = *param_2;
    param_2[6] = param_2[1];
    param_2[7] = param_2[2];
    DataMemoryBarrier(0xb);
    if (*(int *)(iVar8 + 0x2c) != 0) {
      local_80 = &local_28;
      local_28 = iVar7;
      FUN_019a768c(iVar8 + 0x2c,1,&local_80,&DAT_01c1f8d4,&DAT_01d293e0);
    }
    param_2[10] = iVar7;
    *(undefined1 *)(param_2 + 0x18) = 0;
LAB_01117124:
    *(undefined1 *)(param_2 + 0x17) = 0;
    param_2[0xb] = iVar7;
LAB_01117134:
    *(undefined1 *)(param_2 + 0xe) = 0;
    param_2[0xc] = iVar7;
LAB_01117144:
    param_2[0xd] = iVar7;
LAB_01117148:
    param_2[0xf] = iVar7;
    *(undefined1 *)(param_2 + 0x16) = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 1;
    param_2[0x15] = 1;
    param_2[0x10] = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1f99c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1f99c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x18)) {
    case 0:
      iVar7 = param_2[10];
      goto LAB_01117124;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c23280);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c23280);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x17)) {
    case 0:
      iVar7 = param_2[0xb];
      goto LAB_01117134;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c23290);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c23290);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xe)) {
    case 0:
      iVar7 = param_2[0xc];
      goto LAB_01117144;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c232a0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c232a0);
    case 3:
      iVar7 = param_2[0xd];
      goto LAB_01117148;
    }
    break;
  case 4:
    uVar5 = param_2[0xb];
    goto LAB_01117210;
  }
  bVar2 = FUN_019f9bc4(param_2 + 0xf,param_3);
  if (bVar2 == 2) {
    *(undefined1 *)(param_2 + 0xe) = 4;
    uVar3 = 3;
    *(undefined1 *)(param_2 + 0x17) = 3;
    *(undefined1 *)(param_2 + 0x18) = 3;
    *(undefined1 *)param_1 = 5;
    goto LAB_01117420;
  }
  FUN_0193c3cc(param_2 + 0xf);
  if ((bVar2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c232b0);
  }
  iVar7 = param_2[0xb];
  *(undefined1 *)(param_2 + 0xe) = 1;
  *(undefined1 *)(param_2 + 0x18) = 1;
  *(undefined1 *)(param_2 + 0x17) = 1;
  param_2[8] = iVar7;
  uVar5 = FUN_0120e1e8(&DAT_01c1f9ac);
  uVar6 = *(undefined4 *)(iVar7 + 0x14);
  *(undefined4 *)(iVar7 + 0x14) = uVar5;
  *(undefined1 *)((int)param_2 + 0x25) = 1;
  param_2[10] = uVar6;
  FUN_019f5854(uVar6);
  uVar5 = param_2[10];
  *(undefined1 *)((int)param_2 + 0x25) = 0;
  param_2[0xb] = uVar5;
LAB_01117210:
  FUN_01209998(&local_80,uVar5,*param_3);
  if (((uint)local_80 & 1) != 0) {
    *(undefined1 *)param_1 = 5;
    uVar3 = 4;
    goto LAB_01117420;
  }
  piVar4 = (int *)param_2[0xb];
  if (*piVar4 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar9 = (bool)hasExclusiveAccess(piVar4);
    if (!bVar9) goto LAB_011172a0;
    *piVar4 = 0x84;
  }
  else {
    ClearExclusiveLocal();
LAB_011172a0:
    (**(code **)(piVar4[2] + 0x10))();
  }
  bVar9 = local_78 == 0 && local_74 == 0;
  if (local_78 != 0 || local_74 != 0) {
    bVar9 = local_70 == 0;
  }
  if (!bVar9) {
    FUN_00b76e0c(local_70,local_6c);
LAB_01117508:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1117508);
    (*pcVar1)();
  }
  FUN_00ada0a8(&local_80,param_2[4]);
  piVar4 = local_80;
  if (((char)local_80 == '\x04') || (((uint)local_80 & 0xff) == 4)) {
    iVar7 = param_2[4];
    piVar4 = *(int **)(iVar7 + 0xc);
    do {
      iVar8 = *piVar4;
      bVar9 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar9);
    *piVar4 = iVar8 + 1;
    if (iVar8 < 0) goto LAB_01117508;
    local_7c = *(undefined4 *)(iVar7 + 0x10);
    *(undefined1 *)((int)param_2 + 0x26) = 0;
    local_38 = param_2[5];
    uStack_34 = param_2[6];
    uStack_30 = param_2[7];
    local_2c = 0;
    local_80 = piVar4;
    uVar5 = FUN_0120db94(&local_80,&DAT_01c1f9cc);
    iVar7 = param_2[8];
    piVar4 = *(int **)(iVar7 + 0x14);
    if (*piVar4 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar9 = (bool)hasExclusiveAccess(piVar4);
      if (!bVar9) goto LAB_01117374;
      *piVar4 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_01117374:
      (**(code **)(piVar4[2] + 0x10))();
    }
    *(undefined4 *)(iVar7 + 0x14) = uVar5;
    *(undefined1 *)((int)param_2 + 0x25) = 0;
    lVar10 = FUN_019f8c54(param_2[8],1);
    *(undefined1 *)((int)param_2 + 0x26) = 0;
    piVar4 = (int *)&SUB_00000004;
  }
  else {
    *(undefined1 *)((int)param_2 + 0x25) = 0;
    FUN_019f8c54(param_2[8],1);
    FUN_00ba80d8(param_2 + 5);
    lVar10 = CONCAT44(local_7c >> 8,(uint)piVar4 >> 8 | local_7c << 0x18);
    *(undefined1 *)((int)param_2 + 0x26) = 0;
  }
  uVar3 = 1;
  *param_1 = (uint)piVar4 & 0xff | (uint)(lVar10 << 8);
  param_1[1] = (uint)((ulonglong)lVar10 >> 0x18);
LAB_01117420:
  *(undefined1 *)(param_2 + 9) = uVar3;
  return;
}

