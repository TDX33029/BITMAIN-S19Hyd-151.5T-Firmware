// FUN_0069c520 @ 0069c520 size=172 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_0069c520(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_0128fca4(&local_1c,param_1,0);
  uVar2 = *param_2;
  iVar3 = param_2[1];
  iVar1 = FUN_01291dd8(local_1c,uVar2,iVar3);
  if (iVar1 == 0) {
    pcVar4 = *(code **)(iVar3 + 0x10);
    iVar1 = (*pcVar4)(uVar2,0x20);
    if (((iVar1 == 0) && (iVar1 = FUN_0128e43c(local_18,local_14,uVar2,iVar3), iVar1 == 0)) &&
       (iVar1 = (*pcVar4)(uVar2,0x20), iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0069c5c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(iVar3 + 0xc))(uVar2,&DAT_0041a246,3);
      return uVar2;
    }
  }
  return 1;
}

