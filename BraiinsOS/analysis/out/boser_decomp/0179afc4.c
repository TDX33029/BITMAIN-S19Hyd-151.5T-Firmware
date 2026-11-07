// FUN_0179afc4 @ 0179afc4 size=64 calls_out=0 calls_in=0
// strings: 

void FUN_0179afc4(char *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  puVar2 = &UNK_0050be90;
  if (*param_1 != '\0') {
    puVar2 = &DAT_0056eb34;
  }
  uVar1 = 2;
  if (*param_1 != '\0') {
    uVar1 = 4;
  }
                    /* WARNING: Could not recover jumptable at 0x0179b000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))(*param_2,puVar2,uVar1);
  return;
}

