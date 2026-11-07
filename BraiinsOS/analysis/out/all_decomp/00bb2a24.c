// FUN_00bb2a24 @ 00bb2a24 size=412 calls_out=7 calls_in=4
// strings: all branches are disabled and there is no else branch

undefined4 FUN_00bb2a24(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined1 auStack_c0 [80];
  undefined1 auStack_70 [80];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x21)) {
  case 0:
    param_1[4] = *param_1;
    param_1[5] = param_1[1];
    param_1[6] = param_1[2];
    puVar7 = (undefined1 *)((int)param_1 + 0x85);
    *puVar7 = 0;
    piVar6 = *(int **)param_1[0x20];
    do {
      iVar4 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar4 + 1;
    if (iVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xbb2bcc);
      (*pcVar1)();
    }
    piVar5 = piVar6 + 0xd;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar4 + 1;
    DataMemoryBarrier(0xb);
    FUN_01656eb8(auStack_c0,&DAT_01875f38,param_1[4],param_1[5],param_1[6],&DAT_01875f38,piVar6,
                 iVar4);
    FUN_016dd1aa(auStack_70,auStack_c0,0x50);
    puVar8 = param_1 + 8;
    *puVar8 = piVar6;
    param_1[9] = iVar4;
    FUN_016dd1aa(param_1 + 10,auStack_70,0x50);
    param_1[0x1e] = puVar7;
    param_1[0x1f] = puVar8;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01875f48);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01875f48);
  case 3:
    puVar7 = (undefined1 *)param_1[0x1e];
    puVar8 = (undefined4 *)param_1[0x1f];
  }
  cVar3 = FUN_00d40058(puVar7,puVar8,param_2);
  if (cVar3 == '\x03') {
    *(undefined1 *)(param_1 + 0x21) = 3;
    return 2;
  }
  FUN_00b9e31c(param_1 + 8);
  if (cVar3 == '\0') {
    *(undefined1 *)(param_1 + 0x21) = 1;
    return 1;
  }
  if (cVar3 != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("all branches are disabled and there is no else branch",0x6b,&DAT_01875f58);
  }
  *(undefined1 *)(param_1 + 0x21) = 1;
  return 0;
}

