// FUN_01b314bc @ 01b314bc size=280 calls_out=3 calls_in=1
// strings: bn_sub_part_words | /aws-lc/crypto/fipsmodule/bn/mul.c | cl >= 0

uint FUN_01b314bc(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  undefined4 extraout_r2;
  uint uVar7;
  int extraout_r3;
  int unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r10;
  int iVar8;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr6;
  undefined4 in_cr12;
  undefined8 uVar9;
  
  if (param_4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be3310("cl >= 0","/aws-lc/crypto/fipsmodule/bn/mul.c",0x4f,"bn_sub_part_words");
  }
  uVar1 = FUN_01b30578();
  if (param_5 == 0) {
    return uVar1;
  }
  iVar8 = param_1 + param_4 * 4;
  if (param_5 < 0) {
    iVar4 = 0;
    piVar6 = (int *)(param_3 + param_4 * 4);
    while( true ) {
      if (-param_5 <= iVar4) {
        return uVar1;
      }
      if (1 < uVar1) break;
      uVar7 = -*piVar6;
      uVar2 = (uint)(*piVar6 != 0);
      *(uint *)(iVar8 + iVar4 * 4) = uVar7 - uVar1;
      if (uVar7 < uVar1) {
        uVar2 = 1;
      }
      iVar4 = iVar4 + 1;
      uVar1 = uVar2;
      piVar6 = piVar6 + 1;
    }
  }
  else {
    iVar4 = 0;
    puVar5 = (uint *)(param_2 + param_4 * 4);
    while (uVar1 < 2) {
      uVar7 = *puVar5;
      *(uint *)(iVar8 + iVar4 * 4) = uVar7 - uVar1;
      iVar4 = iVar4 + 1;
      uVar1 = (uint)(uVar7 < uVar1);
      puVar5 = puVar5 + 1;
      if (param_5 == iVar4) {
        return uVar1;
      }
    }
  }
  uVar9 = FUN_01b209c0();
  uVar3 = (undefined4)uVar9;
  coprocessor_moveto(0xf,5,5,param_1,in_cr0,in_cr1);
  coprocessor_function2(3,10,3,in_cr12,in_cr6,in_cr4);
  coprocessor_moveto(1,5,7,unaff_r10,in_cr6,in_cr3);
  iVar8 = FUN_01b314bc(unaff_r5);
  FUN_01b314bc(uVar3,extraout_r2,(int)((ulonglong)uVar9 >> 0x20),extraout_r3,-unaff_r4);
  if (unaff_r4 < 0) {
    unaff_r4 = -unaff_r4;
  }
  FUN_01b2b82c(uVar3,-iVar8,uVar3,unaff_r5,unaff_r4 + extraout_r3);
  return -iVar8;
}

