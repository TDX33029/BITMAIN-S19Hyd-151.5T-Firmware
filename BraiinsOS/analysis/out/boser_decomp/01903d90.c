// FUN_01903d90 @ 01903d90 size=144 calls_out=2 calls_in=0
// strings: 

void FUN_01903d90(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uStack_21;
  
  if (param_5 != 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&uStack_21,&DAT_01d24db4,&DAT_01d24d18);
  }
  FUN_01bed4e2(param_1 + 10,param_4,0xc);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  param_1[1] = *param_3;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  uVar1 = param_3[5];
  uVar2 = param_3[6];
  uVar3 = param_3[7];
  uVar4 = param_3[8];
  param_1[5] = param_3[4];
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  param_1[8] = uVar3;
  param_1[9] = uVar4;
  *param_1 = 2;
  return;
}

