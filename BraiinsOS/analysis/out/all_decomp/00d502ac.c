// FUN_00d502ac @ 00d502ac size=200 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_00d502ac(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_2d0 [328];
  uint local_188;
  undefined4 local_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  int *piStack_178;
  undefined1 auStack_170 [328];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar4 = *(int *)(param_1 + 0x230);
  FUN_00d4b680(auStack_170,iVar4);
  bVar5 = *(int *)(iVar4 + 0x148) == 1;
  if (bVar5) {
    local_28 = *(undefined4 *)(iVar4 + 0x14c);
    uStack_24 = *(undefined4 *)(iVar4 + 0x150);
    uStack_20 = *(undefined4 *)(iVar4 + 0x154);
  }
  piVar3 = *(int **)(param_1 + 0x234);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + 1;
  if (iVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xd50370);
    (*pcVar1)();
  }
  FUN_016dd1aa(auStack_2d0,auStack_170,0x148);
  local_184 = local_28;
  uStack_180 = uStack_24;
  uStack_17c = uStack_20;
  local_188 = (uint)bVar5;
  piStack_178 = piVar3;
  iVar4 = thunk_FUN_016d4a50(0x160);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x160);
  }
  FUN_016dd1aa(iVar4,auStack_2d0,0x160);
  return CONCAT44(&UNK_018777cc,iVar4);
}

