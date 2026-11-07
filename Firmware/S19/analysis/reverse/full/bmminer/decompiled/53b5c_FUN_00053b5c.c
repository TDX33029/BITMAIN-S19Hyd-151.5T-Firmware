// FUN_00053b5c @ 00053b5c  size=388  callers=2
// program: bmminer


uint FUN_00053b5c(undefined4 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  
  puVar5 = (undefined4 *)((int)param_1 + param_1[4]);
  if (*(char *)(puVar5 + 2) == '\0') {
    iVar3 = (*(code *)*param_1)(param_1[1]);
    if (iVar3 == -1) {
      param_1[5] = 0xffffffff;
      return 0xffffffff;
    }
    param_1[4] = 0;
    *(char *)(param_1 + 2) = (char)iVar3;
    if (iVar3 - 0x80U < 0x80) {
      uVar6 = FUN_000555bc();
      if (uVar6 != 0) {
        if (uVar6 < 2) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("count >= 2","load.c",0xbd,"stream_get");
        }
        puVar7 = (undefined1 *)((int)param_1 + 9);
        do {
          uVar1 = (*(code *)*param_1)(param_1[1]);
          puVar8 = puVar7 + 1;
          *puVar7 = uVar1;
          puVar7 = puVar8;
        } while ((undefined1 *)((int)(param_1 + 2) + uVar6) != puVar8);
        iVar2 = FUN_00055628(param_1 + 2,uVar6,0);
        if (iVar2 != 0) {
          *(undefined1 *)((int)param_1 + uVar6 + 8) = 0;
          iVar3 = param_1[4] + 1;
          puVar5 = (undefined4 *)((int)param_1 + param_1[4]);
          goto LAB_00053bc4;
        }
      }
      param_1[5] = 0xfffffffe;
      FUN_00053870(param_2,param_1,5,"unable to decode byte 0x%x",iVar3);
      return 0xfffffffe;
    }
    iVar3 = 1;
    *(undefined1 *)((int)param_1 + 9) = 0;
    puVar5 = param_1;
  }
  else {
    iVar3 = param_1[4] + 1;
  }
LAB_00053bc4:
  param_1[4] = iVar3;
  uVar6 = (uint)*(byte *)(puVar5 + 2);
  param_1[9] = param_1[9] + 1;
  if (uVar6 == 10) {
    uVar4 = param_1[7];
    param_1[7] = 0;
    param_1[6] = param_1[6] + 1;
    param_1[8] = uVar4;
    return 10;
  }
  iVar3 = FUN_000555bc(uVar6);
  if (iVar3 != 0) {
    param_1[7] = param_1[7] + 1;
  }
  return uVar6;
}

