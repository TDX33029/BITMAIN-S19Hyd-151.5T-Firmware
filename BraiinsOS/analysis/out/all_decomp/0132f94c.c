// FUN_0132f94c @ 0132f94c size=164 calls_out=1 calls_in=0
// strings: explicit panic

void FUN_0132f94c(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  uVar4 = (**(code **)(param_3 + 0x14))(param_2);
  puVar1 = (undefined4 *)uVar4;
  (**(code **)((int)((ulonglong)uVar4 >> 0x20) + 0xc))(&local_20,puVar1);
  if ((local_20 != -0x1a870b5b || iStack_18 != -0x6e1cfbed) ||
      (iStack_1c != 0x2cb86891 || iStack_14 != -0x6126e418)) {
                    /* WARNING: Subroutine does not return */
    FUN_015be724("explicit panic",0xe,&DAT_01890670);
  }
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}

