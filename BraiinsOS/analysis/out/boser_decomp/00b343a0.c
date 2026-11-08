// FUN_00b343a0 @ 00b343a0 size=228 calls_out=4 calls_in=2
// strings: 

void FUN_00b343a0(int *param_1,char param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(*param_1 + 8);
  iVar4 = iVar5 + 0x98;
  FUN_00a981d4(iVar4);
  if (((((uint)(*(uint *)(iVar5 + 0xa0) < 3) <= (uint)-*(int *)(iVar5 + 0xa4)) ||
       (iVar2 = thunk_FUN_01bed842(iVar5 + 0xb8,param_1 + 1,0x10), iVar2 != 0)) ||
      (*(char *)(iVar5 + 0xca) != (char)param_1[5])) ||
     ((*(char *)(iVar5 + 200) == '\x01' && (*(char *)(iVar5 + 0xc9) == param_2)))) {
    FUN_009dd354(iVar4);
    return;
  }
  *(uint *)(iVar5 + 0xa0) = 2;
  *(undefined4 *)(iVar5 + 0xa4) = 0;
  *(undefined1 *)(iVar5 + 200) = 1;
  piVar3 = (int *)(iVar5 + 0xd0);
  *(char *)(iVar5 + 0xc9) = param_2;
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = *piVar3 + 2;
  FUN_009dd354(iVar4);
  iVar4 = 0;
  do {
    FUN_019e03e8(iVar5 + 8 + iVar4);
    iVar4 = iVar4 + 0x10;
  } while (iVar4 != 0x80);
  return;
}

