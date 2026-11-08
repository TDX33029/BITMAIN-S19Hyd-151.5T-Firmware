// FUN_00c6f248 @ 00c6f248 size=368 calls_out=5 calls_in=1
// strings: 

void FUN_00c6f248(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 uVar5;
  uint in_fpscr;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_31;
  
  FUN_00cce358(&uStack_48,param_2[0x1b],param_2[0x1c]);
  dVar10 = (double)FUN_01845f30(param_2[4],param_2[5]);
  dVar8 = (double)VectorUnsignedToFloat(param_2[6],(byte)(in_fpscr >> 0x16) & 3);
  dVar10 = dVar8 / 1000000000.0 + dVar10;
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  if (dVar10 == 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_0034ad94,0x1f,&uStack_31,&DAT_0186ab28,&DAT_0186aae8);
  }
  uVar2 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[1];
  uVar6 = FUN_0184590c(0,param_2[0xc],0,0);
  dVar10 = (double)CONCAT44(extraout_s1,uVar6) / dVar10;
  uVar4 = param_2[0x25];
  uVar1 = *(undefined1 *)(param_2 + 0x17);
  local_50 = (undefined4)uVar9;
  uStack_4c = (undefined4)((ulonglong)uVar9 >> 0x20);
  param_1[0xc] = local_50;
  param_1[0xd] = uStack_4c;
  param_1[0xe] = uStack_48;
  param_1[0xf] = uStack_44;
  param_1[0x10] = uStack_40;
  param_1[0x11] = uStack_3c;
  *param_1 = 3;
  param_1[1] = 0;
  param_1[7] = uVar5;
  uVar9 = FUN_01845bac(SUB84(dVar10,0));
  uVar6 = extraout_r2;
  uVar5 = extraout_r3;
  if (dVar10 < 0.0) {
    uVar5 = 0;
    uVar6 = 0;
    uVar9 = 0;
  }
  if (3.4028236692093843e+38 < dVar10) {
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    uVar9 = 0xffffffffffffffff;
  }
  uVar7 = FUN_0184590c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar6,uVar5);
  param_1[10] = uVar4;
  param_1[8] = uVar3;
  *(undefined1 *)(param_1 + 0xb) = uVar1;
  param_1[4] = uVar6;
  param_1[5] = uVar5;
  param_1[6] = uVar2;
  *(double *)(param_1 + 2) = (double)CONCAT44(extraout_s1_00,uVar7) * 1e-09;
  return;
}

