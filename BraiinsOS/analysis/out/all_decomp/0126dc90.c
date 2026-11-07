// FUN_0126dc90 @ 0126dc90 size=300 calls_out=7 calls_in=3
// strings: 

void FUN_0126dc90(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_110 [2];
  char local_10e;
  int local_9c;
  uint local_98;
  int local_94;
  undefined1 auStack_90 [108];
  int local_24;
  
  FUN_016dd606(auStack_110,0,0x6e);
  local_9c = 0x6e;
  iVar1 = FUN_016d6e26(param_2,auStack_110,&local_9c,0x80800);
  if (iVar1 < 0) {
    piVar2 = (int *)FUN_016d2bc8();
    iVar1 = *piVar2;
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = -1;
    param_1[2] = iVar1;
    return;
  }
  uVar4 = 0;
  if (local_10e != '\0') {
    uVar4 = local_9c - 2;
  }
  if (0x6c < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar4,0x6c,&DAT_0188b4a8);
  }
  if (uVar4 == 0) {
    uVar4 = 0;
  }
  else if (*(char *)(((uint)auStack_110 | 2) + (uVar4 - 1)) == '\0') {
    uVar4 = uVar4 - 1;
  }
  FUN_015f03ac(&local_98,(uint)auStack_110 | 2,uVar4);
  if ((local_98 & 1) == 0) {
    FUN_016dd1aa(param_1 + 3,auStack_90,0x6a);
    *param_1 = iVar1;
    param_1[1] = local_24;
    param_1[2] = local_94;
    return;
  }
  piVar2 = (int *)((uint)&local_98 | 4);
  *param_1 = -1;
  iVar3 = piVar2[1];
  param_1[1] = *piVar2;
  param_1[2] = iVar3;
  FUN_016dffb2(iVar1);
  return;
}

