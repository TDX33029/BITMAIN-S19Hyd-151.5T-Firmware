// FUN_01444938 @ 01444938 size=448 calls_out=5 calls_in=1
// strings: 

int FUN_01444938(int *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int local_2c;
  int *local_28;
  code *local_24;
  
  iVar7 = *param_1;
  piVar5 = (int *)(iVar7 + 8);
  do {
    if (*piVar5 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar5);
      goto LAB_01444968;
    }
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = 1;
  DataMemoryBarrier(0xb);
LAB_01444968:
  uVar9 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(iVar7 + 0xc);
  }
  else {
    uVar9 = FUN_015bf3f8();
    uVar9 = uVar9 ^ 1;
    cVar1 = *(char *)(iVar7 + 0xc);
  }
  if (cVar1 != '\0') {
    uVar8 = (uint)local_24 >> 8;
    local_24 = (code *)CONCAT31((int3)uVar8,(char)uVar9);
    local_28 = piVar5;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_28,&DAT_018a4108,&DAT_018a597c);
  }
  local_2c = param_1[2];
  uVar8 = *(uint *)(iVar7 + 0x14c);
  if (((*(uint *)(iVar7 + 0x198) <= (uint)param_1[1]) ||
      (piVar3 = (int *)(*(int *)(iVar7 + 0x194) + param_1[1] * 0xf8), *piVar3 == 3 && piVar3[1] == 0
      )) || (piVar3[0x35] != local_2c)) {
    local_28 = &local_2c;
    local_24 = FUN_0101a4ac;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00599806,&local_28,&DAT_01882550);
  }
  uVar6 = piVar3[0xf];
  uVar10 = piVar3[0x38];
  if (((uVar9 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar4 = FUN_015bf3f8(), iVar4 == 0))
  {
    *(undefined1 *)(iVar7 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = 0;
  if (iVar7 == 2) {
    FUN_016d6968(0xf0,piVar5,0x81,1);
  }
  uVar6 = uVar6 & ~((int)uVar6 >> 0x1f);
  if (uVar8 < uVar6) {
    uVar6 = uVar8;
  }
  iVar7 = uVar6 - uVar10;
  if (uVar6 < uVar10) {
    iVar7 = 0;
  }
  return iVar7;
}

