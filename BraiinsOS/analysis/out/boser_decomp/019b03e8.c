// FUN_019b03e8 @ 019b03e8 size=324 calls_out=8 calls_in=26
// strings: 

int * FUN_019b03e8(int param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  int *piVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined4 local_34 [3];
  undefined1 uStack_25;
  
  if (param_1 != 0) {
LAB_019b04e4:
    if (param_1 == 1) {
      FUN_0197a828(local_34,&uStack_25,&DAT_005269a4,0xf3);
      FUN_019b6d48(local_34);
                    /* WARNING: Subroutine does not return */
      FUN_0197a954();
    }
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_00526946,0xbd,&DAT_01d27d38);
  }
  uVar13 = thunk_FUN_01bee35a(0,0x238);
  puVar4 = (uint *)((int)uVar13 + (int)((ulonglong)uVar13 >> 0x20));
  uVar10 = *puVar4;
  uVar11 = puVar4[1];
  puVar12 = (undefined4 *)((int)uVar13 + 0x240);
  *puVar12 = 1;
  if (uVar10 == 0 && uVar11 == 0) {
    ClearExclusiveLocal();
    uVar8 = DAT_01d51ab8;
    uVar9 = DAT_01d51abc;
    do {
      uVar3 = DAT_01d51abc;
      uVar2 = DAT_01d51ab8;
      uVar10 = uVar8 + 1;
      uVar11 = uVar9 + (0xfffffffe < uVar8);
      if (CARRY4(uVar9,(uint)(0xfffffffe < uVar8))) {
        param_1 = FUN_019a7340();
        goto LAB_019b04e4;
      }
      if (DAT_01d51ab8 == uVar8 && DAT_01d51abc == uVar9) {
        bVar1 = (bool)hasExclusiveAccess(0x1d51ab8);
        if (bVar1) {
          DAT_01d51ab8 = uVar10;
          DAT_01d51abc = uVar11;
        }
        bVar7 = 0;
        if (bVar1) {
          bVar7 = 0xff;
        }
      }
      else {
        bVar7 = 0;
        ClearExclusiveLocal();
      }
      uVar8 = uVar2;
      uVar9 = uVar3;
    } while (!(bool)(bVar7 & 1));
    *puVar4 = uVar10;
    puVar4[1] = uVar11;
  }
  local_34[0] = 0x80000000;
  piVar5 = (int *)FUN_019b057c(uVar10,uVar11,local_34);
  FUN_019a2cbc();
  do {
    piVar6 = (int *)*piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = (int)piVar6 + 1;
  if ((int)piVar6 < 0) {
    software_udf(0xfdee,0x19b04dc);
    return piVar6;
  }
  *puVar12 = piVar5 + 2;
  return piVar5;
}

