// FUN_01b3f584 @ 01b3f584 size=164 calls_out=3 calls_in=3
// strings: aws_lc_0_39_0_ec_felem_neg | /aws-lc/crypto/fipsmodule/ec/felem.c | borrow == 0

undefined8 FUN_01b3f584(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  
  uVar1 = FUN_01b3f320(param_1,param_3);
  iVar2 = FUN_01b30578(param_2,*(undefined4 *)(param_1 + 0x118),param_3,
                       *(undefined4 *)(param_1 + 0x11c));
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be3310("borrow == 0","/aws-lc/crypto/fipsmodule/ec/felem.c",0x37,
                 "aws_lc_0_39_0_ec_felem_neg");
  }
  puVar3 = (uint *)(param_2 + -4);
  iVar4 = *(int *)(param_1 + 0x11c);
  for (iVar2 = 0; iVar2 < iVar4; iVar2 = iVar2 + 1) {
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar3 & uVar1;
  }
  return 0;
}

