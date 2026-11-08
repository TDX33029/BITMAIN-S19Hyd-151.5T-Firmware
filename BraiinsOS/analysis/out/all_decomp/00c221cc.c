// FUN_00c221cc @ 00c221cc size=156 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_00c221cc(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined1 auStack_2b8 [328];
  undefined4 local_170;
  int *local_168;
  undefined1 auStack_160 [328];
  
  iVar3 = *(int *)(param_1 + 0x230);
  FUN_00c0d1cc(auStack_160,iVar3);
  local_168 = *(int **)(param_1 + 0x234);
  local_170 = *(undefined4 *)(iVar3 + 0x148);
  do {
    iVar3 = *local_168;
    bVar2 = (bool)hasExclusiveAccess(local_168);
  } while (!bVar2);
  *local_168 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xc22264);
    (*pcVar1)();
  }
  FUN_016dd1aa(auStack_2b8,auStack_160,0x148);
  iVar3 = thunk_FUN_016d4a50(0x158);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x158);
  }
  FUN_016dd1aa(iVar3,auStack_2b8,0x158);
  return CONCAT44(&UNK_01872d0c,iVar3);
}

