// FUN_00f2fd54 @ 00f2fd54 size=196 calls_out=1 calls_in=0
// strings: 

void FUN_00f2fd54(undefined4 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined4 local_28;
  char local_21;
  char *local_20;
  code *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  
  local_18 = (undefined1 *)&local_28;
  pcVar1 = (char *)*param_1;
  if (*pcVar1 == '\0') {
    local_28 = *(undefined4 *)(pcVar1 + 4);
    local_21 = pcVar1[1];
    puVar2 = &DAT_0057e431;
  }
  else {
    if (*pcVar1 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00f2fd94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_2[1] + 0xc))(*param_2,&UNK_0033db3a,0x2b);
      return;
    }
    local_28 = *(undefined4 *)(pcVar1 + 4);
    local_21 = pcVar1[1];
    puVar2 = &DAT_00596642;
  }
  local_20 = &local_21;
  local_1c = FUN_00fac0c8;
  local_14 = &LAB_00fac484;
  FUN_00fa948c(*param_2,param_2[1],puVar2,&local_20);
  return;
}

