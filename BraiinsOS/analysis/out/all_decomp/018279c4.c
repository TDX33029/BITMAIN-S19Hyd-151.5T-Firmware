// FUN_018279c4 @ 018279c4 size=528 calls_out=5 calls_in=1
// strings: 

undefined8 FUN_018279c4(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 auStack_118 [104];
  undefined1 auStack_b0 [108];
  undefined1 auStack_44 [32];
  int local_24;
  
  puVar5 = param_1 + 8;
  local_24 = DAT_018ddaf8;
  if (param_1[0x10] != 0) {
    FUN_01823bf8(auStack_118,puVar5);
    FUN_0182169c(auStack_118,param_1,0x20);
    FUN_0182169c(auStack_118,&DAT_00563a84,1);
    FUN_018239f4(auStack_118,auStack_44);
    FUN_0182169c(auStack_b0,auStack_44,0x20);
    FUN_016dd606(auStack_44,0,0x20);
    FUN_018239f4(auStack_b0,puVar5);
    FUN_01823bf8(auStack_118,puVar5);
    FUN_0182169c(auStack_118,param_1,0x20);
    FUN_018239f4(auStack_118,auStack_44);
    FUN_0182169c(auStack_b0,auStack_44,0x20);
    FUN_016dd606(auStack_44,0,0x20);
    FUN_018239f4(auStack_b0,param_1);
  }
  FUN_01823bf8(auStack_118,puVar5);
  FUN_0182169c(auStack_118,param_1,0x20);
  FUN_018239f4(auStack_118,auStack_44);
  FUN_0182169c(auStack_b0,auStack_44,0x20);
  FUN_016dd606(auStack_44,0,0x20);
  FUN_018239f4(auStack_b0,param_1);
  if (param_2 < param_1) {
    if (param_1 < param_2 + 8) {
LAB_01827b04:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0,0x1827b04);
      (*pcVar1)();
    }
  }
  else if ((param_1 < param_2) && (param_2 < puVar5)) goto LAB_01827b04;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  *param_2 = *param_1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  uVar2 = param_1[4];
  uVar3 = param_1[5];
  uVar4 = param_1[7];
  param_2[6] = param_1[6];
  param_2[7] = uVar4;
  param_2[4] = uVar2;
  param_2[5] = uVar3;
  param_1[0x10] = 1;
  if (local_24 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

