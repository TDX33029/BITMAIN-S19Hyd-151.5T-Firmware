// FUN_00a2763c @ 00a2763c size=300 calls_out=4 calls_in=2
// strings: 

void FUN_00a2763c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int *piVar4;
  code *pcVar5;
  int *piVar6;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  puVar1 = (undefined4 *)FUN_00715ebc(param_2,param_3);
  piVar6 = (int *)*puVar1;
  puVar3 = (undefined *)puVar1[1];
  thunk_FUN_01be4678();
  pcVar5 = *(code **)(puVar3 + 0x1c);
  (*pcVar5)(&local_28,piVar6);
  if ((local_28 == 0x28267438 && iStack_20 == 0x2709d1e) &&
      (iStack_24 == 0x3654c3bf && iStack_1c == 0x6a3260d0)) {
    piVar4 = (int *)*piVar6;
    puVar3 = (undefined *)piVar6[1];
    thunk_FUN_01be4678(piVar6);
    pcVar5 = *(code **)(puVar3 + 0x1c);
    piVar6 = piVar4;
  }
  (*pcVar5)(&local_28,piVar6);
  uVar2 = 1;
  if ((local_28 == 0x79ac962b && iStack_20 == -0x552bff50) &&
      (iStack_24 == 0x76ddb987 && iStack_1c == -0x29825263)) {
    piVar4 = (int *)thunk_FUN_01be5118(4);
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,4);
    }
    uVar2 = 0;
    *piVar4 = (int)piVar6;
    puVar3 = &DAT_01c10070;
    piVar6 = piVar4;
  }
  *param_1 = uVar2;
  param_1[1] = piVar6;
  param_1[2] = puVar3;
  return;
}

