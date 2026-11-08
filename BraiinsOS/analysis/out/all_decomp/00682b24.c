// FUN_00682b24 @ 00682b24 size=476 calls_out=5 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00682b24(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int local_30;
  int *local_2c;
  code *local_28;
  
  iVar8 = *param_2;
  piVar5 = (int *)(iVar8 + 8);
  do {
    if (*piVar5 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar5);
      goto LAB_00682b54;
    }
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = 1;
  DataMemoryBarrier(0xb);
LAB_00682b54:
  uVar7 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(iVar8 + 0xc);
  }
  else {
    uVar7 = FUN_015bf3f8(param_1,param_2,param_3,param_4);
    uVar7 = uVar7 ^ 1;
    cVar1 = *(char *)(iVar8 + 0xc);
  }
  if (cVar1 != '\0') {
    uVar3 = (uint)local_28 >> 8;
    local_28 = (code *)CONCAT31((int3)uVar3,(char)uVar7);
    local_2c = piVar5;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_018587a0,&DAT_018a58fc);
  }
  local_30 = param_2[2];
  if (((*(uint *)(iVar8 + 0x198) <= (uint)param_2[1]) ||
      (piVar6 = (int *)(*(int *)(iVar8 + 0x194) + param_2[1] * 0xf8), *piVar6 == 3 && piVar6[1] == 0
      )) || (piVar6[0x35] != local_30)) {
    local_2c = &local_30;
    local_28 = FUN_0101a4ac;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00599806,&local_2c,&DAT_01882560);
  }
  FUN_0102d6e8(param_1,param_3,piVar6,param_4);
  if (((uVar7 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar4 = FUN_015bf3f8(), iVar4 == 0))
  {
    *(undefined1 *)(iVar8 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = 0;
  if (iVar8 == 2) {
    software_interrupt(0);
    FUN_016d3496(piVar5,0x81,1,param_5);
    return;
  }
  return;
}

