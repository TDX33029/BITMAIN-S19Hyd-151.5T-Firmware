// FUN_00a805e0 @ 00a805e0 size=312 calls_out=7 calls_in=1
// strings: max receivers

void FUN_00a805e0(int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  piVar4 = *(int **)(param_2 + 0xd4);
  do {
    iVar3 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xa80718);
    (*pcVar1)();
  }
  piVar5 = piVar4 + 4;
  if ((char)*piVar5 == '\0') {
    bVar2 = (bool)hasExclusiveAccess(piVar5);
    if (bVar2) {
      *(char *)piVar5 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_00a8063c;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(piVar5);
LAB_00a8063c:
  FUN_0128236c(piVar5);
  iVar3 = piVar4[10];
  if (iVar3 == 0) {
    *(undefined1 *)(piVar4 + 0xb) = 0;
  }
  else {
    if (iVar3 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("max receivers",0x1b,&DAT_0187ab30);
    }
    if (iVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_0056a0b0,8,&DAT_0187ab40);
    }
  }
  iVar6 = piVar4[6];
  iVar7 = piVar4[7];
  piVar4[10] = iVar3 + 1;
  FUN_01282570(piVar5);
  if ((char)*piVar5 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(piVar5);
      if (bVar2) {
        *(char *)piVar5 = '\0';
        goto LAB_00a806d0;
      }
    } while ((char)*piVar5 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(piVar5);
LAB_00a806d0:
  FUN_016dd1aa(param_1,param_2,0xf0);
  *(int *)(param_1 + 0xf0) = iVar6;
  *(undefined1 *)(param_1 + 0x100) = 1;
  *(int *)(param_1 + 0xf4) = iVar7;
  *(int **)(param_1 + 0xf8) = piVar4;
  return;
}

