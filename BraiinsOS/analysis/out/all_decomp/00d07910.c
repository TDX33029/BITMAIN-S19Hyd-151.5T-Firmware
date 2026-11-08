// FUN_00d07910 @ 00d07910 size=208 calls_out=4 calls_in=2
// strings: 

void FUN_00d07910(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_90 [112];
  
  FUN_016dd1aa((uint)auStack_90 | 4,param_2,0x68);
  iVar5 = *(int *)(param_2 + 0x68);
  iVar4 = *(int *)(param_2 + 0x6c);
  iVar6 = *(int *)(param_2 + 0x70);
  iVar3 = *(int *)(param_2 + 0x74);
  piVar2 = (int *)thunk_FUN_016d4a50(0x128);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x128);
  }
  piVar2[2] = 0;
  *piVar2 = 1;
  piVar2[1] = 1;
  FUN_016dd1aa(piVar2 + 3,auStack_90,0x6c);
  piVar2[0x1e] = iVar5;
  piVar2[0x1f] = iVar4;
  piVar2[0x20] = iVar6;
  piVar2[0x21] = iVar3;
  FUN_016dd606(piVar2 + 0x22,0,0x94);
  piVar2[0x47] = 1;
  piVar2[0x48] = 1;
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + 1;
  if (iVar3 < 0) {
    software_udf(0xfdee,0xd079d0);
    return;
  }
  *param_1 = piVar2;
  param_1[1] = piVar2;
  param_1[2] = 0;
  return;
}

