// FUN_0087c76c @ 0087c76c size=316 calls_out=5 calls_in=0
// strings: 

undefined4 FUN_0087c76c(int *param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_50 [24];
  char local_38 [24];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[3]) {
  case '\0':
    piVar2 = *(int **)(*param_1 + 0x158);
    iVar6 = *(int *)(*param_1 + 0x15c);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + 1;
    if (iVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xfdee,0x87c8b4);
      (*pcVar3)();
    }
    uVar8 = (**(code **)(iVar6 + 0x14))();
    *(undefined8 *)(param_1 + 1) = uVar8;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018619b0);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018619b0);
  case '\x03':
    uVar8 = *(undefined8 *)(param_1 + 1);
  }
  (**(code **)((int)((ulonglong)uVar8 >> 0x20) + 0xc))(local_38,(int)uVar8,param_2);
  if (local_38[0] == '\x05') {
    *(undefined1 *)(param_1 + 3) = 3;
    return 1;
  }
  uVar5 = (uint)local_38 | 1;
  FUN_016dd1aa(auStack_50,uVar5,0x17);
  iVar6 = param_1[1];
  puVar7 = (undefined4 *)param_1[2];
  pcVar3 = (code *)*puVar7;
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(iVar6);
  }
  if (puVar7[1] != 0) {
    thunk_FUN_016d3fb4(iVar6);
  }
  if (local_38[0] != '\x04') {
    FUN_016dd1aa(uVar5,auStack_50,0x17);
    FUN_00809738(local_38);
  }
  *(undefined1 *)(param_1 + 3) = 1;
  return 0;
}

