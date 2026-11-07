// FUN_010274ac @ 010274ac size=484 calls_out=5 calls_in=2
// strings: 

uint FUN_010274ac(int *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int local_24;
  int *local_20;
  code *local_1c;
  
  iVar9 = *param_1;
  piVar7 = (int *)(iVar9 + 8);
  do {
    if (*piVar7 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar7);
      goto LAB_010274dc;
    }
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = 1;
  DataMemoryBarrier(0xb);
LAB_010274dc:
  uVar8 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(iVar9 + 0xc);
  }
  else {
    uVar8 = FUN_015bf3f8();
    uVar8 = uVar8 ^ 1;
    cVar1 = *(char *)(iVar9 + 0xc);
  }
  if (cVar1 != '\0') {
    uVar4 = (uint)local_1c >> 8;
    local_1c = (code *)CONCAT31((int3)uVar4,(char)uVar8);
    local_20 = piVar7;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_20,&DAT_01882f54,&DAT_01882e74);
  }
  local_24 = param_1[2];
  if (((*(uint *)(iVar9 + 0x198) <= (uint)param_1[1]) ||
      (piVar6 = (int *)(*(int *)(iVar9 + 0x194) + param_1[1] * 0xf8), *piVar6 == 3 && piVar6[1] == 0
      )) || (piVar6[0x35] != local_24)) {
    local_20 = &local_24;
    local_1c = FUN_0101a4ac;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00599806,&local_20,&DAT_01882550);
  }
  bVar3 = *(byte *)(piVar6 + 8) - 6;
  if (*(byte *)(piVar6 + 8) < 6) {
    bVar3 = 6;
  }
  uVar4 = 0;
  if ((bVar3 < 7) && ((1 << (uint)bVar3 & 0x62U) != 0)) {
    uVar4 = piVar6[0x2d] ^ 1;
  }
  if (((uVar8 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar5 = FUN_015bf3f8(), iVar5 == 0))
  {
    *(undefined1 *)(iVar9 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar9 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = 0;
  if (iVar9 == 2) {
    FUN_016d6968(0xf0,piVar7,0x81,1);
    return uVar4;
  }
  return uVar4;
}

