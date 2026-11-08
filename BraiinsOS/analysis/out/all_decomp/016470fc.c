// FUN_016470fc @ 016470fc size=348 calls_out=4 calls_in=6
// strings: RNG seed generator is internally corrupt

undefined8 FUN_016470fc(int *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *local_20;
  undefined1 local_1c;
  
  do {
    if (*param_1 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(param_1);
      goto LAB_01647128;
    }
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 1;
  DataMemoryBarrier(0xb);
LAB_01647128:
  uVar5 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = (char)param_1[1];
  }
  else {
    uVar5 = FUN_015bf3f8();
    uVar5 = uVar5 ^ 1;
    cVar1 = (char)param_1[1];
  }
  if (cVar1 != '\0') {
    local_1c = (undefined1)uVar5;
    local_20 = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("RNG seed generator is internally corrupt",0x28,&local_20,&DAT_018acad0,
                 &DAT_018acb28);
  }
  uVar7 = param_1[3];
  uVar3 = param_1[2] ^ param_1[2] << 0x11;
  uVar3 = uVar7 >> 0x10 ^ uVar3 >> 7 ^ uVar7 ^ uVar3;
  uVar4 = uVar7 ^ uVar7 << 0x11;
  uVar4 = uVar4 >> 7 ^ uVar3 >> 0x10 ^ uVar4 ^ uVar3;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  if (((uVar5 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar6 = FUN_015bf3f8(), iVar6 == 0))
  {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 0;
  if (iVar6 == 2) {
    FUN_016d6968(0xf0,param_1,0x81,1);
    return CONCAT44(uVar4 + uVar3,uVar3 + uVar7);
  }
  return CONCAT44(uVar4 + uVar3,uVar3 + uVar7);
}

