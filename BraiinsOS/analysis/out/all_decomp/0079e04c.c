// FUN_0079e04c @ 0079e04c size=376 calls_out=5 calls_in=5
// strings: 

undefined8 FUN_0079e04c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int *local_28;
  undefined1 local_24;
  
  piVar6 = (int *)(param_1 + 8);
  do {
    if (*piVar6 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar6);
      goto LAB_0079e080;
    }
    bVar3 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar3);
  *piVar6 = 1;
  DataMemoryBarrier(0xb);
LAB_0079e080:
  uVar7 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar2 = *(char *)(param_1 + 0xc);
  }
  else {
    uVar7 = FUN_015bf3f8();
    uVar7 = uVar7 ^ 1;
    cVar2 = *(char *)(param_1 + 0xc);
  }
  if (cVar2 != '\0') {
    local_24 = (undefined1)uVar7;
    local_28 = piVar6;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_0033ff11,0x1e,&local_28,&DAT_018599b0,&DAT_01859d44);
  }
  piVar1 = (int *)(param_1 + 0x18);
  iVar8 = *piVar1;
  uVar5 = *(undefined8 *)piVar1;
  uVar4 = *(undefined8 *)piVar1;
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_0033ff53,0x1d,&DAT_01859d64);
  }
  if (((uVar7 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar8 = FUN_015bf3f8(), iVar8 == 0))
  {
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *piVar6;
    bVar3 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar3);
  *piVar6 = 0;
  if (iVar8 == 2) {
    FUN_016d6968(0xf0,piVar6,0x81,1);
    return uVar5;
  }
  return uVar4;
}

