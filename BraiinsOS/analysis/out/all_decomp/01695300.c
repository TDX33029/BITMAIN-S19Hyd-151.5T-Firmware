// FUN_01695300 @ 01695300 size=396 calls_out=4 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01695300(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5
                 )

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int *local_28;
  undefined1 local_24;
  
  do {
    if (*param_1 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(param_1);
      goto LAB_01695334;
    }
    bVar3 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar3);
  *param_1 = 1;
  DataMemoryBarrier(0xb);
LAB_01695334:
  uVar7 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar2 = (char)param_1[1];
  }
  else {
    uVar7 = FUN_015bf3f8();
    uVar7 = uVar7 ^ 1;
    cVar2 = (char)param_1[1];
  }
  if (cVar2 != '\0') {
    local_24 = (undefined1)uVar7;
    local_28 = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_28,&DAT_018ae110,&DAT_018ae0e0);
  }
  do {
    iVar4 = *param_3;
    bVar3 = (bool)hasExclusiveAccess(param_3);
  } while (!bVar3);
  *param_3 = iVar4 + 1;
  if (iVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1695474);
    (*pcVar1)();
  }
  iVar4 = param_1[4];
  if (iVar4 == param_1[2]) {
    FUN_01699b34();
  }
  puVar5 = (undefined4 *)(param_1[3] + iVar4 * 0xc);
  *puVar5 = param_3;
  puVar5[1] = param_2;
  puVar5[2] = 0;
  iVar6 = iVar4 + 1;
  param_1[4] = iVar6;
  if (iVar4 == -1) {
    iVar6 = param_1[7];
  }
  DataMemoryBarrier(0xb);
  *(bool *)(param_1 + 8) = iVar4 == -1 && iVar6 == 0;
  DataMemoryBarrier(0xb);
  if (((uVar7 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar4 = FUN_015bf3f8(), iVar4 == 0))
  {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *param_1;
    bVar3 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar3);
  *param_1 = 0;
  if (iVar4 == 2) {
    software_interrupt(0);
    FUN_016d3496(param_1,0x81,1,param_5);
    return;
  }
  return;
}

