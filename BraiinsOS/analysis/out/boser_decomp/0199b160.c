// FUN_0199b160 @ 0199b160 size=180 calls_out=5 calls_in=1
// strings: 

undefined4 FUN_0199b160(uint *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  if (0x7fffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00664730();
  }
  uVar5 = param_1[2];
  if (param_2 == 0) {
    uVar1 = 1;
    uVar4 = uVar5;
  }
  else {
    uVar1 = FUN_012985ec(param_2,1);
    if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,param_2);
    }
    uVar4 = param_1[2];
  }
  if (uVar4 == *param_1) {
    FUN_0199b2b0(param_1);
  }
  uVar3 = uVar4 + 1;
  param_1[2] = uVar3;
  bVar6 = uVar5 < uVar3;
  puVar2 = (uint *)(param_1[1] + uVar4 * 0xc);
  *puVar2 = param_2;
  if (bVar6) {
    uVar3 = uVar5 * 3;
  }
  puVar2[1] = uVar1;
  puVar2[2] = param_2;
  if (!bVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar5,uVar3,&DAT_01d27690);
  }
  return *(undefined4 *)(param_1[1] + uVar3 * 4 + 4);
}

