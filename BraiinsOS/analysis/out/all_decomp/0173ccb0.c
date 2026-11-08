// FUN_0173ccb0 @ 0173ccb0 size=400 calls_out=8 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/evp/digestsign.c

bool FUN_0173ccb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined4 local_78;
  undefined1 auStack_74 [24];
  undefined1 auStack_5c [64];
  uint local_1c;
  
  local_1c = DAT_018ddaf8;
  iVar2 = (*(int **)(param_1 + 0xc))[2];
  if ((((*(int *)(iVar2 + 4) == 0x3e1) &&
       (puVar3 = *(undefined4 **)(iVar2 + 8), puVar3 != (undefined4 *)0x0)) &&
      (*(int *)*puVar3 - 0x3e2U < 3)) ||
     ((*(int *)(**(int **)(param_1 + 0xc) + 0x24) == 0 ||
      (iVar2 = FUN_0173cab0(param_1), iVar2 != 0)))) {
    uVar1 = FUN_016e9cd0(6,0,0x7d,"/aws-lc/crypto/fipsmodule/evp/digestsign.c",0xc4);
    bVar4 = false;
  }
  else {
    FUN_0172aab0(auStack_74);
    iVar2 = FUN_0172ad04(auStack_74,param_1);
    bVar4 = false;
    if (iVar2 != 0) {
      iVar2 = FUN_0172afb8(auStack_74,auStack_5c,&local_78);
      if (iVar2 != 0) {
        iVar2 = FUN_0173b878(*(undefined4 *)(param_1 + 0xc),param_2,param_3,auStack_5c,local_78);
        bVar4 = iVar2 != 0;
      }
    }
    uVar1 = FUN_0172aae8(auStack_74);
  }
  if ((local_1c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar1,local_1c ^ DAT_018ddaf8,0);
  }
  return bVar4;
}

