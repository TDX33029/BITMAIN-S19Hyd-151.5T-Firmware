// FUN_01445c0c @ 01445c0c size=312 calls_out=4 calls_in=0
// strings: 

int FUN_01445c0c(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *local_18;
  undefined1 local_14;
  
  do {
    if (*param_1 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(param_1);
      goto LAB_01445c38;
    }
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = 1;
  DataMemoryBarrier(0xb);
LAB_01445c38:
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    if ((char)param_1[1] != '\0') {
      uVar3 = 0;
      goto LAB_01445cd4;
    }
    iVar2 = param_1[0x2e];
  }
  else {
    uVar3 = FUN_015bf3f8();
    uVar3 = uVar3 ^ 1;
    if ((char)param_1[1] != '\0') {
LAB_01445cd4:
      local_14 = (undefined1)uVar3;
      local_18 = param_1;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_18,&DAT_018a4108,&DAT_018a5a0c);
    }
    iVar2 = param_1[0x2e];
    if (uVar3 != 0) goto LAB_01445c74;
  }
  if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar4 = FUN_015bf3f8(), iVar4 == 0)) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
LAB_01445c74:
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = 0;
  if (iVar4 == 2) {
    FUN_016d6968(0xf0,param_1,0x81,1);
    return iVar2;
  }
  return iVar2;
}

