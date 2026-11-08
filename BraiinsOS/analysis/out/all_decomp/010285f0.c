// FUN_010285f0 @ 010285f0 size=636 calls_out=8 calls_in=1
// strings: 

void FUN_010285f0(int *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int local_b4;
  int *local_b0;
  code *local_ac;
  int local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined1 auStack_9c [120];
  
  iVar9 = *param_1;
  piVar6 = (int *)(iVar9 + 8);
  do {
    if (*piVar6 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar6);
      goto LAB_01028620;
    }
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = 1;
  DataMemoryBarrier(0xb);
LAB_01028620:
  uVar8 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(iVar9 + 0xc);
    piVar3 = local_b0;
  }
  else {
    uVar8 = FUN_015bf3f8();
    uVar8 = uVar8 ^ 1;
    cVar1 = *(char *)(iVar9 + 0xc);
    piVar3 = local_b0;
  }
  if (cVar1 != '\0') {
    uVar5 = (uint)local_ac >> 8;
    local_ac = (code *)CONCAT31((int3)uVar5,(char)uVar8);
    local_b0 = piVar6;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_b0,&DAT_01882f54,&DAT_01882eb4);
  }
  uVar5 = param_1[1];
  local_b4 = param_1[2];
  local_b0 = &local_b4;
  if (((((*(uint *)(iVar9 + 0x198) <= uVar5) ||
        (piVar7 = (int *)(*(int *)(iVar9 + 0x194) + uVar5 * 0xf8), *piVar7 == 3 && piVar7[1] == 0))
       || (piVar7[0x35] != local_b4)) ||
      ((*(undefined1 *)(piVar7 + 0x3c) = 0, *(uint *)(iVar9 + 0x198) <= uVar5 ||
       (piVar7 = (int *)(*(int *)(iVar9 + 0x194) + uVar5 * 0xf8), *piVar7 == 3 && piVar7[1] == 0))))
     || (piVar7[0x35] != local_b4)) {
    local_ac = FUN_0101a4ac;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00599806,&local_b0,&DAT_01882560);
  }
  local_b0 = piVar3;
  while (FUN_0102fb64(&local_b0,piVar7 + 0x2d,iVar9 + 0xa4),
        local_b0 != (int *)0x6 || local_ac != (code *)0x0) {
    iVar4 = 0;
    if ((uint)(local_b0 < (int *)0x4) <= (uint)-(int)local_ac) {
      iVar4 = (int)local_b0 - 3;
    }
    if (iVar4 == 0) {
      FUN_01015a80(&local_b0,0,3 - (int)local_b0);
    }
    else if (iVar4 == 1) {
      (**(code **)(local_a8 + 0x10))(auStack_9c,uStack_a4,uStack_a0);
    }
    else {
      FUN_01015c1c(&local_a8);
    }
  }
  if (((uVar8 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar4 = FUN_015bf3f8(), iVar4 == 0))
  {
    *(undefined1 *)(iVar9 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar9 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = 0;
  if (iVar9 == 2) {
    FUN_016d6968(0xf0,piVar6,0x81,1);
    return;
  }
  return;
}

