// FUN_01663af4 @ 01663af4 size=388 calls_out=5 calls_in=13
// strings: assertion failed: locked_node.num_handles > 0frame size too big

void FUN_01663af4(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *local_18;
  undefined1 local_14;
  
  piVar4 = param_1 + 6;
  do {
    if (*piVar4 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar4);
      goto LAB_01663b20;
    }
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = 1;
  DataMemoryBarrier(0xb);
LAB_01663b20:
  uVar5 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = (char)param_1[7];
  }
  else {
    uVar5 = FUN_015bf3f8();
    uVar5 = uVar5 ^ 1;
    cVar1 = (char)param_1[7];
  }
  if (cVar1 != '\0') {
    local_14 = (undefined1)uVar5;
    local_18 = piVar4;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_18,&DAT_018ad534,&DAT_018ad4a4);
  }
  if (param_1[0xd] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: locked_node.num_handles > 0frame size too big",0x2d,
                 &DAT_018ad4b4);
  }
  param_1[0xd] = param_1[0xd] + 1;
  if (((uVar5 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar3 = FUN_015bf3f8(), iVar3 == 0))
  {
    *(undefined1 *)(param_1 + 7) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = 0;
  if (iVar3 == 2) {
    FUN_016d6968(0xf0,piVar4,0x81,1);
  }
  do {
    iVar3 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = iVar3 + 1;
  if (iVar3 < 0) {
    software_udf(0xfdee,0x1663bb4);
    return;
  }
  return;
}

