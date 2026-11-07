// FUN_014abba4 @ 014abba4 size=464 calls_out=5 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014abba4(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int local_2c;
  int *local_28;
  code *local_24;
  
  iVar7 = *param_2;
  piVar6 = (int *)(iVar7 + 8);
  do {
    if (*piVar6 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar6);
      goto LAB_014abbd4;
    }
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = 1;
  DataMemoryBarrier(0xb);
LAB_014abbd4:
  uVar8 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(iVar7 + 0xc);
  }
  else {
    uVar8 = FUN_015bf3f8(param_1);
    uVar8 = uVar8 ^ 1;
    cVar1 = *(char *)(iVar7 + 0xc);
  }
  if (cVar1 != '\0') {
    uVar3 = (uint)local_24 >> 8;
    local_24 = (code *)CONCAT31((int3)uVar3,(char)uVar8);
    local_28 = piVar6;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_28,&DAT_018a5c2c,&DAT_018a58fc);
  }
  local_2c = param_2[2];
  if (((*(uint *)(iVar7 + 0x198) <= (uint)param_2[1]) ||
      (piVar5 = (int *)(*(int *)(iVar7 + 0x194) + param_2[1] * 0xf8), *piVar5 == 3 && piVar5[1] == 0
      )) || (piVar5[0x35] != local_2c)) {
    local_28 = &local_2c;
    local_24 = FUN_0101a4ac;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00599806,&local_28,&DAT_01882560);
  }
  FUN_0102d6e8(param_1,param_3,piVar5,1);
  if (((uVar8 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar4 = FUN_015bf3f8(), iVar4 == 0))
  {
    *(undefined1 *)(iVar7 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = 0;
  if (iVar7 == 2) {
    software_interrupt(0);
    FUN_016d3496(piVar6,0x81,1,param_5);
    return;
  }
  return;
}

