// FUN_010ed318 @ 010ed318 size=392 calls_out=4 calls_in=1
// strings: 

undefined4 FUN_010ed318(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int *local_2c;
  int local_28;
  undefined1 local_24;
  
  uVar7 = *(uint *)(param_2 + 8);
  uVar5 = uVar7;
  if (uVar7 < 5) {
    uVar5 = 4;
  }
  param_1 = param_1 + (uVar5 - 1 & 0xfffffff8);
  piVar6 = (int *)(param_1 + 8);
  do {
    if (*piVar6 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar6);
      goto LAB_010ed360;
    }
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = 1;
  DataMemoryBarrier(0xb);
LAB_010ed360:
  uVar5 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(param_1 + 0xc);
  }
  else {
    uVar5 = FUN_015bf3f8();
    uVar5 = uVar5 ^ 1;
    cVar1 = *(char *)(param_1 + 0xc);
  }
  if (cVar1 != '\0') {
    local_24 = (undefined1)uVar5;
    local_2c = piVar6;
    local_28 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00388d90,0x16,&local_2c,&DAT_0188601c,&DAT_0188604c);
  }
  uVar3 = (**(code **)(param_2 + 0xc))((int)piVar6 + (uVar7 - 1 & 0xfffffffb) + 5,param_3);
  if (((uVar5 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar4 = FUN_015bf3f8(), iVar4 == 0))
  {
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = 0;
  if (iVar4 == 2) {
    FUN_016d6968(0xf0,piVar6,0x81,1);
    return uVar3;
  }
  return uVar3;
}

