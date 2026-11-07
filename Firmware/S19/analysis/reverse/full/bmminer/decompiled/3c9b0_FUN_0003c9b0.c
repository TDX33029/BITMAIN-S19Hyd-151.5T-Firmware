// FUN_0003c9b0 @ 0003c9b0  size=292  callers=0
// program: bmminer


undefined4 FUN_0003c9b0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  char acStack_828 [2052];
  
  uVar6 = *(undefined4 *)(DAT_00507488 + (param_1 + 0x202802) * 4);
  uVar1 = FUN_0002001c();
  uVar1 = FUN_00067190(uVar6,uVar1);
  uVar6 = FUN_0002008c();
  uVar2 = FUN_00067190(uVar1,uVar6);
  iVar3 = FUN_0002001c();
  if (iVar3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    iVar8 = 0;
    do {
      for (uVar7 = 0; uVar5 = FUN_0002008c(), uVar7 < uVar5; uVar7 = uVar7 + 1) {
        iVar4 = FUN_0002008c();
        iVar4 = iVar8 * iVar4 + uVar7;
        uVar5 = *(uint *)(DAT_00507488 + (iVar4 + param_1 * 0x40 + 0x202806) * 4);
        if ((uVar5 < uVar2 >> 1) && (uVar1 = 1, 3 < DAT_00087bbc)) {
          snprintf(acStack_828,0x800,
                   "Domain unbalance happen, chain = %d, domain = %d, nonce_num_domain = %d, threshold = %d.\n"
                   ,param_1,iVar4,uVar5,uVar2 >> 1);
          FUN_00032218(3,acStack_828,0);
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar3 != iVar8);
  }
  return uVar1;
}

