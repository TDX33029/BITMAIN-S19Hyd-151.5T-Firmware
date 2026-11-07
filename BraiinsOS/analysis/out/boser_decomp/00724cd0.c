// FUN_00724cd0 @ 00724cd0 size=124 calls_out=3 calls_in=1
// strings: 

undefined4 FUN_00724cd0(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uVar3 = param_1[2];
  FUN_018a7af8(&local_28);
  iVar4 = param_1[2];
  if (iVar4 == *param_1) {
    FUN_0199b2b0(param_1);
  }
  puVar1 = (undefined4 *)(param_1[1] + iVar4 * 0xc);
  *puVar1 = local_28;
  puVar1[1] = uStack_24;
  puVar1[2] = uStack_20;
  uVar2 = iVar4 + 1;
  param_1[2] = uVar2;
  if (uVar2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar3,uVar2,&DAT_01c07870);
  }
  return *(undefined4 *)(param_1[1] + uVar3 * 0xc + 4);
}

