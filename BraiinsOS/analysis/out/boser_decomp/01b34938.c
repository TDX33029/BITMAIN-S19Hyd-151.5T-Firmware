// FUN_01b34938 @ 01b34938 size=284 calls_out=5 calls_in=1
// strings: 

undefined4 FUN_01b34938(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint local_28;
  int local_24;
  
  local_24 = DAT_01d53560;
  FUN_01b2e894(param_4,param_2,&PTR_01d3b2b0,0);
  piVar1 = (int *)FUN_01b2e970(param_4);
  if ((piVar1 == (int *)0x0) ||
     (iVar2 = FUN_01b34550(piVar1,&local_28,param_2,param_3,param_4), iVar2 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar3 = 0;
    if (piVar1[1] != 0) {
      local_28 = *(uint *)*piVar1 ^ 1 | local_28;
      for (iVar2 = 1; iVar2 < piVar1[1]; iVar2 = iVar2 + 1) {
        local_28 = local_28 | ((uint *)*piVar1)[iVar2];
      }
      uVar3 = (uint)(local_28 == 0);
    }
    uVar4 = 1;
    *param_1 = uVar3;
  }
  FUN_01b2ebbc(param_4);
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar4;
}

