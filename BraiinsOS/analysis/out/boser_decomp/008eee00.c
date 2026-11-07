// FUN_008eee00 @ 008eee00 size=552 calls_out=10 calls_in=1
// strings: 

void FUN_008eee00(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int *local_28;
  code *local_24;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x65)) {
  case 0:
    *(undefined1 *)(param_2 + 0x19) = 0;
    param_2[0x12] = param_2[0x18];
    iVar5 = *(int *)(param_2[0x17] + 8);
    puVar7 = *(undefined4 **)(param_2[0x17] + 4);
    param_2[0x15] = 0;
    puVar8 = puVar7 + iVar5;
    param_2[0x13] = (int)puVar7;
    param_2[0x14] = (int)puVar8;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c0c158);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0c158);
  case 3:
    goto switchD_008eee20_caseD_3;
  }
  do {
    if (puVar7 == puVar8) {
      param_2[1] = 0;
      local_24 = FUN_00a20c40;
      local_28 = param_2 + 0x12;
      FUN_00664898(&local_34,&DAT_0059efe0,&local_28);
      iVar5 = local_30;
      iVar9 = local_2c;
LAB_008ef020:
      *param_1 = local_34;
      param_1[1] = iVar5;
      param_1[2] = iVar9;
      uVar4 = 1;
LAB_008ef028:
      *(undefined1 *)((int)param_2 + 0x65) = uVar4;
      return;
    }
    piVar6 = (int *)*puVar7;
    param_2[0x13] = (int)(puVar7 + 1);
    do {
      iVar5 = *piVar6;
      bVar10 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar10);
    *piVar6 = iVar5 + 1;
    if (iVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x8ef034);
      (*pcVar1)();
    }
    *(undefined1 *)(param_2 + 0x19) = 1;
    iVar5 = param_2[0x15];
    *param_2 = iVar5;
    param_2[1] = (int)piVar6;
    param_2[2] = iVar5;
    param_2[0x15] = iVar5 + 1;
    param_2[3] = (int)piVar6;
    *(undefined1 *)(param_2 + 0x11) = 0;
    param_2[4] = (int)(param_2 + 3);
switchD_008eee20_caseD_3:
    uVar11 = FUN_008f069c(param_2 + 4,param_3);
    iVar5 = (int)((ulonglong)uVar11 >> 0x20);
    if ((int)uVar11 == 0) {
      *param_1 = 0x80000001;
      uVar4 = 3;
      goto LAB_008ef028;
    }
    if ((char)param_2[0x11] == '\x03') {
      cVar2 = (char)param_2[0x10];
      bVar10 = cVar2 == '\x03';
      if (bVar10) {
        cVar2 = (char)param_2[0xf];
      }
      if (bVar10 && cVar2 == '\x03') {
        FUN_0193c3cc(param_2 + 7);
      }
    }
    FUN_006666fc(&local_34,*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8));
    FUN_019f8c54((int)uVar11,1);
    iVar3 = local_30;
    if ((*(int *)(param_2[0x12] + 8) == local_2c) &&
       (iVar5 = thunk_FUN_01bed842(*(undefined4 *)(param_2[0x12] + 4),local_30), iVar5 == 0)) {
      iVar5 = param_2[2];
      iVar9 = param_2[3];
      *(undefined1 *)(param_2 + 0x19) = 0;
      FUN_019bb7e0(local_34,iVar3);
      *(undefined1 *)(param_2 + 0x19) = 0;
      local_34 = 0x80000000;
      goto LAB_008ef020;
    }
    FUN_019bb7e0(local_34,iVar3);
    piVar6 = (int *)param_2[3];
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar6;
      bVar10 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar10);
    *piVar6 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00b5f128(param_2[3]);
    }
    puVar7 = (undefined4 *)param_2[0x13];
    puVar8 = (undefined4 *)param_2[0x14];
    *(undefined1 *)(param_2 + 0x19) = 0;
  } while( true );
}

