// FUN_01777d3c @ 01777d3c size=412 calls_out=4 calls_in=2
// strings: 

undefined8 FUN_01777d3c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  byte local_5c [31];
  byte local_3d;
  int local_1c;
  
  local_1c = DAT_018ddaf8;
  FUN_01777c64(param_3,0x20,local_5c,0);
  local_5c[0] = local_5c[0] & 0xf8;
  local_3d = local_3d & 0x7f | 0x40;
  FUN_01729ae0(param_1,local_5c);
  if (param_2 < param_3) {
    if (param_3 < param_2 + 8) goto LAB_01777ed0;
  }
  else if ((param_3 < param_2) && (param_2 < param_3 + 8)) goto LAB_01777ed0;
  puVar5 = param_2 + 8;
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  param_2[3] = param_3[3];
  *param_2 = uVar2;
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  uVar2 = param_3[4];
  uVar3 = param_3[5];
  uVar4 = param_3[6];
  param_2[7] = param_3[7];
  param_2[4] = uVar2;
  param_2[5] = uVar3;
  param_2[6] = uVar4;
  if (puVar5 < param_1) {
    if (param_1 < param_2 + 0x10) {
LAB_01777ed0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0,0x1777ed0);
      (*pcVar1)();
    }
  }
  else if ((param_1 < puVar5) && (puVar5 < param_1 + 8)) goto LAB_01777ed0;
  uVar3 = param_1[1];
  uVar2 = param_1[2];
  uVar4 = param_1[3];
  param_2[8] = *param_1;
  param_2[9] = uVar3;
  param_2[10] = uVar2;
  param_2[0xb] = uVar4;
  uVar2 = param_1[4];
  uVar3 = param_1[6];
  uVar4 = param_1[5];
  param_2[0xf] = param_1[7];
  param_2[0xc] = uVar2;
  param_2[0xe] = uVar3;
  param_2[0xd] = uVar4;
  FUN_0177aaa0(local_5c,0x40);
  if (local_1c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

